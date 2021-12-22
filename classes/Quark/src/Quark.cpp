
/*
FILENAME: Quark.cpp
AUTHOR:   Nico Santowsky
EMAIL:    physics@nsanto.de
DATE:     2021-12-21
LICENSE:  Apache License 2.0
*/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <complex>
#include <cmath>
#include <ctime>
#include "../../../routines/interpolation/src/interpolation.hpp"
#include "./include/Quark.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::ofstream;

using namespace dysonUtils;

// publics

Quark::Quark()
{
    // standard values
    Z2                  =   0.982;
    Zm                  =   0.690;
    mass_               =   0.0038;
    n_radial            =   60;
    n_angular           =   16;
    upper_bound_radial  =   1.e+6;
    lower_bound_radial  =   1.e-6;
    no_shells           =   0;

    // standard parameters for Maris Tandy interaction
    mu_mu               =   19. * 19.;
    pauliVillars        =   1.e+12;
    lambdaMarisTandy    =   0.72;
    etaMarisTandy       =   1.8;
    globalMT            =   1.;

    areThereShells      =   false;
    isThereReal         =   false;
    areThereGrids       =   false;
    interpolatorReady   =   false;

    cout << "quark created." << endl;
}


Quark::~Quark()
{
    cout << "quark destroyed." << endl;
}


void Quark::interactive_numerics()
{
    cout    << "\n# radial points?" << endl;
    cin     >> n_radial;
    cout    << "lower cutoff radial?" << endl;
    cin     >> lower_bound_radial;
    cout    << "upper cutoff radial?" << endl;
    cin     >> upper_bound_radial;
    cout    << "# angular points?" << endl;
    cin     >> n_angular;
    cout    << "thank you!\n" << endl;
}


void Quark::printNumerics() {
    bool choice;
    cout    << "print quark numerics as cout [0] oder as ofstream [1]?" << endl;
    cin     >> choice;
    if (choice)
    {
        ofstream write;
        write.open("quark_numerics.txt");

        write   << "n_radial           = " << n_radial << "\n"
                << "n_angular          = " << n_angular << "\n"
                << "upper_bound_radial = " << upper_bound_radial << "\n"
                << "lower_bound_radial = " << lower_bound_radial << "\n" << endl;

        write.close();
    }
    else if (!choice)
    {
        cout    << "n_radial           = " << n_radial << "\n"
                << "n_angular          = " << n_angular << "\n"
                << "upper_bound_radial = " << upper_bound_radial << "\n"
                << "lower_bound_radial = " << lower_bound_radial << "\n" << endl;
    }
}


double Quark::setMass(double input_mass) {
    if( isThereReal ) {
        cout << "warning in function " << __func__
             << " :: quark already calculated; mass could not be changed." << endl;
    }
    else mass_ = input_mass;
    return mass_;
}


double Quark::getMass() {
    return mass_;
}


cdouble Quark::getZ2() {
    return Z2;
}


void Quark::setNumerics( std::string identifier, double value ) {
    if(isThereReal) {
        cerr << "error in function " << __func__
             << " :: a real quark is already calculated. All values are unchangeable!" << endl;
        return;
    }
    if      (identifier == "n_radial")              n_radial            = static_cast<size_t> (value);
    else if (identifier == "n_angular")             n_angular           = static_cast<size_t> (value);
    else if (identifier == "upper_bound_radial")    upper_bound_radial  = value;
    else if (identifier == "lower_bound_radial")    lower_bound_radial  = value;
    else cerr << "error in function " << __func__ << " :: invalid identifier!" << endl;
}


void Quark::setInteraction(std::string identifier, double value) {
    if(isThereReal) {
        cerr << "error in function " << __func__
             << " :: a real quark is already calculated. All values are unchangeable!" << endl;
        return;
    }
    if      (identifier == "eta")       etaMarisTandy       = value;
    else if (identifier == "lambda")    lambdaMarisTandy    = value;
    else if (identifier == "global")    globalMT            = value;
}


void Quark::setRenormalizationPoint(double value) {
    if(isThereReal) {
        cerr << "error in function " << __func__
             << " :: a real quark is already calculated. All values are unchangeable!" << endl;
        return;
    }
    mu_mu = value;
}


void Quark::generateReal() {

    if( isThereReal ) {
        cout << "error in function " << __func__
             << " :: you already have a real quark. Overriding is forbidden." << endl;
        return;
    }

    A_vector.resize(n_radial, 1.);                  // Vectors where the dressing functions A
    B_vector.resize(n_radial, 1.);                  // and B are stored within this method

    precalc_grids();                                // precalculate the integration grids + weights

    vec<cdouble>    A_compare(n_radial),
                    B_compare(n_radial);
                                                    // grids to compare (in order to prove convergence)

    Z2  = 0.982;                                    // Initial values for Z2
    Zm  = 0.690;                                    // and Zm

    cdouble     quark_mass_bare;                    // bare quark mass for safe solution even in the chiral limit

    auto startTime = time(NULL);                    // counter in order to compute timeout

    while( true )                                   // infinite loop until convergence criterion is satisfied
    {
                                                    // overwrite A_compare and B_compare with cont after it step
        for (unsigned int i=0; i<n_radial; ++i) {
            A_compare[i] = A_vector[i];
            B_compare[i] = B_vector[i];
        }

        for (unsigned int i=0; i<n_radial; ++i) {     // loop to iterate every element of A and B.
            cdouble p_p =   loop.grid_radial[i];    // current p^2

            A_vector[i]    = Z2 + Z2 * Z2 * selfEnergy("A", p_p);

            B_vector[i]    = Z2 * Zm * mass_ + Z2 * Z2 * selfEnergy("B", p_p);
        }

        Z2                  =   1. - Z2 * Z2 * selfEnergy("A", mu_mu) ;      // determine renormalization constants
        quark_mass_bare     =   mass_ / Z2 - Z2 * selfEnergy("B", mu_mu);     // and the bare quark mass
        quark_mass_bare     =   mass_ / Z2 - Z2 * selfEnergy("B", mu_mu);     // and the bare quark mass
        Zm                  =   quark_mass_bare / mass_;

        double deviation = 0.;                      // We calculate the max deviation between the current and previous
                                                    // grid in order to check convergence.
        for(unsigned int i=0 ; i<n_radial ; i++) {
            if( deviation < abs(A_vector[i] - A_compare[i]) ) {
                deviation = abs(A_vector[i] - A_compare[i] );
            }
        }

        if(deviation < 1.e-6) {                     // if the deviation is smaller than 10^-6 we set the flag that
            isThereReal = true;                     // we calculated the real grid and end the method.
            return;
        }
        else if (time(nullptr) - startTime >= 60) { // timeout if that routine lasts more than 60 seconds
            cerr << "error :: timeout while generating the real grid." << endl;
        }
    }
}


void Quark::generateReal_shifted() {
    precalc_grids();

    vec<cdouble> A, B, A_compare, B_compare;
    A_vector.resize(n_radial, 1.);
    B_vector.resize(n_radial, 1.);

    bool converge  = false;
    while(!converge)
    {
        A_compare = A_vector;
        B_compare = B_vector;

        cdouble Sigma_A_mu2 = self_energy_shifted("A", mu_mu),
                Sigma_B_mu2 = self_energy_shifted("B", mu_mu);

        for(unsigned int ip=0; ip<n_radial; ++ip)
        {
            double  p_p = loop.grid_radial[ip];

            A_vector[ip]   = 1. + 4. / 3. * Z2 * Z2
                                  * (self_energy_shifted("A", p_p) - Sigma_A_mu2);
            B_vector[ip]   = mass_ + 4. / 3. * Z2 * Z2
                                    * (self_energy_shifted("B", p_p) - Sigma_B_mu2);
        }

        // determine renormalization constants.
        cdouble
            quark_mass_bare_q   =   mass_/Z2 - Z2 * self_energy_shifted("B", mu_mu);
            Z2                  =   1. - Z2*Z2 * self_energy_shifted("A", mu_mu);
            Zm                  =   quark_mass_bare_q/mass_;

        double max_deviation = 0.;
        for(unsigned int i=0; i<n_radial; ++i)
        {
            double probeA = std::abs(A_vector[i] - A_compare[i]);
            if(probeA > max_deviation) max_deviation = probeA;

            double probeB = std::abs(B_vector[i] - B_compare[i]);
            if(probeB > max_deviation) max_deviation = probeB;
        }

        if(max_deviation < 1.e-4) converge=true;
    }
}


void Quark::printReal(bool verbose) {

    if( !isThereReal ) {                            // If there is no grid, it prints an error, but proceeds.
        cerr << "error in function "
             << __func__
             << " :: no real grid. Did you run generateReal()?"
             << endl;
        return;
    }

    std::ofstream write;
    write.open("quark_dressing.dat");               // open output file "quark_dressing.dat"

    for (unsigned int i=0; i<n_radial ; i++) {      // print p^2, M, A and B into the output file.
        write << std::scientific
              << loop.grid_radial[i]                     << "\t"
              << B_vector[i].real() / A_vector[i].real() << "\t"
              << A_vector[i].real()                      << "\t"
              << B_vector[i].real()                      << std::endl;
    }

    write.close();                                  // close the file

    // print the renormalization constants and some info.
    if(verbose) {
        std::cout << "\n\n";
        std::cout << "Z2 = " << real(Z2)                                    << std::endl;
        std::cout << "Zm = " << real(Zm)                                    << std::endl;
        std::cout << "data [p^2 , M , A , B] in file quark_dressing.dat\n"  << std::endl;
    }
}


inline void Quark::print_interaction() const {

    bool as_output;
    cout << "print quark interaction as cout [0] oder as ofstream [1]?" << endl;
    cin  >> as_output;

    if (as_output) {
        ofstream write;
        write.open("./interaction.txt");

        write << "MT interaction with\n\n"
              << "eta             = " << etaMarisTandy << "\n"
              << "Lambda          = " << lambdaMarisTandy << "\n"
              << "global          = " << globalMT << "\n"
              << "pauli_villars   = " << pauliVillars << "\n"
              << endl;

        write.close();
    }
    else if (!as_output)
    {
        cout << "MT interaction with\n\n"
             << "eta             = " << etaMarisTandy << "\n"
             << "Lambda          = " << lambdaMarisTandy << "\n"
             << "pauli_villars   = " << pauliVillars << "\n"
              << endl;
    }
}


cdouble Quark::naiveIteration(string id, cdouble p_p) {
    if( !isThereReal ) {
        cerr << "error in function "
             << __func__
             << " :: no real grid. Did you run generateReal()?"
             << endl;
        return 0.;
    }
    if( id == "A" ) {
        return Z2 + Z2*Z2 * selfEnergy("A", p_p);
    }
    if( id == "B" ) {
        return Z2*mass_*Zm + Z2*Z2 * selfEnergy("B", p_p);
    }
    if( id == "sv" ) {
        cdouble A_value = naiveIteration("A", p_p),
                B_value = naiveIteration("B", p_p);

        return  A_value / (p_p * A_value * A_value + B_value * B_value);
    }
    if( id == "ss" ) {
        cdouble A_value = naiveIteration("A", p_p),
                B_value = naiveIteration("B", p_p);

        return  B_value / (p_p * A_value * A_value + B_value * B_value);
    }
    cerr << "error in function " << __func__ << " :: invalid identifier" << endl;
    return 0.;

}


void Quark::interpolator(vec<cdouble>& fgrid_vector, vec<cdouble>& fgrid_scalar)
{
    auto    n_x     = quark_int_gridsize,
            n_y     = quark_int_gridsize;

    double  x_step  = (std::log(1.e+3)-std::log(1.e-3)) / ((double)n_x-1.),
            y_step  = (std::log(1.e+3)-std::log(1.e-3)) / ((double)n_y-1.);

    xgrid_quark.clear();
    ygrid_quark.clear();

    for (unsigned int i=0; i<n_x; ++i) {
        xgrid_quark.push_back(-std::exp(std::log(1.e+3)-i*x_step));
    }
    xgrid_quark.push_back(1.e-10);
    for (unsigned int i=0; i<n_x; ++i) {
        xgrid_quark.push_back(std::exp(std::log(1.e-3)+i*x_step));
    }
    for (unsigned int i=0; i<n_y; ++i) {
        ygrid_quark.push_back(-std::exp(std::log(1.e+3)-i*y_step));
    }
    ygrid_quark.push_back(1.e-10);
    for (unsigned int i=0; i<n_y; ++i) {
        ygrid_quark.push_back(std::exp(std::log(1.e-3)+i*y_step));
    }

    // vector dressing function:

    fgrid_vector.resize(xgrid_quark.size()*ygrid_quark.size());

    #pragma omp parallel for
    for(unsigned int i=0; i<xgrid_quark.size(); ++i) {
        for(unsigned int j=0; j<ygrid_quark.size(); ++j) {
            fgrid_vector[i+xgrid_quark.size()*j] = naiveIteration("sv", xgrid_quark[i] + I * ygrid_quark[j]);
        }
    }

    for(unsigned int i=0; i<xgrid_quark.size(); ++i) {
        for(unsigned int j=0; j<ygrid_quark.size(); ++j) {
            cdouble z = fgrid_vector[i+xgrid_quark.size()*j];
            if(std::isnan(real(z)) || std::isnan(imag(z))) fgrid_vector[i+xgrid_quark.size()*j] = 0.;
        }
    }

        // scalar dressing function:

        fgrid_scalar.resize(xgrid_quark.size()*ygrid_quark.size());

    #pragma omp parallel for
    for(unsigned int i=0; i<xgrid_quark.size(); ++i) {
        for(unsigned int j=0; j<ygrid_quark.size(); ++j) {
            fgrid_scalar[i+xgrid_quark.size()*j] = naiveIteration("ss", xgrid_quark[i] + I * ygrid_quark[j]);
        }
    }

    for(unsigned int i=0; i<xgrid_quark.size(); i++) {
        for(unsigned int j=0; j<ygrid_quark.size(); j++) {
            cdouble z   =   fgrid_scalar[i+xgrid_quark.size()*j];
            if(std::isnan(real(z)) || std::isnan(imag(z))) {fgrid_scalar[i+xgrid_quark.size()*j] = 0.;}
        }
    }

    interpolatorReady = true;
}


cdouble Quark::sigmav_int(cdouble p_p, vec<cdouble> fgrid_vector) {
    double  x = real(p_p),
            y = imag(p_p);

    return numerics::interpolation::cubic_hermite_2d(xgrid_quark, ygrid_quark, fgrid_vector, x, y);
}


cdouble Quark::sigmas_int(cdouble p_p, vec<cdouble> fgrid_scalar) {
    double  x = real(p_p),
            y = imag(p_p);

    return numerics::interpolation::cubic_hermite_2d(xgrid_quark, ygrid_quark, fgrid_scalar, x, y);
}


void Quark::generateShells(double upper_bound_Dsq, int no_shells_)
{
    if (!isThereReal) {                                             // Check if we have a real quark already.
        cerr << "error in " << __func__ << " :: No real quark! Did you run generateReal()?" << endl;
        return;
    }
    if (areThereShells) {                                           // Check if we have a shell quark already.
        cerr << "error in " << __func__ << " :: We already have shell quarks! Did you already run generateShells()?"
             << endl;
        return;
    }
    this->no_shells       = no_shells_;

    shell_apex_vector.clear();
    shell_apex_vector.push_back(0.);

    for (unsigned int i_sh = 1; i_sh <= no_shells; ++i_sh) {        // iterate on every shell

        // define apex of every intermediate shell proportional to i_sh^3
        double Dsq  = upper_bound_Dsq * i_sh * i_sh * i_sh / no_shells / no_shells / no_shells;
        shell_apex_vector.push_back(Dsq);

        for(unsigned int i_df = 0; i_df < n_radial; ++i_df)         // initialize every shell with its predecessor.
        {
            A_vector.push_back(A_vector[i_df + (i_sh - 1) * n_radial]);
            B_vector.push_back(B_vector[i_df + (i_sh - 1) * n_radial]);
        }

        while( true ) {                                             // infinite loop until convergence for a particular
            vec<cdouble> grid;                                      // shell is reached.

            for(unsigned int j = 0; j < n_radial; ++j) {            // set up shell grid for the current shell
                grid.push_back(
                        loop.grid_radial[j] - loop.grid_radial[0] - Dsq
                        + I * 2.*std::sqrt(Dsq)*std::sqrt(loop.grid_radial[j] - loop.grid_radial[0] )
                        );
            }

            // do the same as in the generateReal() method

            vec<cdouble>    A_compare = A_vector,
                            B_compare = B_vector;

            cdouble Sigma_A_mu2 = self_energy_shifted("A", mu_mu),
                    Sigma_B_mu2 = self_energy_shifted("B", mu_mu);

            for(unsigned int ip=0; ip<n_radial; ++ip){
                cdouble p_p  = grid[ip];

                A_vector[ip + i_sh * n_radial] =
                        1.    + 4./3.*Z2*Z2 * (self_energy_cmplx("A", p_p) - Sigma_A_mu2);

                B_vector[ip + i_sh * n_radial] =
                        mass_  + 4./3.*Z2*Z2 * (self_energy_cmplx("B", p_p) - Sigma_B_mu2);
            }

            double deviation = 0.;

            for(unsigned int ip=0; ip<n_radial; ++ip)
            {
                double probeA = std::abs(A_vector[ip + i_sh * n_radial] - A_compare[ip + i_sh * n_radial]);
                if(probeA > deviation) deviation = probeA;

                double probeB = std::abs(B_vector[ip + i_sh * n_radial] - B_compare[ip + i_sh * n_radial]);
                if(probeB > deviation) deviation = probeB;
            }

            if(deviation < 1.e-4) break;                    // break if convergence is reached

        }

        int pc = std::floor(100. * (float)i_sh / (float)no_shells); // how much percent of the iteration do we have?

        std::cout   << std::setprecision(4)                         // print out status and refresh
                    << "\rshell iteration progress: "
                    << pc << " %   "
                    << std::flush;

    }
    std::cout << std::setprecision(7) << std::endl;

    areThereShells = true;                                          // set the flag that we have shells now
}


void Quark::printShells() {
    if( !areThereShells ) {
        cerr    << "error in function "
                << __func__
                << " :: no shells to print. Did you execute generateShells()?"
                << endl;
        return;
    }
    ofstream write;
    write.open("shell_quark.txt");
    for (unsigned int i_sh=0; i_sh<=no_shells; ++i_sh)
    {
        for (unsigned int ip=0; ip<n_radial; ++ip)
        {
            cdouble Dsq =   shell_apex_vector[i_sh],
                    p_p =   loop.grid_radial[ip] -loop.grid_radial[0] - Dsq
                            + I * 2.*std::sqrt(Dsq)*std::sqrt(loop.grid_radial[ip] - loop.grid_radial[0]),
                    A   =   A_vector[ip + i_sh * n_radial],
                    B   =   B_vector[ip + i_sh * n_radial];


            write << std::scientific
                  << std::real(p_p)                         << "\t"
                  << std::imag(p_p)                         << "\t"
                  << std::real(A)                           << "\t"
                  << std::imag(A)                           << "\t"
                  << std::real(B)                           << "\t"
                  << std::imag(B)                           << "\t"
                  << std::real(A / (p_p * A * A + B * B))   << "\t"
                  << std::imag(A / (p_p * A * A + B * B))   << "\t"
                  << std::real(B / (p_p * A * A + B * B))   << "\t"
                  << std::imag(B / (p_p * A * A + B * B))   << endl;
            }

        write << endl;
    }
    write.close();
}


cdouble Quark::interpolateShell(std::string dressingFunction, cdouble p_p) {

    if( !areThereShells ) {
      cerr << "error in function " << __func__ << " :: there are no shells!" << endl;
      return 0.;
    }
    double  apex  = 0.5 * (std::abs(p_p) - std::real(p_p)),
            x     = std::real(p_p) + apex;

    vec<double> grid_radial_beginning_by_zero(loop.grid_radial.size());

    for (unsigned int i=0; i<loop.grid_radial.size(); i++) {
        grid_radial_beginning_by_zero[i] = loop.grid_radial[i] - loop.grid_radial[0];   // shift by minus epsilon^2
    }                                                                                   // to catch the zero
                                                                                        // otherwise we will have
    if (dressingFunction == "A")                                                        // inaccurate results for
    {                                                                                   // negative real values.
        if (std::imag(p_p) >= 0) {
            return numerics::interpolation::linear_2d(
                    grid_radial_beginning_by_zero, shell_apex_vector, A_vector, x, apex);
        }
        else {
            return std::conj(numerics::interpolation::linear_2d(
                    grid_radial_beginning_by_zero, shell_apex_vector, A_vector, x, apex));
        }
    }
    if (dressingFunction == "B")
    {
        if (std::imag(p_p) >= 0) {
            return numerics::interpolation::linear_2d(
                    grid_radial_beginning_by_zero, shell_apex_vector, B_vector, x, apex);
        }
        else {
            return std::conj(numerics::interpolation::linear_2d(
                    grid_radial_beginning_by_zero, shell_apex_vector, B_vector, x, apex));
        }
    }
    else if (dressingFunction == "sv")
    {
        cdouble A, B;
        if (std::imag(p_p) >= 0)  {
            A  =  numerics::interpolation::linear_2d(
                    grid_radial_beginning_by_zero, shell_apex_vector, A_vector, x, apex);
            B  =  numerics::interpolation::linear_2d(
                    grid_radial_beginning_by_zero, shell_apex_vector, B_vector, x, apex);
        }
        else {
            A  =  std::conj(numerics::interpolation::linear_2d(
                    grid_radial_beginning_by_zero, shell_apex_vector, A_vector, x, apex));
            B  =  std::conj(numerics::interpolation::linear_2d(
                    grid_radial_beginning_by_zero, shell_apex_vector, B_vector, x, apex));
        }
        return A / (p_p * A * A + B * B);
    }
    if (dressingFunction == "ss")
    {
        cdouble A, B;
        if (std::imag(p_p) >= 0) {
            A  =  numerics::interpolation::linear_2d(
                    grid_radial_beginning_by_zero, shell_apex_vector, A_vector, x, apex);
            B  =  numerics::interpolation::linear_2d(
                    grid_radial_beginning_by_zero, shell_apex_vector, B_vector, x, apex);
        }
        else {
            A  =  std::conj(numerics::interpolation::linear_2d(
                    grid_radial_beginning_by_zero, shell_apex_vector, A_vector, x, apex));
            B  =  std::conj(numerics::interpolation::linear_2d(
                    grid_radial_beginning_by_zero, shell_apex_vector, B_vector, x, apex));
        }
        return B / (p_p * A * A + B * B);
    }

    return 0.;
}


/******** privates ********/


cdouble Quark::selfEnergy(string dressingFunction, cdouble p_p) {

    if( dressingFunction == "A" ){
        cdouble sum         = 0.,
                prefactor   = 1.0 / (6.0 * p_p * M_PI*M_PI*M_PI);

        #pragma omp parallel for
        for(unsigned int iq=0; iq<n_radial; ++iq)
        {
            double q_q       =   loop.grid_radial[iq];

            for(unsigned int iz=0; iz<n_angular; ++iz)
            {
                double  z   =   loop.grid_z[iz];

                cdouble k_p         =   p_p - std::sqrt(p_p)*std::sqrt(q_q)*z,
                        k_q         =   std::sqrt(p_p)*std::sqrt(q_q)*z - q_q,
                        k_k         =   p_p - 2.0*std::sqrt(p_p)*std::sqrt(q_q)*z + q_q,
                        p_q         =   std::sqrt(p_p)*std::sqrt(q_q)*z,
                        sigmav      =   A_vector[iq] / (q_q * A_vector[iq] * A_vector[iq] + B_vector[iq] * B_vector[iq]),
                        integrand   =   G_mt(k_k) * ( ( 2.0 * k_p * k_q / k_k ) + p_q ) * sigmav ;

                #pragma omp critical
                {
                    sum += integrand * loop.weights_z[iz] * loop.weights_radial[iq] * q_q * std::sqrt(1. - z * z);
                }

            }
        }

        return prefactor * sum;
    }
    else if( dressingFunction == "B" ) {
        cdouble sum         = 0.,
                prefactor   = 1.0 / (2.0*M_PI*M_PI*M_PI);

        #pragma omp parallel for
        for (unsigned int iq=0 ; iq<n_radial ; iq++)
        {
            double q_q =   loop.grid_radial[iq];

            for (unsigned int iz=0 ; iz<n_angular ; iz++)
            {
                double  z   =   loop.grid_z[iz];

                cdouble k_k         =   p_p - 2.0*std::sqrt(p_p)*std::sqrt(q_q)*z + q_q,
                        sigmas      =   B_vector[iq] / (q_q * A_vector[iq] * A_vector[iq] + B_vector[iq] * B_vector[iq]),
                        integrand   =   G_mt(k_k) * sigmas;

                #pragma omp critical
                {
                    sum += integrand * loop.weights_z[iz] * loop.weights_radial[iq] * q_q * std::sqrt(1. - z * z);
                }

            }
        }

        return prefactor * sum;
    }
    else {
        cerr << "error in function " << __func__ << " :: no valid identifier!" << endl;
        return 0.;
    }
}


cdouble Quark::self_energy_shifted(std::string dressingFunction, cdouble p_p) {
    if (dressingFunction == "A") {
        double
                prefactor   = 4. * M_PI / (16. * M_PI * M_PI * M_PI * M_PI);
        cdouble
                sum         = 0.;

        #pragma omp parallel for
        for (unsigned int ik = 0; ik < n_radial; ik++)
        {
            double  k_k     = loop.grid_radial[ik],
                    mt_G    = std::real(G_mt(k_k));

            for (unsigned int izk = 0; izk < n_angular; izk++)
            {
                cdouble zk = loop.grid_z[izk],
                        k_p = std::sqrt(p_p) * std::sqrt(k_k) * zk,
                        q_q = p_p + k_k + 2. * k_p,
                        wj  = loop.weights_radial[ik] * loop.weights_z[izk] * k_k / 2. * std::sqrt(1. - zk*zk);

                cdouble A   = numerics::interpolation::linear_1d(
                        loop.grid_radial_log, A_vector, log(real(q_q))),
                        B   = numerics::interpolation::linear_1d(
                        loop.grid_radial_log, B_vector, log(real(q_q))),
                        sv  = A / (q_q * A * A + B * B);
                #pragma omp critical
                {
                    sum += wj * mt_G * sv * (2. * k_p * k_p + k_k * (3. * k_p + p_p)) / (p_p * k_k);
                }
            }
        }
        return prefactor * sum;
    }

    if (dressingFunction == "B") {
        cdouble prefactor   = 4. * M_PI / (16. * M_PI * M_PI * M_PI * M_PI),
                sum         = 0.;

        #pragma omp parallel for
        for (unsigned int ik = 0; ik < n_radial; ik++) {
            double  k_k     =   loop.grid_radial[ik],
                    mt_G    =   std::real(G_mt(k_k));

            for (unsigned int izk = 0; izk < n_angular; izk++) {
                cdouble zk  = loop.grid_z[izk],
                        k_p = std::sqrt(p_p) * std::sqrt(k_k) * zk,
                        q_q = p_p + k_k + 2. * k_p,
                        wj  = loop.weights_radial[ik] * loop.weights_z[izk] * k_k / 2. * sqrt(1.-zk*zk);

                cdouble A   = numerics::interpolation::linear_1d(
                        loop.grid_radial_log, A_vector, log(real(q_q))),
                        B   = numerics::interpolation::linear_1d(
                                loop.grid_radial_log, B_vector, log(real(q_q))),
                        ss  = B / (q_q * A * A + B * B);

        #pragma omp critical
                {
                    sum += wj * 3. * mt_G * ss;
                }
            }
        }
        return prefactor * sum;
    }

    return 0.;
}


cdouble Quark::self_energy_cmplx(std::string dressingFunction, cdouble p_p)
{
    if (dressingFunction == "A")
    {
        double
                prefactor   = 4.*M_PI / (16.*M_PI*M_PI*M_PI*M_PI);
        cdouble
                sum         = 0.;

        #pragma omp parallel for
        for(unsigned int ik=0; ik<n_radial; ik++){
            double
                    k_k     =   loop.grid_radial[ik],
                    mt_G    =   std::real(G_mt(k_k));

            for(unsigned int izk=0; izk<n_angular; izk++){

                cdouble
                        zk    = loop.grid_z[izk],
                        k_p   = std::sqrt(p_p)*std::sqrt(k_k)*zk,
                        q_q   = p_p + k_k + 2.*k_p,
                        wj    = loop.weights_radial[ik]*loop.weights_z[izk]*k_k/2.*std::sqrt(1.-zk*zk);

                double
                        apex  = 0.5*(std::abs(q_q)-std::real(q_q)),

                        x     = std::real(q_q)+apex;
                vec<double> shpr(shell_apex_vector.size());

                for(unsigned int i=0; i < shell_apex_vector.size(); i++){ shpr[i]=std::real(shell_apex_vector[i]);}

                cdouble
                    A  = numerics::interpolation::linear_2d(
                            loop.grid_radial_log, shpr, A_vector, log(x), apex),
                    B  = numerics::interpolation::linear_2d(
                            loop.grid_radial_log, shpr, B_vector, log(x), apex);

                if(imag(q_q) < 0)
                {
                    A  = std::conj(A);
                    B  = std::conj(B);
                }

                cdouble sv    = A / (q_q * A * A + B * B);

            #pragma omp critical
                {
                    sum   += wj * mt_G * sv * (2. * k_p * k_p + k_k * (3. * k_p + p_p)) / (p_p * k_k);
                }
            }
        }
        return prefactor * sum;
    }

    if (dressingFunction == "B")
    {
        cdouble
                prefactor   = 4. * M_PI / (16. * M_PI*M_PI*M_PI*M_PI),
                sum         = 0.;

        #pragma omp parallel for
        for(unsigned int ik=0; ik<n_radial; ik++){

            double
                    k_k     = loop.grid_radial[ik],
                    mt_G    = std::real(G_mt(k_k));

            for(unsigned int izk=0; izk<n_angular; izk++){

                cdouble
                        zk    = loop.grid_z[izk],
                        k_p   = std::sqrt(p_p)*std::sqrt(k_k)*zk,
                        q_q   = p_p + k_k + 2.*k_p,
                        wj    = loop.weights_radial[ik] * loop.weights_z[izk] * k_k/2. * std::sqrt(1.-zk*zk);

                double
                        apex  = 0.5 * (std::abs(q_q) - std::real(q_q)),
                        x     = std::real(q_q) + apex;

                vec<double> shpr(shell_apex_vector.size());

                for(unsigned int i=0; i < shell_apex_vector.size(); i++){ shpr[i]=std::real(shell_apex_vector[i]);}

                cdouble
                        A  = numerics::interpolation::linear_2d(
                                loop.grid_radial_log, shpr, A_vector, log(x), apex),
                        B  = numerics::interpolation::linear_2d(
                                loop.grid_radial_log, shpr, B_vector, log(x), apex);

                if(imag(q_q) < 0)
                {
                    A  = std::conj(A);
                    B  = std::conj(B);
                }

                cdouble ss    = B / (q_q * A * A + B * B);

                #pragma omp critical
                {
                    sum += wj * 3. * mt_G * ss;
                }
            }
        }
        return prefactor * sum;
    }

    return 0.;
}

// precalculates grids

void Quark::precalc_grids()
{
    if( areThereGrids ) {
        cout << "warning in function " << __func__ << " :: we already have a grid. Overriding..." << endl;
    }

    loop.n_radial           =   n_radial;
    loop.n_angular_z        =   n_angular;

    loop.upper_bound_radial =   upper_bound_radial;
    loop.lower_bound_radial =   lower_bound_radial;

    loop.generate();

    areThereGrids = true;
}

inline cdouble Quark::G_mt(cdouble k_k) const
{
    cdouble x = k_k/(lambdaMarisTandy * lambdaMarisTandy);

    double  gammaMarisTandy = 12.0 / (33.0 - 2.0 * 4.0),
            lambdaQCD       =   0.234;

    return 4. * M_PI
           * (globalMT * M_PI * std::pow(etaMarisTandy, 7) * std::pow(x, 2) * std::exp(-etaMarisTandy * etaMarisTandy * x)
              + 2. * M_PI * gammaMarisTandy * (1. - std::exp(-k_k))
                / (std::log(M_E*M_E - 1. + std::pow(1.+k_k/(lambdaQCD * lambdaQCD), 2))))
           * (pauliVillars / (pauliVillars + std::abs(k_k))) / k_k;

}

constexpr cdouble Quark::I;
