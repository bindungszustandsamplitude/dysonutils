
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


#include "./include/Tetraquark.hpp"
#include "../../chfi_mesons/chfi_mesons.hpp"
#include "../../../quarks/chfi_quarks/chfi_quarks.hpp"

using std::cout,std::endl;

using namespace dysonUtils;

/********************************************/
/************ public functions **************/
/********************************************/

Tetraquark::Tetraquark()
{
    mass                        =   0.;

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

    precalc_grids();
    ns_data::read();
}

void        Tetraquark::get_eigenvalue(cdouble Q_Q)
{
    if(identity == "f500")
    {
        #include "./setups/f500/setup.c"
    }
    else if(identity == "x3872")
    {
        #include "./setups/x3872/setup.c"
    }

    precalc_grids();

    std::ofstream       write;
    vec<unsigned int> N;

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

    for(int i=0; i<12; ++i)
    {
      K_[i].resize(N[i],N[i]);
      kernel[i].resize(N[i]*N[i],0.);
    }

    buildK(Q_Q);

    vec<vec<cdouble>> V(12);

    for(unsigned int i=0; i<12; ++i)
    {
      for(unsigned int j=0; j<kernel[i].size(); j++){
          K_[i](j) = kernel[i][j];
      }

      K_[i].transposeInPlace();
      Eigen::ComplexEigenSolver<Eigen::MatrixXcd> es(K_[i],1);

        for(unsigned int j=0; j<N[i]; ++j)
      {
        if(std::abs(std::imag(es.eigenvalues()(j))/std::real(es.eigenvalues()(j))) < 1.e-5 )
        V[i].push_back(es.eigenvalues()(j));
      }

      sort_cmplx(V[i]);
    }

    // get_sol(es,solution);

    eigenvalues = V;
}

void        Tetraquark::print_solution()
{
    mkdir("./data/solutions",0777);


    std::ofstream write_sol_m1,write_sol_m2,write_sol_dq;

    int n = n_radial*n_angular_z;

    write_sol_m1.open("./data/solutions/m1.txt");
    write_sol_m2.open("./data/solutions/m2.txt");
    write_sol_dq.open("./data/solutions/dq.txt");


    for(int i=0; i<n_basis_M1; i++){
        for(int k=0; k<n; k++){
            for(int j=0; j<4; j++){
                write_sol_m1 << std::scientific << solution[0][i][j+k*4] << "\t";
            }
            write_sol_m1 << endl;
        }
    }

    for(int i=0; i<n_basis_M2; i++){
        for(int k=0; k<n; k++){
            for(int j=0; j<4; j++){
                write_sol_m2 << std::scientific << solution[1][i][j+k*4] << "\t";
            }
            write_sol_m2 << endl;
        }
    }

    for(int i=0; i<n_basis_DQ; i++){
        for(int k=0; k<n; k++){
            for(int j=0; j<4; j++){
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


    cdouble
                prefactor_1l  = 2.*M_PI/(std::pow(2.*M_PI,4.)),
                prefactor_2l  = 2.*M_PI/(std::pow(2.*M_PI,4.)*std::pow(2.*M_PI,4.));// trivial phi integral for q integration, integration denominators ~2pi^4

    string B = "B";

    //#pragma omp parallel for

    for(int ip=0; ip<n_radial; ip++){

        double
                p_p = meson_loop.grid_radial[ip];

        for(int izp=0; izp<n_angular_z; izp++){
            cdouble
                    zp    = meson_loop.grid_z[izp],
                    Q_p   = sqrt_I(Q_Q)*std::sqrt(p_p)*zp;

            for(int iq=0; iq<n_radial; iq++){
                double
                        q_q = meson_loop.grid_radial[iq],
                        qj  = q_q/2.,
                        qw  = meson_loop.weights_radial[iq];

                for(int izq=0; izq<n_angular_z; izq++){
                    double
                            zq  = meson_loop.grid_z[izq],
                            zqj = std::sqrt(1.-zq*zq),
                            zqw = meson_loop.weights_z[izq];
                    cdouble
                            Q_q = sqrt_I(Q_Q)*std::sqrt(q_q)*zq;

                    cdouble G=0., Gmt=0.,
                            PM11p,PM11Lp,PM11m,PM11Lm,
                            PM12p,PM12Lp,PM12m,PM12Lm,
                            PM21p,PM21Lp,PM21m,PM21Lm,
                            PM22p,PM22Lp,PM22m,PM22Lm,
                            PDQ1p,PDQ1Lp,PDQ1m,PDQ1Lm,
                            PDQ2p,PDQ2Lp,PDQ2m,PDQ2Lm,
                            PM11lp,PM11lm,
                            PM12lp,PM12lm,PM12lLp,PM12lLm,
                            PDQ1lp,PDQ1lm,
                            PDQ2lp,PDQ2lm,PDQ2lLp,PDQ2lLm,
                            qp_qp = q_q+Q_Q/4.+Q_q,
                            qm_qm = q_q+Q_Q/4.-Q_q;

                    cdouble
                            svqp = quark_2.interpolateShell("sv",qp_qp),
                            ssqp = quark_2.interpolateShell("ss",qp_qp),
                            svqm = quark_2.interpolateShell("sv",qm_qm),
                            ssqm = quark_2.interpolateShell("ss",qm_qm);


                    if (identity == "f500")
                    {
                        #include "./setups/f500/propagators.c"
                    }
                    else if(identity == "x3872")
                    {
                        #include "./setups/x3872/propagators.c"
                    }

                    for(int iyq=0; iyq<n_angular_y; iyq++){
                        double
                                yq  = meson_loop.grid_y[iyq],
                                yqw = meson_loop.weights_y[iyq];
                        cdouble
                                p_q = std::sqrt(p_p)*std::sqrt(q_q)*(zp*zq + std::sqrt(1.-zp*zp)*std::sqrt(1.-zq*zq)*yq),
                                FCtr,wj,
                                svp,ssp,svm,ssm,
                                svl,ssl,
                                p1,p2,p1r,p1l,p2r,p2l,
                                ampl,ampl01,ampl10,ampl01M,ampl10M,ampl01D,ampl10D;

                        cdouble svqmp = quark_1.interpolateShell("sv",q_q+p_p-2.*p_q),
                                ssqmp = quark_1.interpolateShell("ss",q_q+p_p-2.*p_q);

                        wj = qw*zqw*yqw * qj*zqj;

                        cdouble k_k = p_p + q_q - 2.*p_q;

                        vec<cdouble>  v;
                        v.resize(1000);

                        Gmt = G_mt(k_k);

                        if (identity == "f500")
                        {
                            #include "./setups/f500/kernels_1l.c"
                        }
                        else if (identity == "x3872")
                        {
                            //#include "./setups/x3872/kernels_1l.c"
                        }

                        for(int il=0; il<n_radial_qloop; il++){
                            double
                                    l_l = quark_loop.grid_radial[il],
                                    lj  = l_l/2.,
                                    lw  = quark_loop.weights_radial[il];

                            for(int izl=0; izl<n_angular_z_qloop; izl++){
                                cdouble sv1,ss1,sv2,ss2,sv3,ss3,sv4,ss4;
                                double
                                        zl  = quark_loop.grid_z[izl],
                                        zlj = std::sqrt(1.-zl*zl),
                                        zlw = quark_loop.weights_z[izl];
                                cdouble
                                        Q_l = sqrt(Q_Q)*std::sqrt(l_l)*zl,
                                        sv1_q1, ss1_q1,
                                        lp_lp = l_l + Q_Q/4. + Q_l,
                                        lm_lm = l_l + Q_Q/4. - Q_l,
                                        svlp = quark_2.interpolateShell("sv",l_l+Q_Q/4.+Q_l),
                                        sslp = quark_2.interpolateShell("ss",l_l+Q_Q/4.+Q_l),
                                        svlm = quark_2.interpolateShell("sv",l_l+Q_Q/4.-Q_l),
                                        sslm = quark_2.interpolateShell("ss",l_l+Q_Q/4.-Q_l);

                                        sv1_q1 = quark_1.interpolateShell("sv",l_l+Q_Q/16.-Q_l/2.),
                                        ss1_q1 = quark_1.interpolateShell("ss",l_l+Q_Q/16.-Q_l/2.);

                                #include "./setups/x3872/propagators-inner.c"

                                for(int iyl=0; iyl<n_angular_y_qloop; iyl++){
                                    double
                                            yl  = quark_loop.grid_y[iyl],
                                            ylw = quark_loop.weights_y[iyl];
                                    cdouble
                                            p_l = std::sqrt(p_p)*std::sqrt(l_l)*(zp*zl + std::sqrt(1.-zp*zp)*std::sqrt(1.-zl*zl)*yl),
                                            sv2_q1,ss2_q1,sv2_q2,ss2_q2;

                                            sv2_q1 = quark_1.interpolateShell("sv",2.*p_l+Q_l/2.+l_l+Q_p/2.+p_p+Q_Q/16.);
                                            ss2_q1 = quark_1.interpolateShell("ss",2.*p_l+Q_l/2.+l_l+Q_p/2.+p_p+Q_Q/16.);
                                            sv2_q2 = quark_2.interpolateShell("sv",2.*p_l+Q_l/2.+l_l+Q_p/2.+p_p+Q_Q/16.);
                                            ss2_q2 = quark_2.interpolateShell("ss",2.*p_l+Q_l/2.+l_l+Q_p/2.+p_p+Q_Q/16.);

                                    for(int ipsil=0; ipsil<n_angular_psi_qloop; ipsil++){
                                        double
                                                psil  = quark_loop.grid_phi[ipsil],
                                                psilw = quark_loop.weights_phi[ipsil];

                                        cdouble sv4_q1,ss4_q1,sv4_q2,ss4_q2,sv3_q1,ss3_q1,sv3_q2,ss3_q2,
                                                q_l   = std::sqrt(q_q)*std::sqrt(l_l)*(zq*zl + std::sqrt(1.-zq*zq)*std::sqrt(1.-zl*zl)*yq*yl + std::sqrt(1.-zq*zq)*std::sqrt(1.-zl*zl)*std::sqrt(1.-yq*yq)*std::sqrt(1.-yl*yl)*std::cos(psil)),
                                                svll = quark_1.interpolateShell("sv",l_l+q_q-2.*q_l),
                                                ssll = quark_1.interpolateShell("ss",l_l+q_q-2.*q_l);

                                                sv4_q1 = quark_1.interpolateShell("sv",2.*q_l+Q_l/2.+l_l+Q_q/2.+q_q+Q_Q/16.);
                                                ss4_q1 = quark_1.interpolateShell("ss",2.*q_l+Q_l/2.+l_l+Q_q/2.+q_q+Q_Q/16.);
                                                sv4_q2 = quark_2.interpolateShell("sv",2.*q_l+Q_l/2.+l_l+Q_q/2.+q_q+Q_Q/16.);
                                                ss4_q2 = quark_2.interpolateShell("ss",2.*q_l+Q_l/2.+l_l+Q_q/2.+q_q+Q_Q/16.);

                                                sv3_q1 = quark_1.interpolateShell("sv",2.*p_l+2.*q_l-Q_l/2.+l_l+2.*p_q-Q_p/2.+p_p-Q_q/2.+q_q+Q_Q/16.),
                                                ss3_q1 = quark_1.interpolateShell("ss",2.*p_l+2.*q_l-Q_l/2.+l_l+2.*p_q-Q_p/2.+p_p-Q_q/2.+q_q+Q_Q/16.),
                                                sv3_q2 = quark_2.interpolateShell("sv",2.*p_l+2.*q_l-Q_l/2.+l_l+2.*p_q-Q_p/2.+p_p-Q_q/2.+q_q+Q_Q/16.),
                                                ss3_q2 = quark_2.interpolateShell("ss",2.*p_l+2.*q_l-Q_l/2.+l_l+2.*p_q-Q_p/2.+p_p-Q_q/2.+q_q+Q_Q/16.);


                                        wj    = qw*zqw*yqw * lw*zlw*ylw*psilw * qj*zqj * lj*zlj;

                                        vec<cdouble>  w(10000,0.);

                                        Gmt = G_mt(p_p+l_l-2.*p_l);

                                        if(identity == "f500")
                                        {
                                            #include "./setups/f500/kernels_2l.c"
                                        }
                                        else if(identity == "x3872")
                                        {
                                            //#include "./setups/x3872/kernels_2l.c"
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

    int nb1=n_basis_M1,
        nb2=n_basis_M2,
        nb3=n_basis_DQ,
        nb4=n_basis_QQ;

    for(int ib1=0; ib1<nb1; ib1++){
        for(int ib2=0; ib2<nb2; ib2++){
            for(int ib3=0; ib3<nb3; ib3++){
                for(int ib4=0; ib4<nb4; ib4++){
                  for(int ip=0; ip<n_radial; ip++){
                      for(int izp=0; izp<n_angular_z; izp++){
                          for(int iq=0; iq<n_radial; iq++){
                              for(int izq=0; izq<n_angular_z; izq++){
                                  kernel[0][SI_K(ip,izp,ib1,iq,izq,nb1+ib2)]                        = K12[SI_K12(ip,izp,ib1,iq,izq,ib2)];
                                  kernel[0][SI_K(ip,izp,ib1,iq,izq,nb1+nb2+ib3)]                    = K13[SI_K13(ip,izp,ib1,iq,izq,ib3)];
                                  kernel[0][SI_K(ip,izp,ib1,iq,izq,nb1+nb2+nb3+ib4)]                = K14[SI_K14(ip,izp,ib1,iq,izq,ib4)];
                                  kernel[0][SI_K(ip,izp,nb1+ib2,iq,izq,ib1)]                        = K21[SI_K21(ip,izp,ib2,iq,izq,ib1)];
                                  kernel[0][SI_K(ip,izp,nb1+ib2,iq,izq,nb1+nb2+ib3)]                = K23[SI_K23(ip,izp,ib2,iq,izq,ib3)];
                                  kernel[0][SI_K(ip,izp,nb1+ib2,iq,izq,nb1+nb2+nb3+ib4)]            = K24[SI_K24(ip,izp,ib2,iq,izq,ib4)];
                                  kernel[0][SI_K(ip,izp,nb1+nb2+ib3,iq,izq,ib1)]                    = K31[SI_K31(ip,izp,ib3,iq,izq,ib1)];
                                  kernel[0][SI_K(ip,izp,nb1+nb2+ib3,iq,izq,nb1+ib2)]                = K32[SI_K32(ip,izp,ib3,iq,izq,ib2)];
                                  kernel[0][SI_K(ip,izp,nb1+nb2+ib3,iq,izq,nb1+nb2+nb3+ib4)]        = K34[SI_K34(ip,izp,ib3,iq,izq,ib4)];
                                  kernel[0][SI_K(ip,izp,nb1+nb2+nb3+ib4,iq,izq,ib1)]                = K41[SI_K41(ip,izp,ib4,iq,izq,ib1)];
                                  kernel[0][SI_K(ip,izp,nb1+nb2+nb3+ib4,iq,izq,nb1+ib2)]            = K42[SI_K42(ip,izp,ib4,iq,izq,ib2)];
                                  kernel[0][SI_K(ip,izp,nb1+nb2+nb3+ib4,iq,izq,nb1+nb2+ib3)]        = K43[SI_K43(ip,izp,ib4,iq,izq,ib3)];
                                  kernel[0][SI_K(ip,izp,nb1+nb2+nb3+ib4,iq,izq,nb1+nb2+nb3+ib4)]    = K44[SI_K44(ip,izp,ib4,iq,izq,ib4)];
                              }
                          }
                      }
                  }
               }
            }
        }
    }

    if(identity == "f500")
    {
        #include "./setups/f500/subkernels.c"
    }
    else if(identity == "x3872")
    {
        #include "./setups/x3872/subkernels.c"
    }

}

int         Tetraquark::SI_K12(int ip, int izp, int ib1, int iq, int izq, int ib2)
{
    return iq
        + izq   * n_radial
        + ib2   * n_radial      * n_angular_z
        + ip    * n_angular_z   * n_radial      * n_basis_M2
        + izp   * n_radial      * n_angular_z   * n_radial      * n_basis_M2
        + ib1   * n_radial      * n_angular_z   * n_basis_M2    * n_radial      * n_angular_z;
}

int         Tetraquark::SI_K13(int ip, int izp, int ib1, int iq, int izq, int ib3)
{
    return iq
        + izq   * n_radial
        + ib3   * n_radial      * n_angular_z
        + ip    * n_angular_z   * n_radial      * n_basis_DQ
        + izp   * n_radial      * n_angular_z   * n_radial      * n_basis_DQ
        + ib1   * n_radial      * n_angular_z   * n_basis_DQ    * n_radial      * n_angular_z;
}

int         Tetraquark::SI_K14(int ip, int izp, int ib1, int iq, int izq, int ib4)
{
    return iq
        + izq   * n_radial
        + ib4   * n_radial      * n_angular_z
        + ip    * n_angular_z   * n_radial      * n_basis_QQ
        + izp   * n_radial      * n_angular_z   * n_basis_QQ    * n_radial
        + ib1   * n_radial      * n_angular_z   * n_basis_QQ    * n_radial      * n_angular_z;
}

int         Tetraquark::SI_K21(int ip, int izp, int ib2, int iq, int izq, int ib1)
{
    return iq
        + izq   * n_radial
        + ib1   * n_radial      * n_angular_z
        + ip    * n_angular_z   * n_radial      * n_basis_M1
        + izp   * n_radial      * n_angular_z   * n_radial      * n_basis_M1
        + ib2   * n_radial      * n_angular_z   * n_basis_M1    * n_radial      * n_angular_z;
}

int         Tetraquark::SI_K23(int ip, int izp, int ib2, int iq, int izq, int ib3)
{
    return iq
        + izq   * n_radial
        + ib3   * n_radial      * n_angular_z
        + ip    * n_angular_z   * n_radial      * n_basis_DQ
        + izp   * n_radial      * n_angular_z   * n_radial      * n_basis_DQ
        + ib2   * n_radial      * n_angular_z   * n_basis_DQ    * n_radial      * n_angular_z;
}

int         Tetraquark::SI_K24(int ip, int izp, int ib2, int iq, int izq, int ib4)
{
    return iq
        + izq   * n_radial
        + ib4   * n_radial      * n_angular_z
        + ip    * n_angular_z   * n_radial      * n_basis_QQ
        + izp   * n_radial      * n_angular_z   * n_basis_QQ    * n_radial
        + ib2   * n_radial      * n_angular_z   * n_basis_QQ    * n_radial      * n_angular_z;
}

int         Tetraquark::SI_K31(int ip, int izp, int ib3, int iq, int izq, int ib1)
{
    return iq
        + izq   * n_radial
        + ib1   * n_radial      * n_angular_z
        + ip    * n_angular_z   * n_radial      * n_basis_M1
        + izp   * n_radial      * n_angular_z   * n_radial      * n_basis_M1
        + ib3   * n_radial      * n_angular_z   * n_basis_M1    * n_radial      * n_angular_z;
}

int         Tetraquark::SI_K32(int ip, int izp, int ib3, int iq, int izq, int ib2)
{
    return iq
        + izq   * n_radial
        + ib2   * n_radial      * n_angular_z
        + ip    * n_angular_z   * n_radial      * n_basis_M2
        + izp   * n_radial      * n_angular_z   * n_radial      * n_basis_M2
        + ib3   * n_radial      * n_angular_z   * n_basis_M2    * n_radial      * n_angular_z;
}

int         Tetraquark::SI_K34(int ip, int izp, int ib3, int iq, int izq, int ib4)
{
    return iq
        + izq   * n_radial
        + ib4   * n_radial      * n_angular_z
        + ip    * n_angular_z   * n_radial      * n_basis_QQ
        + izp   * n_radial      * n_angular_z   * n_basis_QQ    * n_radial
        + ib3   * n_radial      * n_angular_z   * n_basis_QQ    * n_radial      * n_angular_z;
}

int         Tetraquark::SI_K41(int ip, int izp, int ib4, int iq, int izq, int ib1)
{
    return iq
        + izq   * n_radial
        + ib1   * n_radial      * n_angular_z
        + ip    * n_angular_z   * n_radial      * n_basis_M1
        + izp   * n_radial      * n_angular_z   * n_basis_M1    * n_radial
        + ib4   * n_radial      * n_angular_z   * n_basis_M1    * n_radial      * n_angular_z;
}

int         Tetraquark::SI_K42(int ip, int izp, int ib4, int iq, int izq, int ib2)
{
    return iq
        + izq   * n_radial
        + ib2   * n_radial      * n_angular_z
        + ip    * n_angular_z   * n_radial      * n_basis_M2
        + izp   * n_radial      * n_angular_z   * n_basis_M2    * n_radial
        + ib4   * n_radial      * n_angular_z   * n_basis_M2    * n_radial      * n_angular_z;
}

int         Tetraquark::SI_K43(int ip, int izp, int ib4, int iq, int izq, int ib3)
{
    return iq
        + izq   * n_radial
        + ib3   * n_radial      * n_angular_z
        + ip    * n_angular_z   * n_radial      * n_basis_DQ
        + izp   * n_radial      * n_angular_z   * n_basis_DQ    * n_radial
        + ib4   * n_radial      * n_angular_z   * n_basis_DQ    * n_radial      * n_angular_z;
}

int         Tetraquark::SI_K44(int ip, int izp, int ib4, int iq, int izq, int ib3)
{
    return iq
           + izq   * n_radial
           + ib3   * n_radial      * n_angular_z
           + ip    * n_angular_z   * n_radial      * n_basis_QQ
           + izp   * n_radial      * n_angular_z   * n_basis_QQ    * n_radial
           + ib4   * n_radial      * n_angular_z   * n_basis_QQ    * n_radial      * n_angular_z;
}

int         Tetraquark::SI_K_01(int ip, int izp, int ib1, int iq, int izq, int ib2)
{
    return iq
        + izq   * n_radial
        + ib2   * n_radial  * n_angular_z
        + ip    * n_radial  * n_angular_z   * (n_basis_M1+n_basis_M2+n_basis_DQ)
        + izp   * n_radial  * n_angular_z   * (n_basis_M1+n_basis_M2+n_basis_DQ)   * n_radial
        + ib1   * n_radial  * n_angular_z   * (n_basis_M1+n_basis_M2+n_basis_DQ)   * n_radial  * n_angular_z;
}

int         Tetraquark::SI_K_02(int ip, int izp, int ib1, int iq, int izq, int ib3)
{
    return iq
        + izq   * n_radial
        + ib3   * n_radial  * n_angular_z
        + ip    * n_radial  * n_angular_z   * (n_basis_M1+n_basis_M2+n_basis_QQ)
        + izp   * n_radial  * n_angular_z   * (n_basis_M1+n_basis_M2+n_basis_QQ)   * n_radial
        + ib1   * n_radial  * n_angular_z   * (n_basis_M1+n_basis_M2+n_basis_QQ)   * n_radial  * n_angular_z;
}

int         Tetraquark::SI_K_03(int ip, int izp, int ib2, int iq, int izq, int ib3)
{
    return iq
        + izq   * n_radial
        + ib3   * n_radial  * n_angular_z
        + ip    * n_radial  * n_angular_z   * (n_basis_M1+n_basis_DQ+n_basis_QQ)
        + izp   * n_radial  * n_angular_z   * (n_basis_M1+n_basis_DQ+n_basis_QQ)   * n_radial
        + ib2   * n_radial  * n_angular_z   * (n_basis_M1+n_basis_DQ+n_basis_QQ)   * n_radial  * n_angular_z;
}

int         Tetraquark::SI_K_04(int ip, int izp, int ib2, int iq, int izq, int ib3)
{
    return iq
        + izq   * n_radial
        + ib3   * n_radial  * n_angular_z
        + ip    * n_radial  * n_angular_z   * (n_basis_M2+n_basis_QQ+n_basis_DQ)
        + izp   * n_radial  * n_angular_z   * (n_basis_M2+n_basis_QQ+n_basis_DQ)   * n_radial
        + ib2   * n_radial  * n_angular_z   * (n_basis_M2+n_basis_QQ+n_basis_DQ)   * n_radial  * n_angular_z;
}

int         Tetraquark::SI_K_05(int ip, int izp, int ib2, int iq, int izq, int ib3)
{
    return iq
        + izq   * n_radial
        + ib3   * n_radial  * n_angular_z
        + ip    * n_radial  * n_angular_z   * (n_basis_M1+n_basis_M2)
        + izp   * n_radial  * n_angular_z   * (n_basis_M1+n_basis_M2)   * n_radial
        + ib2   * n_radial  * n_angular_z   * (n_basis_M1+n_basis_M2)   * n_radial  * n_angular_z;
}

int         Tetraquark::SI_K_06(int ip, int izp, int ib2, int iq, int izq, int ib3)
{
    return iq
        + izq   * n_radial
        + ib3   * n_radial  * n_angular_z
        + ip    * n_radial  * n_angular_z   * (n_basis_M1+n_basis_DQ)
        + izp   * n_radial  * n_angular_z   * (n_basis_M1+n_basis_DQ)   * n_radial
        + ib2   * n_radial  * n_angular_z   * (n_basis_M1+n_basis_DQ)   * n_radial  * n_angular_z;
}

int         Tetraquark::SI_K_07(int ip, int izp, int ib2, int iq, int izq, int ib3)
{
    return iq
        + izq   * n_radial
        + ib3   * n_radial  * n_angular_z
        + ip    * n_radial  * n_angular_z   * (n_basis_M1+n_basis_QQ)
        + izp   * n_radial  * n_angular_z   * (n_basis_M1+n_basis_QQ)   * n_radial
        + ib2   * n_radial  * n_angular_z   * (n_basis_M1+n_basis_QQ)   * n_radial  * n_angular_z;
}

int         Tetraquark::SI_K_08(int ip, int izp, int ib2, int iq, int izq, int ib3)
{
    return iq
        + izq   * n_radial
        + ib3   * n_radial  * n_angular_z
        + ip    * n_radial  * n_angular_z   * (n_basis_M2+n_basis_DQ)
        + izp   * n_radial  * n_angular_z   * (n_basis_M2+n_basis_DQ)   * n_radial
        + ib2   * n_radial  * n_angular_z   * (n_basis_M2+n_basis_DQ)   * n_radial  * n_angular_z;
}

int         Tetraquark::SI_K_09(int ip, int izp, int ib2, int iq, int izq, int ib3)
{
    return iq
        + izq   * n_radial
        + ib3   * n_radial  * n_angular_z
        + ip    * n_radial  * n_angular_z   * (n_basis_M2+n_basis_QQ)
        + izp   * n_radial  * n_angular_z   * (n_basis_M2+n_basis_QQ)   * n_radial
        + ib2   * n_radial  * n_angular_z   * (n_basis_M2+n_basis_QQ)   * n_radial  * n_angular_z;
}

int         Tetraquark::SI_K_10(int ip, int izp, int ib2, int iq, int izq, int ib3)
{
    return iq
        + izq   * n_radial
        + ib3   * n_radial  * n_angular_z
        + ip    * n_radial  * n_angular_z   * (n_basis_DQ+n_basis_QQ)
        + izp   * n_radial  * n_angular_z   * (n_basis_DQ+n_basis_QQ)   * n_radial
        + ib2   * n_radial  * n_angular_z   * (n_basis_DQ+n_basis_QQ)   * n_radial  * n_angular_z;
}

int         Tetraquark::SI_K_11(int ip, int izp, int ib2, int iq, int izq, int ib3)
{
    return iq
           + izq   * n_radial
           + ib3   * n_radial  * n_angular_z
           + ip    * n_radial  * n_angular_z   * n_basis_QQ
           + izp   * n_radial  * n_angular_z   * n_basis_QQ   * n_radial
           + ib2   * n_radial  * n_angular_z   * n_basis_QQ   * n_radial  * n_angular_z;
}

int         Tetraquark::SI_K(int ip, int izp, int ib1, int iq, int izq, int ib2)
{
    return iq
        + izq   * n_radial
        + ib2   * n_radial  * n_angular_z
        + ip    * n_radial  * n_angular_z   * (n_basis_M1+n_basis_M2+n_basis_DQ+n_basis_QQ)
        + izp   * n_radial  * n_angular_z   * (n_basis_M1+n_basis_M2+n_basis_DQ+n_basis_QQ) * n_radial
        + ib1   * n_radial  * n_angular_z   * (n_basis_M1+n_basis_M2+n_basis_DQ+n_basis_QQ) * n_radial  * n_angular_z;
}

int         Tetraquark::SI_F(int ib, int ip, int izp)
{
    return ip
        + izp   * n_radial
        + ib    * n_radial  * n_angular_z;
}

void        Tetraquark::precalc_grids()
{
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
}

cdouble        Tetraquark::sqrt_I(cdouble z)
{
        if(arg(z) >= 0.) {
            return std::sqrt(z);
        }
        else if (arg(z) < 0.) {
            return -std::sqrt(z);
        } else
            return 0.;
}

void           Tetraquark::get_sol(Eigen::ComplexEigenSolver<Eigen::MatrixXcd>& es, vec<vec<vec<double>>>& sol)
{
    int     n = n_radial * n_angular_z * (n_basis_M1+n_basis_M2+n_basis_DQ);
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

    for(int ib=0; ib<n_basis_M1; ib++){
        for(int ip=0; ip<n_radial; ip++){
            for(int iz=0; iz<n_angular_z; iz++){
                sol[0][ib].push_back( meson_loop.grid_radial[ip] );
                sol[0][ib].push_back( meson_loop.grid_z[iz] );
                sol[0][ib].push_back( real(es.eigenvectors()(ip + iz*n_radial + (ib+0)*n_radial*n_angular_z + index_largest*n)) );
                sol[0][ib].push_back( imag(es.eigenvectors()(ip + iz*n_radial + (ib+0)*n_radial*n_angular_z + index_largest*n)) );
            }
        }
    }

    for(int ib=0; ib<n_basis_M2; ib++){
        for(int ip=0; ip<n_radial; ip++){
            for(int iz=0; iz<n_angular_z; iz++){
                sol[1][ib].push_back( meson_loop.grid_radial[ip] );
                sol[1][ib].push_back( meson_loop.grid_z[iz] );
                sol[1][ib].push_back( real(es.eigenvectors()(ip + iz*n_radial + (ib+n_basis_M1)*n_radial*n_angular_z + index_largest*n)) );
                sol[1][ib].push_back( imag(es.eigenvectors()(ip + iz*n_radial + (ib+n_basis_M1)*n_radial*n_angular_z + index_largest*n)) );
            }
        }
    }

    for(int ib=0; ib<n_basis_DQ; ib++){
        for(int ip=0; ip<n_radial; ip++){
            for(int iz=0; iz<n_angular_z; iz++){
                sol[2][ib].push_back( meson_loop.grid_radial[ip] );
                sol[2][ib].push_back( meson_loop.grid_z[iz] );
                sol[2][ib].push_back( real(es.eigenvectors()(ip + iz*n_radial + (ib+n_basis_M1+n_basis_M2)*n_radial*n_angular_z + index_largest*n)) );
                sol[2][ib].push_back( imag(es.eigenvectors()(ip + iz*n_radial + (ib+n_basis_M1+n_basis_M2)*n_radial*n_angular_z + index_largest*n)) );
            }
        }
    }
}

cdouble Tetraquark::G_mt(cdouble k_k)
{
    double
            omega               =   0.4,
            D_maristandy        =   0.93,
            gamma_m             =   12.0/(33.0-2.0*4.0),
            tau_maristandy      =   M_E*M_E-1.0,
            lambda_qcd          =   0.234,
            mt_maristandy       =   0.5,
            pauli_villars       =   1.e+12;

    return ((4.0 * M_PI*M_PI * D_maristandy * k_k * std::exp( - k_k / (omega*omega) )) /( std::pow(omega,6) )
            + (8.0 * M_PI*M_PI * gamma_m * ( 1.0 - std::exp( - k_k/(4.0*mt_maristandy*mt_maristandy) ) ) / k_k )
            / ( log(tau_maristandy + std::pow( (1.0 + k_k / (lambda_qcd*lambda_qcd) ) ,2) ) ))
            * (pauli_villars/(pauli_villars+std::abs(k_k)));

}
