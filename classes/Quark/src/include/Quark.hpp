
/*
FILENAME: Quark.hpp
AUTHOR:   Nico Santowsky
EMAIL:    physics@nsanto.de
DATE:     2021-12-21
LICENSE:  Apache License 2.0
*/

#pragma once

#include <iostream>
#include <vector>
#include <complex>

template <typename T> using vec  =  std::vector<T>;

#include "../../../../routines/integration/src/integration.hpp"

typedef std::complex<double>    cdouble;

namespace dysonUtils {

    class Quark {

    public:

        // constructor
        Quark();

        // destructor
        ~Quark();

        // take numerics interactively from stdin
        inline void interactive_numerics();

        // print out the current numerics
        void printNumerics();

        // set quark mass at renormalization point
        double  setMass(double);

        // get quark mass (the reverse version of setMass(double))
        double  getMass();

        // get the current value of the renormalization constant Z2
        cdouble getZ2();

        // a method to set the numerics using an identifier string and a value
        // identifier: n_radial, n_angular, upper_bound_radial, lower_bound_radial
        void    setNumerics(std::string, double);

        // a method to set the interaction using an identifier string and a value
        // identifier: eta, lambda (usual MT parameter)
        // other identifier: global (a global prefactor in attached to IR part of the interaction)
        void    setInteraction(std::string, double);

        // self explanatory i guess
        void    setRenormalizationPoint(double);

        // Solve the quark on the real axis. One should always run this function, otherwise many
        // of the following methods are unavailable.
        void    generateReal();

        // This method is for generating the quark on the real axis by taking the gluon momentum as integration
        // momentum, but was only implemented for cross-checks (translation symmetry and so on...).
        void    generateReal_shifted();

        // With this method we could print out the quark dressing functions M = B/A, B and A into a file
        void    printReal(bool = false);

        // print the current interaction
        inline void print_interaction() const;

        // with this method you could naively reiterate the quark DSE in order to calculate the propagator
        // for an arbitrary point in the complex plane. If there is no grid, it prints an error, but proceeds.
        // The identifiers denote the associated dressing function.
        cdouble naiveIteration(string id, cdouble p_p);

        // The interpolator sets up a grid to interpolate on. Consider this method as deprecated,
        // it is very old.
        void    interpolator(vec<cdouble> &fgrid_vector, vec<cdouble> &fgrid_scalar);

        // interpolate sigma_v after interpolation
        cdouble sigmav_int(cdouble p_p, vec<cdouble> fgrid_vector);

        // interpolate sigma_s after interpolation
        cdouble sigmas_int(cdouble p_p, vec<cdouble> fgrid_scalar);

        // This function might be the most important one of this class as it provides safe access to the
        // quark propagator in the complex plane. It takes two arguments (upper_bound_Dsq : outer shell apex,
        // no_shells_ : number of shells)
        void    generateShells(double upper_bound_Dsq, int no_shells_);

        // printing the shell quark into a file called "shell_quark.txt"
        void    printShells();

        // interpolating on the shell using an identifier for the dressing function ("A", "B", "sv", "ss")
        cdouble interpolateShell(std::string dressing_function, cdouble p_p);


    private:

        // number of grid points
        unsigned int    n_radial, n_angular, no_shells;

        // UV and IR cutoff
        double          upper_bound_radial, lower_bound_radial;

        // renormalization point
        double          mu_mu;

        // renormalization constants
        cdouble         Z2, Zm;

        // mass at the renormalization point
        double          mass_;

        // MT interaction
        double          pauliVillars, etaMarisTandy, lambdaMarisTandy, globalMT;

        vec<double>     xgrid_quark, ygrid_quark;

        // the integration loop
        numerics::integration::FourVectorIntegration<double> loop;

        vec<cdouble>    A_vector, B_vector;

        vec<double>     shell_apex_vector;

        unsigned int    quark_int_gridsize = 200;

        // calculating the self energy kernel for A or B
        cdouble         selfEnergy(std::string identifier, cdouble p_p);

        // calculating the self energy kernel for A or B with shifted integration grid
        cdouble         self_energy_shifted(std::string dressing_function, cdouble p_p);

        // calculates the complex self energy kernel for A and B in the complex plane (for shell quark)
        cdouble         self_energy_cmplx(std::string dressing_function, cdouble p_p);

        // the Maris Tandy function
        inline          cdouble G_mt(cdouble k_k) const;

        // precalculate grids and weights
        void            precalc_grids();

        // the imaginary unit
        static constexpr cdouble I = {0., 1.};

        // control variables (initialized with false, irrevocably changed to true by some functions)
        bool            isThereReal, areThereShells, areThereGrids, interpolatorReady;

    };

}
