
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

using std::cout,std::endl;

using namespace dysonUtils;

//publics

Tetraquark::Tetraquark()
{
    enable_shell_quark          =   true;
    meson_choice                =   0;

    isud_q1                     =   true;
    isud_q2                     =   false;

    identity                    =   "x3872";

    n_radial                    =   12;
    n_angular_z                 =   2;
    n_angular_y                 =   2;

    lower_bound_radial          =   1.e-2;
    upper_bound_radial          =   1.e+2;

    n_radial_qloop              =   12;
    n_angular_z_qloop           =   2;
    n_angular_y_qloop           =   2;
    n_angular_psi_qloop         =   2;

    lower_bound_radial_qloop    =   1.e-2;
    upper_bound_radial_qloop    =   1.e+2;

    I.real(0.);
    I.imag(1.);
    i_.real(0.);
    i_.imag(1.);

    ns_data::read();
}


void Tetraquark::init( std::string id, double massLightQuark ) {
    if( isInitialized ) {
        cerr << "error in function " << __func__ << " :: already initialized!" << endl;
        return;
    }

    initQuarks( massLightQuark );
    identity = id;

    if(identity == "f500")
    {
        #include "./setups/f500/setup.c"
    }
    else if(identity == "x3872")
    {
        #include "./setups/x3872/setup.c"
    }
    else if (identity == "z3900")
    {
        #include "./setups/z3900/setup.c"
    }
    else if (identity == "hidden_0_0p")
    {
        #include "./setups/hidden_0_0p/setup.c"
    }
    else if (identity == "hidden_1_0p")
    {
        #include "./setups/hidden_1_0p/setup.c"
    }
    else if (identity == "open_1_0p")
    {
        #include "./setups/open_1_0p/setup.c"
    }
    else if (identity == "open_0_1p")
    {
        #include "./setups/open_0_1p/setup.c"
    }
    else if (identity == "open_1_1p")
    {
        #include "./setups/open_1_1p/setup.c"
    }
    else if (identity == "hidden_0_0p_VV")
    {
        #include "./setups/hidden_0_0p_VV/setup.c"
    }
    else if (identity == "hidden_0_1p_VV")
    {
        #include "./setups/hidden_0_1p_VV/setup.c"
    }

    precalc_grids();

    isInitialized = true;
}


void Tetraquark::setNumerics(std::string identifier, double value) {

    if( isInitialized ) {
        cerr << "error in function " << __func__
             << " :: eigenvalue already calculated. Numerics are unchangeable!" << endl;
        return;
    }

    if( identifier == "n_radial" )                      n_radial            = static_cast<size_t> (value);
    else if( identifier == "n_angular_z" )              n_angular_z         = static_cast<size_t> (value);
    else if( identifier == "n_angular_y" )              n_angular_y         = static_cast<size_t> (value);
    else if( identifier == "lower_bound_radial" )       lower_bound_radial  = value;
    else if( identifier == "upper_bound_radial" )       lower_bound_radial  = value;
    else if( identifier == "n_radial_qloop" )           n_radial_qloop      = static_cast<size_t> (value);
    else if( identifier == "n_angular_y_qloop" )        n_angular_y_qloop   = static_cast<size_t> (value);
    else if( identifier == "n_angular_z_qloop" )        n_angular_z_qloop   = static_cast<size_t> (value);
    else if( identifier == "n_angular_psi_qloop" )      n_angular_psi_qloop = static_cast<size_t> (value);
    else if( identifier == "lower_bound_radial_qloop" ) lower_bound_radial_qloop  = value;
    else if( identifier == "upper_bound_radial_qloop" ) lower_bound_radial_qloop  = value;
    else {
        cerr << "error in function " << __func__ << " :: invalid identifier!" << endl;
        return;
    }

}


void Tetraquark::getEigenvalue(cdouble Q_Q)
{

    std::ofstream       write;
    const unsigned int
            n   = (n_basis_M1+n_basis_M2+n_basis_DQ)*n_radial*n_angular_z,
            n12 = (n_basis_M1+n_basis_M2)*n_radial*n_angular_z,
            n13 = (n_basis_M1+n_basis_DQ)*n_radial*n_angular_z,
            n23 = (n_basis_M2+n_basis_DQ)*n_radial*n_angular_z;
    Eigen::MatrixXcd
            K_(n,n),
            K12_(n12,n12),
            K13_(n13,n13),
            K23_(n23,n23);

    kernel.clear();
    kernel.resize(1);

    kernel.resize(4);
    kernel[1].resize(n12*n12,0.);
    kernel[2].resize(n13*n13,0.);
    kernel[3].resize(n23*n23,0.);

    kernel[0].resize(n*n,0.);

    buildK(Q_Q);

    for(unsigned int i=0; i<n*n; i++){
        K_(i) = kernel[0][i];
    }
    for(unsigned int i=0; i<n12*n12; i++){
        K12_(i) = kernel[1][i];
    }
    for(unsigned int i=0; i<n13*n13; i++){
        K13_(i) = kernel[2][i];
    }
    for(unsigned int i=0; i<n23*n23; i++){
        K23_(i) = kernel[3][i];
    }

    K_.transposeInPlace();

    Eigen::ComplexEigenSolver<Eigen::MatrixXcd> es(K_,1);


    vec<vec<cdouble>> V(1);

    // get_sol(es,solution);

    for(unsigned int i=0; i<n; i++)
    {
        if(std::abs(std::imag(es.eigenvalues()(i))/std::real(es.eigenvalues()(i))) < 1.e-1 )
            V[0].push_back(es.eigenvalues()(i));
    }

    Eigen::ComplexEigenSolver<Eigen::MatrixXcd> es_12(K12_,1);
    Eigen::ComplexEigenSolver<Eigen::MatrixXcd> es_13(K13_,1);
    Eigen::ComplexEigenSolver<Eigen::MatrixXcd> es_23(K23_,1);

    V.resize(4);
    for(unsigned int i=0; i<n12; i++){
        if(std::abs(std::imag(es_12.eigenvalues()(i))/std::real(es_12.eigenvalues()(i))) < 1.e-1)
            V[1].push_back(es_12.eigenvalues()(i));
    }
    for(unsigned int i=0; i<n13; i++){
        if(std::abs(std::imag(es_13.eigenvalues()(i))/std::real(es_13.eigenvalues()(i))) < 1.e-1)
            V[2].push_back(es_13.eigenvalues()(i));
    }
    for(unsigned int i=0; i<n23; i++){
        if(std::abs(std::imag(es_23.eigenvalues()(i))/std::real(es_23.eigenvalues()(i))) < 1.e-1)
            V[3].push_back(es_23.eigenvalues()(i));
    }

    sort_cmplx(V[0]);
    sort_cmplx(V[1]);
    sort_cmplx(V[2]);
    sort_cmplx(V[3]);

    Eigen::MatrixXcd revv;
    revv.resize(V[0].size(),1);

    for(unsigned int i=0; i<V[0].size(); i++)
    {
        revv(i) = V[0][i];
    }

    eigenvalues = V;

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


void        Tetraquark::initQuarks(double mq1) {

    quark_1.setMass(mq1);
    quark_2.setMass(0.795);

    double sh_c;

    if(quark_1.getMass() == 0.0037) sh_c = 0.25;
    else if(quark_1.getMass() == 0.0200) sh_c = 0.31;
    else if(quark_1.getMass() == 0.0500) sh_c = 0.39;
    else if(quark_1.getMass() == 0.0855) sh_c = 0.49;
    else if(quark_1.getMass() == 0.1500) sh_c = 0.69;
    else if(quark_1.getMass() == 0.2100) sh_c = 0.85;
    else if(quark_1.getMass() == 0.3500) sh_c = 1.32;
    else if(quark_1.getMass() == 0.5000) sh_c = 1.90;
    else if(quark_1.getMass() == 0.6500) sh_c = 2.45;
    else if(quark_1.getMass() == 0.7950) sh_c = 3.10;
    else {cerr << "error :: invalid quark mass." << endl; assert(false);}


    quark_1.generateReal();
    quark_2.generateReal();
    quark_1.generateShells(sh_c, 20);
    quark_2.generateShells(sh_c, 20);

}

void        Tetraquark::buildK(cdouble Q_Q)
{
    vec<cdouble>
            K12(n_basis_M1*n_basis_M2*n_radial*n_angular_z*n_radial*n_angular_z,0.),
            K21(n_basis_M2*n_basis_M1*n_radial*n_angular_z*n_radial*n_angular_z,0.),
            K13(n_basis_M1*n_basis_DQ*n_radial*n_angular_z*n_radial*n_angular_z,0.),
            K31(n_basis_DQ*n_basis_M1*n_radial*n_angular_z*n_radial*n_angular_z,0.),
            K32(n_basis_DQ*n_basis_M2*n_radial*n_angular_z*n_radial*n_angular_z,0.),
            K23(n_basis_M2*n_basis_DQ*n_radial*n_angular_z*n_radial*n_angular_z,0.);


    cdouble prefactor  = 2.*M_PI/(std::pow(2.*M_PI,4.)*std::pow(2.*M_PI,4.)); // trivial phi integral for q integration, integration denominators ~2pi^4

    #pragma omp parallel for

    for(size_t ip=0; ip<n_radial; ip++){
        cdouble
                p_p = meson_loop.grid_radial[ip];

        for(size_t izp=0; izp<n_angular_z; izp++){
            cdouble
                    zp    = meson_loop.grid_z[izp],
                    Q_p   = sqrt_I(Q_Q)*std::sqrt(p_p)*zp;

            /*  prefactors ...
              cdouble
                pp_pp = p_p+Q_Q/4.+Q_p,
                pm_pm = p_p+Q_Q/4.-Q_p,
                PD_,PDsL_,PRT_,PRL_,PJPT_,PJPL_,PSc_,PAxT_,PAxL_;

              meson::propagator_ps_analytic("D",pp_pp,PD_);
              meson::propagator_vc_analytic("Ds",pm_pm,PDsT_,PDsL_);
              meson::propagator_vc_analytic("rho",pp_pp,PRT_,PRL_);
              meson::propagator_vc_analytic("JP",pm_pm,PJPT_,PJPL_);
              meson::propagator_sc_analytic_dq("8440_0037",pp_pp,PSc_);
              meson::propagator_ax_analytic_dq("8440_0037",pm_pm,PAxT_,PAxL_);

              PD_   *=  norm_integral_ps("D",pp_pp);
              PDsT_ *=  norm_integral_vc_T("Ds",pm_pm);
              PDsL_ *=  norm_integral_vc_L("Ds",pm_pm);
              PRT_  *=  norm_integral_vc_T("rho",pp_pp);
              PRL_  *=  norm_integral_vc_L("rho",pp_pp);
              PJPT_ *=  norm_integral_vc_T("JP",pm_pm);
              PJPL_ *=  norm_integral_vc_L("JP",pm_pm);
              PSc_  *=  norm_integral_ps("Sc",pp_pp);
              PAxT_ *=  norm_integral_vc_T("Ax",pm_pm);
              PAxL_ *=  norm_integral_vc_L("Ax",pm_pm);
            */


            for(size_t iq=0; iq<n_radial; iq++){
                double
                        q_q = meson_loop.grid_radial[iq],
                        qj  = q_q/2.,
                        qw  = meson_loop.weights_radial[iq];

                for(size_t izq=0; izq<n_angular_z; izq++){
                    double
                            zq  = meson_loop.grid_z[izq],
                            zqj = std::sqrt(1.-zq*zq),
                            zqw = meson_loop.weights_z[izq];
                    cdouble
                            Q_q = sqrt_I(Q_Q)*std::sqrt(q_q)*zq;

                    cdouble PM11p,PM11Lp,PM11m,PM11Lm,
                            PM12p,PM12Lp,PM12m,PM12Lm,
                            PM21p,PM21Lp,PM21m,PM21Lm,
                            PM22p,PM22Lp,PM22m,PM22Lm,
                            PDQ1p,PDQ1Lp,PDQ1m,PDQ1Lm,
                            PDQ2p,PDQ2Lp,PDQ2m,PDQ2Lm,
                            qp_qp = q_q+Q_Q/4.+Q_q,
                            qm_qm = q_q+Q_Q/4.-Q_q;


                    if (identity == "f500")
                    {
                        #include "./setups/f500/propagators.c"
                    }
                    else if(identity == "x3872")
                    {
                        #include "./setups/x3872/propagators.c"
                    }
                    else if (identity == "z3900")
                    {
                        #include "./setups/z3900/propagators.c"
                    }
                    else if(identity == "hidden_0_0p")
                    {
                        #include "./setups/hidden_0_0p/propagators.c"
                    }
                    else if (identity == "hidden_1_0p")
                    {
                        #include "./setups/hidden_1_0p/propagators.c"
                    }
                    else if (identity == "open_1_0p")
                    {
                        if(meson_choice == 0) {
                            #include "./setups/open_1_0p/propagators-0.c"
                        } else
                        if(meson_choice == 1) {
                            #include "./setups/open_1_0p/propagators-1.c"
                        }
                    }
                    else if (identity == "open_0_1p")
                    {
                        if(meson_choice == 0) {
                            #include "./setups/open_0_1p/propagators-0.c"
                        } else
                        if(meson_choice == 1) {
                            #include "./setups/open_0_1p/propagators-1.c"
                        }
                    }
                    else if (identity == "open_1_1p")
                    {
                        if(meson_choice == 0) {
                            #include "./setups/open_1_1p/propagators-0.c"
                        } else
                        if(meson_choice == 1) {
                            #include "./setups/open_1_1p/propagators-1.c"
                        }
                    }
                    else if(identity == "hidden_0_0p_VV")
                    {
                        #include "./setups/hidden_0_0p_VV/propagators.c"
                    }
                    else if(identity == "hidden_0_1p_VV")
                    {
                        #include "./setups/hidden_0_1p_VV/propagators.c"
                    }

                    for(size_t iyq=0; iyq<n_angular_y; iyq++){
                        double
                                yq  = meson_loop.grid_y[iyq],
                                yqw = meson_loop.weights_y[iyq];
                        cdouble
                                p_q = std::sqrt(p_p)*std::sqrt(q_q)*(zp*zq + std::sqrt(1.-zp*zp)*std::sqrt(1.-zq*zq)*yq);

                        // inclusion of quarkonium mixing component has to be here

                        for(size_t il=0; il<n_radial_qloop; il++){
                            double
                                    l_l = quark_loop.grid_radial[il],
                                    lj  = l_l/2.,
                                    lw  = quark_loop.weights_radial[il];

                            for(size_t izl=0; izl<n_angular_z_qloop; izl++){
                                cdouble sv1,ss1,sv2,ss2,sv3,ss3,sv4,ss4;
                                double
                                        zl  = quark_loop.grid_z[izl],
                                        zlj = std::sqrt(1.-zl*zl),
                                        zlw = quark_loop.weights_z[izl];
                                cdouble
                                        Q_l = sqrt_I(Q_Q)*std::sqrt(l_l)*zl,
                                        sv1_q1, ss1_q1;
                                if (!enable_shell_quark)
                                {
                                        sv1_q1 = chfi_q::sv_u(l_l+Q_Q/16.-Q_l/2.),
                                        ss1_q1 = chfi_q::ss_u(l_l+Q_Q/16.-Q_l/2.);
                                }
                                else
                                {
                                        sv1_q1 = quark_1.interpolateShell("sv",l_l+Q_Q/16.-Q_l/2.),
                                        ss1_q1 = quark_1.interpolateShell("ss",l_l+Q_Q/16.-Q_l/2.);
                                }

                                for(size_t iyl=0; iyl<n_angular_y_qloop; iyl++){
                                    double
                                            yl  = quark_loop.grid_y[iyl],
                                            ylw = quark_loop.weights_y[iyl];
                                    cdouble
                                            p_l = std::sqrt(p_p)*std::sqrt(l_l)*(zp*zl + std::sqrt(1.-zp*zp)*std::sqrt(1.-zl*zl)*yl),
                                            sv2_q1,ss2_q1,sv2_q2,ss2_q2;
                                    if (!enable_shell_quark)
                                    {
                                            sv2_q1 = chfi_q::sv_u(2.*p_l+Q_l/2.+l_l+Q_p/2.+p_p+Q_Q/16.),
                                            ss2_q1 = chfi_q::ss_u(2.*p_l+Q_l/2.+l_l+Q_p/2.+p_p+Q_Q/16.),
                                            sv2_q2 = chfi_q::sv_8440(2.*p_l+Q_l/2.+l_l+Q_p/2.+p_p+Q_Q/16.),
                                            ss2_q2 = chfi_q::ss_8440(2.*p_l+Q_l/2.+l_l+Q_p/2.+p_p+Q_Q/16.);
                                    }
                                    else
                                    {
                                            sv2_q1 = quark_1.interpolateShell("sv",2.*p_l+Q_l/2.+l_l+Q_p/2.+p_p+Q_Q/16.),
                                            ss2_q1 = quark_1.interpolateShell("ss",2.*p_l+Q_l/2.+l_l+Q_p/2.+p_p+Q_Q/16.),
                                            sv2_q2 = quark_2.interpolateShell("sv",2.*p_l+Q_l/2.+l_l+Q_p/2.+p_p+Q_Q/16.),
                                            ss2_q2 = quark_2.interpolateShell("ss",2.*p_l+Q_l/2.+l_l+Q_p/2.+p_p+Q_Q/16.);
                                    }

                                    for(size_t ipsil=0; ipsil<n_angular_psi_qloop; ipsil++){
                                        double
                                                psil  = quark_loop.grid_phi[ipsil],
                                                psilw = quark_loop.weights_phi[ipsil];

                                        cdouble ampl,ampl01,ampl10,sv4_q1,ss4_q1,sv4_q2,ss4_q2,sv3_q1,ss3_q1,sv3_q2,ss3_q2,
                                                q_l   = std::sqrt(q_q)*std::sqrt(l_l)*(zq*zl + std::sqrt(1.-zq*zq)*std::sqrt(1.-zl*zl)*yq*yl + std::sqrt(1.-zq*zq)*std::sqrt(1.-zl*zl)*std::sqrt(1.-yq*yq)*std::sqrt(1.-yl*yl)*std::cos(psil));
                                        if (!enable_shell_quark)
                                        {
                                                sv4_q1 = chfi_q::sv_u(2.*q_l+Q_l/2.+l_l+Q_q/2.+q_q+Q_Q/16.),
                                                ss4_q1 = chfi_q::ss_u(2.*q_l+Q_l/2.+l_l+Q_q/2.+q_q+Q_Q/16.),
                                                sv4_q2 = chfi_q::sv_8440(2.*q_l+Q_l/2.+l_l+Q_q/2.+q_q+Q_Q/16.),
                                                ss4_q2 = chfi_q::ss_8440(2.*q_l+Q_l/2.+l_l+Q_q/2.+q_q+Q_Q/16.),
                                                sv3_q1 = chfi_q::sv_u(2.*p_l+2.*q_l-Q_l/2.+l_l+2.*p_q-Q_p/2.+p_p-Q_q/2.+q_q+Q_Q/16.),
                                                ss3_q1 = chfi_q::ss_u(2.*p_l+2.*q_l-Q_l/2.+l_l+2.*p_q-Q_p/2.+p_p-Q_q/2.+q_q+Q_Q/16.),
                                                sv3_q2 = chfi_q::sv_8440(2.*p_l+2.*q_l-Q_l/2.+l_l+2.*p_q-Q_p/2.+p_p-Q_q/2.+q_q+Q_Q/16.),
                                                ss3_q2 = chfi_q::ss_8440(2.*p_l+2.*q_l-Q_l/2.+l_l+2.*p_q-Q_p/2.+p_p-Q_q/2.+q_q+Q_Q/16.);
                                        }
                                        else
                                        {
                                                sv4_q1 = quark_1.interpolateShell("sv",2.*q_l+Q_l/2.+l_l+Q_q/2.+q_q+Q_Q/16.),
                                                ss4_q1 = quark_1.interpolateShell("ss",2.*q_l+Q_l/2.+l_l+Q_q/2.+q_q+Q_Q/16.),
                                                sv4_q2 = quark_2.interpolateShell("sv",2.*q_l+Q_l/2.+l_l+Q_q/2.+q_q+Q_Q/16.),
                                                ss4_q2 = quark_2.interpolateShell("ss",2.*q_l+Q_l/2.+l_l+Q_q/2.+q_q+Q_Q/16.),
                                                sv3_q1 = quark_1.interpolateShell("sv",2.*p_l+2.*q_l-Q_l/2.+l_l+2.*p_q-Q_p/2.+p_p-Q_q/2.+q_q+Q_Q/16.),
                                                ss3_q1 = quark_1.interpolateShell("ss",2.*p_l+2.*q_l-Q_l/2.+l_l+2.*p_q-Q_p/2.+p_p-Q_q/2.+q_q+Q_Q/16.),
                                                sv3_q2 = quark_2.interpolateShell("sv",2.*p_l+2.*q_l-Q_l/2.+l_l+2.*p_q-Q_p/2.+p_p-Q_q/2.+q_q+Q_Q/16.),
                                                ss3_q2 = quark_2.interpolateShell("ss",2.*p_l+2.*q_l-Q_l/2.+l_l+2.*p_q-Q_p/2.+p_p-Q_q/2.+q_q+Q_Q/16.);
                                        }


                                        double wj    = qw*zqw*yqw * lw*zlw*ylw*psilw * qj*zqj * lj*zlj;

                                        vec<cdouble> w(10000,0.);

                                        cdouble FCtr;


                                        if(identity == "f500")
                                        {
                                            #include "./setups/f500/kernels.c"
                                        }
                                        else if(identity == "x3872")
                                        {
                                            //#include "./setups/x3872/kernels.c"
                                        }
                                        else if (identity == "z3900")
                                        {
                                            //#include "./setups/z3900/kernels.c"
                                        }
                                        else if(identity == "hidden_0_0p")
                                        {
                                            //#include "./setups/hidden_0_0p/kernels.c"
                                        }
                                        else if (identity == "hidden_1_0p")
                                        {
                                            //#include "./setups/hidden_1_0p/kernels.c"
                                        }
                                        else if (identity == "open_1_0p")
                                        {
                                            if(meson_choice == 0) {
                                                //#include "./setups/open_1_0p/kernels-0.c"
                                            } else
                                            if(meson_choice == 1) {
                                                //#include "./setups/open_1_0p/kernels-1.c"
                                            }
                                        }
                                        else if (identity == "open_0_1p")
                                        {
                                            if(meson_choice == 0) {
                                                //#include "./setups/open_0_1p/kernels-0.c"
                                            } else
                                            if(meson_choice == 1) {
                                                //#include "./setups/open_0_1p/kernels-1.c"
                                            }
                                        }
                                        else if (identity == "open_1_1p")
                                        {
                                            if(meson_choice == 0) {
                                                //#include "./setups/open_1_1p/kernels-0.c"
                                            } else
                                            if(meson_choice == 1) {
                                                //#include "./setups/open_1_1p/kernels-1.c"
                                            }
                                        }
                                        else if(identity == "hidden_0_0p_VV")
                                        {
                                            //#include "./setups/hidden_0_0p_VV/kernels.c"
                                        }
                                        else if(identity == "hidden_0_1p_VV")
                                        {
                                            //#include "./setups/hidden_0_1p_VV/kernels.c"
                                        }

                                    }

                                }

                            }

                        }


                    }

                }

            }

        }

    }

    cout << K12[SI_K31(0,0,0,0,0,0)] << "  " << K21[SI_K32(0,0,0,0,0,0)] << endl;
    cout << K13[SI_K31(0,0,0,0,0,0)] << "  " << K23[SI_K32(0,0,0,0,0,0)] << endl;
    cout << K31[SI_K31(0,0,0,0,0,0)] << "  " << K32[SI_K32(0,0,0,0,0,0)] << endl;

    size_t  nb1 = n_basis_M1,
            nb2 = n_basis_M2,
            nb3 = n_basis_DQ;

    for(size_t ib1=0; ib1<nb1; ib1++){
        for(size_t ib2=0; ib2<nb2; ib2++){
            for(size_t ib3=0; ib3<nb3; ib3++){
                for(size_t ip=0; ip<n_radial; ip++){
                    for(size_t izp=0; izp<n_angular_z; izp++){
                        for(size_t iq=0; iq<n_radial; iq++){
                            for(size_t izq=0; izq<n_angular_z; izq++){
                                kernel[0][SI_K(ip,izp,ib1,iq,izq,nb1+ib2)]          = -prefactor*(K12[SI_K12(ip,izp,ib1,iq,izq,ib2)]);
                                kernel[0][SI_K(ip,izp,ib1,iq,izq,nb1+nb2+ib3)]      = -prefactor*(K13[SI_K13(ip,izp,ib1,iq,izq,ib3)]);
                                kernel[0][SI_K(ip,izp,nb1+ib2,iq,izq,ib1)]          = -prefactor*(K21[SI_K21(ip,izp,ib2,iq,izq,ib1)]);
                                kernel[0][SI_K(ip,izp,nb1+ib2,iq,izq,nb1+nb2+ib3)]  = -prefactor*(K23[SI_K23(ip,izp,ib2,iq,izq,ib3)]);
                                kernel[0][SI_K(ip,izp,nb1+nb2+ib3,iq,izq,ib1)]      = -prefactor*(K31[SI_K31(ip,izp,ib3,iq,izq,ib1)]);
                                kernel[0][SI_K(ip,izp,nb1+nb2+ib3,iq,izq,nb1+ib2)]  = -prefactor*(K32[SI_K32(ip,izp,ib3,iq,izq,ib2)]);
                                // minus sign because of integral prefactor, which is not implemented yet (that corresponds to only two-body interactions)
                            }
                        }
                    }
                }
            }
        }
    }

    kernel.resize(4);

    kernel[1].resize((n_basis_M1+n_basis_M2)*n_radial*n_angular_z*(n_basis_M1+n_basis_M2)*n_radial*n_angular_z,0.);
    kernel[2].resize((n_basis_M1+n_basis_DQ)*n_radial*n_angular_z*(n_basis_M1+n_basis_DQ)*n_radial*n_angular_z,0.);
    kernel[3].resize((n_basis_M2+n_basis_DQ)*n_radial*n_angular_z*(n_basis_M2+n_basis_DQ)*n_radial*n_angular_z,0.);

    for (size_t ip=0; ip<n_radial; ip++){
        for (size_t izp=0; izp<n_angular_z; izp++){
            for (size_t iq=0; iq<n_radial; iq++){
                for (size_t izq=0; izq<n_angular_z; izq++){

                    for (size_t ib1=0; ib1<n_basis_M1; ib1++){
                        for (size_t ib2=0; ib2<n_basis_M2; ib2++){
                            kernel[1][SI_K_DQ(ip,izp,ib1,iq,izq,nb1+ib2)]          = -prefactor*(K12[SI_K12(ip,izp,ib1,iq,izq,ib2)]);
                            kernel[1][SI_K_DQ(ip,izp,nb1+ib2,iq,izq,ib1)]          = -prefactor*(K21[SI_K21(ip,izp,ib2,iq,izq,ib1)]);
                        }
                    }

                    for (size_t ib1=0; ib1<n_basis_M1; ib1++){
                        for(size_t ib3=0; ib3<n_basis_DQ; ib3++){
                            kernel[2][SI_K_JP(ip,izp,ib1,iq,izq,nb1+ib3)]          = -prefactor*(K13[SI_K13(ip,izp,ib1,iq,izq,ib3)]);
                            kernel[2][SI_K_JP(ip,izp,nb1+ib3,iq,izq,ib1)]          = -prefactor*(K31[SI_K31(ip,izp,ib3,iq,izq,ib1)]);
                        }
                    }

                    for(size_t ib2=0; ib2<n_basis_M2; ib2++){
                        for(size_t ib3=0; ib3<n_basis_DQ; ib3++){
                            kernel[3][SI_K_DD(ip,izp,ib2,iq,izq,nb2+ib3)]          = -prefactor*(K23[SI_K23(ip,izp,ib2,iq,izq,ib3)]);
                            kernel[3][SI_K_DD(ip,izp,nb2+ib3,iq,izq,ib2)]          = -prefactor*(K32[SI_K32(ip,izp,ib3,iq,izq,ib2)]);
                        }
                    }

                }
            }
        }
    }
}

int         Tetraquark::SI_K12(int ip, int izp, int ib1, int iq, int izq, int ib2)
{
    return iq + izq*n_radial + ib2*n_radial*n_angular_z + ip*n_angular_z*n_radial*n_basis_M2 + izp*n_radial*n_angular_z*n_radial*n_basis_M2 + ib1 * n_radial*n_angular_z*n_basis_M2*n_radial*n_angular_z;
}

int         Tetraquark::SI_K13(int ip, int izp, int ib1, int iq, int izq, int ib3)
{
    return iq + izq*n_radial + ib3*n_radial*n_angular_z + ip*n_angular_z*n_radial*n_basis_DQ + izp*n_radial*n_angular_z*n_radial*n_basis_DQ + ib1 * n_radial*n_angular_z*n_basis_DQ*n_radial*n_angular_z;
}

int         Tetraquark::SI_K21(int ip, int izp, int ib2, int iq, int izq, int ib1)
{
    return iq + izq*n_radial + ib1*n_radial*n_angular_z + ip*n_angular_z*n_radial*n_basis_M1 + izp*n_radial*n_angular_z*n_radial*n_basis_M1 + ib2 * n_radial*n_angular_z*n_basis_M1*n_radial*n_angular_z;
}

int         Tetraquark::SI_K23(int ip, int izp, int ib2, int iq, int izq, int ib3)
{
    return iq + izq*n_radial + ib3*n_radial*n_angular_z + ip*n_angular_z*n_radial*n_basis_DQ + izp*n_radial*n_angular_z*n_radial*n_basis_DQ + ib2 * n_radial*n_angular_z*n_basis_DQ*n_radial*n_angular_z;
}

int         Tetraquark::SI_K31(int ip, int izp, int ib3, int iq, int izq, int ib1)
{
    return iq + izq*n_radial + ib1*n_radial*n_angular_z + ip*n_angular_z*n_radial*n_basis_M1 + izp*n_radial*n_angular_z*n_radial*n_basis_M1 + ib3 * n_radial*n_angular_z*n_basis_M1*n_radial*n_angular_z;
}

int         Tetraquark::SI_K32(int ip, int izp, int ib3, int iq, int izq, int ib2)
{
    return iq + izq*n_radial + ib2*n_radial*n_angular_z + ip*n_angular_z*n_radial*n_basis_M2 + izp*n_radial*n_angular_z*n_radial*n_basis_M2 + ib3 * n_radial*n_angular_z*n_basis_M2*n_radial*n_angular_z;
}

int         Tetraquark::SI_K_DQ(int ip, int izp, int ib1, int iq, int izq, int ib2)
{
    return iq + izq*n_radial + ib2*n_radial*n_angular_z + ip*n_radial*n_angular_z*(n_basis_M1+n_basis_M2) + izp*n_radial*n_angular_z*(n_basis_M1+n_basis_M2)*n_radial + ib1*n_radial*n_angular_z*(n_basis_M1+n_basis_M2)*n_radial*n_angular_z;
}

int         Tetraquark::SI_K_JP(int ip, int izp, int ib1, int iq, int izq, int ib3)
{
    return iq + izq*n_radial + ib3*n_radial*n_angular_z + ip*n_radial*n_angular_z*(n_basis_M1+n_basis_DQ) + izp*n_radial*n_angular_z*(n_basis_M1+n_basis_DQ)*n_radial + ib1*n_radial*n_angular_z*(n_basis_M1+n_basis_DQ)*n_radial*n_angular_z;
}

int         Tetraquark::SI_K_DD(int ip, int izp, int ib2, int iq, int izq, int ib3)
{
    return iq + izq*n_radial + ib3*n_radial*n_angular_z + ip*n_radial*n_angular_z*(n_basis_M2+n_basis_DQ) + izp*n_radial*n_angular_z*(n_basis_M2+n_basis_DQ)*n_radial + ib2*n_radial*n_angular_z*(n_basis_M2+n_basis_DQ)*n_radial*n_angular_z;
}

int         Tetraquark::SI_K(int ip, int izp, int ib1, int iq, int izq, int ib2)
{
    return iq + izq*n_radial + ib2*n_radial*n_angular_z + ip*n_angular_z*n_radial*(n_basis_M1+n_basis_M2+n_basis_DQ) + izp*n_radial*n_angular_z*n_radial*(n_basis_M1+n_basis_M2+n_basis_DQ) + ib1 * n_radial*n_angular_z*(n_basis_M1+n_basis_M2+n_basis_DQ)*n_radial*n_angular_z;
}

int         Tetraquark::SI_F(int ib, int ip, int izp)
{
    return ip + izp*n_radial + ib*n_radial*n_angular_z;
}

void        Tetraquark::precalc_grids()
{
    if( areThereGrids ) {
        cerr << "error in function " << __func__
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

    areThereGrids = true;
}

cdouble     Tetraquark::sqrt_I(cdouble z)
{
        if(arg(z) >= 0.) {
            return std::sqrt(z);
        }
        else if (arg(z) < 0.) {
            return -std::sqrt(z);
        } else
            return 0.;
}

void        Tetraquark::get_sol(Eigen::ComplexEigenSolver<Eigen::MatrixXcd>& es, vec<vec<vec<double>>>& sol)
{
    int     n = n_radial*n_angular_z*(n_basis_M1+n_basis_M2+n_basis_DQ);
    double  max = 0.;
    int     index_largest=0;

    for(int i=0; i<n; i++)
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
