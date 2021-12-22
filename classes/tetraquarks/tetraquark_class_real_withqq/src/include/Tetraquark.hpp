
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

#include "../../../../quarks/quark_class/src/include/quark_class.hpp"
#include "../../../../../libraries/Eigen/Eigenvalues"
#include "../../../../../routines/integration/src/integration.hpp"
#include "../../../ns_data/src/include/ns_data.hpp"
#include "../../../ns_data_v2/src/include/ns_data_v2.hpp"
#include "../../../../../routines/sort/sort.h"
#include "../../../../../routines/interpolation/src/interpolation.hpp"
#include "../../../../../routines/eigenvalues/src/eigenvalues.hpp"

namespace dysonUtils {

    class Tetraquark {
    public:
        Tetraquark();

        ~Tetraquark() = default;

        void get_eigenvalue(cdouble P_P);

        int n_radial, n_angular_z, n_angular_y,
                n_radial_qloop, n_angular_z_qloop, n_angular_y_qloop, n_angular_psi_qloop;

        double lower_bound_radial, upper_bound_radial, lower_bound_radial_qloop, upper_bound_radial_qloop;

        quark quark_1, quark_2;

        cdouble mass;

        bool contribution_M1, contribution_DQ, contribution_M2, enable_shell_quark, isud_q1, isud_q2, isud;

        string identity;

        vec<vec<vec<double>>> solution, solution_12, solution_13, solution_23;
        vec<vec<cdouble>> eigenvalues;

        void print_solution();

    private:

        void buildK(cdouble Q_Q);

        vec<vec<cdouble>> kernel;

        int SI_K12(int ip, int izp, int ib1, int iq, int izq, int ib2);

        int SI_K13(int ip, int izp, int ib1, int iq, int izq, int ib3);

        int SI_K14(int ip, int izp, int ib1, int iq, int izq, int ib4);

        int SI_K21(int ip, int izp, int ib2, int iq, int izq, int ib1);

        int SI_K23(int ip, int izp, int ib2, int iq, int izq, int ib3);

        int SI_K24(int ip, int izp, int ib2, int iq, int izq, int ib4);

        int SI_K31(int ip, int izp, int ib3, int iq, int izq, int ib1);

        int SI_K32(int ip, int izp, int ib3, int iq, int izq, int ib2);

        int SI_K34(int ip, int izp, int ib3, int iq, int izq, int ib4);

        int SI_K41(int ip, int izp, int ib4, int iq, int izq, int ib1);

        int SI_K42(int ip, int izp, int ib4, int iq, int izq, int ib2);

        int SI_K43(int ip, int izp, int ib4, int iq, int izq, int ib3);

        int SI_K44(int ip, int izp, int ib4, int iq, int izq, int ib3);

        int SI_K_01(int ip, int izp, int ib1, int iq, int izq, int ib2);

        int SI_K_02(int ip, int izp, int ib1, int iq, int izq, int ib3);

        int SI_K_03(int ip, int izp, int ib2, int iq, int izq, int ib3);

        int SI_K_04(int ip, int izp, int ib1, int iq, int izq, int ib2);

        int SI_K_05(int ip, int izp, int ib1, int iq, int izq, int ib3);

        int SI_K_06(int ip, int izp, int ib2, int iq, int izq, int ib3);

        int SI_K_07(int ip, int izp, int ib2, int iq, int izq, int ib3);

        int SI_K_08(int ip, int izp, int ib1, int iq, int izq, int ib2);

        int SI_K_09(int ip, int izp, int ib1, int iq, int izq, int ib3);

        int SI_K_10(int ip, int izp, int ib2, int iq, int izq, int ib3);

        int SI_K_11(int ip, int izp, int ib2, int iq, int izq, int ib3);

        int SI_K(int ip, int izp, int ib1, int iq, int izq, int ib2);

        int SI_F(int i, int ip, int izp);

        void precalc_grids();

        void get_sol(Eigen::ComplexEigenSolver<Eigen::MatrixXcd> &es, vec<vec<vec<double>>> &sol);

        int n_basis_M1, n_basis_M2, n_basis_DQ, n_basis_QQ;

        cdouble sqrt_I(cdouble z), G_mt(cdouble k_k);

        numerics::integration::FourVectorIntegration<double> meson_loop, quark_loop;

        cdouble I, i_;

    };

}
