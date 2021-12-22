
/*
FILENAME: Twoquark.cpp
AUTHOR:   Nico Santowsky
EMAIL:    physics@nsanto.de
DATE:     2021-12-21
LICENSE:  Apache License 2.0
*/

#include "./include/Twoquark.hpp"
#include "../../../routines/eigenvalues/src/eigenvalues.hpp"
#include "../../../routines/interpolation/src/interpolation.hpp"

typedef std::complex<double> cdouble;

using std::cout;
using std::endl;
using std::cerr;

using namespace dysonUtils;

Twoquark::Twoquark()
{
    mass_                   =   0.;
    n_dirac                 =   -1;
    n_dirac_actual          =   -1;
    n_radial                =   20;
    n_angular_z             =   8;
    n_angular_y             =   8;
    lower_bound_radial      =   1.e-2;
    upper_bound_radial      =   1.e+2;

    identity[0]             =   "m";
    identity[1]             =   "p";

    pauliVillars            =   1.e+12;
    lambdaMarisTandy        =   0.71;
    etaMarisTandy           =   1.8;
    globalMT                =   1.0;
}


Twoquark::~Twoquark()
{
    cout << "Twoquark state destroyed." << endl;
}


void Twoquark::setNumerics(std::string identifier, double value) {

    if( isInitialized ) {
        cerr << "error in function " << __func__
             << " :: state already initialized. Numerics are unchangeable!" << endl;
        return;
    }

    if( identifier == "n_radial" )                  n_radial            = static_cast<size_t> (value);
    else if( identifier == "n_angular_z" )          n_angular_z         = static_cast<size_t> (value);
    else if( identifier == "n_angular_y" )          n_angular_y         = static_cast<size_t> (value);
    else if( identifier == "lower_bound_radial" )   lower_bound_radial  = value;
    else if( identifier == "upper_bound_radial" )   upper_bound_radial  = value;
    else {
        cerr << "error in function " << __func__ << " :: invalid identifier!" << endl;
        return;
    }
}


double Twoquark::getNumerics(std::string identifier) {

    if( identifier == "n_radial" )                  return static_cast<double> (n_radial);
    else if( identifier == "n_angular_z" )          return static_cast<double> (n_angular_z);
    else if( identifier == "n_angular_y" )          return static_cast<double> (n_angular_y);
    else if( identifier == "lower_bound_radial" )   return lower_bound_radial;
    else if( identifier == "upper_bound_radial" )   return upper_bound_radial;
    else {
        cerr << "error in function " << __func__ << " :: invalid identifier!" << endl;
        return 0.;
    }
}


void Twoquark::setNumberOfDiracStructures(unsigned int value) {

    if( isInitialized ) {
        cerr << "error in function " << __func__
             << " :: state already initialized. Number of Dirac structures is unchangeable!" << endl;
        return;
    }

    n_dirac_actual = value;
}


void Twoquark::setInteraction(std::string identifier, double value) {
    if( isInitialized ) {
        cerr << "error in function " << __func__
             << " :: state already initialized. Interaction is unchangeable!" << endl;
        return;
    }

    if( identifier == "eta" )                   etaMarisTandy       = value;
    else if( identifier == "lambda" )           lambdaMarisTandy    = value;
    else if( identifier == "pauli_villars" )    pauliVillars        = value;
    else if( identifier == "global" )           globalMT            = value;
    else {
        cout << "error in function " << __func__ << " :: invalid identifier \""
             << identifier << "\"!" << endl;
        return;
    }

}


void Twoquark::setRoutingParameter(double value) {
    if( value < 0 || value > 1 ) {
        cerr << "error in function " << __func__ << " :: invalid value. has to be [0, 1]." << endl;
        return;
    }
    eta = value;
}

// initialize two-quark state with type (e.g. "m" for meson), quantum numbers (e.g. "p" for pseudoscalar) and quark
// masses mq_1, mq_2.
// The quarks get calculated directly.

void Twoquark::init(string type, string quantum_numbers, double mq_1, double mq_2)
{
    if(isInitialized) {
        cerr << "error in function " << __func__ << " :: state already initialized!" << endl;
        return;
    }

    precalcGrids();

    if(quantum_numbers == "p" || quantum_numbers == "s") {
        n_dirac = 4;
        cont.resize(n_dirac + 1);
    }
    if(quantum_numbers == "v" || quantum_numbers == "a") {
        n_dirac = 8;
        cont.resize(n_dirac + 1);
    }

    for(unsigned int i=0; i<n_dirac; i++) {
        cont[i].resize(n_radial * n_angular_z, 1.);
    }

    identity[0]             = std::move(type);
    identity[1]             = std::move(quantum_numbers);

    quark1.setInteraction("eta", etaMarisTandy);
    quark1.setInteraction("lambda", lambdaMarisTandy);
    quark1.setInteraction("global", globalMT);
    quark1.setMass( mq_1 );

    vec2<double> quark_cutoffs(2);
    quark_cutoffs[0].push_back(0.0038); quark_cutoffs[1].push_back(0.21);
    quark_cutoffs[0].push_back(0.0200); quark_cutoffs[1].push_back(0.31);
    quark_cutoffs[0].push_back(0.0500); quark_cutoffs[1].push_back(0.39);
    quark_cutoffs[0].push_back(0.0855); quark_cutoffs[1].push_back(0.49);
    quark_cutoffs[0].push_back(0.1500); quark_cutoffs[1].push_back(0.69);
    quark_cutoffs[0].push_back(0.2100); quark_cutoffs[1].push_back(0.85);
    quark_cutoffs[0].push_back(0.3500); quark_cutoffs[1].push_back(1.32);
    quark_cutoffs[0].push_back(0.5000); quark_cutoffs[1].push_back(1.90);
    quark_cutoffs[0].push_back(0.6500); quark_cutoffs[1].push_back(2.45);
    quark_cutoffs[0].push_back(0.7950); quark_cutoffs[1].push_back(3.10);
    quark_cutoffs[0].push_back(0.8500); quark_cutoffs[1].push_back(3.20);

    quark1.generateReal();
    quark1.generateShells(numerics::interpolation::linear_1d(
            quark_cutoffs[0], quark_cutoffs[1], mq_1), 20);

    if(mq_1 == mq_2) quark2 = quark1;
    else
    {
        quark2.setInteraction("eta", etaMarisTandy);
        quark2.setInteraction("lambda", lambdaMarisTandy);
        quark2.setInteraction("global", globalMT);
        quark2.setMass(mq_2);
        quark2.generateReal();
        quark2.generateShells(numerics::interpolation::linear_1d(quark_cutoffs[0], quark_cutoffs[1], mq_2), 20);
    }

    isInitialized = true;
}

// calculates the eigenvalue of the BSE for a given total momentum P_P
cdouble Twoquark::getEigenvalue(cdouble P_P) {
    // identity check
    if (identity[0] == "m"){
        enableDiquark = 0;
        if (identity[1] == "p" || identity[1] == "s"){
            n_dirac = 4;
        }
        else if (identity[1] == "v" || identity[1] == "a"){
            n_dirac = 8;
        }
    }
    else if (identity[0] == "d"){
        enableDiquark = 1;
        if (identity[1] == "s" || identity[1] == "p"){
            n_dirac = 4;
        }
        else if (identity[1] == "a" || identity[1] == "v"){
            n_dirac = 8;
        }
    } else {
        cerr << "error :: invalid identity. setting it to default : mp [meson,pseudoscalar]" << endl;
        identity[0]     =   "m";
        identity[1]     =   "p";
        enableDiquark   =   0;
        n_dirac         =   4;
    }

    // check for manually reduced dirac basis
    if(n_dirac_actual > 0 && n_dirac_actual < n_dirac) n_dirac = n_dirac_actual;

    // build kernel (most time-consuming function)
    buildK(P_P);

    // determine the eigenvalue via the power method
    numerics::eigenvalues::PowerMethod<cdouble> bse(kernel);
    bse.calculate(0.0001);      // the argument 0.0001 is the (inverse) precision of the power method

    for(unsigned int id=0; id<n_dirac; id++) {
        for(unsigned int izp=0; izp<n_angular_z; izp++) {
            for(unsigned int ip=0; ip<n_radial; ip++) {
                cont[id][ip + izp*n_radial] = bse.solution[ip + izp*n_radial + id*n_radial*n_angular_z];
            }
        }
    }

    if(enableEigen) // we could also calculate the sub-leading eigenvalues via the Eigen lib
    {
        Eigen::MatrixXcd K_EigenMatrix;

        K_EigenMatrix.resize(sqrt(kernel.size()), sqrt(kernel.size()));

        for(unsigned int i=0; i<kernel.size(); ++i) K_EigenMatrix(i) = kernel[i];

        K_EigenMatrix.transposeInPlace();

        Eigen::ComplexEigenSolver<Eigen::MatrixXcd> BSE_solution(K_EigenMatrix, true);

        eigenvalues.clear();

        for(int i=0; i < BSE_solution.eigenvalues().size(); ++i)
        {
            eigenvalues.push_back(BSE_solution.eigenvalues()(i));
        }
        sort_cmplx(eigenvalues);
    }

    kernel.clear();

    // set flag that we got an amplitude
    isthereAmplitude   =   true;

    return bse.eigenvalue;
}

// a function that looks for the mass of the state dynamically.
// first argument:  start guess for Newton's method
// second argument: true for verbosity, default is false (non-verbose)
void    Twoquark::getMass(double guess_mass, bool output_enabled) {

    cdouble current_lambda, lambda_minus, lambda_plus,
            current_P_P = -std::pow(guess_mass, 2),
            epsilon     = 1.e-6;
    auto    startTime   = time(nullptr);

    if(output_enabled)
    {
        cout    << "\n#################################\n"
                << std::scientific << "mass" << "\t\t\t" << "eigenvalue\n"
                << "#################################" << endl;
    }

    while ( true )
    {
        lambda_minus    = getEigenvalue(current_P_P - epsilon / 2.);
        lambda_plus     = getEigenvalue(current_P_P + epsilon / 2.);
        current_lambda  = 0.5*(lambda_plus + lambda_minus);

        if(output_enabled) cout << std::real(sqrt(-current_P_P)) << "\t" << current_lambda << endl;

        if (std::abs(current_lambda - 1.) < 1.e-4) break;       // break if convergence is reached

        cdouble diffQuot    = (lambda_plus - lambda_minus) / epsilon;

        current_P_P         = current_P_P - (current_lambda - 1.) / diffQuot;

        if(time(nullptr) - startTime >= 300)
        {
            cerr << "error in " << __func__ << " :: timeout, mass iteration failed." << endl;
            current_P_P = 0.;
            break;
        }
    }

    cout << endl;

    isThereMass = true;

    mass_  =   std::abs(std::sqrt(current_P_P));
}

// access mass
double  Twoquark::mass() {
    if( !isThereMass ) {
        cerr << "error in function " << __func__ << " :: there is no mass yet. returning zero!" << endl;
        return 0.;
    }
    return mass_;
}

// print amplitude
void    Twoquark::printAmplitude()
{
    if(!isthereAmplitude){
        cerr << "error in " << __func__ << " :: there is no amplitude to be printed.\n" << endl;
        return;
    }
    else if(!isthereNormalization){
        cerr << "warning in " << __func__ << " :: amplitude is not normalized. Printing anyway.\n" << endl;
    }

    std::ofstream write;
    write.open("bsa.txt");

    for(unsigned int ip=0; ip<n_radial; ++ip){
        double p_p  =   loop.grid_radial[ip];

        for(unsigned int iz=0; iz<n_angular_z; ++iz){
            double z    =   loop.grid_z[iz];

            write   << std::scientific
                    << p_p << "\t" << z;

            for (unsigned int id=0; id<n_dirac; id++){
                write << "\t" << std::real(cont[id][ip+iz*n_radial]) << "\t" << std::imag(cont[id][ip+iz*n_radial]);
            }

            write << "\n";
        }
        write << endl;
    }
    write.close();
}

// normalize dressing functions
void    Twoquark::normalize()
{
    cdouble norm_const,diffQuot,P_P;
    double  epsilon =   1.e-8;
    P_P             =   -mass_*mass_;
    diffQuot        =   (norm_loop(P_P + epsilon / 2., P_P) - norm_loop(P_P - epsilon / 2., P_P)) / epsilon;
    norm_const      =   std::sqrt(diffQuot);

    for (unsigned int id=0; id<n_dirac; id++) {
        for (unsigned int iq=0; iq<n_radial; iq++) {
            for (unsigned int iz=0; iz<n_angular_z; iz++) {
                cont[id][iq+n_radial*iz]   =   cont[id][iq+n_radial*iz]/norm_const;
            }
        }
    }

    isthereNormalization   =   true;
}

// normalization loop (J=0 and J=1 transverse)
cdouble Twoquark::norm_loop(cdouble P_P, cdouble K_K) {
    vec<cdouble> K_norm(n_dirac*n_dirac*n_radial*n_angular_z);

    cdouble
            g         = mass_*mass_/(K_K+2.*mass_*mass_),
            h         = -I*sqrt_(K_K/(K_K+2.*mass_*mass_));

    cdouble
            P_K       = sqrt_(K_K)*sqrt_(P_P),
            prefactor;

    if(identity[1] == "p" || identity[1] == "s")
    {
        prefactor   = -3./(2.*M_PI*M_PI*M_PI)*(1. - enableDiquark * 0.5);
    }
    else if(identity[1] == "v" || identity[1] == "a")
    {
        prefactor   = 1./(2.*M_PI*M_PI*M_PI)*(1. - enableDiquark * 0.5);
    }

    #pragma omp parallel for
    for (unsigned int iq=0; iq<n_radial; iq++)
    {
        cdouble
                q_q = loop.grid_radial[iq],
                qw  = loop.weights_radial[iq],
                qj  = q_q/2.;

        for (unsigned int iz=0; iz<n_angular_z; iz++)
        {
            cdouble
                    z   = loop.grid_z[iz],
                    zw  = loop.weights_z[iz],
                    zj  = std::sqrt(1.-z*z);
            cdouble
                    P_q     =   sqrt_(P_P)*std::sqrt(q_q)*z,
                    q_K     =   sqrt_(K_K)*std::sqrt(q_q)*z,
                    qm_qm   =   q_q + (eta-1.)*(eta-1.)*P_P + 2.*(eta-1.)*P_q,
                    qp_qp   =   q_q + eta*eta*P_P + 2.*eta*P_q,
                    wj      =   qw*zw*qj*zj,
                    svp, ssp, svm, ssm;

            if(enableShellQuark == 0)
            {
                svp       = quark1.naiveIteration("sv", qp_qp);
                ssp       = quark1.naiveIteration("ss", qp_qp);
                svm       = quark2.naiveIteration("sv", qm_qm);
                ssm       = quark2.naiveIteration("ss", qm_qm);
            }
            else if (enableShellQuark == 1)
            {
                svp       = quark1.interpolateShell("sv",qp_qp);
                ssp       = quark1.interpolateShell("ss",qp_qp);
                svm       = quark2.interpolateShell("sv",qm_qm);
                ssm       = quark2.interpolateShell("ss",qm_qm);
            }

            if(identity[1] == "p" || identity[1] == "s") {
                #include "./setups/norm_ps_sc.c"
            }
            else if(identity[1] == "v" || identity[1] == "a") {
                #include "./setups/norm_vc_ax.c"
            }

        }
    }

    cdouble norm_sum = 0., offshell_factor_1 = 1., offshell_factor_2 = 1.;

    for(unsigned int id1=0; id1<n_dirac; id1++) {
        for(unsigned int id2=0; id2<n_dirac; id2++) {
            for(unsigned int iq=0; iq<n_radial; iq++) {
                for(unsigned int iz=0; iz<n_angular_z; iz++) {
                    if(id1 > 0) offshell_factor_1 = g * h;
                    else        offshell_factor_1 = 1.;
                    if(id2 > 0) offshell_factor_2 = g * h;
                    else        offshell_factor_2 = 1.;

                    norm_sum += K_norm[SI_K_norm(id1, id2, iq, iz)] * cont[id1][iq+iz*n_radial] * offshell_factor_1 *
                            cont[id2][iq + iz * n_radial] * offshell_factor_2;
                }
            }
        }
    }

    K_norm.clear();

    return prefactor*norm_sum;
}

// normalization loop for longitudinal part (J=1) which is only relevant for the calculation of propagators
// (not for the actual normalization)
cdouble Twoquark::norm_loop_L(cdouble P_P, cdouble K_K) {
    vec<cdouble>     K_norm(8*8*n_radial*n_angular_z);

    cdouble g           = mass_*mass_/(K_K+2.*mass_*mass_),
            h           = -I*std::sqrt(K_K/(K_K+2.*mass_*mass_)),
            K_P         = std::sqrt(K_K)*std::sqrt(P_P),
            prefactor   = 3./(2.*M_PI*M_PI*M_PI)*(1. - enableDiquark * 0.5);

    for (unsigned int iq=0; iq<n_radial; ++iq)
    {
        cdouble q_q = loop.grid_radial[iq],
                qw  = loop.weights_radial[iq],
                qj  = q_q*q_q/2.;

    #pragma omp parallel for
        for (unsigned int iz=0; iz<n_angular_z; ++iz)
        {
            cdouble
                    z       =   loop.grid_z[iz],
                    zw      =   loop.weights_z[iz],
                    zj      =   std::sqrt(1.-z*z),
                    P_q     =   std::sqrt(P_P)*std::sqrt(q_q)*z,
                    K_q     =   std::sqrt(K_K)*std::sqrt(q_q)*z,
                    qm_qm   =   q_q + P_P/4. - P_q,
                    qp_qp   =   q_q + P_P/4. + P_q,
                    wj      =   qw*qj*zw*zj,
                    svp, ssp, svm, ssm;

            if(enableShellQuark == 0)
            {
                svp       = quark1.naiveIteration("sv", qp_qp);
                ssp       = quark1.naiveIteration("ss", qp_qp);
                svm       = quark2.naiveIteration("sv", qm_qm);
                ssm       = quark2.naiveIteration("ss", qm_qm);
            } else if (enableShellQuark == 1)
            {
                svp       = quark1.interpolateShell("sv", qp_qp);
                ssp       = quark1.interpolateShell("ss", qp_qp);
                svm       = quark2.interpolateShell("sv", qm_qm);
                ssm       = quark2.interpolateShell("ss", qm_qm);
            }

            // The following are the kernel expressions which were calculated in Mathematica (what a mess...)
            // A FORM export would be much more sophisticated, but I did not do that for the longitudinal part (as I
            // didn't require it so much, yet)

            K_norm[SI_K_norm(0,0,iq,iz)]    = wj*    (-4.*ssm*ssp-1.*svm*svp*P_P+(8.*svm*svp*std::pow(P_q,2))/P_P-4.*svm*svp*q_q);
            K_norm[SI_K_norm(0,1,iq,iz)]    = wj*    (-2.*ssp*svm*K_P+2.*ssm*svp*K_P+4.*ssp*svm*K_q-4.*ssm*svp*K_q+(8.*ssm*svp*K_P*P_q)/P_P);
            K_norm[SI_K_norm(0,2,iq,iz)]    = wj*    ((4.*ssp*svm*K_q*std::pow(P_q,2))/P_P-(4.*ssm*svp*K_q*std::pow(P_q,2))/P_P-4.*ssp*svm*K_q*q_q+4.*ssm*svp*K_q*q_q);
            K_norm[SI_K_norm(0,3,iq,iz)]    = wj*    (-2.*svm*svp*K_P*P_q-(8.*ssm*ssp*K_P*P_q)/P_P+(8.*svm*svp*K_P*P_q*q_q)/P_P);
            K_norm[SI_K_norm(0,4,iq,iz)]    = wj*    (-2.*ssp*svm*P_q+2.*ssm*svp*P_q+(4.*ssp*svm*std::pow(P_q,2))/P_P+(4.*ssm*svp*std::pow(P_q,2))/P_P);
            K_norm[SI_K_norm(0,5,iq,iz)]    = wj*    (-1.*svm*svp*K_P*K_q*P_q-(4.*ssm*ssp*K_P*K_q*P_q)/P_P+(8.*svm*svp*std::pow(K_q,2)*std::pow(P_q,2))/P_P-(4.*svm*svp*K_P*K_q*P_q*q_q)/P_P);
            K_norm[SI_K_norm(0,6,iq,iz)]    = wj*    (svm*svp*std::pow(P_q,2)+(4.*ssm*ssp*std::pow(P_q,2))/P_P-(4.*svm*svp*std::pow(P_q,2)*q_q)/P_P);
            K_norm[SI_K_norm(0,7,iq,iz)]    = wj*    ((-8.*ssp*svm*K_q*std::pow(P_q,2))/P_P+(8.*ssm*svp*K_q*std::pow(P_q,2))/P_P+(8.*ssp*svm*K_P*P_q*q_q)/P_P-(8.*ssm*svp*K_P*P_q*q_q)/P_P);
            K_norm[SI_K_norm(1,0,iq,iz)]    = wj*    (2.*ssp*svm*K_P-2.*ssm*svp*K_P+4.*ssp*svm*K_q-4.*ssm*svp*K_q-(8.*ssp*svm*K_P*P_q)/P_P);
            K_norm[SI_K_norm(1,1,iq,iz)]    = wj*    (4.*ssm*ssp*K_K+8.*svm*svp*std::pow(K_q,2)-(8.*ssm*ssp*std::pow(K_P,2))/P_P-1.*svm*svp*K_K*P_P-(16.*svm*svp*K_P*K_q*P_q)/P_P+(8.*svm*svp*K_K*std::pow(P_q,2))/P_P-4.*svm*svp*K_K*q_q+(8.*svm*svp*std::pow(K_P,2)*q_q)/P_P);
            K_norm[SI_K_norm(1,2,iq,iz)]    = wj*    (-4.*ssm*ssp*std::pow(K_q,2)+svm*svp*std::pow(K_q,2)*P_P-1.*svm*svp*K_P*K_q*P_q+(4.*ssm*ssp*K_P*K_q*P_q)/P_P+(4.*svm*svp*K_P*K_q*std::pow(P_q,2))/P_P-4.*svm*svp*K_P*K_q*q_q-4.*svm*svp*std::pow(K_q,2)*q_q+(4.*svm*svp*K_P*K_q*P_q*q_q)/P_P);
            K_norm[SI_K_norm(1,3,iq,iz)]    = wj*    (4.*ssp*svm*K_P*K_q+4.*ssm*svp*K_P*K_q-8.*ssp*svm*std::pow(K_q,2)-8.*ssm*svp*std::pow(K_q,2)-(8.*ssm*svp*std::pow(K_P,2)*P_q)/P_P+(16.*ssp*svm*K_P*K_q*P_q)/P_P+(16.*ssm*svp*K_P*K_q*P_q)/P_P-(8.*ssp*svm*K_K*std::pow(P_q,2))/P_P-(8.*ssm*svp*K_K*std::pow(P_q,2))/P_P+8.*ssp*svm*K_K*q_q+8.*ssm*svp*K_K*q_q-(16.*ssp*svm*std::pow(K_P,2)*q_q)/P_P-(16.*ssm*svp*std::pow(K_P,2)*q_q)/P_P);
            K_norm[SI_K_norm(1,4,iq,iz)]    = wj*    (-1.*svm*svp*K_P*P_q-4.*svm*svp*K_q*P_q-(4.*ssm*ssp*K_P*P_q)/P_P+(4.*svm*svp*K_P*std::pow(P_q,2))/P_P+(4.*svm*svp*K_P*P_q*q_q)/P_P);
            K_norm[SI_K_norm(1,5,iq,iz)]    = wj*    (2.*ssp*svm*K_K*K_q*P_q+2.*ssm*svp*K_K*K_q*P_q-(4.*ssm*svp*std::pow(K_P,2)*K_q*P_q)/P_P-(8.*ssm*svp*K_P*std::pow(K_q,2)*P_q)/P_P-(4.*ssp*svm*K_K*K_q*std::pow(P_q,2))/P_P+(4.*ssm*svp*K_K*K_q*std::pow(P_q,2))/P_P);
            K_norm[SI_K_norm(1,6,iq,iz)]    = wj*    (-2.*ssp*svm*K_q*P_q-2.*ssm*svp*K_q*P_q+(4.*ssm*svp*K_P*std::pow(P_q,2))/P_P+(4.*ssp*svm*K_P*P_q*q_q)/P_P+(4.*ssm*svp*K_P*P_q*q_q)/P_P);
            K_norm[SI_K_norm(1,7,iq,iz)]    = wj*    (-2.*svm*svp*K_P*K_q*P_q+(8.*ssm*ssp*K_P*K_q*P_q)/P_P+2.*svm*svp*K_K*std::pow(P_q,2)-(8.*ssm*ssp*K_K*std::pow(P_q,2))/P_P-(8.*svm*svp*K_P*K_q*std::pow(P_q,2))/P_P+(8.*svm*svp*std::pow(K_P,2)*P_q*q_q)/P_P+(8.*svm*svp*K_P*K_q*P_q*q_q)/P_P-(8.*svm*svp*K_K*std::pow(P_q,2)*q_q)/P_P);
            K_norm[SI_K_norm(2,0,iq,iz)]    = wj*    ((4.*ssp*svm*K_q*std::pow(P_q,2))/P_P-(4.*ssm*svp*K_q*std::pow(P_q,2))/P_P-4.*ssp*svm*K_q*q_q+4.*ssm*svp*K_q*q_q);
            K_norm[SI_K_norm(2,1,iq,iz)]    = wj*    (-4.*ssm*ssp*std::pow(K_q,2)+svm*svp*std::pow(K_q,2)*P_P-1.*svm*svp*K_P*K_q*P_q+(4.*ssm*ssp*K_P*K_q*P_q)/P_P-(4.*svm*svp*K_P*K_q*std::pow(P_q,2))/P_P+4.*svm*svp*K_P*K_q*q_q-4.*svm*svp*std::pow(K_q,2)*q_q+(4.*svm*svp*K_P*K_q*P_q*q_q)/P_P);
            K_norm[SI_K_norm(2,2,iq,iz)]    = wj*    (svm*svp*std::pow(K_q,2)*std::pow(P_q,2)-(4.*ssm*ssp*std::pow(K_q,2)*std::pow(P_q,2))/P_P+4.*ssm*ssp*std::pow(K_q,2)*q_q-1.*svm*svp*std::pow(K_q,2)*P_P*q_q-(4.*svm*svp*std::pow(K_q,2)*std::pow(P_q,2)*q_q)/P_P+4.*svm*svp*std::pow(K_q,2)*std::pow(q_q,2));
            K_norm[SI_K_norm(2,3,iq,iz)]    = wj*    ((4.*ssp*svm*K_P*K_q*std::pow(P_q,2))/P_P+(4.*ssm*svp*K_P*K_q*std::pow(P_q,2))/P_P-4.*ssp*svm*K_P*K_q*q_q-4.*ssm*svp*K_P*K_q*q_q);
            K_norm[SI_K_norm(2,4,iq,iz)]    = wj*    ((-4.*svm*svp*K_q*std::pow(P_q,3))/P_P+4.*svm*svp*K_q*P_q*q_q);
            K_norm[SI_K_norm(2,5,iq,iz)]    = wj*    (-2.*ssp*svm*std::pow(K_q,3)*P_q-2.*ssm*svp*std::pow(K_q,3)*P_q+(2.*ssp*svm*K_P*std::pow(K_q,2)*std::pow(P_q,2))/P_P+(2.*ssm*svp*K_P*std::pow(K_q,2)*std::pow(P_q,2))/P_P+(4.*ssp*svm*std::pow(K_q,3)*std::pow(P_q,2))/P_P-(4.*ssm*svp*std::pow(K_q,3)*std::pow(P_q,2))/P_P-(4.*ssp*svm*K_P*std::pow(K_q,2)*P_q*q_q)/P_P+(4.*ssm*svp*K_P*std::pow(K_q,2)*P_q*q_q)/P_P);
            K_norm[SI_K_norm(2,6,iq,iz)]    = wj*    ((-2.*ssp*svm*K_q*std::pow(P_q,3))/P_P-(2.*ssm*svp*K_q*std::pow(P_q,3))/P_P+2.*ssp*svm*K_q*P_q*q_q+2.*ssm*svp*K_q*P_q*q_q);
            K_norm[SI_K_norm(2,7,iq,iz)]    = wj*    (-2.*svm*svp*std::pow(K_q,2)*std::pow(P_q,2)+(8.*ssm*ssp*std::pow(K_q,2)*std::pow(P_q,2))/P_P+2.*svm*svp*K_P*K_q*P_q*q_q-(8.*ssm*ssp*K_P*K_q*P_q*q_q)/P_P+(8.*svm*svp*std::pow(K_q,2)*std::pow(P_q,2)*q_q)/P_P-(8.*svm*svp*K_P*K_q*P_q*std::pow(q_q,2))/P_P);
            K_norm[SI_K_norm(3,0,iq,iz)]    = wj*    (2.*svm*svp*K_P*P_q+(8.*ssm*ssp*K_P*P_q)/P_P-(8.*svm*svp*K_P*P_q*q_q)/P_P);
            K_norm[SI_K_norm(3,1,iq,iz)]    = wj*    (-4.*ssp*svm*K_P*K_q-4.*ssm*svp*K_P*K_q-8.*ssp*svm*std::pow(K_q,2)-8.*ssm*svp*std::pow(K_q,2)+(8.*ssp*svm*std::pow(K_P,2)*P_q)/P_P+(16.*ssp*svm*K_P*K_q*P_q)/P_P+(16.*ssm*svp*K_P*K_q*P_q)/P_P-(8.*ssp*svm*K_K*std::pow(P_q,2))/P_P-(8.*ssm*svp*K_K*std::pow(P_q,2))/P_P+8.*ssp*svm*K_K*q_q+8.*ssm*svp*K_K*q_q-(16.*ssp*svm*std::pow(K_P,2)*q_q)/P_P-(16.*ssm*svp*std::pow(K_P,2)*q_q)/P_P);
            K_norm[SI_K_norm(3,2,iq,iz)]    = wj*    ((-4.*ssp*svm*K_P*K_q*std::pow(P_q,2))/P_P-(4.*ssm*svp*K_P*K_q*std::pow(P_q,2))/P_P+4.*ssp*svm*K_P*K_q*q_q+4.*ssm*svp*K_P*K_q*q_q);
            K_norm[SI_K_norm(3,3,iq,iz)]    = wj*    (16.*ssm*ssp*std::pow(K_q,2)+4.*svm*svp*std::pow(K_q,2)*P_P-8.*svm*svp*K_P*K_q*P_q-(32.*ssm*ssp*K_P*K_q*P_q)/P_P+4.*svm*svp*K_K*std::pow(P_q,2)+(16.*ssm*ssp*K_K*std::pow(P_q,2))/P_P+(8.*svm*svp*std::pow(K_P,2)*std::pow(P_q,2))/P_P-16.*ssm*ssp*K_K*q_q-16.*svm*svp*std::pow(K_q,2)*q_q+(32.*ssm*ssp*std::pow(K_P,2)*q_q)/P_P-4.*svm*svp*K_K*P_P*q_q+(32.*svm*svp*K_P*K_q*P_q*q_q)/P_P-(16.*svm*svp*K_K*std::pow(P_q,2)*q_q)/P_P+16.*svm*svp*K_K*std::pow(q_q,2)-(32.*svm*svp*std::pow(K_P,2)*std::pow(q_q,2))/P_P);
            K_norm[SI_K_norm(3,4,iq,iz)]    = wj*    ((4.*ssp*svm*K_P*std::pow(P_q,2))/P_P-(4.*ssm*svp*K_P*std::pow(P_q,2))/P_P-(8.*ssp*svm*K_P*P_q*q_q)/P_P-(8.*ssm*svp*K_P*P_q*q_q)/P_P);
            K_norm[SI_K_norm(3,5,iq,iz)]    = wj*    (-2.*svm*svp*K_P*std::pow(K_q,2)*P_q-8.*svm*svp*std::pow(K_q,3)*P_q+(8.*ssm*ssp*K_P*std::pow(K_q,2)*P_q)/P_P+(4.*svm*svp*std::pow(K_P,2)*K_q*std::pow(P_q,2))/P_P+(16.*svm*svp*K_P*std::pow(K_q,2)*std::pow(P_q,2))/P_P-(8.*svm*svp*K_K*K_q*std::pow(P_q,3))/P_P+8.*svm*svp*K_K*K_q*P_q*q_q-(8.*svm*svp*std::pow(K_P,2)*K_q*P_q*q_q)/P_P-(8.*svm*svp*K_P*std::pow(K_q,2)*P_q*q_q)/P_P);
            K_norm[SI_K_norm(3,6,iq,iz)]    = wj*    ((-4.*svm*svp*K_P*std::pow(P_q,3))/P_P+2.*svm*svp*K_P*P_q*q_q-(8.*ssm*ssp*K_P*P_q*q_q)/P_P+(8.*svm*svp*K_P*P_q*std::pow(q_q,2))/P_P);
            K_norm[SI_K_norm(3,7,iq,iz)]    = wj*    (8.*ssp*svm*std::pow(K_q,2)*P_q-8.*ssm*svp*std::pow(K_q,2)*P_q-(8.*ssp*svm*K_P*K_q*std::pow(P_q,2))/P_P+(24.*ssm*svp*K_P*K_q*std::pow(P_q,2))/P_P+(8.*ssp*svm*K_K*std::pow(P_q,3))/P_P-(8.*ssm*svp*K_K*std::pow(P_q,3))/P_P-8.*ssp*svm*K_K*P_q*q_q+8.*ssm*svp*K_K*P_q*q_q-(16.*ssm*svp*std::pow(K_P,2)*P_q*q_q)/P_P);
            K_norm[SI_K_norm(4,0,iq,iz)]    = wj*    (-2.*ssp*svm*P_q+2.*ssm*svp*P_q+(4.*ssp*svm*std::pow(P_q,2))/P_P+(4.*ssm*svp*std::pow(P_q,2))/P_P);
            K_norm[SI_K_norm(4,1,iq,iz)]    = wj*    (svm*svp*K_P*P_q-4.*svm*svp*K_q*P_q+(4.*ssm*ssp*K_P*P_q)/P_P+(4.*svm*svp*K_P*std::pow(P_q,2))/P_P-(4.*svm*svp*K_P*P_q*q_q)/P_P);
            K_norm[SI_K_norm(4,2,iq,iz)]    = wj*    ((-4.*svm*svp*K_q*std::pow(P_q,3))/P_P+4.*svm*svp*K_q*P_q*q_q);
            K_norm[SI_K_norm(4,3,iq,iz)]    = wj*    ((-4.*ssp*svm*K_P*std::pow(P_q,2))/P_P+(4.*ssm*svp*K_P*std::pow(P_q,2))/P_P+(8.*ssp*svm*K_P*P_q*q_q)/P_P+(8.*ssm*svp*K_P*P_q*q_q)/P_P);
            K_norm[SI_K_norm(4,4,iq,iz)]    = wj*    (svm*svp*std::pow(P_q,2)+(4.*ssm*ssp*std::pow(P_q,2))/P_P-(4.*svm*svp*std::pow(P_q,2)*q_q)/P_P);
            K_norm[SI_K_norm(4,5,iq,iz)]    = wj*    ((-2.*ssp*svm*K_P*K_q*std::pow(P_q,2))/P_P+(2.*ssm*svp*K_P*K_q*std::pow(P_q,2))/P_P+(4.*ssp*svm*std::pow(K_q,2)*std::pow(P_q,2))/P_P+(4.*ssm*svp*std::pow(K_q,2)*std::pow(P_q,2))/P_P);
            K_norm[SI_K_norm(4,6,iq,iz)]    = wj*    ((2.*ssp*svm*std::pow(P_q,3))/P_P-(2.*ssm*svp*std::pow(P_q,3))/P_P-(4.*ssp*svm*std::pow(P_q,2)*q_q)/P_P-(4.*ssm*svp*std::pow(P_q,2)*q_q)/P_P);
            K_norm[SI_K_norm(4,7,iq,iz)]    = wj*    ((8.*svm*svp*K_q*std::pow(P_q,3))/P_P-(8.*svm*svp*K_P*std::pow(P_q,2)*q_q)/P_P);
            K_norm[SI_K_norm(5,0,iq,iz)]    = wj*    (-1.*svm*svp*K_P*K_q*P_q-(4.*ssm*ssp*K_P*K_q*P_q)/P_P+(8.*svm*svp*std::pow(K_q,2)*std::pow(P_q,2))/P_P-(4.*svm*svp*K_P*K_q*P_q*q_q)/P_P);
            K_norm[SI_K_norm(5,1,iq,iz)]    = wj*    (2.*ssp*svm*K_K*K_q*P_q+2.*ssm*svp*K_K*K_q*P_q-(4.*ssp*svm*std::pow(K_P,2)*K_q*P_q)/P_P+(8.*ssp*svm*K_P*std::pow(K_q,2)*P_q)/P_P-(4.*ssp*svm*K_K*K_q*std::pow(P_q,2))/P_P+(4.*ssm*svp*K_K*K_q*std::pow(P_q,2))/P_P);
            K_norm[SI_K_norm(5,2,iq,iz)]    = wj*    (-2.*ssp*svm*std::pow(K_q,3)*P_q-2.*ssm*svp*std::pow(K_q,3)*P_q+(2.*ssp*svm*K_P*std::pow(K_q,2)*std::pow(P_q,2))/P_P+(2.*ssm*svp*K_P*std::pow(K_q,2)*std::pow(P_q,2))/P_P+(4.*ssp*svm*std::pow(K_q,3)*std::pow(P_q,2))/P_P-(4.*ssm*svp*std::pow(K_q,3)*std::pow(P_q,2))/P_P-(4.*ssp*svm*K_P*std::pow(K_q,2)*P_q*q_q)/P_P+(4.*ssm*svp*K_P*std::pow(K_q,2)*P_q*q_q)/P_P);
            K_norm[SI_K_norm(5,3,iq,iz)]    = wj*    (2.*svm*svp*K_P*std::pow(K_q,2)*P_q-8.*svm*svp*std::pow(K_q,3)*P_q-(8.*ssm*ssp*K_P*std::pow(K_q,2)*P_q)/P_P-(4.*svm*svp*std::pow(K_P,2)*K_q*std::pow(P_q,2))/P_P+(16.*svm*svp*K_P*std::pow(K_q,2)*std::pow(P_q,2))/P_P-(8.*svm*svp*K_K*K_q*std::pow(P_q,3))/P_P+8.*svm*svp*K_K*K_q*P_q*q_q-(8.*svm*svp*std::pow(K_P,2)*K_q*P_q*q_q)/P_P+(8.*svm*svp*K_P*std::pow(K_q,2)*P_q*q_q)/P_P);
            K_norm[SI_K_norm(5,4,iq,iz)]    = wj*    ((-2.*ssp*svm*K_P*K_q*std::pow(P_q,2))/P_P+(2.*ssm*svp*K_P*K_q*std::pow(P_q,2))/P_P+(4.*ssp*svm*std::pow(K_q,2)*std::pow(P_q,2))/P_P+(4.*ssm*svp*std::pow(K_q,2)*std::pow(P_q,2))/P_P);
            K_norm[SI_K_norm(5,5,iq,iz)]    = wj*    (svm*svp*K_K*std::pow(K_q,2)*std::pow(P_q,2)-(4.*ssm*ssp*K_K*std::pow(K_q,2)*std::pow(P_q,2))/P_P-(2.*svm*svp*std::pow(K_P,2)*std::pow(K_q,2)*std::pow(P_q,2))/P_P+(8.*svm*svp*std::pow(K_q,4)*std::pow(P_q,2))/P_P-(4.*svm*svp*K_K*std::pow(K_q,2)*std::pow(P_q,2)*q_q)/P_P);
            K_norm[SI_K_norm(5,6,iq,iz)]    = wj*    (-1.*svm*svp*std::pow(K_q,2)*std::pow(P_q,2)+(4.*ssm*ssp*std::pow(K_q,2)*std::pow(P_q,2))/P_P+(2.*svm*svp*K_P*K_q*std::pow(P_q,3))/P_P-(4.*svm*svp*std::pow(K_q,2)*std::pow(P_q,2)*q_q)/P_P);
            K_norm[SI_K_norm(5,7,iq,iz)]    = wj*    ((4.*ssp*svm*K_P*std::pow(K_q,2)*std::pow(P_q,2))/P_P+(4.*ssm*svp*K_P*std::pow(K_q,2)*std::pow(P_q,2))/P_P-(8.*ssp*svm*std::pow(K_q,3)*std::pow(P_q,2))/P_P+(8.*ssm*svp*std::pow(K_q,3)*std::pow(P_q,2))/P_P-(4.*ssp*svm*K_K*K_q*std::pow(P_q,3))/P_P-(4.*ssm*svp*K_K*K_q*std::pow(P_q,3))/P_P+(8.*ssp*svm*K_K*K_q*std::pow(P_q,2)*q_q)/P_P-(8.*ssm*svp*K_K*K_q*std::pow(P_q,2)*q_q)/P_P);
            K_norm[SI_K_norm(6,0,iq,iz)]    = wj*    (svm*svp*std::pow(P_q,2)+(4.*ssm*ssp*std::pow(P_q,2))/P_P-(4.*svm*svp*std::pow(P_q,2)*q_q)/P_P);
            K_norm[SI_K_norm(6,1,iq,iz)]    = wj*    (-2.*ssp*svm*K_q*P_q-2.*ssm*svp*K_q*P_q+(4.*ssp*svm*K_P*std::pow(P_q,2))/P_P-(4.*ssp*svm*K_P*P_q*q_q)/P_P-(4.*ssm*svp*K_P*P_q*q_q)/P_P);
            K_norm[SI_K_norm(6,2,iq,iz)]    = wj*    ((-2.*ssp*svm*K_q*std::pow(P_q,3))/P_P-(2.*ssm*svp*K_q*std::pow(P_q,3))/P_P+2.*ssp*svm*K_q*P_q*q_q+2.*ssm*svp*K_q*P_q*q_q);
            K_norm[SI_K_norm(6,3,iq,iz)]    = wj*    ((4.*svm*svp*K_P*std::pow(P_q,3))/P_P-2.*svm*svp*K_P*P_q*q_q+(8.*ssm*ssp*K_P*P_q*q_q)/P_P-(8.*svm*svp*K_P*P_q*std::pow(q_q,2))/P_P);
            K_norm[SI_K_norm(6,4,iq,iz)]    = wj*    ((2.*ssp*svm*std::pow(P_q,3))/P_P-(2.*ssm*svp*std::pow(P_q,3))/P_P-(4.*ssp*svm*std::pow(P_q,2)*q_q)/P_P-(4.*ssm*svp*std::pow(P_q,2)*q_q)/P_P);
            K_norm[SI_K_norm(6,5,iq,iz)]    = wj*    (-1.*svm*svp*std::pow(K_q,2)*std::pow(P_q,2)+(4.*ssm*ssp*std::pow(K_q,2)*std::pow(P_q,2))/P_P+(2.*svm*svp*K_P*K_q*std::pow(P_q,3))/P_P-(4.*svm*svp*std::pow(K_q,2)*std::pow(P_q,2)*q_q)/P_P);
            K_norm[SI_K_norm(6,6,iq,iz)]    = wj*    ((-2.*svm*svp*std::pow(P_q,4))/P_P+svm*svp*std::pow(P_q,2)*q_q-(4.*ssm*ssp*std::pow(P_q,2)*q_q)/P_P+(4.*svm*svp*std::pow(P_q,2)*std::pow(q_q,2))/P_P);
            K_norm[SI_K_norm(6,7,iq,iz)]    = wj*    ((4.*ssp*svm*K_q*std::pow(P_q,3))/P_P+(4.*ssm*svp*K_q*std::pow(P_q,3))/P_P-(4.*ssp*svm*K_P*std::pow(P_q,2)*q_q)/P_P-(4.*ssm*svp*K_P*std::pow(P_q,2)*q_q)/P_P);
            K_norm[SI_K_norm(7,0,iq,iz)]    = wj*    ((-8.*ssp*svm*K_q*std::pow(P_q,2))/P_P+(8.*ssm*svp*K_q*std::pow(P_q,2))/P_P+(8.*ssp*svm*K_P*P_q*q_q)/P_P-(8.*ssm*svp*K_P*P_q*q_q)/P_P);
            K_norm[SI_K_norm(7,1,iq,iz)]    = wj*    (-2.*svm*svp*K_P*K_q*P_q+(8.*ssm*ssp*K_P*K_q*P_q)/P_P+2.*svm*svp*K_K*std::pow(P_q,2)-(8.*ssm*ssp*K_K*std::pow(P_q,2))/P_P+(8.*svm*svp*K_P*K_q*std::pow(P_q,2))/P_P-(8.*svm*svp*std::pow(K_P,2)*P_q*q_q)/P_P+(8.*svm*svp*K_P*K_q*P_q*q_q)/P_P-(8.*svm*svp*K_K*std::pow(P_q,2)*q_q)/P_P);
            K_norm[SI_K_norm(7,2,iq,iz)]    = wj*    (-2.*svm*svp*std::pow(K_q,2)*std::pow(P_q,2)+(8.*ssm*ssp*std::pow(K_q,2)*std::pow(P_q,2))/P_P+2.*svm*svp*K_P*K_q*P_q*q_q-(8.*ssm*ssp*K_P*K_q*P_q*q_q)/P_P+(8.*svm*svp*std::pow(K_q,2)*std::pow(P_q,2)*q_q)/P_P-(8.*svm*svp*K_P*K_q*P_q*std::pow(q_q,2))/P_P);
            K_norm[SI_K_norm(7,3,iq,iz)]    = wj*    (8.*ssp*svm*std::pow(K_q,2)*P_q-8.*ssm*svp*std::pow(K_q,2)*P_q-(24.*ssp*svm*K_P*K_q*std::pow(P_q,2))/P_P+(8.*ssm*svp*K_P*K_q*std::pow(P_q,2))/P_P+(8.*ssp*svm*K_K*std::pow(P_q,3))/P_P-(8.*ssm*svp*K_K*std::pow(P_q,3))/P_P-8.*ssp*svm*K_K*P_q*q_q+8.*ssm*svp*K_K*P_q*q_q+(16.*ssp*svm*std::pow(K_P,2)*P_q*q_q)/P_P);
            K_norm[SI_K_norm(7,4,iq,iz)]    = wj*    ((8.*svm*svp*K_q*std::pow(P_q,3))/P_P-(8.*svm*svp*K_P*std::pow(P_q,2)*q_q)/P_P);
            K_norm[SI_K_norm(7,5,iq,iz)]    = wj*    ((4.*ssp*svm*K_P*std::pow(K_q,2)*std::pow(P_q,2))/P_P+(4.*ssm*svp*K_P*std::pow(K_q,2)*std::pow(P_q,2))/P_P-(8.*ssp*svm*std::pow(K_q,3)*std::pow(P_q,2))/P_P+(8.*ssm*svp*std::pow(K_q,3)*std::pow(P_q,2))/P_P-(4.*ssp*svm*K_K*K_q*std::pow(P_q,3))/P_P-(4.*ssm*svp*K_K*K_q*std::pow(P_q,3))/P_P+(8.*ssp*svm*K_K*K_q*std::pow(P_q,2)*q_q)/P_P-(8.*ssm*svp*K_K*K_q*std::pow(P_q,2)*q_q)/P_P);
            K_norm[SI_K_norm(7,6,iq,iz)]    = wj*    ((4.*ssp*svm*K_q*std::pow(P_q,3))/P_P+(4.*ssm*svp*K_q*std::pow(P_q,3))/P_P-(4.*ssp*svm*K_P*std::pow(P_q,2)*q_q)/P_P-(4.*ssm*svp*K_P*std::pow(P_q,2)*q_q)/P_P);
            K_norm[SI_K_norm(7,7,iq,iz)]    = wj*    (-4.*svm*svp*std::pow(K_q,2)*std::pow(P_q,2)-(16.*ssm*ssp*std::pow(K_q,2)*std::pow(P_q,2))/P_P+(16.*svm*svp*K_P*K_q*std::pow(P_q,3))/P_P-(8.*svm*svp*K_K*std::pow(P_q,4))/P_P+4.*svm*svp*K_K*std::pow(P_q,2)*q_q+(16.*ssm*ssp*K_K*std::pow(P_q,2)*q_q)/P_P-(8.*svm*svp*std::pow(K_P,2)*std::pow(P_q,2)*q_q)/P_P-(16.*svm*svp*std::pow(K_q,2)*std::pow(P_q,2)*q_q)/P_P+(16.*svm*svp*K_K*std::pow(P_q,2)*std::pow(q_q,2))/P_P);
        }
    }

    // The following are the suppression functions that come into play by calculating off-shell propagators

    cdouble norm_sum=0., os_add1=1., os_add2=1.;

    for(unsigned int id1=0; id1<n_dirac; id1++) {
        for(unsigned int id2=0; id2<n_dirac; id2++) {
            for(unsigned int iq=0; iq<n_radial; iq++) {
                for(unsigned int iz=0; iz<n_angular_z; iz++) {
                    if (id1==1 || id1==2 || id1==3 || id1==7)   os_add1 = g*h;
                    else if (id1==4 || id1==6)                  os_add1 = g;
                    else if (id1==5)                            os_add1 = g*h*h;
                    else os_add1 = 1.;

                    if (id2==1 || id2==2 || id2==3 || id2==7)   os_add2 = g*h;
                    else if (id2==4 || id2==6)                  os_add2 = g;
                    else if (id2==5)                            os_add2 = g*h*h;
                    else os_add2 = 1.;

                    norm_sum +=  K_norm[SI_K_norm(id1,id2,iq,iz)] * real(cont[id1][iq+iz*n_radial]) * os_add1 *
                            real(cont[id2][iq+iz*n_radial]) * os_add2;
                }
            }
        }
    }

    K_norm.clear();

    return prefactor * norm_sum;
}

// Here one could interpolate the amplitude on the real axis. The function takes three arguments:
// id  : number of dressing function (starts at 0)
// p_p : (real) momentum
// z   : angle
cdouble Twoquark::interpolateAmplitude(int id, double p_p, double z)
{
    if( !interpolatorReady ) {

        for (unsigned int i = 0; i < n_radial; i++) {
            ppgrid.push_back(loop.grid_radial[i]);
        }

        for(unsigned int i=0; i<n_angular_z; i++){
            zgrid.push_back(loop.grid_z[n_angular_z-1-i]);
        }

        if(identity[1] == "s" || identity[1] == "p") {
            fgrid.clear();
            fgrid.resize(4);

            for (unsigned int iz = 0; iz < n_angular_z; iz++) {
                for (unsigned int ip = 0; ip < n_radial; ip++) {
                    fgrid[0].push_back(cont[0][ip + iz*n_radial]);
                    fgrid[1].push_back(cont[1][ip + iz*n_radial]);
                    fgrid[2].push_back(cont[2][ip + iz*n_radial]);
                    fgrid[3].push_back(cont[3][ip + iz*n_radial]);
                }
            }

        } else if (identity[1] == "v" || identity[1] == "a") {
            fgrid.clear();
            fgrid.resize(8);

            for (unsigned int iz = 0; iz < n_angular_z; iz++) {
                for (unsigned int ip = 0; ip < n_radial; ip++) {
                    fgrid[0].push_back(cont[0][ip + iz*n_radial]);
                    fgrid[1].push_back(cont[1][ip + iz*n_radial]);
                    fgrid[2].push_back(cont[2][ip + iz*n_radial]);
                    fgrid[3].push_back(cont[3][ip + iz*n_radial]);
                    fgrid[4].push_back(cont[4][ip + iz*n_radial]);
                    fgrid[5].push_back(cont[5][ip + iz*n_radial]);
                    fgrid[6].push_back(cont[6][ip + iz*n_radial]);
                    fgrid[7].push_back(cont[7][ip + iz*n_radial]);
                }
            }
        }

        interpolatorReady = true;
    }

    return numerics::interpolation::linear_2d(ppgrid, zgrid, fgrid[id], p_p, z);
}

// build up complex grid and calculate the amplitude on it in order to be able to inteprolate there
// takes three arguments:
// sh_c      : apex of the outer shell
// no_shells : number of shells
// no_radial : number of radial points
void Twoquark::buildComplexGrid(double sh_c, unsigned int no_shells, unsigned int no_radial)
{
    interpolationAmplitudeGrid.resize(no_shells * no_radial, 0.);

    for (unsigned int i=0; i<no_shells; ++i){
        interpolationApexGrid.push_back(sh_c * pow((double)i / (double)no_shells, 2));
    }
    numerics::integration::FourVectorIntegration<double> fourVectorIntegration;
    fourVectorIntegration.n_radial              =   no_radial;
    fourVectorIntegration.upper_bound_radial    =   1.e+6;
    fourVectorIntegration.lower_bound_radial    =   1.e-6;
    fourVectorIntegration.generate();
    interpolationRadialGrid                     =   fourVectorIntegration.grid_radial;

    for (unsigned int i_sh=0; i_sh<no_shells; ++i_sh){
        for (unsigned int i_ra=0; i_ra<no_radial; ++i_ra){
            double  q_q     = fourVectorIntegration.grid_radial[i_ra],
                    maxApex = interpolationApexGrid[i_sh];

            cdouble p_p = q_q - maxApex + I * 2. * sqrt(q_q) * sqrt(maxApex);

            interpolationAmplitudeGrid[i_ra + i_sh * no_radial] = reiterate(0, p_p, 1.e-3);
        }
    }

}

cdouble Twoquark::interpolateComplex(cdouble p_p)
{
    double  apex    = abs(p_p) / 2. - real(p_p) / 2.,
            radial  = real(p_p) + apex;

    if(imag(p_p) >= 0)
        return  numerics::interpolation::linear_2d(
                interpolationRadialGrid, interpolationApexGrid, interpolationAmplitudeGrid, radial, apex);
    else
        return  std::conj(numerics::interpolation::linear_2d(
                interpolationRadialGrid, interpolationApexGrid, interpolationAmplitudeGrid, radial, apex));

}

// calculates the propagator of a (pseudo)scalar state and deposits the value in the variable D
cdouble Twoquark::propagatorPS(cdouble P_P)
{
    if (identity[1] != "p" && identity[1] != "s")
    {
        cerr << "error in function " << __func__
             << " :: propagator cannot be evaluated due to wrong quantum numbers." << endl;
        return 0.;
    }
    else {
        double
                h = 1.e-7;
        cdouble
                P_P_std     = -mass_ * mass_,
                n_std       = -1. / (mass_ * mass_) * norm_loop(P_P_std, P_P_std),
                n_P_P       = -1. / (mass_ * mass_) * norm_loop(P_P, P_P),
                dn_dx_std   = -(norm_loop(P_P_std+h/2., P_P_std+h/2.) - norm_loop(P_P_std-h/2., P_P_std-h/2.)) / h;
        return 1. / (mass_*mass_ * (n_std + 0.25 * (1.+dn_dx_std) * (1. + P_P/(mass_*mass_ *std::pow(P_P/(mass_*mass_)+2., 3))) - n_P_P));
    }
}

// calculates the propagator of an (axial)vector state; deposits the values in DT and DL (trans + longi)
std::vector<cdouble> Twoquark::propagatorVA(cdouble P_P)
{
    if (identity[1] != "v" && identity[1] != "a") {
        cout << "error in function " << __func__
             << " :: propagator cannot be evaluated due to wrong quantum numbers." << endl;
        return {};
    }
    else {
        double  h           = 1.e-7;
        cdouble P_P_std     = -mass_ * mass_,
                dn_dx_std   = -(norm_loop(P_P_std + h / 2., P_P_std + h / 2.) - norm_loop(P_P_std - h / 2., P_P_std - h / 2.)) / h,
                nkn         = -norm_loop(P_P_std, P_P_std) / (-P_P_std) +
                                (1. + dn_dx_std) * 0.5 * (1. - 1. / std::pow((P_P / (-P_P_std) + 2.), 2)),
                nt          = -norm_loop(P_P, P_P) / (-P_P_std),
                nl          = -norm_loop_L(P_P, P_P) / (-P_P_std);

        return { 1. / (mass_ * mass_ * (nkn - nt)), 1. / (mass_ * mass_ * (nkn - nl)) };
    }
}

// reiterate the equation in order to calculate the i-th dressing function on p_p and zp
cdouble Twoquark::reiterate(unsigned int i, cdouble p_p, cdouble zp)
{
    if( i < 0 || i > n_dirac ) {
        cerr << "error in function " << __func__ << " :: invalid tensor structure" << endl;
        return 0.;
    }

    if( std::abs(zp) > 1 ) {
        cerr << "error in function " << __func__ << " :: invalid z angle" << endl;
        return 0.;
    }

    cdouble prefactor   = -quark1.getZ2()*quark1.getZ2()/(6.0*M_PI*M_PI*M_PI)*(1.- 0.5 * enableDiquark),
            P_P         = -mass_*mass_,
            P_p         = std::sqrt(p_p)*std::sqrt(P_P)*zp,
            sum         = 0.;

    eta = 0.5;

    #pragma omp parallel for
    for (unsigned int iq = 0; iq < n_radial; iq++){
        cdouble
                q_q     = loop.grid_radial[iq];
        for (unsigned int izq = 0; izq < n_angular_z; izq++){
            cdouble
                    zq         =   loop.grid_z[izq],
                    P_q        =   std::sqrt(P_P)*std::sqrt(q_q)*zq,
                    qm_qm      =   q_q + (eta-1.)*(eta-1.)*P_P + 2.*(eta-1.)*P_q,
                    qp_qp      =   q_q + eta*eta*P_P + 2.*eta*P_q,
                    jacobians  =   q_q/2.*std::sqrt(1.-zq*zq),
                    svp, ssp, svm, ssm;

            if( !enableShellQuark )
            {
                svp       = quark1.naiveIteration("sv", qp_qp);
                ssp       = quark1.naiveIteration("ss", qp_qp);
                svm       = quark2.naiveIteration("sv", qm_qm);
                ssm       = quark2.naiveIteration("ss", qm_qm);
            } else {
                svp       =   quark1.interpolateShell("sv",qp_qp);
                ssp       =   quark1.interpolateShell("ss",qp_qp);
                svm       =   quark2.interpolateShell("sv",qm_qm);
                ssm       =   quark2.interpolateShell("ss",qm_qm);
            }

            for ( unsigned int iyq=0; iyq<n_angular_y; iyq++ ) {

                cdouble
                        weights     =   loop.weights_radial[iq]*loop.weights_z[izq]*loop.weights_y[iyq],
                        yq          =   loop.grid_y[iyq],
                        k_k         =   p_p+q_q-2.*std::sqrt(p_p)*std::sqrt(q_q)*(zq*zp+yq*std::sqrt(1.-1.*zq*zq)*std::sqrt(1.-1.*zp*zp)),
                        p_q         =   std::sqrt(p_p)*std::sqrt(q_q)*(zq*zp+yq*std::sqrt(1.-zq*zq)*std::sqrt(1.-1.*zp*zp)),
                        G           =   G_MarisTandy(k_k),
                        P_k         =   P_p - P_q,
                        p_k         =   p_p - p_q,
                        q_k         =   p_q - q_q;

                vec<cdouble>    w(10000, 0.),
                                F(n_dirac);

                vec2<cdouble>   Ker(n_dirac);

                for(unsigned int id = 0; id < n_dirac; ++id) {
                    F[id] = cont[id][iq+izq*n_radial];
                    Ker[id].resize(n_dirac,0.);
                }

                if((identity[0] == "m" && identity[1] == "s") || (identity[0] == "d" && identity[1] == "p")) {
                    #include "./setups/reiterations/bse_sc.c"
                }
                if((identity[0] == "m" && identity[1] == "p") || (identity[0] == "d" && identity[1] == "s")) {
                    #include "./setups/reiterations/bse_ps.c"
                }
                if((identity[0] == "m" && identity[1] == "v") || (identity[0] == "d" && identity[1] == "a")) {
                    #include "./setups/reiterations/bse_vc.c"
                }
                if((identity[0] == "m" && identity[1] == "a") || (identity[0] == "d" && identity[1] == "v")) {
                    #include "./setups/reiterations/bse_ax.c"
                }

                for(unsigned int id=0; id<n_dirac; ++id){
                    #pragma omp critical
                    sum += Ker[i][id] * F[id];
                }

            }
        }
    }
    return sum;
}

// calculate the leptonic decay constant (only good for mesons!)
double  Twoquark::ldecayconst() {
    if( identity[0] != "m" ) {
        cerr << "warning in function " << __func__ << " :: this is only good for mesons!" << endl;
    }

    vec<cdouble> K_lep(n_dirac * n_radial * n_angular_z);

    cdouble      P_P =   - mass_ * mass_,
                 prefactor;

    if(identity[1] == "p") {
        prefactor   =   3.*quark1.getZ2()*I/(4.*P_P*M_PI*M_PI*M_PI);      // Color trace=3
    }
    else if(identity[1] == "v") {
        prefactor   =   -3.*quark1.getZ2()*I/(4.*3.*mass_*M_PI*M_PI*M_PI);
    }

    for (unsigned int iq=0;iq<n_radial;iq++) {
        cdouble
                q_q     =   loop.grid_radial[iq],
                qj      =   q_q/2.,
                qw      =   loop.weights_radial[iq];
        for (unsigned int izq=0;izq<n_angular_z;izq++) {
            cdouble
                    z   = loop.grid_z[izq],
                    zj  = std::sqrt(1.-z*z),
                    zw  = loop.weights_z[izq];
            cdouble
                    P_q       =   std::sqrt(P_P)*std::sqrt(q_q)*z,
                    qm_qm     =   q_q + (eta-1.)*(eta-1.)*P_P + 2.*(eta-1.)*P_q,
                    qp_qp     =   q_q + eta*eta*P_P + 2.*eta*P_q,
                    svp, ssp, svm, ssm;

            if( !enableShellQuark )
            {
                svp       = quark1.naiveIteration("sv", qp_qp);
                ssp       = quark1.naiveIteration("ss", qp_qp);
                svm       = quark2.naiveIteration("sv", qm_qm);
                ssm       = quark2.naiveIteration("ss", qm_qm);
            } else {
                svp       =   quark1.interpolateShell("sv",qp_qp);
                ssp       =   quark1.interpolateShell("ss",qp_qp);
                svm       =   quark2.interpolateShell("sv",qm_qm);
                ssm       =   quark2.interpolateShell("ss",qm_qm);
            }

            cdouble jacobians   =   qj * zj,
                    weights     =   qw * zw;

            if(identity[1] == "p")
            {
                #include "./setups/decay_ps_sc.c"
            }
            else if (identity[1] == "v")
            {
                #include "./setups/decay_vc_ax.c"
            }

        }
    }

    cdouble sum=0.;

    for(unsigned int id=0; id<n_dirac; id++) {
        for(unsigned int iq=0; iq<n_radial; iq++) {
            for(unsigned int iz=0; iz<n_angular_z; iz++) {
                sum +=  K_lep[SI_amplitude(id, iq, iz)] * cont[id][iq + iz*n_radial];
            }
        }
    }

    K_lep.clear();

    return std::real(prefactor * sum);
}

// building the BSE kernel
void    Twoquark::buildK (cdouble P_P) {
    cdouble prefactor  = - quark1.getZ2() * quark1.getZ2() / (6.0*M_PI*M_PI*M_PI)*(1. - 0.5 * enableDiquark);

    kernel.clear();
    kernel.resize(n_dirac * n_dirac * n_radial * n_radial * n_angular_z * n_angular_z, 0.);

    #pragma omp parallel for                            // parallelization
    for (unsigned int iq = 0; iq < n_radial; iq++){
        cdouble q_q = loop.grid_radial[iq];

        for (unsigned int izq=0; izq<n_angular_z; izq++){
            cdouble
                    zq        =   loop.grid_z[izq],
                    P_q       =   std::sqrt(P_P)*std::sqrt(q_q)*zq,
                    qm_qm     =   q_q + (eta-1.)*(eta-1.)*P_P   + 2.*(eta-1.)*P_q,
                    qp_qp     =   q_q + eta*eta*P_P             + 2.*eta*P_q,
                    prewghts  =   loop.weights_radial[iq]*loop.weights_z[izq],
                    jacobians =   q_q/2.*std::sqrt(1.-zq*zq),
                    svp,ssp,svm,ssm;

            if( !enableShellQuark )
            {
                svp       = quark1.naiveIteration("sv", qp_qp);
                ssp       = quark1.naiveIteration("ss", qp_qp);
                svm       = quark2.naiveIteration("sv", qm_qm);
                ssm       = quark2.naiveIteration("ss", qm_qm);
            } else {
                svp       = quark1.interpolateShell("sv", qp_qp);
                ssp       = quark1.interpolateShell("ss", qp_qp);
                svm       = quark2.interpolateShell("sv", qm_qm);
                ssm       = quark2.interpolateShell("ss", qm_qm);
            }


            for (unsigned int ip=0; ip<n_radial; ip++) {
                cdouble
                        p_p = loop.grid_radial[ip];

                for (unsigned int izp=0; izp<n_angular_z; izp++) {
                    cdouble zp  = loop.grid_z[izp],
                            P_p = std::sqrt(p_p) * std::sqrt(P_P) * zp;

                    cdouble yq,
                            p_q;
                    for(unsigned int iy=0; iy<n_angular_y; iy++) {
                        yq   =   loop.grid_y[iy];

                        p_q  =  std::sqrt(p_p) * std::sqrt(q_q) * (zq * zp + yq * std::sqrt(1. - 1.*zq*zq)
                                                                     *std::sqrt(1. - 1.*zp*zp));
                        cdouble k_k  = p_p + q_q - 2. * std::sqrt(p_p)*std::sqrt(q_q) * (zq*zp + yq*
                                        std::sqrt(1.-1.*zq*zq)*std::sqrt(1.-1.*zp*zp)),

                        P_k   =   P_p - P_q,
                        p_k   =   p_p - p_q,
                        q_k   =   p_q - q_q,

                        G     = G_MarisTandy(k_k),

                        weights = prewghts * loop.weights_y[iy];

                        vec<cdouble> w(10000, 0.);

                        if(identity[0] == "m")
                        {
                            if(identity[1] == "p")
                            {
                                #include "./setups/bse_ps.c"
                            }
                            if(identity[1] == "s")
                            {
                                #include "./setups/bse_sc.c"
                            }
                            if(identity[1] == "v")
                            {
                                #include "./setups/bse_vc.c"
                            }
                            if(identity[1] == "a")
                            {
                                #include "./setups/bse_ax.c"
                            }
                        }

                        if(identity[0] == "d")
                        {
                            if(identity[1] == "p")
                            {
                                #include "./setups/bse_sc.c"
                            }
                            if(identity[1] == "s")
                            {
                                #include "./setups/bse_ps.c"
                            }
                            if(identity[1] == "a")
                            {
                                #include "./setups/bse_vc.c"
                            }
                            if(identity[1] == "v")
                            {
                                #include "./setups/bse_ax.c"
                            }
                        }
                    }

                }
            }
        }
    }
}

// superindices (denoted by SI)

unsigned int Twoquark::SI_amplitude(unsigned int id, unsigned int ip, unsigned int iz) const
{
    return      id
              + ip    *n_dirac
              + iz    *n_dirac*n_radial;
}

unsigned int Twoquark::SI_K_norm(unsigned int id1, unsigned int id2, unsigned int iq, unsigned int iz) const
{
    return        id1
                + id2   *n_dirac
                + iq    *n_dirac*n_dirac
                + iz    *n_dirac*n_dirac*n_radial;
}

unsigned int Twoquark::SI_kernel(unsigned int ip, unsigned int izp, unsigned int id1, unsigned int iq,
                                                  unsigned int izq, unsigned int id2) const
{
    return      iq
              + izq  * n_radial
              + id2  * n_radial * n_angular_z
              + ip   * n_radial * n_angular_z * n_dirac
              + izp  * n_radial * n_angular_z * n_dirac * n_radial
              + id1  * n_radial * n_angular_z * n_dirac * n_radial * n_angular_z;
}

// conjugate square root
cdouble Twoquark::sqrt_(cdouble x)
{
    if (std::imag(x)<0) {return -std::sqrt(x);}
    else return std::sqrt(x);
}

// precalculate the grids and weights
void    Twoquark::precalcGrids()
{
    if( areThereGrids ) {
        cerr << "warning in function " << __func__ << " :: there are already grids!" << endl;
    }

    loop.n_radial           =   n_radial;
    loop.n_angular_z        =   n_angular_z;
    loop.n_angular_y        =   n_angular_y;

    loop.upper_bound_radial =   upper_bound_radial;
    loop.lower_bound_radial =   lower_bound_radial;

    loop.generate();

    areThereGrids = true;
}

// the Maris-Tandy function
cdouble Twoquark::G_MarisTandy(cdouble k_k)
{
    cdouble x = k_k/(lambdaMarisTandy * lambdaMarisTandy);

    double  lambdaQCD               =   0.234,
            gammaMarisTandy         =   12.0/(33.0-2.0*4.0);

    return 4. * M_PI
           * (globalMT * M_PI * std::pow(etaMarisTandy, 7) * std::pow(x, 2) * std::exp(-etaMarisTandy * etaMarisTandy * x)
              + 2. * M_PI * gammaMarisTandy * (1. - std::exp(-k_k))
              / (std::log(M_E*M_E - 1. + std::pow(1.+k_k/(lambdaQCD * lambdaQCD), 2))))
           * (pauliVillars / (pauliVillars + std::abs(k_k))) / k_k;

}
