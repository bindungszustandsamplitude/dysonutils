
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
#include <fstream>

template <typename T> using vec  =  std::vector<T>;
using std::string;

typedef std::complex<double> cdouble;

#include "../../../../Quark/src/include/Quark.hpp"
#include "../../../../Twoquark/src/include/Twoquark.hpp"
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

        void setInteraction(std::string, double);

        void init(std::string, double, double, bool=false);

        vec<vec<cdouble>> getEigenvalue(cdouble Q_Q);

        float a_m, a_d;

        bool isud_q1, isud_q2, isud, rw_path, dijp_path;

        void print_solution();

    private:

        Quark   quark_1, quark_2;

        Twoquark meson_11, meson_12, meson_21, meson_22, diquark_1, diquark_2;

        void initQuarks(double, double, double, double);

        void buildK(cdouble Q_Q);

        vec<vec<cdouble>> kernel;

        int SI_K12(size_t ip, size_t izp, size_t ib1, size_t iq, size_t izq, size_t ib2);

        int SI_K13(size_t ip, size_t izp, size_t ib1, size_t iq, size_t izq, size_t ib3);

        int SI_K21(size_t ip, size_t izp, size_t ib2, size_t iq, size_t izq, size_t ib1);

        int SI_K23(size_t ip, size_t izp, size_t ib2, size_t iq, size_t izq, size_t ib3);

        int SI_K31(size_t ip, size_t izp, size_t ib3, size_t iq, size_t izq, size_t ib1);

        int SI_K32(size_t ip, size_t izp, size_t ib3, size_t iq, size_t izq, size_t ib2);

        int SI_K14(size_t ip, size_t izp, size_t ib3, size_t iq, size_t izq, size_t ib1);

        int SI_K24(size_t ip, size_t izp, size_t ib3, size_t iq, size_t izq, size_t ib2);

        int SI_K34(size_t ip, size_t izp, size_t ib3, size_t iq, size_t izq, size_t ib1);

        int SI_K44(size_t ip, size_t izp, size_t ib3, size_t iq, size_t izq, size_t ib2);

        int SI_K41(size_t ip, size_t izp, size_t ib3, size_t iq, size_t izq, size_t ib1);

        int SI_K42(size_t ip, size_t izp, size_t ib3, size_t iq, size_t izq, size_t ib2);

        int SI_K43(size_t ip, size_t izp, size_t ib3, size_t iq, size_t izq, size_t ib1);

        int SI_K_01(size_t ip, size_t izp, size_t ib1, size_t iq, size_t izq, size_t ib2);

        int SI_K_02(size_t ip, size_t izp, size_t ib1, size_t iq, size_t izq, size_t ib3);

        int SI_K_03(size_t ip, size_t izp, size_t ib2, size_t iq, size_t izq, size_t ib3);

        int SI_K_04(size_t ip, size_t izp, size_t ib1, size_t iq, size_t izq, size_t ib2);

        int SI_K_05(size_t ip, size_t izp, size_t ib1, size_t iq, size_t izq, size_t ib3);

        int SI_K_06(size_t ip, size_t izp, size_t ib2, size_t iq, size_t izq, size_t ib3);

        int SI_K_07(size_t ip, size_t izp, size_t ib2, size_t iq, size_t izq, size_t ib3);

        int SI_K_08(size_t ip, size_t izp, size_t ib1, size_t iq, size_t izq, size_t ib2);

        int SI_K_09(size_t ip, size_t izp, size_t ib1, size_t iq, size_t izq, size_t ib3);

        int SI_K_10(size_t ip, size_t izp, size_t ib2, size_t iq, size_t izq, size_t ib3);

        int SI_K_11(size_t ip, size_t izp, size_t ib2, size_t iq, size_t izq, size_t ib3);

        int SI_K_DQ(size_t ip, size_t izp, size_t ib1, size_t iq, size_t izq, size_t ib2);

        int SI_K_JP(size_t ip, size_t izp, size_t ib1, size_t iq, size_t izq, size_t ib3);

        int SI_K_DD(size_t ip, size_t izp, size_t ib2, size_t iq, size_t izq, size_t ib3);

        int SI_K(size_t ip, size_t izp, size_t ib1, size_t iq, size_t izq, size_t ib2);

        int SI_F(size_t i, size_t ip, size_t izp);

        void precalc_grids();

        void get_sol(Eigen::ComplexEigenSolver<Eigen::MatrixXcd> &es, vec<vec<vec<double>>> &sol);

        string identity;

        size_t n_basis_M1, n_basis_M2, n_basis_DQ, n_basis_QQ;

        // numerics

        size_t n_radial, n_radial_spiral, n_radial_linear, n_angular_z, n_angular_y,
                n_radial_qloop, n_angular_z_qloop, n_angular_y_qloop, n_angular_psi_qloop;

        double lower_bound_radial, upper_bound_radial, lower_bound_radial_qloop, upper_bound_radial_qloop,
                eta_mt;

        cdouble sqrt_I(cdouble z), G_mt(cdouble k_k);

        numerics::integration::FourVectorIntegration<double> meson_loop, quark_loop;
        numerics::integration::Gauleg<double> g;
        numerics::integration::Spiral<numerics::integration::Gauleg<double>> s;

        std::ofstream debug;

        double  omega, D_maristandy, gamma_m, tau_maristandy, lambda_qcd, mt_maristandy, pauli_villars,
                Lambda, prefactor_IR_MarisTandy, pf_RL;

        cdouble I, i_;

        bool    isInitialized = false,
                areThereGrids = false;

        vec<vec<vec<cdouble>>> solution;

    };

}
