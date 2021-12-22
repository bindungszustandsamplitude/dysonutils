
/*
FILENAME: Tetraquark.hpp
AUTHOR:   Nico Santowsky
EMAIL:    physics@nsanto.de
DATE:     2021-12-21
LICENSE:  Apache License 2.0
*/

#pragma once

#include <cmath>
#include <vector>
#include <complex>
#include <string>

template <typename T> using vec  =  std::vector<T>;
using std::string;

typedef std::complex<double> cdouble;

#include "../../../../Quark/src/include/Quark.hpp"
#include "../../../../../libraries/Eigen/Eigenvalues"
#include "../../../../../routines/integration/src/integration.hpp"
#include "../../../../aux/ns_data/src/include/ns_data.hpp"
#include "../../../../aux/ns_data_v2/src/include/ns_data_v2.hpp"
#include "../../../../../routines/sort/sort.h"
#include "../../../../../routines/interpolation/src/interpolation.hpp"

namespace dysonUtils {

    class Tetraquark {

    public:
        Tetraquark();

        ~Tetraquark() = default;

        void setNumerics(std::string, double);

        void init(std::string, double);

        void getEigenvalue(cdouble P_P);

        bool enable_shell_quark, isud_q1, isud_q2, isud, meson_choice;

        vec<vec<vec<double>>> solution, solution_12, solution_13, solution_23;
        vec<vec<cdouble>> eigenvalues;

        void print_solution();

    private:

        Quark   quark_1, quark_2;

        void    initQuarks(double);

        void    buildK(cdouble Q_Q);

        vec<vec<cdouble>> kernel;

        // superindices

        int     SI_K12(int ip, int izp, int ib1, int iq, int izq, int ib2);

        int     SI_K13(int ip, int izp, int ib1, int iq, int izq, int ib3);

        int     SI_K21(int ip, int izp, int ib2, int iq, int izq, int ib1);

        int     SI_K23(int ip, int izp, int ib2, int iq, int izq, int ib3);

        int     SI_K31(int ip, int izp, int ib3, int iq, int izq, int ib1);

        int     SI_K32(int ip, int izp, int ib3, int iq, int izq, int ib2);

        int     SI_K_DQ(int ip, int izp, int ib1, int iq, int izq, int ib2);

        int     SI_K_JP(int ip, int izp, int ib1, int iq, int izq, int ib3);

        int     SI_K_DD(int ip, int izp, int ib2, int iq, int izq, int ib3);

        int     SI_K(int ip, int izp, int ib1, int iq, int izq, int ib2);

        int     SI_F(int i, int ip, int izp);

        void    precalc_grids();

        void    get_sol(Eigen::ComplexEigenSolver<Eigen::MatrixXcd> &es, vec<vec<vec<double>>> &sol);

        string  identity;

        size_t  n_basis_M1, n_basis_M2, n_basis_DQ;

        // numerics

        size_t  n_radial, n_angular_z, n_angular_y,
                n_radial_qloop, n_angular_z_qloop, n_angular_y_qloop, n_angular_psi_qloop;

        double  lower_bound_radial, upper_bound_radial,
                lower_bound_radial_qloop, upper_bound_radial_qloop;

        cdouble sqrt_I(cdouble z);

        numerics::integration::FourVectorIntegration<double> meson_loop, quark_loop;

        cdouble I, i_;

        bool    isInitialized = false,
                areThereGrids = false;

    };

}
