
/*
FILENAME: Tetraquark.cpp
AUTHOR:   Nico Santowsky
EMAIL:    physics@nsanto.de
DATE:     2021-12-21
LICENSE:  Apache License 2.0
*/

#include <cmath>
#include <vector>
#include <complex>
#include <fstream>
#include <sys/stat.h>


#include "include/Tetraquark.hpp"
#include "../../../aux/chfi_mesons/chfi_mesons.hpp"
#include "../../../aux/chfi_quarks/chfi_quarks.hpp"
#include "../../../../routines/eigenvalues/src/eigenvalues.hpp"

using std::cout,std::endl;

using namespace dysonUtils;

//publics

Tetraquark::Tetraquark()
{
    isud_q1                     =   true;
    isud_q2                     =   true;

    rw_path                     =   false;
    dijp_path                   =   false;

    debug.open("debug.log");

    identity                    =   "f500";

    n_radial_spiral             =   16;
    n_radial_linear             =   16;
    n_angular_z                 =   6;
    n_angular_y                 =   6;

    lower_bound_radial          =   1.e-3;
    upper_bound_radial          =   1.e+2;

    n_radial_qloop              =   16;
    n_angular_z_qloop           =   6;
    n_angular_y_qloop           =   6;
    n_angular_psi_qloop         =   6;

    lower_bound_radial_qloop    =   1.e-2;
    upper_bound_radial_qloop    =   1.e+2;

    omega                   =   0.4;
    D_maristandy            =   0.93;
    gamma_m                 =   12.0/(33.0-2.0*4.0);
    tau_maristandy          =   M_E*M_E-1.0;
    lambda_qcd              =   0.234;
    mt_maristandy           =   0.5;
    pauli_villars           =   1.e+12;
    Lambda                  =   0.72;
    prefactor_IR_MarisTandy =   1.0;
    pf_RL                   =   1.0;

    I.real(0.);
    I.imag(1.);

    ns_data::read();
    chfi_q::read();

    eta_mt = 1.8;


    meson_11.setNumerics("n_radial"             , 40);
    meson_11.setNumerics("n_angular_y"          , 12);
    meson_11.setNumerics("n_angular_z"          , 12);
    meson_11.setNumerics("lower_bound_radial"   , 1.e-2);
    meson_11.setNumerics("upper_bound_radial"   , 1.e+2);
    meson_11.setInteraction("eta"               , eta_mt);
    meson_11.setInteraction("lambda"            , Lambda);
    meson_11.setInteraction("global"            , 1.0);

    meson_12.setNumerics("n_radial"             , 40);
    meson_12.setNumerics("n_angular_y"          , 12);
    meson_12.setNumerics("n_angular_z"          , 12);
    meson_12.setNumerics("lower_bound_radial"   , 1.e-2);
    meson_12.setNumerics("upper_bound_radial"   , 1.e+2);
    meson_12.setInteraction("eta"               , eta_mt);
    meson_12.setInteraction("lambda"            , Lambda);
    meson_12.setInteraction("global"            , 1.0);

    meson_21.setNumerics("n_radial"             , 40);
    meson_21.setNumerics("n_angular_y"          , 12);
    meson_21.setNumerics("n_angular_z"          , 12);
    meson_21.setNumerics("lower_bound_radial"   , 1.e-2);
    meson_21.setNumerics("upper_bound_radial"   , 1.e+2);
    meson_21.setInteraction("eta"               , eta_mt);
    meson_21.setInteraction("lambda"            , Lambda);
    meson_21.setInteraction("global"            , 1.0);

    meson_22.setNumerics("n_radial"             , 40);
    meson_22.setNumerics("n_angular_y"          , 12);
    meson_22.setNumerics("n_angular_z"          , 12);
    meson_22.setNumerics("lower_bound_radial"   , 1.e-2);
    meson_22.setNumerics("upper_bound_radial"   , 1.e+2);
    meson_22.setInteraction("eta"               , eta_mt);
    meson_22.setInteraction("lambda"            , Lambda);
    meson_22.setInteraction("global"            , 1.0);

    diquark_1.setNumerics("n_radial"             , 30);
    diquark_1.setNumerics("n_angular_y"          , 12);
    diquark_1.setNumerics("n_angular_z"          , 12);
    diquark_1.setNumerics("lower_bound_radial"   , 1.e-3);
    diquark_1.setNumerics("upper_bound_radial"   , 1.e+3);
    diquark_1.setInteraction("eta"               , eta_mt);
    diquark_1.setInteraction("lambda"            , Lambda);
    diquark_1.setInteraction("global"            , 1.0);

    diquark_2.setNumerics("n_radial"             , 30);
    diquark_2.setNumerics("n_angular_y"          , 12);
    diquark_2.setNumerics("n_angular_z"          , 12);
    diquark_2.setNumerics("lower_bound_radial"   , 1.e-3);
    diquark_2.setNumerics("upper_bound_radial"   , 1.e+3);
    diquark_2.setInteraction("eta"               , eta_mt);
    diquark_2.setInteraction("lambda"            , Lambda);
    diquark_2.setInteraction("global"            , 1.0);

}


void Tetraquark::init( std::string id, double massQuark1, double massQuark2, bool verbose ) {
    if( isInitialized ) {
        cerr << "error in function " << __func__ << " :: already initialized!" << endl;
        return;
    }

    quark_1.setInteraction("etaMarisTandy", eta_mt);
    quark_1.setInteraction("globalMT", prefactor_IR_MarisTandy);
    quark_1.setInteraction("lambdaMarisTandy", Lambda);
    quark_2.setInteraction("etaMarisTandy", eta_mt);
    quark_2.setInteraction("globalMT", prefactor_IR_MarisTandy);
    quark_2.setInteraction("lambdaMarisTandy", Lambda);

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

    double  apex1 = numerics::interpolation::linear_1d(quark_cutoffs[0], quark_cutoffs[1], massQuark1),
            apex2 = numerics::interpolation::linear_1d(quark_cutoffs[0], quark_cutoffs[1], massQuark2);

    initQuarks( massQuark1, massQuark2, apex1, apex2 );
    identity = id;

    std::string m11type, m12type, m21type, m22type, dq1type, dq2type;

    if(identity == "f500")
    {
        #include "./setups/f500/setup.c"
        m11type = "p";
        m12type = "p";
        m21type = "p";
        m22type = "p";
        dq1type = "s";
        dq2type = "s";
    }
    else if(identity == "hidden_0_0p_PP")
    {
        #include "./setups/hidden_0_0p_PP/setup.c"
        m11type = "p";
        m12type = "p";
        m21type = "p";
        m22type = "p";
        dq1type = "a";
        dq2type = "a";
    }
    else if (identity == "hidden_0_0p_VV")
    {
        #include "./setups/hidden_0_0p_VV/setup.c"
        m11type = "v";
        m12type = "v";
        m21type = "v";
        m22type = "v";
        dq1type = "a";
        dq2type = "a";
    }
    else if (identity == "hidden_0_1p_PV")
    {
        #include "./setups/hidden_0_1p_PV/setup.c"
        m11type = "p";
        m12type = "v";
        m21type = "p";
        m22type = "v";
        dq1type = "a";
        dq2type = "a";
    }
    else if (identity == "hidden_0_1p_VV")
    {
        #include "./setups/hidden_0_1p_VV/setup.c"
        m11type = "v";
        m12type = "v";
        m21type = "v";
        m22type = "v";
        dq1type = "a";
        dq2type = "a";
    } else
    {
      cerr << "error in function " << __func__
           << " :: " << id << " is an invalid identifier!" << endl;
      return;
    }


    const double meson_apex			=	0.500;

    double 	meson_quark_mass_1		=	quark_1.getMass(),
            meson_quark_mass_2		=	quark_2.getMass();

    double  guess11 = std::sqrt(apex1) + std::sqrt(apex2),
            guess12 = std::sqrt(apex1) + std::sqrt(apex2),
            guess21 = 2. * std::sqrt(apex1),
            guess22 = 2. * std::sqrt(apex2),
            guessd1 = std::sqrt(apex1) + std::sqrt(apex2),
            guessd2 = std::sqrt(apex1) + std::sqrt(apex2);

    meson_11.setInteraction("eta", eta_mt);
    meson_11.setInteraction("lambda", Lambda);
    meson_11.setInteraction("global", prefactor_IR_MarisTandy);
    meson_11.init("m", m11type, meson_quark_mass_1, meson_quark_mass_2);
    meson_11.getMass(guess11, verbose);
    meson_11.normalize();
    meson_11.buildComplexGrid(meson_apex, 20, 64);

    cout << "meson_11.mass  = " << meson_11.mass() << endl;

    if((quark_1.getMass() == quark_2.getMass()) && (identity == "f500")) {
      meson_12 = meson_21 = meson_22 = meson_11;
    }
    else
    {

      meson_12.setInteraction("eta", eta_mt);
      meson_12.setInteraction("lambda", Lambda);
      meson_12.setInteraction("global", prefactor_IR_MarisTandy);
      meson_12.init("m", m12type, meson_quark_mass_1, meson_quark_mass_2);
      meson_12.getMass(guess12, verbose);
      meson_12.normalize();
      meson_12.buildComplexGrid(meson_apex, 20, 64);

      cout << "meson_12.mass  = " << meson_12.mass() << endl;

      meson_21.setInteraction("eta", eta_mt);
      meson_21.setInteraction("lambda", Lambda);
      meson_21.setInteraction("global", prefactor_IR_MarisTandy);
      meson_21.init("m", m21type, meson_quark_mass_1, meson_quark_mass_1);
      meson_21.getMass(guess21, verbose);
      meson_21.normalize();
      meson_21.buildComplexGrid(meson_apex, 20, 64);

      cout << "meson_21.mass  = " << meson_21.mass() << endl;

      meson_22.setInteraction("eta", eta_mt);
      meson_22.setInteraction("lambda", Lambda);
      meson_22.setInteraction("global", prefactor_IR_MarisTandy);
      meson_22.init("m", m22type, meson_quark_mass_2, meson_quark_mass_2);
      meson_22.getMass(guess22, verbose);
      meson_22.normalize();
      meson_22.buildComplexGrid(meson_apex, 20, 64);

      cout << "meson_22.mass  = " << meson_22.mass() << endl;

    }

    diquark_1.setNumerics("n_radial", 40);
    diquark_1.setNumerics("lower_bound_radial", 1.e-2);
    diquark_1.setNumerics("upper_bound_radial", 1.e+2);
    diquark_1.setInteraction("eta", 1.8);//eta_mt;
    diquark_1.setInteraction("lambda", 0.71);////Lambda;
    diquark_1.setInteraction("global", 1.0);//prefactor_IR_MarisTandy;
    diquark_1.init("d", dq1type, meson_quark_mass_1, meson_quark_mass_2);
    diquark_1.getMass(guessd1, verbose);
    diquark_1.normalize();
    diquark_1.buildComplexGrid(meson_apex, 20, 64);

    cout << "diquark_1.mass = " << diquark_1.mass() << endl;
    cout << "amplitude      = " << diquark_1.reiterate(0,1.e-3,1.e-3) << endl;

    if( quark_1.getMass() == quark_2.getMass() ) {
      diquark_2 = diquark_1;
    }
    else
    {

      diquark_2.setNumerics("n_radial", 40);
      diquark_2.setNumerics("lower_bound_radial", 1.e-2);
      diquark_2.setNumerics("upper_bound_radial", 1.e+2);
      diquark_2.setInteraction("eta", 1.8);//eta_mt;
      diquark_2.setInteraction("lambda", 0.71);//Lambda;
      diquark_2.setInteraction("global", 1.0);//prefactor_IR_MarisTandy;
      diquark_2.init("d", dq2type, meson_quark_mass_1, meson_quark_mass_2);
      diquark_2.getMass(guessd2, verbose);
      diquark_2.normalize();
      diquark_2.buildComplexGrid(meson_apex, 20, 64);

      cout << "diquark_2.mass = " << diquark_2.mass() << endl;
      cout << "amplitude      = " << diquark_2.reiterate(0,1.e-3,1.e-3) << endl;

    }

    n_radial = n_radial_spiral + n_radial_linear;

    precalc_grids();

    isInitialized = true;
}


void Tetraquark::setNumerics(std::string identifier, double value) {

    if( isInitialized ) {
        cerr << "error in function " << __func__
             << " :: tetraquark already initialized. Numerics are unchangeable!" << endl;
        return;
    }

    if( identifier == "n_radial" ) {
      if( static_cast<size_t> (value) % 2 == 1 ) {
        cerr << "error in function " << __func__
             << " :: radial points must be an even number!" << endl;
        return;
      }
      n_radial_spiral = n_radial_linear = static_cast<size_t> (value) / 2;
      n_radial = value;
    }
    else if( identifier == "n_angular_z" )              n_angular_z         = static_cast<size_t> (value);
    else if( identifier == "n_angular_y" )              n_angular_y         = static_cast<size_t> (value);
    else if( identifier == "lower_bound_radial" )       lower_bound_radial  = value;
    else if( identifier == "upper_bound_radial" )       upper_bound_radial  = value;
    else if( identifier == "n_radial_qloop" )           n_radial_qloop      = static_cast<size_t> (value);
    else if( identifier == "n_angular_y_qloop" )        n_angular_y_qloop   = static_cast<size_t> (value);
    else if( identifier == "n_angular_z_qloop" )        n_angular_z_qloop   = static_cast<size_t> (value);
    else if( identifier == "n_angular_psi_qloop" )      n_angular_psi_qloop = static_cast<size_t> (value);
    else if( identifier == "lower_bound_radial_qloop" ) lower_bound_radial_qloop  = value;
    else if( identifier == "upper_bound_radial_qloop" ) upper_bound_radial_qloop  = value;
    else {
        cerr << "error in function " << __func__ << " :: " << identifier
             << " is an invalid identifier!" << endl;
        return;
    }

}


void Tetraquark::setInteraction(std::string identifier, double value) {
    if( isInitialized ) {
        cerr << "error in function " << __func__ << " :: tetraquark already initialized!" << endl;
        return;
    }
    if( identifier == "eta" ) eta_mt = value;
    else if( identifier == "global" ) prefactor_IR_MarisTandy = value;
    else if( identifier == "lambda" ) Lambda = value;
    else if( identifier == "prefactorRL" ) pf_RL = value;
}


vec<vec<cdouble>>   Tetraquark::getEigenvalue(cdouble Q_Q)
{
    if( !isInitialized ) {
        cerr << "error in function " << __func__ << " :: tetraquark not initialized!" << endl;
        return vec<vec<cdouble>>(0);
    }
    if(identity == "f500")
    {
        #include "./setups/f500/setup.c"
    }
    if(identity == "hidden_0_0p_PP")
    {
        #include "./setups/hidden_0_0p_PP/setup.c"
    }
    if(identity == "hidden_0_0p_VV")
    {
        #include "./setups/hidden_0_0p_VV/setup.c"
    }
    if(identity == "hidden_0_1p_VV")
    {
        #include "./setups/hidden_0_1p_VV/setup.c"
    }
    if(identity == "hidden_0_1p_PV")
    {
        #include "./setups/hidden_0_1p_PV/setup.c"
    }

    s.rw_path   = rw_path;
    s.dijp_path = dijp_path;

    double  M = std::sqrt(Q_Q).imag(),
            G = std::abs(std::sqrt(Q_Q).real()*2.);

    s.generate(
      n_radial_spiral,
      n_radial_linear,
      upper_bound_radial,
      meson_11.mass(),
      M, G);

    std::ofstream write;
    vec<size_t> N;

    N.push_back((n_basis_M1+n_basis_M2+n_basis_DQ+n_basis_QQ)*n_radial*n_angular_z);
    N.push_back((n_basis_M1+n_basis_M2+n_basis_DQ)*n_radial*n_angular_z);
    N.push_back((n_basis_M1+n_basis_M2+n_basis_QQ)*n_radial*n_angular_z);
    N.push_back((n_basis_M1+n_basis_DQ+n_basis_QQ)*n_radial*n_angular_z);
    N.push_back((n_basis_M2+n_basis_DQ+n_basis_QQ)*n_radial*n_angular_z);
    N.push_back((n_basis_M1+n_basis_M2)*n_radial*n_angular_z);
    N.push_back((n_basis_M1+n_basis_DQ)*n_radial*n_angular_z);
    N.push_back((n_basis_M1+n_basis_QQ)*n_radial*n_angular_z);
    N.push_back((n_basis_M2+n_basis_DQ)*n_radial*n_angular_z);
    N.push_back((n_basis_M2+n_basis_QQ)*n_radial*n_angular_z);
    N.push_back((n_basis_DQ+n_basis_QQ)*n_radial*n_angular_z);
    N.push_back(n_basis_QQ*n_radial*n_angular_z);

    vec<Eigen::MatrixXcd> K_(12);
    kernel.clear();
    kernel.resize(20);

    for(size_t i=0; i<12; ++i)
    {
        K_[i].resize(N[i], N[i]);
        kernel[i].resize(N[i]*N[i], 0.);
    }

    buildK(Q_Q);

    vec<vec<cdouble>> V(12);

    for(size_t i=0; i<12; ++i)
    {
        for(size_t j=0; j<kernel[i].size(); j++){
            K_[i](j) = kernel[i][j];
        }

        K_[i].transposeInPlace();
        Eigen::ComplexEigenSolver<Eigen::MatrixXcd> es(K_[i],0);

        for(size_t j=0; j<N[i]; ++j)
        {
            if(true)//std::abs(std::imag(es.eigenvalues()(j))/std::real(es.eigenvalues()(j))) < 1.e-5 )
                V[i].push_back(es.eigenvalues()(j));
        }

        sort_cmplx(V[i]);
    }

    // get_sol(es,solution);

    return V;

}


void Tetraquark::print_solution()
{
    mkdir("./data/solutions",0777);


    std::ofstream write_sol_m1,write_sol_m2,write_sol_dq;
    size_t n = n_radial*n_angular_z;
    write_sol_m1.open("./data/solutions/m1.txt");
    write_sol_m2.open("./data/solutions/m2.txt");
    write_sol_dq.open("./data/solutions/dq.txt");


    for(size_t i=0; i<n_basis_M1; i++){
        for(size_t k=0; k<n; k++){
            for(size_t j=0; j<4; j++){
                write_sol_m1 << std::scientific << solution[0][i][j+k*4] << "\t";
            }
            write_sol_m1 << endl;
        }
    }

    for(size_t i=0; i<n_basis_M2; i++){
        for(size_t k=0; k<n; k++){
            for(size_t j=0; j<4; j++){
                write_sol_m2 << std::scientific << solution[1][i][j+k*4] << "\t";
            }
            write_sol_m2 << endl;
        }
    }

    for(size_t i=0; i<n_basis_DQ; i++){
        for(size_t k=0; k<n; k++){
            for(size_t j=0; j<4; j++){
                write_sol_dq << std::scientific << solution[2][i][j+k*4] << "\t";
            }
            write_sol_dq << endl;
        }
    }

    write_sol_dq.close();
    write_sol_m2.close();
    write_sol_m1.close();
}


// privates


void        Tetraquark::initQuarks(double mq1, double mq2, double apex1, double apex2) {

    quark_1.setMass(mq1);
    quark_2.setMass(mq2);

    quark_1.generateReal();
    quark_2.generateReal();
    quark_1.generateShells(apex1, 20);
    quark_2.generateShells(apex2, 20);

}


void        Tetraquark::buildK(cdouble Q_Q)
{

    vec<cdouble>
            K12(n_basis_M1*n_basis_M2*n_radial*n_angular_z*n_radial*n_angular_z,0.),
            K13(n_basis_M1*n_basis_DQ*n_radial*n_angular_z*n_radial*n_angular_z,0.),
            K14(n_basis_M1*n_basis_QQ*n_radial*n_angular_z*n_radial*n_angular_z,0.),
            K21(n_basis_M2*n_basis_M1*n_radial*n_angular_z*n_radial*n_angular_z,0.),
            K23(n_basis_M2*n_basis_DQ*n_radial*n_angular_z*n_radial*n_angular_z,0.),
            K24(n_basis_M2*n_basis_QQ*n_radial*n_angular_z*n_radial*n_angular_z,0.),
            K31(n_basis_DQ*n_basis_M1*n_radial*n_angular_z*n_radial*n_angular_z,0.),
            K32(n_basis_DQ*n_basis_M2*n_radial*n_angular_z*n_radial*n_angular_z,0.),
            K34(n_basis_DQ*n_basis_QQ*n_radial*n_angular_z*n_radial*n_angular_z,0.),
            K41(n_basis_QQ*n_basis_M1*n_radial*n_angular_z*n_radial*n_angular_z,0.),
            K42(n_basis_QQ*n_basis_M2*n_radial*n_angular_z*n_radial*n_angular_z,0.),
            K43(n_basis_QQ*n_basis_DQ*n_radial*n_angular_z*n_radial*n_angular_z,0.),
            K44(n_basis_QQ*n_basis_QQ*n_radial*n_angular_z*n_radial*n_angular_z,0.);
    // We don't need diagonal elements Kii for i=1,2,3 because these diagrams do not exist in the equation.

    std::string B = "B";
    // We need this for referring to the quark dressing function B by using B/fpi for leading pion amplitude

    cdouble
            prefactor_1l  = 2.*M_PI/(std::pow(2.*M_PI,4.)),
            prefactor_2l  = 2.*M_PI/(std::pow(2.*M_PI,4.)*std::pow(2.*M_PI,4.));
    // trivial phi integral for q integration, integration denominators ~2pi^4

    //cdouble Q   =   i_*M + G/2.,
    //        Q_Q =   Q*Q;
    cdouble Q   =   std::sqrt(Q_Q);
    double  M   =   std::imag(Q),
            G   =   std::real(Q);
    // We use i*M -> i(M - i*G/2) = i*M + G/2 to describe resonances.

    #pragma omp parallel for

    for(size_t ip=0; ip<n_radial; ip++){

        cdouble p_p;
        if(M < 2.*s.M_meson)    p_p = meson_loop.grid_radial[ip];
        else                    p_p = s.grid[ip];
        // case differentiation: below threshold (see if-condition), we can integrate linearly without a
        // path deformation, but above the threshold we have to deform the path and therefore we have to
        // use the spiral s.


        for(size_t izp=0; izp<n_angular_z; izp++){
            cdouble
                    zp    = meson_loop.grid_z[izp],
                    Q_p   = Q * sqrt_I(p_p) * zp;
            // We have to use the function sqrt_I, which leads us back to the original path of the radial
            // coordinate in hypercubic coordinates. The index I is motivated from projecting on a 180°
            // shifted first Riemann sheet.

            for(size_t iq=0; iq<n_radial; iq++){
                cdouble q_q, qj, qw;

                if(M < 2.*s.M_meson){
                    q_q = meson_loop.grid_radial[iq],
                    qj  = q_q/2.,
                    qw  = meson_loop.weights_radial[iq];
                }
                else
                {
                    q_q = s.grid[iq],
                    qj  = q_q/2.,
                    qw  = s.weights[iq];
                }
                // same case differentiation as above by treating p_p, but here we have to include the
                // jacobians as well as the weight factors due to the q integration.

                for(size_t izq=0; izq<n_angular_z; izq++){
                    double  zq  = meson_loop.grid_z[izq],
                            zqj = std::sqrt(1.-zq*zq),
                            zqw = meson_loop.weights_z[izq];

                    cdouble Q_q     = Q*sqrt_I(q_q)*zq,
                            qp_qp   = q_q + Q_Q/4. + Q_q,
                            qm_qm   = q_q + Q_Q/4. - Q_q,
                            svqp    = quark_2.interpolateShell("sv", qp_qp),
                            ssqp    = quark_2.interpolateShell("ss", qp_qp),
                            svqm    = quark_2.interpolateShell("sv", qm_qm),
                            ssqm    = quark_2.interpolateShell("ss", qm_qm),

                            PM11p,PM11Lp,PM11m,PM11Lm,
                            PM12p,PM12Lp,PM12m,PM12Lm,
                            PM21p,PM21Lp,PM21m,PM21Lm,
                            PM22p,PM22Lp,PM22m,PM22Lm,
                            PDQ1p,PDQ1Lp,PDQ1m,PDQ1Lm,
                            PDQ2p,PDQ2Lp,PDQ2m,PDQ2Lm;
                    // These are the quark and meson/diquark propagators of the q_q loop.
                    // P<type><number><longitudinal?><q_plus/q_minus>
                    // For example: Diquark 2 with q_minus as argument, not longitudinal: PDQ2m

                    if (identity == "f500")
                    {
                        #include "./setups/f500/propagators.c"
                    }

                    if (identity == "hidden_0_0p_PP")
                    {
                        #include "./setups/hidden_0_0p_PP/propagators.c"
                    }

                    if (identity == "hidden_0_0p_VV")
                    {
                        #include "./setups/hidden_0_0p_VV/propagators.c"
                    }

                    if (identity == "hidden_0_1p_VV")
                    {
                        #include "./setups/hidden_0_1p_VV/propagators.c"
                    }

                    if (identity == "hidden_0_1p_PV")
                    {
                        #include "./setups/hidden_0_1p_PV/propagators.c"
                    }
                    // Here, the meson/diquark propagator variables PD* are assigned.

                    for(size_t iyq=0; iyq<n_angular_y; iyq++){
                        double
                                yq  = meson_loop.grid_y[iyq],
                                yqw = meson_loop.weights_y[iyq];

                        cdouble
                                p_q     = sqrt_I(p_p)*sqrt_I(q_q)*
                                            (zp*zq + std::sqrt(1.-zp*zp) * std::sqrt(1.-zq*zq) * yq),
                                k_k     = p_p + q_q - 2.*p_q,
                                svqmp   = quark_1.interpolateShell("sv", k_k),
                                ssqmp   = quark_1.interpolateShell("ss", k_k),
                                Gmt     = G_mt(k_k),

                                FCtr,wj,
                                svp,ssp,svm,ssm,
                                svl,ssl,
                                p1,p2,
                                ampl,ampl01,ampl10,ampl01M,ampl10M,ampl01D,ampl10D;

                        wj = qw * zqw * yqw * qj * zqj;
                        // weights and jacobians multiplied

                        vec<cdouble>  v(10000,0.);
                        // This is the vector which will be filled by using the FORM optimization.

                        if (identity == "f500")
                        {
                            #include "./setups/f500/kernels_1l.c"
                        }

                        if (identity == "f500_strange")
                        {
                            // #include "./setups/f500_fullstrange/kernels_1l.c"
                            // outdated
                        }

                        if (identity == "hidden_0_0p_VV")
                        {}

                        if (identity == "hidden_0_1p_VV")
                        {}

                        if (identity == "hidden_0_1p_PV")
                        {}
                        // Any 1-loop kernel is calculated right here. We can drag out this here because
                        // there is no further l_l integration needed.

                        for(size_t il=0; il<n_radial_qloop; il++){
                            double
                                    l_l = quark_loop.grid_radial[il],
                                    lj  = l_l/2.,
                                    lw  = quark_loop.weights_radial[il];

                            for(size_t izl=0; izl<n_angular_z_qloop; izl++){
                                double
                                        zl  = quark_loop.grid_z[izl],
                                        zlj = std::sqrt(1.-zl*zl),
                                        zlw = quark_loop.weights_z[izl];
                                cdouble
                                        Q_l     = Q*std::sqrt(l_l)*zl,
                                        svlp    = quark_2.interpolateShell("sv",l_l+Q_Q/4.+Q_l),
                                        sslp    = quark_2.interpolateShell("ss",l_l+Q_Q/4.+Q_l),
                                        svlm    = quark_2.interpolateShell("sv",l_l+Q_Q/4.-Q_l),
                                        sslm    = quark_2.interpolateShell("ss",l_l+Q_Q/4.-Q_l),
                                        sv1_q1  = quark_1.interpolateShell("sv",l_l+Q_Q/16.-Q_l/2.),
                                        ss1_q1  = quark_1.interpolateShell("ss",l_l+Q_Q/16.-Q_l/2.);

                                for(size_t iyl=0; iyl<n_angular_y_qloop; iyl++){
                                    double
                                            yl  = quark_loop.grid_y[iyl],
                                            ylw = quark_loop.weights_y[iyl];
                                    cdouble
                                            p_l     = sqrt_I(p_p)*std::sqrt(l_l)*
                                                    (zp*zl + std::sqrt(1.-zp*zp)*std::sqrt(1.-zl*zl)*yl),
                                            sv2_q1  = quark_1.interpolateShell
                                                    ("sv", 2.*p_l+Q_l/2.+l_l+Q_p/2.+p_p+Q_Q/16.),
                                            ss2_q1  = quark_1.interpolateShell
                                                    ("ss", 2.*p_l+Q_l/2.+l_l+Q_p/2.+p_p+Q_Q/16.),
                                            sv2_q2  = quark_2.interpolateShell
                                                    ("sv", 2.*p_l+Q_l/2.+l_l+Q_p/2.+p_p+Q_Q/16.),
                                            ss2_q2  = quark_2.interpolateShell
                                                    ("ss", 2.*p_l+Q_l/2.+l_l+Q_p/2.+p_p+Q_Q/16.);

                                    for(size_t ipsil=0; ipsil<n_angular_psi_qloop; ipsil++){
                                        double
                                                psil  = quark_loop.grid_phi[ipsil],
                                                psilw = quark_loop.weights_phi[ipsil];

                                        cdouble q_l     = sqrt_I(q_q) * std::sqrt(l_l) *
                                                        (zq * zl +
                                                        std::sqrt(1.-zq*zq) * std::sqrt(1.-zl*zl) *
                                                        yq * yl +
                                                        std::sqrt(1.-zq*zq) * std::sqrt(1.-zl*zl) *
                                                        std::sqrt(1.-yq*yq) * std::sqrt(1.-yl*yl) *
                                                        std::cos(psil)),
                                                svll    = quark_1.interpolateShell
                                                        ("sv",l_l+q_q-2.*q_l),
                                                ssll    = quark_1.interpolateShell
                                                        ("ss",l_l+q_q-2.*q_l),
                                                sv4_q1  = quark_1.interpolateShell
                                                        ("sv",2.*q_l+Q_l/2.+l_l+Q_q/2.+q_q+Q_Q/16.),
                                                ss4_q1  = quark_1.interpolateShell
                                                        ("ss",2.*q_l+Q_l/2.+l_l+Q_q/2.+q_q+Q_Q/16.),
                                                sv4_q2  = quark_2.interpolateShell
                                                        ("sv",2.*q_l+Q_l/2.+l_l+Q_q/2.+q_q+Q_Q/16.),
                                                ss4_q2  = quark_2.interpolateShell
                                                        ("ss",2.*q_l+Q_l/2.+l_l+Q_q/2.+q_q+Q_Q/16.),
                                                sv3_q1  = quark_1.interpolateShell
                                                        ("sv",2.*p_l+2.*q_l-Q_l/2.+l_l+2.*p_q-Q_p/2.+
                                                            p_p-Q_q/2.+q_q+Q_Q/16.),
                                                ss3_q1  = quark_1.interpolateShell
                                                        ("ss",2.*p_l+2.*q_l-Q_l/2.+l_l+2.*p_q-Q_p/2.+
                                                            p_p-Q_q/2.+q_q+Q_Q/16.),
                                                sv3_q2  = quark_2.interpolateShell
                                                        ("sv",2.*p_l+2.*q_l-Q_l/2.+l_l+2.*p_q-Q_p/2.+
                                                            p_p-Q_q/2.+q_q+Q_Q/16.),
                                                ss3_q2  = quark_2.interpolateShell
                                                        ("ss",2.*p_l+2.*q_l-Q_l/2.+l_l+2.*p_q-Q_p/2.+
                                                            p_p-Q_q/2.+q_q+Q_Q/16.);

                                        cdouble sv1, ss1, sv2, ss2, sv3, ss3, sv4, ss4;
                                        // Declaring actually used quark propagators (are defined individually
                                        // by calculating the kernel matrix elements.

                                        wj  = qw*zqw*yqw * lw*zlw*ylw*psilw * qj*zqj * lj*zlj;

                                        vec<cdouble> w(10000,0.);
                                        // again, a vector that is used by using the FORM optimization

                                        Gmt = G_mt(p_p + l_l - 2.*p_l);
                                        // Maris-Tandy model function for inner-loop gluon exchange.

                                        if(identity == "f500")
                                        {
                                            #include "./setups/f500/kernels_2l.c"
                                        }

                                        if(identity == "hidden_0_0p_PP")
                                        {
                                            //#include "./setups/hidden_0_0p_PP/kernels.c"
                                        }

                                        if(identity == "hidden_0_0p_VV")
                                        {
                                            //#include "./setups/hidden_0_0p_VV/kernels.c"
                                        }

                                        if(identity == "hidden_0_1p_VV")
                                        {
                                            //#include "./setups/hidden_0_1p_VV/kernels.c"
                                        }

                                        if(identity == "hidden_0_1p_PV")
                                        {
                                            //#include "./setups/hidden_0_1p_PV/kernels.c"
                                        }
                                        // All 2-loop kernel elements are calculated in here.


                                    }

                                }

                            }

                        }


                    }

                }

            }

        }

    }

    size_t nb1=n_basis_M1, nb2=n_basis_M2, nb3=n_basis_DQ, nb4=n_basis_QQ;
    for(size_t ib1=0; ib1<nb1; ib1++){
    for(size_t ib2=0; ib2<nb2; ib2++){
    for(size_t ib3=0; ib3<nb3; ib3++){
    for(size_t ib4=0; ib4<nb4; ib4++){
    for(size_t ib4_=0; ib4_<nb4; ib4_++){
    for(size_t ip=0; ip<n_radial; ip++){
    for(size_t izp=0; izp<n_angular_z; izp++){
    for(size_t iq=0; iq<n_radial; iq++){
    for(size_t izq=0; izq<n_angular_z; izq++){
        kernel[0][SI_K(ip,izp,ib1,iq,izq,nb1+ib2)]                      = K12[SI_K12(ip,izp,ib1,iq,izq,ib2)];
        kernel[0][SI_K(ip,izp,ib1,iq,izq,nb1+nb2+ib3)]                  = K13[SI_K13(ip,izp,ib1,iq,izq,ib3)];
        kernel[0][SI_K(ip,izp,ib1,iq,izq,nb1+nb2+nb3+ib4)]              = K14[SI_K14(ip,izp,ib1,iq,izq,ib4)];
        kernel[0][SI_K(ip,izp,nb1+ib2,iq,izq,ib1)]                      = K21[SI_K21(ip,izp,ib2,iq,izq,ib1)];
        kernel[0][SI_K(ip,izp,nb1+ib2,iq,izq,nb1+nb2+ib3)]              = K23[SI_K23(ip,izp,ib2,iq,izq,ib3)];
        kernel[0][SI_K(ip,izp,nb1+ib2,iq,izq,nb1+nb2+nb3+ib4)]          = K24[SI_K24(ip,izp,ib2,iq,izq,ib4)];
        kernel[0][SI_K(ip,izp,nb1+nb2+ib3,iq,izq,ib1)]                  = K31[SI_K31(ip,izp,ib3,iq,izq,ib1)];
        kernel[0][SI_K(ip,izp,nb1+nb2+ib3,iq,izq,nb1+ib2)]              = K32[SI_K32(ip,izp,ib3,iq,izq,ib2)];
        kernel[0][SI_K(ip,izp,nb1+nb2+ib3,iq,izq,nb1+nb2+nb3+ib4)]      = K34[SI_K34(ip,izp,ib3,iq,izq,ib4)];
        kernel[0][SI_K(ip,izp,nb1+nb2+nb3+ib4,iq,izq,ib1)]              = K41[SI_K41(ip,izp,ib4,iq,izq,ib1)];
        kernel[0][SI_K(ip,izp,nb1+nb2+nb3+ib4,iq,izq,nb1+ib2)]          = K42[SI_K42(ip,izp,ib4,iq,izq,ib2)];
        kernel[0][SI_K(ip,izp,nb1+nb2+nb3+ib4,iq,izq,nb1+nb2+ib3)]      = K43[SI_K43(ip,izp,ib4,iq,izq,ib3)];
        kernel[0][SI_K(ip,izp,nb1+nb2+nb3+ib4,iq,izq,nb1+nb2+nb3+ib4_)] = K44[SI_K44(ip,izp,ib4,iq,izq,ib4_)];
    }}}}}}}}}
    // Building up the full kernel... There are many redundant operations going on, but that's manageable in
    // terms of CPU time!

      debug << "Kernel Matrix for (M,G) = (" << M << ", " << G << ") :"     << endl;
      debug << 0      << "  " << K12[0] << "  " << K13[0] << "  " << K14[0] << endl;
      debug << K21[0] << "  " << 0      << "  " << K23[0] << "  " << K24[0] << endl;
      debug << K31[0] << "  " << K32[0] << "  " << 0      << "  " << K34[0] << endl;
      debug << K41[0] << "  " << K42[0] << "  " << K43[0] << "  " << K44[0] << endl << endl;

    if(identity == "f500")
    {
        #include "./setups/f500/subkernels.c"
    }

    if(identity == "hidden_0_0p_PP")
    {
        #include "./setups/hidden_0_0p_PP/subkernels.c"
    }

    if(identity == "hidden_0_0p_VV")
    {
        #include "./setups/hidden_0_0p_VV/subkernels.c"
    }

    if(identity == "hidden_0_1p_VV")
    {
        #include "./setups/hidden_0_1p_VV/subkernels.c"
    }

    if(identity == "hidden_0_1p_PV")
    {
        #include "./setups/hidden_0_1p_VV/subkernels.c"
    }

    // defining subkernels for structural exclusions.
}


void        Tetraquark::precalc_grids()
{
    if( areThereGrids ) {
        cerr << "warning in function " << __func__
             << " :: tetraquark already initialized! doing nothing." << endl;
        return;
    }

    meson_loop.n_radial             =   n_radial;
    meson_loop.n_angular_z          =   n_angular_z;
    meson_loop.n_angular_y          =   n_angular_y;

    meson_loop.lower_bound_radial   =   lower_bound_radial;
    meson_loop.upper_bound_radial   =   upper_bound_radial;

    meson_loop.generate();

    quark_loop.n_radial             =   n_radial_qloop;
    quark_loop.n_angular_z          =   n_angular_z_qloop;
    quark_loop.n_angular_y          =   n_angular_y_qloop;
    quark_loop.n_angular_phi        =   n_angular_psi_qloop;

    quark_loop.lower_bound_radial   =   lower_bound_radial_qloop;
    quark_loop.upper_bound_radial   =   upper_bound_radial_qloop;

    quark_loop.generate();

    cout << "grids generated" << endl;
    cout << "here: " << meson_loop.grid_radial[0] << endl;

    areThereGrids = true;
}


cdouble     Tetraquark::sqrt_I(cdouble z) {
        if(arg(z) >= 0.)    return std::sqrt(z);
        else                return -std::sqrt(z);
}


void        Tetraquark::get_sol(Eigen::ComplexEigenSolver<Eigen::MatrixXcd>& es, vec<vec<vec<double>>>& sol) {
    size_t  n = n_radial * n_angular_z * (n_basis_M1+n_basis_M2+n_basis_DQ);
    double  max = 0.;
    int     index_largest=0;

    for(size_t i=0; i<n; i++)
    {
        if(std::real(es.eigenvalues()(i))>max){
            max = std::real(es.eigenvalues()(i));
            index_largest = i;
        }
    }

    sol.clear();
    sol.resize(3);
    sol[0].resize(n_basis_M1);
    sol[1].resize(n_basis_M2);
    sol[2].resize(n_basis_DQ);

    for(size_t ib=0; ib<n_basis_M1; ib++){
        for(size_t ip=0; ip<n_radial; ip++){
            for(size_t iz=0; iz<n_angular_z; iz++){
                sol[0][ib].push_back( meson_loop.grid_radial[ip] );
                sol[0][ib].push_back( meson_loop.grid_z[iz] );
                sol[0][ib].push_back( real(es.eigenvectors()(ip + iz*n_radial + (ib+0)*n_radial*n_angular_z + index_largest*n)) );
                sol[0][ib].push_back( imag(es.eigenvectors()(ip + iz*n_radial + (ib+0)*n_radial*n_angular_z + index_largest*n)) );
            }
        }
    }

    for(size_t ib=0; ib<n_basis_M2; ib++){
        for(size_t ip=0; ip<n_radial; ip++){
            for(size_t iz=0; iz<n_angular_z; iz++){
                sol[1][ib].push_back( meson_loop.grid_radial[ip] );
                sol[1][ib].push_back( meson_loop.grid_z[iz] );
                sol[1][ib].push_back( real(es.eigenvectors()(ip + iz*n_radial + (ib+n_basis_M1)*n_radial*n_angular_z + index_largest*n)) );
                sol[1][ib].push_back( imag(es.eigenvectors()(ip + iz*n_radial + (ib+n_basis_M1)*n_radial*n_angular_z + index_largest*n)) );
            }
        }
    }

    for(size_t ib=0; ib<n_basis_DQ; ib++){
        for(size_t ip=0; ip<n_radial; ip++){
            for(size_t iz=0; iz<n_angular_z; iz++){
                sol[2][ib].push_back( meson_loop.grid_radial[ip] );
                sol[2][ib].push_back( meson_loop.grid_z[iz] );
                sol[2][ib].push_back( real(es.eigenvectors()(ip + iz*n_radial + (ib+n_basis_M1+n_basis_M2)*n_radial*n_angular_z + index_largest*n)) );
                sol[2][ib].push_back( imag(es.eigenvectors()(ip + iz*n_radial + (ib+n_basis_M1+n_basis_M2)*n_radial*n_angular_z + index_largest*n)) );
            }
        }
    }
}


cdouble     Tetraquark::G_mt(cdouble k_k) {

    cdouble x = k_k/(Lambda*Lambda);

    /*return ((4.0 * M_PI*M_PI * D_maristandy * k_k * std::exp(- k_k / (omega*omega) )) /( std::pow(omega,6) )
            + (8.0 * M_PI*M_PI * gamma_m * (1.0 - std::exp(- k_k/(4.0*mt_maristandy*mt_maristandy) ) ) / k_k )
              / ( log(tau_maristandy + std::pow( (1.0 + k_k / (lambda_qcd*lambda_qcd) ) ,2) ) ))
           * (pauli_villars/(pauli_villars+std::abs(k_k)));*/

    return  4. * M_PI
            * (prefactor_IR_MarisTandy * M_PI * std::pow(eta_mt,7) * std::pow(x,2) * std::exp(-eta_mt*eta_mt*x)
            + 2.*M_PI * gamma_m * (1.-std::exp(-k_k))
            / (std::log(M_E*M_E - 1. + std::pow(1.+k_k/(lambda_qcd*lambda_qcd), 2))))
            * (pauli_villars/(pauli_villars+std::abs(k_k))) / k_k;

}


int         Tetraquark::SI_K12(size_t ip, size_t izp, size_t ib1, size_t iq, size_t izq, size_t ib2)
{
    return iq
           + izq   * n_radial
           + ib2   * n_radial      * n_angular_z
           + ip    * n_angular_z   * n_radial      * n_basis_M2
           + izp   * n_radial      * n_angular_z   * n_radial      * n_basis_M2
           + ib1   * n_radial      * n_angular_z   * n_basis_M2    * n_radial      * n_angular_z;
}

int         Tetraquark::SI_K13(size_t ip, size_t izp, size_t ib1, size_t iq, size_t izq, size_t ib3)
{
    return iq
           + izq   * n_radial
           + ib3   * n_radial      * n_angular_z
           + ip    * n_angular_z   * n_radial      * n_basis_DQ
           + izp   * n_radial      * n_angular_z   * n_radial      * n_basis_DQ
           + ib1   * n_radial      * n_angular_z   * n_basis_DQ    * n_radial      * n_angular_z;
}

int         Tetraquark::SI_K14(size_t ip, size_t izp, size_t ib1, size_t iq, size_t izq, size_t ib4)
{
    return iq
           + izq   * n_radial
           + ib4   * n_radial      * n_angular_z
           + ip    * n_angular_z   * n_radial      * n_basis_QQ
           + izp   * n_radial      * n_angular_z   * n_basis_QQ    * n_radial
           + ib1   * n_radial      * n_angular_z   * n_basis_QQ    * n_radial      * n_angular_z;
}

int         Tetraquark::SI_K21(size_t ip, size_t izp, size_t ib2, size_t iq, size_t izq, size_t ib1)
{
    return iq
           + izq   * n_radial
           + ib1   * n_radial      * n_angular_z
           + ip    * n_angular_z   * n_radial      * n_basis_M1
           + izp   * n_radial      * n_angular_z   * n_radial      * n_basis_M1
           + ib2   * n_radial      * n_angular_z   * n_basis_M1    * n_radial      * n_angular_z;
}

int         Tetraquark::SI_K23(size_t ip, size_t izp, size_t ib2, size_t iq, size_t izq, size_t ib3)
{
    return iq
           + izq   * n_radial
           + ib3   * n_radial      * n_angular_z
           + ip    * n_angular_z   * n_radial      * n_basis_DQ
           + izp   * n_radial      * n_angular_z   * n_radial      * n_basis_DQ
           + ib2   * n_radial      * n_angular_z   * n_basis_DQ    * n_radial      * n_angular_z;
}

int         Tetraquark::SI_K24(size_t ip, size_t izp, size_t ib2, size_t iq, size_t izq, size_t ib4)
{
    return iq
           + izq   * n_radial
           + ib4   * n_radial      * n_angular_z
           + ip    * n_angular_z   * n_radial      * n_basis_QQ
           + izp   * n_radial      * n_angular_z   * n_basis_QQ    * n_radial
           + ib2   * n_radial      * n_angular_z   * n_basis_QQ    * n_radial      * n_angular_z;
}

int         Tetraquark::SI_K31(size_t ip, size_t izp, size_t ib3, size_t iq, size_t izq, size_t ib1)
{
    return iq
           + izq   * n_radial
           + ib1   * n_radial      * n_angular_z
           + ip    * n_angular_z   * n_radial      * n_basis_M1
           + izp   * n_radial      * n_angular_z   * n_radial      * n_basis_M1
           + ib3   * n_radial      * n_angular_z   * n_basis_M1    * n_radial      * n_angular_z;
}

int         Tetraquark::SI_K32(size_t ip, size_t izp, size_t ib3, size_t iq, size_t izq, size_t ib2)
{
    return iq
           + izq   * n_radial
           + ib2   * n_radial      * n_angular_z
           + ip    * n_angular_z   * n_radial      * n_basis_M2
           + izp   * n_radial      * n_angular_z   * n_radial      * n_basis_M2
           + ib3   * n_radial      * n_angular_z   * n_basis_M2    * n_radial      * n_angular_z;
}

int         Tetraquark::SI_K34(size_t ip, size_t izp, size_t ib3, size_t iq, size_t izq, size_t ib4)
{
    return iq
           + izq   * n_radial
           + ib4   * n_radial      * n_angular_z
           + ip    * n_angular_z   * n_radial      * n_basis_QQ
           + izp   * n_radial      * n_angular_z   * n_basis_QQ    * n_radial
           + ib3   * n_radial      * n_angular_z   * n_basis_QQ    * n_radial      * n_angular_z;
}

int         Tetraquark::SI_K41(size_t ip, size_t izp, size_t ib4, size_t iq, size_t izq, size_t ib1)
{
    return iq
           + izq   * n_radial
           + ib1   * n_radial      * n_angular_z
           + ip    * n_angular_z   * n_radial      * n_basis_M1
           + izp   * n_radial      * n_angular_z   * n_basis_M1    * n_radial
           + ib4   * n_radial      * n_angular_z   * n_basis_M1    * n_radial      * n_angular_z;
}

int         Tetraquark::SI_K42(size_t ip, size_t izp, size_t ib4, size_t iq, size_t izq, size_t ib2)
{
    return iq
           + izq   * n_radial
           + ib2   * n_radial      * n_angular_z
           + ip    * n_angular_z   * n_radial      * n_basis_M2
           + izp   * n_radial      * n_angular_z   * n_basis_M2    * n_radial
           + ib4   * n_radial      * n_angular_z   * n_basis_M2    * n_radial      * n_angular_z;
}

int         Tetraquark::SI_K43(size_t ip, size_t izp, size_t ib4, size_t iq, size_t izq, size_t ib3)
{
    return iq
           + izq   * n_radial
           + ib3   * n_radial      * n_angular_z
           + ip    * n_angular_z   * n_radial      * n_basis_DQ
           + izp   * n_radial      * n_angular_z   * n_basis_DQ    * n_radial
           + ib4   * n_radial      * n_angular_z   * n_basis_DQ    * n_radial      * n_angular_z;
}

int         Tetraquark::SI_K44(size_t ip, size_t izp, size_t ib4, size_t iq, size_t izq, size_t ib3)
{
    return iq
           + izq   * n_radial
           + ib3   * n_radial      * n_angular_z
           + ip    * n_angular_z   * n_radial      * n_basis_QQ
           + izp   * n_radial      * n_angular_z   * n_basis_QQ    * n_radial
           + ib4   * n_radial      * n_angular_z   * n_basis_QQ    * n_radial      * n_angular_z;
}

int         Tetraquark::SI_K_01(size_t ip, size_t izp, size_t ib1, size_t iq, size_t izq, size_t ib2)
{
    return iq
           + izq   * n_radial
           + ib2   * n_radial  * n_angular_z
           + ip    * n_radial  * n_angular_z   * (n_basis_M1+n_basis_M2+n_basis_DQ)
           + izp   * n_radial  * n_angular_z   * (n_basis_M1+n_basis_M2+n_basis_DQ) * n_radial
           + ib1   * n_radial  * n_angular_z   * (n_basis_M1+n_basis_M2+n_basis_DQ) * n_radial  * n_angular_z;
}

int         Tetraquark::SI_K_02(size_t ip, size_t izp, size_t ib1, size_t iq, size_t izq, size_t ib3)
{
    return iq
           + izq   * n_radial
           + ib3   * n_radial  * n_angular_z
           + ip    * n_radial  * n_angular_z   * (n_basis_M1+n_basis_M2+n_basis_QQ)
           + izp   * n_radial  * n_angular_z   * (n_basis_M1+n_basis_M2+n_basis_QQ) * n_radial
           + ib1   * n_radial  * n_angular_z   * (n_basis_M1+n_basis_M2+n_basis_QQ)  * n_radial  * n_angular_z;
}

int         Tetraquark::SI_K_03(size_t ip, size_t izp, size_t ib2, size_t iq, size_t izq, size_t ib3)
{
    return iq
           + izq   * n_radial
           + ib3   * n_radial  * n_angular_z
           + ip    * n_radial  * n_angular_z   * (n_basis_M1+n_basis_DQ+n_basis_QQ)
           + izp   * n_radial  * n_angular_z   * (n_basis_M1+n_basis_DQ+n_basis_QQ) * n_radial
           + ib2   * n_radial  * n_angular_z   * (n_basis_M1+n_basis_DQ+n_basis_QQ) * n_radial  * n_angular_z;
}

int         Tetraquark::SI_K_04(size_t ip, size_t izp, size_t ib2, size_t iq, size_t izq, size_t ib3)
{
    return iq
           + izq   * n_radial
           + ib3   * n_radial  * n_angular_z
           + ip    * n_radial  * n_angular_z   * (n_basis_M2+n_basis_QQ+n_basis_DQ)
           + izp   * n_radial  * n_angular_z   * (n_basis_M2+n_basis_QQ+n_basis_DQ) * n_radial
           + ib2   * n_radial  * n_angular_z   * (n_basis_M2+n_basis_QQ+n_basis_DQ) * n_radial  * n_angular_z;
}

int         Tetraquark::SI_K_05(size_t ip, size_t izp, size_t ib2, size_t iq, size_t izq, size_t ib3)
{
    return iq
           + izq   * n_radial
           + ib3   * n_radial  * n_angular_z
           + ip    * n_radial  * n_angular_z   * (n_basis_M1+n_basis_M2)
           + izp   * n_radial  * n_angular_z   * (n_basis_M1+n_basis_M2)   * n_radial
           + ib2   * n_radial  * n_angular_z   * (n_basis_M1+n_basis_M2)   * n_radial  * n_angular_z;
}

int         Tetraquark::SI_K_06(size_t ip, size_t izp, size_t ib2, size_t iq, size_t izq, size_t ib3)
{
    return iq
           + izq   * n_radial
           + ib3   * n_radial  * n_angular_z
           + ip    * n_radial  * n_angular_z   * (n_basis_M1+n_basis_DQ)
           + izp   * n_radial  * n_angular_z   * (n_basis_M1+n_basis_DQ)   * n_radial
           + ib2   * n_radial  * n_angular_z   * (n_basis_M1+n_basis_DQ)   * n_radial  * n_angular_z;
}

int         Tetraquark::SI_K_07(size_t ip, size_t izp, size_t ib2, size_t iq, size_t izq, size_t ib3)
{
    return iq
           + izq   * n_radial
           + ib3   * n_radial  * n_angular_z
           + ip    * n_radial  * n_angular_z   * (n_basis_M1+n_basis_QQ)
           + izp   * n_radial  * n_angular_z   * (n_basis_M1+n_basis_QQ)   * n_radial
           + ib2   * n_radial  * n_angular_z   * (n_basis_M1+n_basis_QQ)   * n_radial  * n_angular_z;
}

int         Tetraquark::SI_K_08(size_t ip, size_t izp, size_t ib2, size_t iq, size_t izq, size_t ib3)
{
    return iq
           + izq   * n_radial
           + ib3   * n_radial  * n_angular_z
           + ip    * n_radial  * n_angular_z   * (n_basis_M2+n_basis_DQ)
           + izp   * n_radial  * n_angular_z   * (n_basis_M2+n_basis_DQ)   * n_radial
           + ib2   * n_radial  * n_angular_z   * (n_basis_M2+n_basis_DQ)   * n_radial  * n_angular_z;
}

int         Tetraquark::SI_K_09(size_t ip, size_t izp, size_t ib2, size_t iq, size_t izq, size_t ib3)
{
    return iq
           + izq   * n_radial
           + ib3   * n_radial  * n_angular_z
           + ip    * n_radial  * n_angular_z   * (n_basis_M2+n_basis_QQ)
           + izp   * n_radial  * n_angular_z   * (n_basis_M2+n_basis_QQ)   * n_radial
           + ib2   * n_radial  * n_angular_z   * (n_basis_M2+n_basis_QQ)   * n_radial  * n_angular_z;
}

int         Tetraquark::SI_K_10(size_t ip, size_t izp, size_t ib2, size_t iq, size_t izq, size_t ib3)
{
    return iq
           + izq   * n_radial
           + ib3   * n_radial  * n_angular_z
           + ip    * n_radial  * n_angular_z   * (n_basis_DQ+n_basis_QQ)
           + izp   * n_radial  * n_angular_z   * (n_basis_DQ+n_basis_QQ)   * n_radial
           + ib2   * n_radial  * n_angular_z   * (n_basis_DQ+n_basis_QQ)   * n_radial  * n_angular_z;
}

int         Tetraquark::SI_K_11(size_t ip, size_t izp, size_t ib2, size_t iq, size_t izq, size_t ib3)
{
    return iq
           + izq   * n_radial
           + ib3   * n_radial  * n_angular_z
           + ip    * n_radial  * n_angular_z   * n_basis_QQ
           + izp   * n_radial  * n_angular_z   * n_basis_QQ   * n_radial
           + ib2   * n_radial  * n_angular_z   * n_basis_QQ   * n_radial  * n_angular_z;
}

int         Tetraquark::SI_K(size_t ip, size_t izp, size_t ib1, size_t iq, size_t izq, size_t ib2)
{
    return iq
           + izq   * n_radial
           + ib2   * n_radial  * n_angular_z
           + ip    * n_radial  * n_angular_z   * (n_basis_M1+n_basis_M2+n_basis_DQ+n_basis_QQ)
           + izp   * n_radial  * n_angular_z   * (n_basis_M1+n_basis_M2+n_basis_DQ+n_basis_QQ) * n_radial
           + ib1   * n_radial  * n_angular_z   * (n_basis_M1+n_basis_M2+n_basis_DQ+n_basis_QQ)
             * n_radial  * n_angular_z;
}

int         Tetraquark::SI_F(size_t ib, size_t ip, size_t izp)
{
    return ip
           + izp   * n_radial
           + ib    * n_radial  * n_angular_z;
}
