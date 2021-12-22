
/*
FILENAME: Twoquark.hpp
AUTHOR:   Nico Santowsky
EMAIL:    physics@nsanto.de
DATE:     2021-12-21
LICENSE:  Apache License 2.0
*/

#pragma once

#include <iostream>
#include <vector>
#include <complex>
#include <array>
#include <string>
#include <cassert>
#include <cmath>
#include <utility>
#include <fstream>
#include "../../../../libraries/Eigen/Eigenvalues"

template <typename T> using vec  =  std::vector<T>;
template <typename T> using vec2  =  std::vector<std::vector<T>>;

#include "../../../Quark/src/include/Quark.hpp"
#include "../../../../routines/sort/sort.h"


typedef std::complex<double> cdouble;

using std::array;
using std::string;
using std::vector;

namespace dysonUtils {

    class Twoquark {

    public:

        Twoquark();

        ~Twoquark();

        void        setNumerics(std::string, double);

        double      getNumerics(std::string);

        void        setNumberOfDiracStructures(unsigned int);

        void        setInteraction(std::string, double);

        void        setRoutingParameter(double);

        void        init(string type, string quantum_numbers, double mq_1, double mq_2);

        cdouble     getEigenvalue(cdouble P_P);

        void        getMass(double guess_mass, bool output_enabled);

        double      mass();

        void        normalize();

        void        printAmplitude();

        cdouble     propagatorPS(cdouble P_P);

        std::vector<cdouble> propagatorVA(cdouble P_P);

        cdouble     reiterate(unsigned int i, cdouble p_p, cdouble z);

        void        buildComplexGrid(double sh_c, unsigned int no_shells, unsigned int no_radial);

        cdouble     interpolateComplex(cdouble p_p);

        cdouble     interpolateAmplitude(int id, double p_p, double z);

        double      ldecayconst();

    private:

        // MT interaction
        double  etaMarisTandy, lambdaMarisTandy, pauliVillars, globalMT;

        // momentum routing parameter
        double          eta = 0.5;

        array<string,3> identity;

        unsigned int    n_dirac, n_radial, n_angular_z, n_angular_y, n_dirac_actual;

        double          upper_bound_radial, lower_bound_radial;

        Quark           quark1, quark2;

        vec2<cdouble>   cont;

        cdouble         norm_loop(cdouble P_P, cdouble K_K);

        cdouble         norm_loop_L(cdouble P_P, cdouble K_K);

        static cdouble  sqrt_(cdouble x);

        void            buildK(cdouble P_P);

        void            precalcGrids();

        numerics::integration::FourVectorIntegration<double> loop;

        unsigned int    SI_amplitude(unsigned int id, unsigned int ip, unsigned int iz) const;

        unsigned int    SI_K_norm(unsigned int id1, unsigned int id2, unsigned int iq, unsigned int iz) const;

        unsigned int    SI_kernel(unsigned int id1, unsigned int iq, unsigned int izq, unsigned int id2, unsigned int ip,
                               unsigned int izp) const;

        vec2<cdouble>   fgrid;

        vec<double>     ppgrid, zgrid;

        vec<double>     interpolationApexGrid, interpolationRadialGrid;

        vec<cdouble>    interpolationAmplitudeGrid;

        vec<cdouble>    kernel, amplitude, eigenvalues;

        static constexpr cdouble I = {0., 1.};

        // control variables
        bool            isInitialized           = false,
                        isthereAmplitude        = false,
                        isthereNormalization    = false,
                        areThereGrids           = false,
                        isThereEigenvalue       = false,
                        isThereMass             = false,
                        enableEigen             = false,
                        enableDiquark           = false,
                        enableShellQuark        = true,
                        interpolatorReady       = false;

        cdouble         G_MarisTandy(cdouble k_k);

        double          mass_;

    };

}
