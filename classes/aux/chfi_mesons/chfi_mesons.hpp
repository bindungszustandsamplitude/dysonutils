
/*
FILENAME: chfi_mesons.hpp
AUTHOR:   Nico Santowsky
EMAIL:    physics@nsanto.de
DATE:     2021-12-21
LICENSE:  Apache License 2.0
*/

#pragma once

typedef std::vector<std::vector<std::complex<double>>>  vvcdouble;
typedef std::vector<std::complex<double>>               vcdouble;
typedef std::complex<double>                            cdouble;
typedef std::vector<double>                             vdouble;

vdouble
        xgrid_chfi_pion,
        xgrid_chfi_kaon,
        xgrid_chfi_eta_c,
        xgrid_chfi_ps_0200_0037,
        xgrid_chfi_ps_0500_0037,
        xgrid_chfi_ps_0500_0500,
        xgrid_chfi_ps_0850_0850,
        xgrid_chfi_ps_0850_0037,
        xgrid_chfi_ps_2100_0037,
        xgrid_chfi_ps_2100_2100,
        xgrid_chfi_ps_8440_8440,
        xgrid_chfi_ps_8700_0037,
        xgrid_chfi_rho,
        xgrid_chfi_j_psi,
        xgrid_chfi_vc_0200_0037,
        xgrid_chfi_vc_0500_0037,
        xgrid_chfi_vc_8700_7300,
        xgrid_chfi_vc_8700_6000,
        xgrid_chfi_vc_8440_8440,
        xgrid_chfi_vc_8700_0037;

vvcdouble
        fgrid_chfi_pion(4),
        fgrid_chfi_kaon(4),
        fgrid_chfi_eta_c(4),
        fgrid_chfi_ps_0200_0037(4),
        fgrid_chfi_ps_0500_0037(4),
        fgrid_chfi_ps_0500_0500(4),
        fgrid_chfi_ps_0850_0850(4),
        fgrid_chfi_ps_0850_0037(4),
        fgrid_chfi_ps_2100_0037(4),
        fgrid_chfi_ps_2100_2100(4),
        fgrid_chfi_ps_8700_0037(4),
        fgrid_chfi_ps_8440_8440(4),
        fgrid_chfi_rho(8),
        fgrid_chfi_j_psi(8),
        fgrid_chfi_vc_0200_0037(8),
        fgrid_chfi_vc_0500_0037(8),
        fgrid_chfi_vc_8700_7300(8),
        fgrid_chfi_vc_8700_6000(8),
        fgrid_chfi_vc_8700_0037(8),
        fgrid_chfi_vc_8440_8440(8);


class chfi_m
{
  public:

    static void read_ps()
    {
      vdouble x1;
      double dummy,N;

      std::fstream read_pion;
      double norm_pion;
      read_pion.open("/home/nico/nico_research/programs/classes/bound_states/chfi_mesons/ps/ps_0037_0037.dat", std::ios::in);
        read_pion >> dummy;
        read_pion >> norm_pion;
        for (int i=0;i<2;i++){read_pion >> dummy;}
        read_pion >> N;
          for (int i=0; i<N; i++){
          read_pion >> dummy;
          x1.push_back(dummy);
          read_pion >> dummy;
          x1.push_back(dummy);
          read_pion >> dummy;
          x1.push_back(-dummy);
          read_pion >> dummy;
          x1.push_back(-dummy);
          read_pion >> dummy;
          x1.push_back(dummy);
          read_pion >> dummy;
          read_pion >> dummy;
          read_pion >> dummy;
          read_pion >> dummy;
        }
      read_pion.close();
      for (int i=0; i<N; i++){
        xgrid_chfi_pion.push_back( x1[i*5] );
      }
      for (int i=0; i<N; i++){
        fgrid_chfi_pion[0].push_back( x1[i*5+1]/norm_pion/std::sqrt(2.) );
        fgrid_chfi_pion[1].push_back( x1[i*5+2]/norm_pion/std::sqrt(2.) );
        fgrid_chfi_pion[2].push_back( x1[i*5+3]/norm_pion/std::sqrt(2.) );
        fgrid_chfi_pion[3].push_back( x1[i*5+4]/norm_pion/std::sqrt(2.) );
      }
      x1.clear();

      std::fstream read_0200_0037;
      double norm_0200_0037;
      read_0200_0037.open("/home/nico/nico_research/programs/classes/bound_states/chfi_mesons/ps/ps_0200_0037.dat", std::ios::in);
        read_0200_0037 >> dummy;
        read_0200_0037 >> norm_0200_0037;
        for (int i=0;i<2;i++){read_0200_0037 >> dummy;}
        read_0200_0037 >> N;
          for (int i=0; i<N; i++){
          read_0200_0037 >> dummy;
          x1.push_back(dummy);
          read_0200_0037 >> dummy;
          x1.push_back(dummy);
          read_0200_0037 >> dummy;
          x1.push_back(-dummy);
          read_0200_0037 >> dummy;
          x1.push_back(-dummy);
          read_0200_0037 >> dummy;
          x1.push_back(dummy);
          read_0200_0037 >> dummy;
          read_0200_0037 >> dummy;
          read_0200_0037 >> dummy;
          read_0200_0037 >> dummy;
        }
      read_0200_0037.close();
      for (int i=0; i<N; i++){
        xgrid_chfi_ps_0200_0037.push_back( x1[i*5] );
      }
      for (int i=0; i<N; i++){
        fgrid_chfi_ps_0200_0037[0].push_back( x1[i*5+1]/norm_0200_0037/std::sqrt(2.) );
        fgrid_chfi_ps_0200_0037[1].push_back( x1[i*5+2]/norm_0200_0037/std::sqrt(2.) );
        fgrid_chfi_ps_0200_0037[2].push_back( x1[i*5+3]/norm_0200_0037/std::sqrt(2.) );
        fgrid_chfi_ps_0200_0037[3].push_back( x1[i*5+4]/norm_0200_0037/std::sqrt(2.) );
      }
      x1.clear();

      std::fstream read_0500_0037;
      double norm_0500_0037;
      read_0500_0037.open("/home/nico/nico_research/programs/classes/bound_states/chfi_mesons/ps/ps_0500_0037.dat", std::ios::in);
        read_0500_0037 >> dummy;
        read_0500_0037 >> norm_0500_0037;
        for (int i=0;i<2;i++){read_0500_0037 >> dummy;}
        read_0500_0037 >> N;
          for (int i=0; i<N; i++){
          read_0500_0037 >> dummy;
          x1.push_back(dummy);
          read_0500_0037 >> dummy;
          x1.push_back(dummy);
          read_0500_0037 >> dummy;
          x1.push_back(-dummy);
          read_0500_0037 >> dummy;
          x1.push_back(-dummy);
          read_0500_0037 >> dummy;
          x1.push_back(dummy);
          read_0500_0037 >> dummy;
          read_0500_0037 >> dummy;
          read_0500_0037 >> dummy;
          read_0500_0037 >> dummy;
        }
      read_0500_0037.close();
      for (int i=0; i<N; i++){
        xgrid_chfi_ps_0500_0037.push_back( x1[i*5] );
      }
      for (int i=0; i<N; i++){
        fgrid_chfi_ps_0500_0037[0].push_back( x1[i*5+1]/norm_0500_0037/std::sqrt(2.) );
        fgrid_chfi_ps_0500_0037[1].push_back( x1[i*5+2]/norm_0500_0037/std::sqrt(2.) );
        fgrid_chfi_ps_0500_0037[2].push_back( x1[i*5+3]/norm_0500_0037/std::sqrt(2.) );
        fgrid_chfi_ps_0500_0037[3].push_back( x1[i*5+4]/norm_0500_0037/std::sqrt(2.) );
      }
      x1.clear();


      std::fstream read_0500_0500;
      double norm_0500_0500;
      read_0500_0500.open("/home/nico/nico_research/programs/classes/bound_states/chfi_mesons/ps/ps_0500_0500.dat", std::ios::in);
        read_0500_0500 >> dummy;
        read_0500_0500 >> norm_0500_0500;
        for (int i=0;i<2;i++){read_0500_0500 >> dummy;}
        read_0500_0500 >> N;
          for (int i=0; i<N; i++){
          read_0500_0500 >> dummy;
          x1.push_back(dummy);
          read_0500_0500 >> dummy;
          x1.push_back(dummy);
          read_0500_0500 >> dummy;
          x1.push_back(-dummy);
          read_0500_0500 >> dummy;
          x1.push_back(-dummy);
          read_0500_0500 >> dummy;
          x1.push_back(dummy);
          read_0500_0500 >> dummy;
          read_0500_0500 >> dummy;
          read_0500_0500 >> dummy;
          read_0500_0500 >> dummy;
        }
      read_0500_0500.close();
      for (int i=0; i<N; i++){
        xgrid_chfi_ps_0500_0500.push_back( x1[i*5] );
      }
      for (int i=0; i<N; i++){
        fgrid_chfi_ps_0500_0500[0].push_back( x1[i*5+1]/norm_0500_0500/std::sqrt(2.) );
        fgrid_chfi_ps_0500_0500[1].push_back( x1[i*5+2]/norm_0500_0500/std::sqrt(2.) );
        fgrid_chfi_ps_0500_0500[2].push_back( x1[i*5+3]/norm_0500_0500/std::sqrt(2.) );
        fgrid_chfi_ps_0500_0500[3].push_back( x1[i*5+4]/norm_0500_0500/std::sqrt(2.) );
      }
      x1.clear();

      std::fstream read_0850_0850;
      double norm_0850_0850;
      read_0850_0850.open("/home/nico/nico_research/programs/classes/bound_states/chfi_mesons/ps/ps_0850_0850.dat", std::ios::in);
        read_0850_0850 >> dummy;
        read_0850_0850 >> norm_0850_0850;
        for (int i=0;i<2;i++){read_0850_0850 >> dummy;}
        read_0850_0850 >> N;
          for (int i=0; i<N; i++){
          read_0850_0850 >> dummy;
          x1.push_back(dummy);
          read_0850_0850 >> dummy;
          x1.push_back(dummy);
          read_0850_0850 >> dummy;
          x1.push_back(-dummy);
          read_0850_0850 >> dummy;
          x1.push_back(-dummy);
          read_0850_0850 >> dummy;
          x1.push_back(dummy);
          read_0850_0850 >> dummy;
          read_0850_0850 >> dummy;
          read_0850_0850 >> dummy;
          read_0850_0850 >> dummy;
        }
      read_0850_0850.close();
      for (int i=0; i<N; i++){
        xgrid_chfi_ps_0850_0850.push_back( x1[i*5] );
      }
      for (int i=0; i<N; i++){
        fgrid_chfi_ps_0850_0850[0].push_back( x1[i*5+1]/norm_0850_0850/std::sqrt(2.) );
        fgrid_chfi_ps_0850_0850[1].push_back( x1[i*5+2]/norm_0850_0850/std::sqrt(2.) );
        fgrid_chfi_ps_0850_0850[2].push_back( x1[i*5+3]/norm_0850_0850/std::sqrt(2.) );
        fgrid_chfi_ps_0850_0850[3].push_back( x1[i*5+4]/norm_0850_0850/std::sqrt(2.) );
      }
      x1.clear();

      std::fstream read_kaon;
      double norm_kaon;
      read_kaon.open("/home/nico/nico_research/programs/classes/bound_states/chfi_mesons/ps/ps_0850_0037.dat", std::ios::in);
        read_kaon >> dummy;
        read_kaon >> norm_kaon;
        for (int i=0;i<2;i++){read_kaon >> dummy;}
        read_kaon >> N;
          for (int i=0; i<N; i++){
          read_kaon >> dummy;
          x1.push_back(dummy);
          read_kaon >> dummy;
          x1.push_back(dummy);
          read_kaon >> dummy;
          x1.push_back(-dummy);
          read_kaon >> dummy;
          x1.push_back(-dummy);
          read_kaon >> dummy;
          x1.push_back(dummy);
          read_kaon >> dummy;
          read_kaon >> dummy;
          read_kaon >> dummy;
          read_kaon >> dummy;
        }
      read_kaon.close();
      for (int i=0; i<N; i++){
        xgrid_chfi_kaon.push_back( x1[i*5] );
      }
      for (int i=0; i<N; i++){
        fgrid_chfi_kaon[0].push_back( x1[i*5+1]/norm_kaon/std::sqrt(2.) );
        fgrid_chfi_kaon[1].push_back( x1[i*5+2]/norm_kaon/std::sqrt(2.) );
        fgrid_chfi_kaon[2].push_back( x1[i*5+3]/norm_kaon/std::sqrt(2.) );
        fgrid_chfi_kaon[3].push_back( x1[i*5+4]/norm_kaon/std::sqrt(2.) );
      }
      x1.clear();

      std::fstream read_2100_0037;
      double norm_2100_0037;
      read_2100_0037.open("/home/nico/nico_research/programs/classes/bound_states/chfi_mesons/ps/ps_2100_0037.dat", std::ios::in);
        read_2100_0037 >> dummy;
        read_2100_0037 >> norm_2100_0037;
        for (int i=0;i<2;i++){read_2100_0037 >> dummy;}
        read_2100_0037 >> N;
          for (int i=0; i<N; i++){
          read_2100_0037 >> dummy;
          x1.push_back(dummy);
          read_2100_0037 >> dummy;
          x1.push_back(dummy);
          read_2100_0037 >> dummy;
          x1.push_back(-dummy);
          read_2100_0037 >> dummy;
          x1.push_back(-dummy);
          read_2100_0037 >> dummy;
          x1.push_back(dummy);
          read_2100_0037 >> dummy;
          read_2100_0037 >> dummy;
          read_2100_0037 >> dummy;
          read_2100_0037 >> dummy;
        }
      read_2100_0037.close();
      for (int i=0; i<N; i++){
        xgrid_chfi_ps_2100_0037.push_back( x1[i*5] );
      }
      for (int i=0; i<N; i++){
        fgrid_chfi_ps_2100_0037[0].push_back( x1[i*5+1]/norm_2100_0037/std::sqrt(2.) );
        fgrid_chfi_ps_2100_0037[1].push_back( x1[i*5+2]/norm_2100_0037/std::sqrt(2.) );
        fgrid_chfi_ps_2100_0037[2].push_back( x1[i*5+3]/norm_2100_0037/std::sqrt(2.) );
        fgrid_chfi_ps_2100_0037[3].push_back( x1[i*5+4]/norm_2100_0037/std::sqrt(2.) );
      }
      x1.clear();



      std::fstream read_2100_2100;
      double norm_2100_2100;
      read_2100_2100.open("/home/nico/nico_research/programs/classes/bound_states/chfi_mesons/ps/ps_2100_2100.dat", std::ios::in);
        read_2100_2100 >> dummy;
        read_2100_2100 >> norm_2100_2100;
        for (int i=0;i<2;i++){read_2100_2100 >> dummy;}
        read_2100_2100 >> N;
          for (int i=0; i<N; i++){
          read_2100_2100 >> dummy;
          x1.push_back(dummy);
          read_2100_2100 >> dummy;
          x1.push_back(dummy);
          read_2100_2100 >> dummy;
          x1.push_back(-dummy);
          read_2100_2100 >> dummy;
          x1.push_back(-dummy);
          read_2100_2100 >> dummy;
          x1.push_back(dummy);
          read_2100_2100 >> dummy;
          read_2100_2100 >> dummy;
          read_2100_2100 >> dummy;
          read_2100_2100 >> dummy;
        }
      read_2100_2100.close();
      for (int i=0; i<N; i++){
        xgrid_chfi_ps_2100_2100.push_back( x1[i*5] );
      }
      for (int i=0; i<N; i++){
        fgrid_chfi_ps_2100_2100[0].push_back( x1[i*5+1]/norm_2100_2100/std::sqrt(2.) );
        fgrid_chfi_ps_2100_2100[1].push_back( x1[i*5+2]/norm_2100_2100/std::sqrt(2.) );
        fgrid_chfi_ps_2100_2100[2].push_back( x1[i*5+3]/norm_2100_2100/std::sqrt(2.) );
        fgrid_chfi_ps_2100_2100[3].push_back( x1[i*5+4]/norm_2100_2100/std::sqrt(2.) );
      }
      x1.clear();


      std::fstream read_eta_c;
      double norm_eta_c;
      read_eta_c.open("/home/nico/nico_research/programs/classes/bound_states/chfi_mesons/ps/ps_8440_8440.dat", std::ios::in);
        read_eta_c >> dummy;
        read_eta_c >> norm_eta_c;
        for (int i=0;i<2;i++){read_eta_c >> dummy;}
        read_eta_c >> N;
          for (int i=0; i<N; i++){
          read_eta_c >> dummy;
          x1.push_back(dummy);
          read_eta_c >> dummy;
          x1.push_back(dummy);
          read_eta_c >> dummy;
          x1.push_back(-dummy);
          read_eta_c >> dummy;
          x1.push_back(-dummy);
          read_eta_c >> dummy;
          x1.push_back(dummy);
          read_eta_c >> dummy;
          read_eta_c >> dummy;
          read_eta_c >> dummy;
          read_eta_c >> dummy;
        }
      read_eta_c.close();
      for (int i=0; i<N; i++){
        xgrid_chfi_eta_c.push_back( x1[i*5] );
      }
      for (int i=0; i<N; i++){
        fgrid_chfi_eta_c[0].push_back( x1[i*5+1]/norm_eta_c/std::sqrt(2.) );
        fgrid_chfi_eta_c[1].push_back( x1[i*5+2]/norm_eta_c/std::sqrt(2.) );
        fgrid_chfi_eta_c[2].push_back( x1[i*5+3]/norm_eta_c/std::sqrt(2.) );
        fgrid_chfi_eta_c[3].push_back( x1[i*5+4]/norm_eta_c/std::sqrt(2.) );
      }
      x1.clear();
    }

    static void read_vc()
    {
      vdouble x1;
      double dummy,N;

      std::fstream read_rho;
      double norm_rho;
      read_rho.open("/home/nico/nico_research/programs/classes/bound_states/chfi_mesons/vc/vc_0037_0037.dat", std::ios::in);
        read_rho >> dummy;
        read_rho >> norm_rho;
      for (int i=0;i<2;i++){read_rho >> dummy;}
          read_rho >> N;
          for (int i=0; i<N; i++){
          read_rho >> dummy;
          x1.push_back(dummy);
          read_rho >> dummy;
          x1.push_back(dummy);
          read_rho >> dummy;
          x1.push_back(dummy);
          read_rho >> dummy;
          x1.push_back(dummy);
          read_rho >> dummy;
          x1.push_back(dummy);
          read_rho >> dummy;
          x1.push_back(dummy);
          read_rho >> dummy;
          x1.push_back(dummy);
          read_rho >> dummy;
          x1.push_back(dummy);
          read_rho >> dummy;
          x1.push_back(dummy);
        }
      read_rho.close();
      for (int i=0; i<N; i++){
        xgrid_chfi_rho.push_back( x1[i*9] );
      }
      for (int i=0; i<N; i++){
        fgrid_chfi_rho[0].push_back( x1[i*9+1]/norm_rho/std::sqrt(2.) );
        fgrid_chfi_rho[1].push_back( -x1[i*9+2]/norm_rho/std::sqrt(2.) );
        fgrid_chfi_rho[2].push_back( -x1[i*9+3]/norm_rho/std::sqrt(2.) );
        fgrid_chfi_rho[3].push_back( x1[i*9+4]/norm_rho/std::sqrt(2.) );
        fgrid_chfi_rho[4].push_back( -x1[i*9+5]/norm_rho/std::sqrt(2.) );
        fgrid_chfi_rho[5].push_back( x1[i*9+6]/norm_rho/std::sqrt(2.) );
        fgrid_chfi_rho[6].push_back( x1[i*9+7]/norm_rho/std::sqrt(2.) );
        fgrid_chfi_rho[7].push_back( -x1[i*9+8]/norm_rho/std::sqrt(2.) );
      }
      x1.clear();

      std::fstream read_j_psi;
      double norm_j_psi;
      read_j_psi.open("/home/nico/nico_research/programs/classes/bound_states/chfi_mesons/vc/vc_8700_8700.dat", std::ios::in);
        read_j_psi >> dummy;
        read_j_psi >> norm_j_psi;
        for (int i=0;i<2;i++){read_j_psi >> dummy;}
        read_j_psi >> N;
        for (int i=0; i<N; i++){
          read_j_psi >> dummy;
          x1.push_back(dummy);
          read_j_psi >> dummy;
          x1.push_back(dummy);
          read_j_psi >> dummy;
          x1.push_back(dummy);
          read_j_psi >> dummy;
          x1.push_back(dummy);
          read_j_psi >> dummy;
          x1.push_back(dummy);
          read_j_psi >> dummy;
          x1.push_back(dummy);
          read_j_psi >> dummy;
          x1.push_back(dummy);
          read_j_psi >> dummy;
          x1.push_back(dummy);
          read_j_psi >> dummy;
          x1.push_back(dummy);
        }
      read_j_psi.close();
      for (int i=0; i<N; i++){
        xgrid_chfi_j_psi.push_back( x1[i*9] );
      }
      for (int i=0; i<N; i++){
        fgrid_chfi_j_psi[0].push_back( x1[i*9+1]/norm_j_psi/std::sqrt(2.) );
        fgrid_chfi_j_psi[1].push_back( x1[i*9+2]/norm_j_psi/std::sqrt(2.) );
        fgrid_chfi_j_psi[2].push_back( x1[i*9+3]/norm_j_psi/std::sqrt(2.) );
        fgrid_chfi_j_psi[3].push_back( x1[i*9+4]/norm_j_psi/std::sqrt(2.) );
        fgrid_chfi_j_psi[4].push_back( x1[i*9+5]/norm_j_psi/std::sqrt(2.) );
        fgrid_chfi_j_psi[5].push_back( x1[i*9+6]/norm_j_psi/std::sqrt(2.) );
        fgrid_chfi_j_psi[6].push_back( x1[i*9+7]/norm_j_psi/std::sqrt(2.) );
        fgrid_chfi_j_psi[7].push_back( x1[i*9+8]/norm_j_psi/std::sqrt(2.) );
      }
      x1.clear();

      std::fstream read_vc_0200_0037;
      double norm_0200_0037;
      read_vc_0200_0037.open("/home/nico/nico_research/programs/classes/bound_states/chfi_mesons/vc/vc_0200_0037.dat", std::ios::in);
        read_vc_0200_0037 >> dummy;
        read_vc_0200_0037 >> norm_0200_0037;
        for (int i=0;i<2;i++){read_vc_0200_0037 >> dummy;}
        read_vc_0200_0037 >> N;
        for (int i=0; i<N; i++){
          read_vc_0200_0037 >> dummy;
          x1.push_back(dummy);
          read_vc_0200_0037 >> dummy;
          x1.push_back(dummy);
          read_vc_0200_0037 >> dummy;
          x1.push_back(dummy);
          read_vc_0200_0037 >> dummy;
          x1.push_back(dummy);
          read_vc_0200_0037 >> dummy;
          x1.push_back(dummy);
          read_vc_0200_0037 >> dummy;
          x1.push_back(dummy);
          read_vc_0200_0037 >> dummy;
          x1.push_back(dummy);
          read_vc_0200_0037 >> dummy;
          x1.push_back(dummy);
          read_vc_0200_0037 >> dummy;
          x1.push_back(dummy);
        }
      read_vc_0200_0037.close();
      for (int i=0; i<N; i++){
        xgrid_chfi_vc_0200_0037.push_back( x1[i*9] );
      }
      for (int i=0; i<N; i++){
        fgrid_chfi_vc_0200_0037[0].push_back( x1[i*9+1]/norm_0200_0037/std::sqrt(2.) );
        fgrid_chfi_vc_0200_0037[1].push_back( x1[i*9+2]/norm_0200_0037/std::sqrt(2.) );
        fgrid_chfi_vc_0200_0037[2].push_back( x1[i*9+3]/norm_0200_0037/std::sqrt(2.) );
        fgrid_chfi_vc_0200_0037[3].push_back( x1[i*9+4]/norm_0200_0037/std::sqrt(2.) );
        fgrid_chfi_vc_0200_0037[4].push_back( x1[i*9+5]/norm_0200_0037/std::sqrt(2.) );
        fgrid_chfi_vc_0200_0037[5].push_back( x1[i*9+6]/norm_0200_0037/std::sqrt(2.) );
        fgrid_chfi_vc_0200_0037[6].push_back( x1[i*9+7]/norm_0200_0037/std::sqrt(2.) );
        fgrid_chfi_vc_0200_0037[7].push_back( x1[i*9+8]/norm_0200_0037/std::sqrt(2.) );
      }
      x1.clear();

      std::fstream read_0500_0037;
      double norm_0500_0037;
      read_0500_0037.open("/home/nico/nico_research/programs/classes/bound_states/chfi_mesons/vc/vc_0500_0037.dat", std::ios::in);
        read_0500_0037 >> dummy;
        read_0500_0037 >> norm_0500_0037;
        for (int i=0;i<2;i++){read_0500_0037 >> dummy;}
        read_0500_0037 >> N;
          for (int i=0; i<N; i++){
          read_0500_0037 >> dummy;
          x1.push_back(dummy);
          read_0500_0037 >> dummy;
          x1.push_back(dummy);
          read_0500_0037 >> dummy;
          x1.push_back(dummy);
          read_0500_0037 >> dummy;
          x1.push_back(dummy);
          read_0500_0037 >> dummy;
          x1.push_back(dummy);
          read_0500_0037 >> dummy;
          x1.push_back(dummy);
          read_0500_0037 >> dummy;
          x1.push_back(dummy);
          read_0500_0037 >> dummy;
          x1.push_back(dummy);
          read_0500_0037 >> dummy;
          x1.push_back(dummy);
        }
      read_0500_0037.close();
      for (int i=0; i<N; i++){
        xgrid_chfi_vc_0500_0037.push_back( x1[i*9] );
      }
      for (int i=0; i<N; i++){
        fgrid_chfi_vc_0500_0037[0].push_back( x1[i*9+1]/norm_0500_0037/std::sqrt(2.) );
        fgrid_chfi_vc_0500_0037[1].push_back( x1[i*9+2]/norm_0500_0037/std::sqrt(2.) );
        fgrid_chfi_vc_0500_0037[2].push_back( x1[i*9+3]/norm_0500_0037/std::sqrt(2.) );
        fgrid_chfi_vc_0500_0037[3].push_back( x1[i*9+4]/norm_0500_0037/std::sqrt(2.) );
        fgrid_chfi_vc_0500_0037[4].push_back( x1[i*9+5]/norm_0500_0037/std::sqrt(2.) );
        fgrid_chfi_vc_0500_0037[5].push_back( x1[i*9+6]/norm_0500_0037/std::sqrt(2.) );
        fgrid_chfi_vc_0500_0037[6].push_back( x1[i*9+7]/norm_0500_0037/std::sqrt(2.) );
        fgrid_chfi_vc_0500_0037[7].push_back( x1[i*9+8]/norm_0500_0037/std::sqrt(2.) );
      }
      x1.clear();

      std::fstream read_8700_6000;
      double norm_8700_6000;
      read_8700_6000.open("/home/nico/nico_research/programs/classes/bound_states/chfi_mesons/vc/vc_8700_6000.dat", std::ios::in);
        read_8700_6000 >> dummy;
        read_8700_6000 >> norm_8700_6000;
        for (int i=0;i<2;i++){read_8700_6000 >> dummy;}
        read_8700_6000 >> N;
        for (int i=0; i<N; i++){
          read_8700_6000 >> dummy;
          x1.push_back(dummy);
          read_8700_6000 >> dummy;
          x1.push_back(dummy);
          read_8700_6000 >> dummy;
          x1.push_back(dummy);
          read_8700_6000 >> dummy;
          x1.push_back(dummy);
          read_8700_6000 >> dummy;
          x1.push_back(dummy);
          read_8700_6000 >> dummy;
          x1.push_back(dummy);
          read_8700_6000 >> dummy;
          x1.push_back(dummy);
          read_8700_6000 >> dummy;
          x1.push_back(dummy);
          read_8700_6000 >> dummy;
          x1.push_back(dummy);
        }
      read_8700_6000.close();
      for (int i=0; i<N; i++){
        xgrid_chfi_vc_8700_6000.push_back( x1[i*9] );
      }
      for (int i=0; i<N; i++){
        fgrid_chfi_vc_8700_6000[0].push_back( x1[i*9+1]/norm_8700_6000/std::sqrt(2.) );
        fgrid_chfi_vc_8700_6000[1].push_back( x1[i*9+2]/norm_8700_6000/std::sqrt(2.) );
        fgrid_chfi_vc_8700_6000[2].push_back( x1[i*9+3]/norm_8700_6000/std::sqrt(2.) );
        fgrid_chfi_vc_8700_6000[3].push_back( x1[i*9+4]/norm_8700_6000/std::sqrt(2.) );
        fgrid_chfi_vc_8700_6000[4].push_back( x1[i*9+5]/norm_8700_6000/std::sqrt(2.) );
        fgrid_chfi_vc_8700_6000[5].push_back( x1[i*9+6]/norm_8700_6000/std::sqrt(2.) );
        fgrid_chfi_vc_8700_6000[6].push_back( x1[i*9+7]/norm_8700_6000/std::sqrt(2.) );
        fgrid_chfi_vc_8700_6000[7].push_back( x1[i*9+8]/norm_8700_6000/std::sqrt(2.) );
      }
      x1.clear();

      std::fstream read_8700_7300;
      double norm_8700_7300;
      read_8700_7300.open("/home/nico/nico_research/programs/classes/bound_states/chfi_mesons/vc/vc_8700_7300.dat", std::ios::in);
        read_8700_7300 >> dummy;
        read_8700_7300 >> norm_8700_7300;
        for (int i=0;i<2;i++){read_8700_7300 >> dummy;}
        read_8700_7300 >> N;
          for (int i=0; i<N; i++){
          read_8700_7300 >> dummy;
          x1.push_back(dummy);
          read_8700_7300 >> dummy;
          x1.push_back(dummy);
          read_8700_7300 >> dummy;
          x1.push_back(dummy);
          read_8700_7300 >> dummy;
          x1.push_back(dummy);
          read_8700_7300 >> dummy;
          x1.push_back(dummy);
          read_8700_7300 >> dummy;
          x1.push_back(dummy);
          read_8700_7300 >> dummy;
          x1.push_back(dummy);
          read_8700_7300 >> dummy;
          x1.push_back(dummy);
          read_8700_7300 >> dummy;
          x1.push_back(dummy);
        }
      read_8700_7300.close();
      for (int i=0; i<N; i++){
        xgrid_chfi_vc_8700_7300.push_back( x1[i*9] );
      }
      for (int i=0; i<N; i++){
        fgrid_chfi_vc_8700_7300[0].push_back( x1[i*9+1]/norm_8700_7300/std::sqrt(2.) );
        fgrid_chfi_vc_8700_7300[1].push_back( x1[i*9+2]/norm_8700_7300/std::sqrt(2.) );
        fgrid_chfi_vc_8700_7300[2].push_back( x1[i*9+3]/norm_8700_7300/std::sqrt(2.) );
        fgrid_chfi_vc_8700_7300[3].push_back( x1[i*9+4]/norm_8700_7300/std::sqrt(2.) );
        fgrid_chfi_vc_8700_7300[4].push_back( x1[i*9+5]/norm_8700_7300/std::sqrt(2.) );
        fgrid_chfi_vc_8700_7300[5].push_back( x1[i*9+6]/norm_8700_7300/std::sqrt(2.) );
        fgrid_chfi_vc_8700_7300[6].push_back( x1[i*9+7]/norm_8700_7300/std::sqrt(2.) );
        fgrid_chfi_vc_8700_7300[7].push_back( x1[i*9+8]/norm_8700_7300/std::sqrt(2.) );
      }
      x1.clear();
    }

    static void extrapolate_D_Dstar()
    {
      vdouble k;
      xgrid_chfi_ps_8700_0037=xgrid_chfi_pion;
      for (unsigned int i=0; i<xgrid_chfi_ps_8700_0037.size(); i++){
        k.push_back(std::real((ps_2100_0037(0,xgrid_chfi_ps_8700_0037[i])-ps_0037_0037(0,xgrid_chfi_pion[i]))/(0.2100-0.0037)));
        k.push_back(std::real((ps_2100_0037(1,xgrid_chfi_ps_8700_0037[i])-ps_0037_0037(1,xgrid_chfi_pion[i]))/(0.2100-0.0037)));
        k.push_back(std::real((ps_2100_0037(2,xgrid_chfi_ps_8700_0037[i])-ps_0037_0037(2,xgrid_chfi_pion[i]))/(0.2100-0.0037)));
        k.push_back(std::real((ps_2100_0037(3,xgrid_chfi_ps_8700_0037[i])-ps_0037_0037(3,xgrid_chfi_pion[i]))/(0.2100-0.0037)));
      }

      for(unsigned int i=0; i<xgrid_chfi_ps_8700_0037.size(); i++){
        fgrid_chfi_ps_8700_0037[0].push_back(ps_0037_0037(0,xgrid_chfi_pion[i])+k[i*4+0]*(0.8700-0.0037));
        fgrid_chfi_ps_8700_0037[1].push_back(ps_0037_0037(1,xgrid_chfi_pion[i])+k[i*4+1]*(0.8700-0.0037));
        fgrid_chfi_ps_8700_0037[2].push_back(ps_0037_0037(2,xgrid_chfi_pion[i])+k[i*4+2]*(0.8700-0.0037));
        fgrid_chfi_ps_8700_0037[3].push_back(ps_0037_0037(3,xgrid_chfi_pion[i])+k[i*4+3]*(0.8700-0.0037));
      }
      k.clear();

      xgrid_chfi_vc_8700_0037=xgrid_chfi_rho;
      for (unsigned int i=0; i<xgrid_chfi_vc_8700_0037.size(); i++){
        k.push_back(std::real((vc_0500_0037(0,xgrid_chfi_vc_8700_0037[i])-vc_0037_0037(0,xgrid_chfi_vc_8700_0037[i]))/(0.0500-0.0037)));
        k.push_back(std::real((vc_0500_0037(1,xgrid_chfi_vc_8700_0037[i])-vc_0037_0037(1,xgrid_chfi_vc_8700_0037[i]))/(0.0500-0.0037)));
        k.push_back(std::real((vc_0500_0037(2,xgrid_chfi_vc_8700_0037[i])-vc_0037_0037(2,xgrid_chfi_vc_8700_0037[i]))/(0.0500-0.0037)));
        k.push_back(std::real((vc_0500_0037(3,xgrid_chfi_vc_8700_0037[i])-vc_0037_0037(3,xgrid_chfi_vc_8700_0037[i]))/(0.0500-0.0037)));
        k.push_back(std::real((vc_0500_0037(4,xgrid_chfi_vc_8700_0037[i])-vc_0037_0037(4,xgrid_chfi_vc_8700_0037[i]))/(0.0500-0.0037)));
        k.push_back(std::real((vc_0500_0037(5,xgrid_chfi_vc_8700_0037[i])-vc_0037_0037(5,xgrid_chfi_vc_8700_0037[i]))/(0.0500-0.0037)));
        k.push_back(std::real((vc_0500_0037(6,xgrid_chfi_vc_8700_0037[i])-vc_0037_0037(6,xgrid_chfi_vc_8700_0037[i]))/(0.0500-0.0037)));
        k.push_back(std::real((vc_0500_0037(7,xgrid_chfi_vc_8700_0037[i])-vc_0037_0037(7,xgrid_chfi_vc_8700_0037[i]))/(0.0500-0.0037)));
      }

      for(unsigned int i=0; i<xgrid_chfi_vc_8700_0037.size(); i++){
        fgrid_chfi_vc_8700_0037[0].push_back(vc_0037_0037(0,xgrid_chfi_vc_8700_0037[i])+k[i*8+0]*(0.8700-0.0037));
        fgrid_chfi_vc_8700_0037[1].push_back(vc_0037_0037(1,xgrid_chfi_vc_8700_0037[i])+k[i*8+1]*(0.8700-0.0037));
        fgrid_chfi_vc_8700_0037[2].push_back(vc_0037_0037(2,xgrid_chfi_vc_8700_0037[i])+k[i*8+2]*(0.8700-0.0037));
        fgrid_chfi_vc_8700_0037[3].push_back(vc_0037_0037(3,xgrid_chfi_vc_8700_0037[i])+k[i*8+3]*(0.8700-0.0037));
        fgrid_chfi_vc_8700_0037[4].push_back(vc_0037_0037(4,xgrid_chfi_vc_8700_0037[i])+k[i*8+4]*(0.8700-0.0037));
        fgrid_chfi_vc_8700_0037[5].push_back(vc_0037_0037(5,xgrid_chfi_vc_8700_0037[i])+k[i*8+5]*(0.8700-0.0037));
        fgrid_chfi_vc_8700_0037[6].push_back(vc_0037_0037(6,xgrid_chfi_vc_8700_0037[i])+k[i*8+6]*(0.8700-0.0037));
        fgrid_chfi_vc_8700_0037[7].push_back(vc_0037_0037(7,xgrid_chfi_vc_8700_0037[i])+k[i*8+7]*(0.8700-0.0037));
      }
      k.clear();

    }

    static cdouble ps_0037_0037(int i, double p_p)
    {
      if(p_p>3.e+3){return 0.;} else
      {
      return numerics::interpolation::cubic_hermite_1d(xgrid_chfi_pion,fgrid_chfi_pion[i],p_p);
      }
    }

    static cdouble ps_0200_0037(int i, double p_p)
    {
      if(p_p>3.e+3){return 0.;} else
      return numerics::interpolation::linear_1d(xgrid_chfi_ps_0200_0037,fgrid_chfi_ps_0200_0037[i],p_p);
    }

    static cdouble ps_0500_0037(int i, double p_p)
    {
      if(p_p>3.e+3){return 0.;} else
      return numerics::interpolation::linear_1d(xgrid_chfi_ps_0500_0037,fgrid_chfi_ps_0500_0037[i],p_p);
    }

    static cdouble ps_0500_0500(int i, double p_p)
    {
      if(p_p>3.e+3){return 0.;} else
      return numerics::interpolation::linear_1d(xgrid_chfi_ps_0500_0500,fgrid_chfi_ps_0500_0500[i],p_p);
    }

    static cdouble ps_0850_0850(int i, double p_p)
    {
      if(p_p>3.e+3){return 0.;} else
      return numerics::interpolation::linear_1d(xgrid_chfi_ps_0850_0850,fgrid_chfi_ps_0850_0850[i],p_p);
    }

    static cdouble ps_0850_0037(int i, double p_p)
    {
      if(p_p>3.e+3){return 0.;} else
      return numerics::interpolation::linear_1d(xgrid_chfi_kaon,fgrid_chfi_kaon[i],p_p);
    }

    static cdouble ps_2100_0037(int i, double p_p)
    {
      if(p_p>3.e+3){return 0.;} else
      return numerics::interpolation::linear_1d(xgrid_chfi_ps_2100_0037,fgrid_chfi_ps_2100_0037[i],p_p);
    }

    static cdouble ps_2100_2100(int i, double p_p)
    {
      if(p_p>3.e+3){return 0.;} else
      return numerics::interpolation::linear_1d(xgrid_chfi_ps_2100_2100,fgrid_chfi_ps_2100_2100[i],p_p);
    }

    static cdouble ps_8700_8700(int i, double p_p)
    {
      if(p_p>3.e+3){return 0.;} else
      return numerics::interpolation::linear_1d(xgrid_chfi_eta_c,fgrid_chfi_eta_c[i],p_p);
    }

    static cdouble ps_8700_0037(int i, double p_p)
    {
      if(p_p>3.e+3){return 0.;} else
      return numerics::interpolation::linear_1d(xgrid_chfi_ps_8700_0037,fgrid_chfi_ps_8700_0037[i],p_p);
    }

    static cdouble ps_8440_8440(int i, double p_p)
    {
      if(p_p>3.e+3){return 0.;} else
      return numerics::interpolation::linear_1d(xgrid_chfi_eta_c,fgrid_chfi_eta_c[i],p_p);
    }

    static cdouble vc_0037_0037(int i, double p_p)
    {
      if(p_p>3.e+3){return 0.;} else
      return numerics::interpolation::linear_1d(xgrid_chfi_rho,fgrid_chfi_rho[i],p_p);
    }

    static cdouble vc_0200_0037(int i, double p_p)
    {
      if(p_p>3.e+3){return 0.;} else
      return numerics::interpolation::linear_1d(xgrid_chfi_vc_0200_0037,fgrid_chfi_vc_0200_0037[i],p_p);
    }

    static cdouble vc_0500_0037(int i, double p_p)
    {
      if(p_p>3.e+3){return 0.;} else
      return numerics::interpolation::linear_1d(xgrid_chfi_vc_0500_0037,fgrid_chfi_vc_0500_0037[i],p_p);
    }

    static cdouble vc_8700_7300(int i, double p_p)
    {
      if(p_p>3.e+3){return 0.;} else
      return numerics::interpolation::linear_1d(xgrid_chfi_vc_8700_7300,fgrid_chfi_vc_8700_7300[i],p_p);
    }

    static cdouble vc_8700_6000(int i, double p_p)
    {
      if(p_p>3.e+3){return 0.;} else
      return numerics::interpolation::linear_1d(xgrid_chfi_vc_8700_6000,fgrid_chfi_vc_8700_6000[i],p_p);
    }

    static cdouble vc_8700_8700(int i, double p_p)
    {
      if(p_p>3.e+3){return 0.;} else
      return numerics::interpolation::linear_1d(xgrid_chfi_j_psi,fgrid_chfi_j_psi[i],p_p);
    }

    static cdouble vc_8700_0037(int i, double p_p)
    {
      if(p_p>3.e+3){return 0.;} else
      return numerics::interpolation::linear_1d(xgrid_chfi_vc_8700_0037,fgrid_chfi_vc_8700_0037[i],p_p);
    }

    // propagators //

    /*

    static void propagator_D(cdouble P_P, cdouble& D)
    {
      double
          h           = 1.e-7;
      cdouble
          D_mass    = 1.870,
          P_P_std   = -D_mass*D_mass,
          n_std     = -1./(D_mass*D_mass)*norm_integral_D(P_P_std,P_P_std),
          n_P_P     = -1./(D_mass*D_mass)*norm_integral_D(P_P,P_P),
          dn_dx_std = -(norm_integral_D(P_P_std+h/2.,P_P_std+h/2.)-norm_integral_D(P_P_std-h/2.,P_P_std-h/2.))/h;
          D         = 1./ ( D_mass*D_mass* ( n_std+0.25*(1.+dn_dx_std)*(1.+P_P/(D_mass*D_mass*std::pow(P_P/(D_mass*D_mass)+2.,3))) - n_P_P ) );
    }

    static void propagator_Dstar(cdouble P_P, cdouble& DT, cdouble& DL)
    {
      double
          h           = 1.e-7;
      cdouble
          Dstar_mass  = 2.007,
          P_P_std     = -Dstar_mass*Dstar_mass,
          dn_dx_std   = -(norm_integral_Dstar(P_P_std+h/2.,P_P_std+h/2.)-norm_integral_Dstar(P_P_std-h/2.,P_P_std-h/2.))/h,
          nkn         = -norm_integral_Dstar(P_P_std,P_P_std)/(-P_P_std)+(1.+dn_dx_std)*0.5*(1.-1./std::pow((P_P/(-P_P_std)+2.),2)),
          nt          = -norm_integral_Dstar(P_P,P_P)/(-P_P_std);
          DT          = 1./(Dstar_mass*Dstar_mass*(nkn-nt));
          DL          = 1./(-P_P_std*nkn);
          std::cout<<dn_dx_std<<std::endl;
    }

    static void propagator_rho(cdouble P_P, cdouble& DT, cdouble& DL)
    {
      double
          h           = 1.e-7;
      cdouble
          rho_mass    = 0.775,
          P_P_std     = -rho_mass*rho_mass,
          dn_dx_std   = -(norm_integral_rho(P_P_std+h/2.,P_P_std)-norm_integral_rho(P_P_std-h/2.,P_P_std))/h,
          nkn         = -norm_integral_rho(P_P_std,P_P_std)/(-P_P_std)+(1.+dn_dx_std)*0.5*(1.-1./std::pow((P_P/(-P_P_std)+2.),2)),
          nt          = -norm_integral_rho(P_P,P_P)/(-P_P_std);
          DT          = 1./(rho_mass*rho_mass*(nkn-nt));
          DL          = 1./(-P_P_std*nkn);
          std::cout<<dn_dx_std<<std::endl;
    }

    static void propagator_ps(cdouble P_P, cdouble& D, int i, int j)
    {
      double
          h         = 1.e-7;
      cdouble
          D_mass    = 0.4935,
          P_P_std   = -D_mass*D_mass,
          n_std     = -1./(D_mass*D_mass)*norm_integral_ps(P_P_std,P_P_std,i,j),
          n_P_P     = -1./(D_mass*D_mass)*norm_integral_ps(P_P,P_P,i,j),
          dn_dx_std = -(norm_integral_ps(P_P_std+h/2.,P_P_std+h/2.,i,j)-norm_integral_ps(P_P_std-h/2.,P_P_std-h/2.,i,j))/h;
          D         = 1./ ( D_mass*D_mass* ( n_std+0.25*(1.+dn_dx_std)*(1.+P_P/(D_mass*D_mass*std::pow(P_P/(D_mass*D_mass)+2.,3))) - n_P_P ) );
      //std::cout<<n_P_P<<std::endl;
    }

    static void propagator_vc(cdouble P_P, cdouble& DT, cdouble& DL, int i, int j)
    {
      double
          h           = 1.e-7;
      cdouble
          rho_mass    = 0.800,
          P_P_std     = -rho_mass*rho_mass,
          dn_dx_std   = -(norm_integral_vc(P_P_std+h/2.,P_P_std,i,j)-norm_integral_vc(P_P_std-h/2.,P_P_std,i,j))/h,
          nkn         = -norm_integral_vc(P_P_std,P_P_std,i,j)/(-P_P_std)+(1.+dn_dx_std)*0.5*(1.-1./std::pow((P_P/(-P_P_std)+2.),2)),
          nt          = -norm_integral_vc(P_P,P_P,i,j)/(-P_P_std);
          DT          = 1./(rho_mass*rho_mass*(nkn-nt));
          DL          = 1./(-P_P_std*nkn);
          std::cout<<"chfival: "<<dn_dx_std<<std::endl;
    }

    static void propagator_JPsi(cdouble P_P, cdouble& DT, cdouble& DL)
    {
      double
          h           = 1.e-7,
          JPsi_mass   = 3.097,
          P_P_std     = -JPsi_mass*JPsi_mass;
      cdouble
          dn_dx_std   = -(norm_integral_JPsi_T(P_P_std+h/2.,P_P_std+h/2.)-norm_integral_JPsi_T(P_P_std-h/2.,P_P_std-h/2.))/h,
          nkn         = -norm_integral_JPsi_T(P_P_std,P_P_std)/(-P_P_std)+(1.+dn_dx_std)*0.5*(1.-std::pow((P_P/(-P_P_std)+2.),-2)),
          nt          = -norm_integral_JPsi_T(P_P,P_P)/(-P_P_std),
          nl          = -norm_integral_JPsi_L(P_P,P_P)/(-P_P_std);
          DT          = 1./(-P_P_std*(nkn-nt));
          DL          = 1./(-P_P_std*(nkn-nl));
    }

    static void propagator_eta_c(cdouble P_P, cdouble& D)
    {
      double
          h           = 1.e-7;
      cdouble
          eta_c_mass    = 2.984,
          P_P_std   = -eta_c_mass*eta_c_mass,
          n_std     = -1./(eta_c_mass*eta_c_mass)*norm_integral_eta_c(P_P_std,P_P_std),
          n_P_P     = -1./(eta_c_mass*eta_c_mass)*norm_integral_eta_c(P_P,P_P),
          dn_dx_std = -(norm_integral_eta_c(P_P_std+h/2.,P_P_std+h/2.)-norm_integral_eta_c(P_P_std-h/2.,P_P_std-h/2.))/h;
          D         = 1./ ( eta_c_mass*eta_c_mass* ( n_std+0.25*(1.+dn_dx_std)*(1.+P_P/(eta_c_mass*eta_c_mass*std::pow(P_P/(eta_c_mass*eta_c_mass)+2.,3))) - n_P_P ) );
    }
     */

    // norm integrals //

    /*
    static cdouble norm_integral_D(cdouble P_P, cdouble K_K)
    {
            vcdouble K_norm_ps(4*4*n_radial_meson*n_angular_meson_z);

            cdouble
                    K_P       = std::sqrt(K_K)*std::sqrt(P_P),
                    prefactor = -3./(2.*M_PI*M_PI*M_PI);

            #pragma omp parallel for
            for (int iq=0; iq<n_radial_meson; iq++){
                cdouble
                        q_q = std::exp(sampling_points_radial_meson[iq]),
                        qw  = weights_radial_meson[iq],
                        qj  = q_q*q_q/2.;

                for (int iz=0; iz<n_angular_meson_z; iz++){
                    cdouble
                            z   = sampling_points_angular_meson_z[iz],
                            zw  = weights_angular_meson_z[iz],
                            zj  = std::sqrt(1.-z*z);
                    cdouble
                            P_q     =   std::sqrt(P_P)*std::sqrt(q_q)*z,
                            K_q     =   std::sqrt(K_K)*std::sqrt(q_q)*z,
                            qm_qm   =   q_q + (eta-1.)*(eta-1.)*P_P + 2.*(eta-1.)*P_q,
                            qp_qp   =   q_q + eta*eta*P_P + 2.*eta*P_q,
                            svm     =   chfi_q::sv_c(qm_qm),
                            ssm     =   chfi_q::ss_c(qm_qm),
                            svp     =   chfi_q::sv_u(qp_qp),
                            ssp     =   chfi_q::ss_u(qp_qp),
                            wj      =   qw*zw*qj*zj;

                    K_norm_ps[SI_K_norm_ps(0,0,iq,iz)] = wj*  (4.*(ssm*ssp+svm*svp*((-1.+eta)*eta*P_P+(-1.+2.*eta)*P_q+q_q)));
                    K_norm_ps[SI_K_norm_ps(0,1,iq,iz)] = wj*  (4.*((ssp*(svm-1.*eta*svm)+eta*ssm*svp)*K_P+(-1.*ssp*svm+ssm*svp)*K_q));
                    K_norm_ps[SI_K_norm_ps(0,2,iq,iz)] = wj*  (4.*K_q*((ssp*(svm-1.*eta*svm)+eta*ssm*svp)*P_q+(-1.*ssp*svm+ssm*svp)*q_q));
                    K_norm_ps[SI_K_norm_ps(0,3,iq,iz)] = wj*  (8.*svm*svp*(K_q*P_q-1.*K_P*q_q));
                    K_norm_ps[SI_K_norm_ps(1,0,iq,iz)] = wj*  (4.*((ssp*(svm-1.*eta*svm)+eta*ssm*svp)*K_P+(-1.*ssp*svm+ssm*svp)*K_q));
                    K_norm_ps[SI_K_norm_ps(1,1,iq,iz)] = wj*  (4.*(-2.*svm*svp*((-1.+eta)*K_P+K_q)*(eta*K_P+K_q)+K_K*(-1.*ssm*ssp+svm*svp*((-1.+eta)*eta*P_P+(-1.+2.*eta)*P_q+q_q))));
                    K_norm_ps[SI_K_norm_ps(1,2,iq,iz)] = wj*  (-4.*K_q*(svm*svp*K_P*(2.*(-1.+eta)*eta*P_q+(-1.+2.*eta)*q_q)+K_q*(ssm*ssp+svm*svp*(-1.*(-1.+eta)*eta*P_P+q_q))));
                    K_norm_ps[SI_K_norm_ps(1,3,iq,iz)] = wj*  (8.*(-1.*((-1.+eta)*ssp*svm+eta*ssm*svp)*K_P*K_q-1.*(ssp*svm+ssm*svp)*std::pow(K_q,2)+K_K*(((-1.+eta)*ssp*svm+eta*ssm*svp)*P_q+(ssp*svm+ssm*svp)*q_q)));
                    K_norm_ps[SI_K_norm_ps(2,0,iq,iz)] = wj*  (4.*K_q*((ssp*(svm-1.*eta*svm)+eta*ssm*svp)*P_q+(-1.*ssp*svm+ssm*svp)*q_q));
                    K_norm_ps[SI_K_norm_ps(2,1,iq,iz)] = wj*  (-4.*K_q*(svm*svp*K_P*(2.*(-1.+eta)*eta*P_q+(-1.+2.*eta)*q_q)+K_q*(ssm*ssp+svm*svp*(-1.*(-1.+eta)*eta*P_P+q_q))));
                    K_norm_ps[SI_K_norm_ps(2,2,iq,iz)] = wj*  (-4.*std::pow(K_q,2)*(ssm*ssp*q_q+svm*svp*(2.*(-1.+eta)*eta*std::pow(P_q,2)-1.*((-1.+eta)*eta*P_P+(1.-2.*eta)*P_q)*q_q+std::pow(q_q,2))));
                    K_norm_ps[SI_K_norm_ps(2,3,iq,iz)] = wj*  (8.*((-1.+eta)*ssp*svm+eta*ssm*svp)*K_q*(K_q*P_q-1.*K_P*q_q));
                    K_norm_ps[SI_K_norm_ps(3,0,iq,iz)] = wj*  (8.*svm*svp*(K_q*P_q-1.*K_P*q_q));
                    K_norm_ps[SI_K_norm_ps(3,1,iq,iz)] = wj*  (8.*(-1.*((-1.+eta)*ssp*svm+eta*ssm*svp)*K_P*K_q-1.*(ssp*svm+ssm*svp)*std::pow(K_q,2)+K_K*(((-1.+eta)*ssp*svm+eta*ssm*svp)*P_q+(ssp*svm+ssm*svp)*q_q)));
                    K_norm_ps[SI_K_norm_ps(3,2,iq,iz)] = wj*  (8.*((-1.+eta)*ssp*svm+eta*ssm*svp)*K_q*(K_q*P_q-1.*K_P*q_q));
                    K_norm_ps[SI_K_norm_ps(3,3,iq,iz)] = wj*  (16.*(4.*(-1.+eta)*eta*svm*svp*K_P*K_q*P_q-2.*(-1.+eta)*eta*svm*svp*std::pow(K_P,2)*q_q+K_K*(-2.*(-1.+eta)*eta*svm*svp*std::pow(P_q,2)+(ssm*ssp+svm*svp*((-1.+eta)*eta*P_P+(1.-2.*eta)*P_q))*q_q-1.*svm*svp*std::pow(q_q,2))+std::pow(K_q,2)*(-1.*ssm*ssp+svm*svp*(-1.*(-1.+eta)*eta*P_P+(-1.+2.*eta)*P_q+q_q))));
                }
            }

            cdouble norm_sum=0.;

            for(int id1=0; id1<n_dirac_pion; id1++){
                for(int id2=0; id2<n_dirac_pion; id2++){
                    for(int iq=0; iq<n_radial_meson; iq++){
                        for(int iz=0; iz<n_angular_meson_z; iz++){
                            norm_sum +=  K_norm_ps[SI_K_norm_ps(id1,id2,iq,iz)] * ps_8700_0037(id1,std::exp(sampling_points_radial_meson[iq])) * ps_8700_0037(id2,std::exp(sampling_points_radial_meson[iq]));
                        }
                    }
                }
            }

            K_norm_ps.clear();

            return prefactor*norm_sum;
        }

    static cdouble norm_integral_eta_c(cdouble P_P, cdouble K_K)
    {
            vcdouble K_norm_ps(4*4*n_radial_meson*n_angular_meson_z);

            cdouble
                    K_P       = std::sqrt(K_K)*std::sqrt(P_P),
                    prefactor = -3./(2.*M_PI*M_PI*M_PI);

            #pragma omp parallel for
            for (int iq=0; iq<n_radial_meson; iq++){
                cdouble
                        q_q = std::exp(sampling_points_radial_meson[iq]),
                        qw  = weights_radial_meson[iq],
                        qj  = q_q*q_q/2.;

                for (int iz=0; iz<n_angular_meson_z; iz++){
                    cdouble
                            z   = sampling_points_angular_meson_z[iz],
                            zw  = weights_angular_meson_z[iz],
                            zj  = std::sqrt(1.-z*z);
                    cdouble
                            P_q     =   std::sqrt(P_P)*std::sqrt(q_q)*z,
                            K_q     =   std::sqrt(K_K)*std::sqrt(q_q)*z,
                            qm_qm   =   q_q + (eta-1.)*(eta-1.)*P_P + 2.*(eta-1.)*P_q,
                            qp_qp   =   q_q + eta*eta*P_P + 2.*eta*P_q,
                            svm     =   chfi_q::sv_8440(qm_qm),
                            ssm     =   chfi_q::ss_8440(qm_qm),
                            svp     =   chfi_q::sv_8440(qp_qp),
                            ssp     =   chfi_q::ss_8440(qp_qp),
                            wj      =   qw*zw*qj*zj;

                    K_norm_ps[SI_K_norm_ps(0,0,iq,iz)] = wj*  (4.*(ssm*ssp+svm*svp*((-1.+eta)*eta*P_P+(-1.+2.*eta)*P_q+q_q)));
                    K_norm_ps[SI_K_norm_ps(0,1,iq,iz)] = wj*  (4.*((ssp*(svm-1.*eta*svm)+eta*ssm*svp)*K_P+(-1.*ssp*svm+ssm*svp)*K_q));
                    K_norm_ps[SI_K_norm_ps(0,2,iq,iz)] = wj*  (4.*K_q*((ssp*(svm-1.*eta*svm)+eta*ssm*svp)*P_q+(-1.*ssp*svm+ssm*svp)*q_q));
                    K_norm_ps[SI_K_norm_ps(0,3,iq,iz)] = wj*  (8.*svm*svp*(K_q*P_q-1.*K_P*q_q));
                    K_norm_ps[SI_K_norm_ps(1,0,iq,iz)] = wj*  (4.*((ssp*(svm-1.*eta*svm)+eta*ssm*svp)*K_P+(-1.*ssp*svm+ssm*svp)*K_q));
                    K_norm_ps[SI_K_norm_ps(1,1,iq,iz)] = wj*  (4.*(-2.*svm*svp*((-1.+eta)*K_P+K_q)*(eta*K_P+K_q)+K_K*(-1.*ssm*ssp+svm*svp*((-1.+eta)*eta*P_P+(-1.+2.*eta)*P_q+q_q))));
                    K_norm_ps[SI_K_norm_ps(1,2,iq,iz)] = wj*  (-4.*K_q*(svm*svp*K_P*(2.*(-1.+eta)*eta*P_q+(-1.+2.*eta)*q_q)+K_q*(ssm*ssp+svm*svp*(-1.*(-1.+eta)*eta*P_P+q_q))));
                    K_norm_ps[SI_K_norm_ps(1,3,iq,iz)] = wj*  (8.*(-1.*((-1.+eta)*ssp*svm+eta*ssm*svp)*K_P*K_q-1.*(ssp*svm+ssm*svp)*std::pow(K_q,2)+K_K*(((-1.+eta)*ssp*svm+eta*ssm*svp)*P_q+(ssp*svm+ssm*svp)*q_q)));
                    K_norm_ps[SI_K_norm_ps(2,0,iq,iz)] = wj*  (4.*K_q*((ssp*(svm-1.*eta*svm)+eta*ssm*svp)*P_q+(-1.*ssp*svm+ssm*svp)*q_q));
                    K_norm_ps[SI_K_norm_ps(2,1,iq,iz)] = wj*  (-4.*K_q*(svm*svp*K_P*(2.*(-1.+eta)*eta*P_q+(-1.+2.*eta)*q_q)+K_q*(ssm*ssp+svm*svp*(-1.*(-1.+eta)*eta*P_P+q_q))));
                    K_norm_ps[SI_K_norm_ps(2,2,iq,iz)] = wj*  (-4.*std::pow(K_q,2)*(ssm*ssp*q_q+svm*svp*(2.*(-1.+eta)*eta*std::pow(P_q,2)-1.*((-1.+eta)*eta*P_P+(1.-2.*eta)*P_q)*q_q+std::pow(q_q,2))));
                    K_norm_ps[SI_K_norm_ps(2,3,iq,iz)] = wj*  (8.*((-1.+eta)*ssp*svm+eta*ssm*svp)*K_q*(K_q*P_q-1.*K_P*q_q));
                    K_norm_ps[SI_K_norm_ps(3,0,iq,iz)] = wj*  (8.*svm*svp*(K_q*P_q-1.*K_P*q_q));
                    K_norm_ps[SI_K_norm_ps(3,1,iq,iz)] = wj*  (8.*(-1.*((-1.+eta)*ssp*svm+eta*ssm*svp)*K_P*K_q-1.*(ssp*svm+ssm*svp)*std::pow(K_q,2)+K_K*(((-1.+eta)*ssp*svm+eta*ssm*svp)*P_q+(ssp*svm+ssm*svp)*q_q)));
                    K_norm_ps[SI_K_norm_ps(3,2,iq,iz)] = wj*  (8.*((-1.+eta)*ssp*svm+eta*ssm*svp)*K_q*(K_q*P_q-1.*K_P*q_q));
                    K_norm_ps[SI_K_norm_ps(3,3,iq,iz)] = wj*  (16.*(4.*(-1.+eta)*eta*svm*svp*K_P*K_q*P_q-2.*(-1.+eta)*eta*svm*svp*std::pow(K_P,2)*q_q+K_K*(-2.*(-1.+eta)*eta*svm*svp*std::pow(P_q,2)+(ssm*ssp+svm*svp*((-1.+eta)*eta*P_P+(1.-2.*eta)*P_q))*q_q-1.*svm*svp*std::pow(q_q,2))+std::pow(K_q,2)*(-1.*ssm*ssp+svm*svp*(-1.*(-1.+eta)*eta*P_P+(-1.+2.*eta)*P_q+q_q))));
                }
            }

            cdouble norm_sum=0.;

            for(int id1=0; id1<n_dirac_pion; id1++){
                for(int id2=0; id2<n_dirac_pion; id2++){
                    for(int iq=0; iq<n_radial_meson; iq++){
                        for(int iz=0; iz<n_angular_meson_z; iz++){
                            norm_sum +=  K_norm_ps[SI_K_norm_ps(id1,id2,iq,iz)] * ps_8440_8440(id1,std::exp(sampling_points_radial_meson[iq])) * ps_8440_8440(id2,std::exp(sampling_points_radial_meson[iq]));
                        }
                    }
                }
            }

            K_norm_ps.clear();

            return prefactor*norm_sum;
        }

    static cdouble norm_integral_Dstar(cdouble P_P, cdouble K_K)
    {
        std::vector<cdouble >     K_norm_rho(8*8*n_radial_meson*n_angular_meson_z);

        cdouble
                K_P         = std::sqrt(K_K)*std::sqrt(P_P),
                prefactor   = 1./(2.*M_PI*M_PI*M_PI);

        for (int iq=0; iq<n_radial_meson; iq++){
            cdouble
                    q_q = std::exp(sampling_points_radial_meson[iq]),
                    qw  = weights_radial_meson[iq],
                    qj  = q_q*q_q/2.;
            #pragma omp parallel for
            for (int iz=0; iz<n_angular_meson_z; iz++){
                cdouble
                        z   = sampling_points_angular_meson_z[iz],
                        zw  = weights_angular_meson_z[iz],
                        zj  = std::sqrt(1.-z*z);
                cdouble
                        P_q     =   std::sqrt(P_P*q_q)*z,
                        K_q     =   std::sqrt(K_K*q_q)*z,
                        qm_qm   =   q_q + P_P/4. - P_q,
                        qp_qp   =   q_q + P_P/4. + P_q,
                        svm     =   chfi_q::sv_c(qm_qm),
                        svp     =   chfi_q::sv_u(qp_qp),
                        ssm     =   chfi_q::ss_c(qm_qm),
                        ssp     =   chfi_q::ss_u(qp_qp),
                        wj      =   qw*qj*zw*zj;

                K_norm_rho[SI_K_norm_vc(0,0,iq,iz)]    = wj*    (-12.*ssm*ssp+(2.*svm*svp*std::pow(K_P,2))/K_K-(8.*svm*svp*std::pow(K_q,2))/K_K+svm*svp*P_P-4.*svm*svp*q_q);
                K_norm_rho[SI_K_norm_vc(0,1,iq,iz)]    = wj*    (-6.*ssp*svm*K_P-6.*ssm*svp*K_P+12.*ssp*svm*K_q-12.*ssm*svp*K_q);
                K_norm_rho[SI_K_norm_vc(0,2,iq,iz)]    = wj*    ((2.*K_q*((ssp*svm+ssm*svp)*K_P*K_q+2.*((-1.*ssp*svm+ssm*svp)*std::pow(K_q,2)+K_K*((ssp*svm+ssm*svp)*P_q+2.*(-1.*ssp*svm+ssm*svp)*q_q))))/K_K);
                K_norm_rho[SI_K_norm_vc(0,3,iq,iz)]    = wj*    (16.*svm*svp*(K_q*P_q-1.*K_P*q_q));
                K_norm_rho[SI_K_norm_vc(0,4,iq,iz)]    = wj*    ((2.*((ssp*svm-1.*ssm*svp)*K_P*K_q-2.*(ssp*svm+ssm*svp)*std::pow(K_q,2)+K_K*((-1.*ssp*svm+ssm*svp)*P_q+2.*(ssp*svm+ssm*svp)*q_q)))/K_K);
                K_norm_rho[SI_K_norm_vc(0,5,iq,iz)]    = wj*    ((2.*svm*svp*K_q*(std::pow(K_P,2)*K_q-4.*std::pow(K_q,3)-1.*K_K*K_P*P_q+4.*K_K*K_q*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(0,6,iq,iz)]    = wj*    ((-2.*svm*svp*K_P*K_q*P_q+std::pow(K_q,2)*(-4.*ssm*ssp+svm*svp*(P_P+4.*q_q))+K_K*(2.*svm*svp*std::pow(P_q,2)-1.*q_q*(-4.*ssm*ssp+svm*svp*(P_P+4.*q_q))))/K_K);
                K_norm_rho[SI_K_norm_vc(0,7,iq,iz)]    = wj*    ((-4.*((ssp*svm+ssm*svp)*K_P+2.*(-1.*ssp*svm+ssm*svp)*K_q)*(std::pow(K_q,2)-1.*K_K*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(1,0,iq,iz)]    = wj*    (-6.*((ssp*svm+ssm*svp)*K_P+2.*(-1.*ssp*svm+ssm*svp)*K_q));
                K_norm_rho[SI_K_norm_vc(1,1,iq,iz)]    = wj*    (-4.*svm*svp*(std::pow(K_P,2)-4.*std::pow(K_q,2))+K_K*(12.*ssm*ssp+svm*svp*(P_P-4.*q_q)));
                K_norm_rho[SI_K_norm_vc(1,2,iq,iz)]    = wj*    (-1.*K_q*(-4.*svm*svp*K_P*P_q+K_q*(12.*ssm*ssp+svm*svp*(P_P+12.*q_q))));
                K_norm_rho[SI_K_norm_vc(1,3,iq,iz)]    = wj*    (8.*((ssp*svm-1.*ssm*svp)*K_P*K_q-2.*(ssp*svm+ssm*svp)*std::pow(K_q,2)+K_K*((-1.*ssp*svm+ssm*svp)*P_q+2.*(ssp*svm+ssm*svp)*q_q)));
                K_norm_rho[SI_K_norm_vc(1,4,iq,iz)]    = wj*    (4.*svm*svp*(-1.*K_q*P_q+K_P*q_q));
                K_norm_rho[SI_K_norm_vc(1,5,iq,iz)]    = wj*    (2.*K_q*(-1.*(ssp*svm+ssm*svp)*K_P*K_q+2.*(ssp*svm-1.*ssm*svp)*std::pow(K_q,2)+K_K*((ssp*svm+ssm*svp)*P_q+2.*(-1.*ssp*svm+ssm*svp)*q_q)));
                K_norm_rho[SI_K_norm_vc(1,6,iq,iz)]    = wj*    (2.*(ssp*svm+ssm*svp)*(-1.*K_q*P_q+K_P*q_q));
                K_norm_rho[SI_K_norm_vc(1,7,iq,iz)]    = wj*    (-8.*svm*svp*K_P*K_q*P_q+4.*svm*svp*std::pow(K_P,2)*q_q+2.*std::pow(K_q,2)*(4.*ssm*ssp+svm*svp*(P_P+4.*q_q))+K_K*(4.*svm*svp*std::pow(P_q,2)-2.*q_q*(4.*ssm*ssp+svm*svp*(P_P+4.*q_q))));
                K_norm_rho[SI_K_norm_vc(2,0,iq,iz)]    = wj*    ((2.*K_q*((ssp*svm+ssm*svp)*K_P*K_q+2.*((-1.*ssp*svm+ssm*svp)*std::pow(K_q,2)+K_K*((ssp*svm+ssm*svp)*P_q+2.*(-1.*ssp*svm+ssm*svp)*q_q))))/K_K);
                K_norm_rho[SI_K_norm_vc(2,1,iq,iz)]    = wj*    (-1.*K_q*(-4.*svm*svp*K_P*P_q+K_q*(12.*ssm*ssp+svm*svp*(P_P+12.*q_q))));
                K_norm_rho[SI_K_norm_vc(2,2,iq,iz)]    = wj*    ((std::pow(K_q,2)*(-4.*svm*svp*K_P*K_q*P_q+2.*svm*svp*std::pow(K_P,2)*q_q+std::pow(K_q,2)*(4.*ssm*ssp+svm*svp*(P_P+4.*q_q))+K_K*(-2.*svm*svp*std::pow(P_q,2)+8.*q_q*(ssm*ssp+svm*svp*q_q))))/K_K);
                K_norm_rho[SI_K_norm_vc(2,3,iq,iz)]    = wj*    (8.*(ssp*svm-1.*ssm*svp)*K_q*(K_q*P_q-1.*K_P*q_q));
                K_norm_rho[SI_K_norm_vc(2,4,iq,iz)]    = wj*    ((4.*svm*svp*std::pow(K_q,2)*(K_q*P_q-1.*K_P*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(2,5,iq,iz)]    = wj*    ((2.*std::pow(K_q,3)*((ssp*svm+ssm*svp)*K_P*K_q+(-2.*ssp*svm+2.*ssm*svp)*std::pow(K_q,2)+K_K*(-1.*(ssp*svm+ssm*svp)*P_q+2.*(ssp*svm-1.*ssm*svp)*q_q)))/K_K);
                K_norm_rho[SI_K_norm_vc(2,6,iq,iz)]    = wj*    ((2.*(ssp*svm+ssm*svp)*std::pow(K_q,2)*(K_q*P_q-1.*K_P*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(2,7,iq,iz)]    = wj*    ((-2.*std::pow(K_q,2)*(-4.*svm*svp*K_P*K_q*P_q+2.*svm*svp*std::pow(K_P,2)*q_q+std::pow(K_q,2)*(4.*ssm*ssp+svm*svp*(P_P+4.*q_q))+K_K*(2.*svm*svp*std::pow(P_q,2)-1.*q_q*(4.*ssm*ssp+svm*svp*(P_P+4.*q_q)))))/K_K);
                K_norm_rho[SI_K_norm_vc(3,0,iq,iz)]    = wj*    (16.*svm*svp*(K_q*P_q-1.*K_P*q_q));
                K_norm_rho[SI_K_norm_vc(3,1,iq,iz)]    = wj*    (8.*((ssp*svm-1.*ssm*svp)*K_P*K_q-2.*(ssp*svm+ssm*svp)*std::pow(K_q,2)+K_K*((-1.*ssp*svm+ssm*svp)*P_q+2.*(ssp*svm+ssm*svp)*q_q)));
                K_norm_rho[SI_K_norm_vc(3,2,iq,iz)]    = wj*    (8.*(ssp*svm-1.*ssm*svp)*K_q*(K_q*P_q-1.*K_P*q_q));
                K_norm_rho[SI_K_norm_vc(3,3,iq,iz)]    = wj*    (-8.*(-2.*svm*svp*K_P*K_q*P_q+svm*svp*std::pow(K_P,2)*q_q+std::pow(K_q,2)*(-4.*ssm*ssp+4.*svm*svp*q_q)+K_K*(4.*ssm*ssp*q_q+svm*svp*(std::pow(P_q,2)-4.*std::pow(q_q,2)))));
                K_norm_rho[SI_K_norm_vc(3,4,iq,iz)]    = wj*    (0.);
                K_norm_rho[SI_K_norm_vc(3,5,iq,iz)]    = wj*    (0.);
                K_norm_rho[SI_K_norm_vc(3,6,iq,iz)]    = wj*    (0.);
                K_norm_rho[SI_K_norm_vc(3,7,iq,iz)]    = wj*    (0.);
                K_norm_rho[SI_K_norm_vc(4,0,iq,iz)]    = wj*    ((2.*((ssp*svm-1.*ssm*svp)*K_P*K_q-2.*(ssp*svm+ssm*svp)*std::pow(K_q,2)+K_K*((-1.*ssp*svm+ssm*svp)*P_q+2.*(ssp*svm+ssm*svp)*q_q)))/K_K);
                K_norm_rho[SI_K_norm_vc(4,1,iq,iz)]    = wj*    (4.*svm*svp*(-1.*K_q*P_q+K_P*q_q));
                K_norm_rho[SI_K_norm_vc(4,2,iq,iz)]    = wj*    ((4.*svm*svp*std::pow(K_q,2)*(K_q*P_q-1.*K_P*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(4,3,iq,iz)]    = wj*    (0.);
                K_norm_rho[SI_K_norm_vc(4,4,iq,iz)]    = wj*    (((4.*ssm*ssp+svm*svp*(P_P-4.*q_q))*(-1.*std::pow(K_q,2)+K_K*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(4,5,iq,iz)]    = wj*    ((-2.*K_q*((-1.*ssp*svm+ssm*svp)*K_P+2.*(ssp*svm+ssm*svp)*K_q)*(std::pow(K_q,2)-1.*K_K*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(4,6,iq,iz)]    = wj*    ((2.*((ssp*svm-1.*ssm*svp)*P_q-2.*(ssp*svm+ssm*svp)*q_q)*(-1.*std::pow(K_q,2)+K_K*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(4,7,iq,iz)]    = wj*    ((8.*svm*svp*(-1.*std::pow(K_q,2)+K_K*q_q)*(K_q*P_q-1.*K_P*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(5,0,iq,iz)]    = wj*    ((2.*svm*svp*K_q*(std::pow(K_P,2)*K_q-4.*std::pow(K_q,3)-1.*K_K*K_P*P_q+4.*K_K*K_q*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(5,1,iq,iz)]    = wj*    (2.*K_q*(-1.*(ssp*svm+ssm*svp)*K_P*K_q+2.*(ssp*svm-1.*ssm*svp)*std::pow(K_q,2)+K_K*((ssp*svm+ssm*svp)*P_q+2.*(-1.*ssp*svm+ssm*svp)*q_q)));
                K_norm_rho[SI_K_norm_vc(5,2,iq,iz)]    = wj*    ((2.*std::pow(K_q,3)*((ssp*svm+ssm*svp)*K_P*K_q+(-2.*ssp*svm+2.*ssm*svp)*std::pow(K_q,2)+K_K*(-1.*(ssp*svm+ssm*svp)*P_q+2.*(ssp*svm-1.*ssm*svp)*q_q)))/K_K);
                K_norm_rho[SI_K_norm_vc(5,3,iq,iz)]    = wj*    (0.);
                K_norm_rho[SI_K_norm_vc(5,4,iq,iz)]    = wj*    ((-2.*K_q*((-1.*ssp*svm+ssm*svp)*K_P+2.*(ssp*svm+ssm*svp)*K_q)*(std::pow(K_q,2)-1.*K_K*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(5,5,iq,iz)]    = wj*    ((std::pow(K_q,2)*(-2.*svm*svp*std::pow(K_P,2)+8.*svm*svp*std::pow(K_q,2)+K_K*(-4.*ssm*ssp+svm*svp*(P_P-4.*q_q)))*(-1.*std::pow(K_q,2)+K_K*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(5,6,iq,iz)]    = wj*    ((K_q*(std::pow(K_q,2)-1.*K_K*q_q)*(-2.*svm*svp*K_P*P_q+K_q*(-4.*ssm*ssp+svm*svp*(P_P+4.*q_q))))/K_K);
                K_norm_rho[SI_K_norm_vc(5,7,iq,iz)]    = wj*    ((4.*K_q*(std::pow(K_q,2)-1.*K_K*q_q)*(-1.*(ssp*svm+ssm*svp)*K_P*K_q+2.*(ssp*svm-1.*ssm*svp)*std::pow(K_q,2)+K_K*((ssp*svm+ssm*svp)*P_q+2.*(-1.*ssp*svm+ssm*svp)*q_q)))/K_K);
                K_norm_rho[SI_K_norm_vc(6,0,iq,iz)]    = wj*    ((-2.*svm*svp*K_P*K_q*P_q+std::pow(K_q,2)*(-4.*ssm*ssp+svm*svp*(P_P+4.*q_q))+K_K*(2.*svm*svp*std::pow(P_q,2)-1.*q_q*(-4.*ssm*ssp+svm*svp*(P_P+4.*q_q))))/K_K);
                K_norm_rho[SI_K_norm_vc(6,1,iq,iz)]    = wj*    (2.*(ssp*svm+ssm*svp)*(-1.*K_q*P_q+K_P*q_q));
                K_norm_rho[SI_K_norm_vc(6,2,iq,iz)]    = wj*    ((2.*(ssp*svm+ssm*svp)*std::pow(K_q,2)*(K_q*P_q-1.*K_P*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(6,3,iq,iz)]    = wj*    (0.);
                K_norm_rho[SI_K_norm_vc(6,4,iq,iz)]    = wj*    ((2.*((ssp*svm-1.*ssm*svp)*P_q-2.*(ssp*svm+ssm*svp)*q_q)*(-1.*std::pow(K_q,2)+K_K*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(6,5,iq,iz)]    = wj*    ((K_q*(std::pow(K_q,2)-1.*K_K*q_q)*(-2.*svm*svp*K_P*P_q+K_q*(-4.*ssm*ssp+svm*svp*(P_P+4.*q_q))))/K_K);
                K_norm_rho[SI_K_norm_vc(6,6,iq,iz)]    = wj*    (((-1.*std::pow(K_q,2)+K_K*q_q)*(-2.*svm*svp*std::pow(P_q,2)+q_q*(-4.*ssm*ssp+svm*svp*(P_P+4.*q_q))))/K_K);
                K_norm_rho[SI_K_norm_vc(6,7,iq,iz)]    = wj*    ((4.*(ssp*svm+ssm*svp)*(-1.*std::pow(K_q,2)+K_K*q_q)*(K_q*P_q-1.*K_P*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(7,0,iq,iz)]    = wj*    ((-4.*((ssp*svm+ssm*svp)*K_P+2.*(-1.*ssp*svm+ssm*svp)*K_q)*(std::pow(K_q,2)-1.*K_K*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(7,1,iq,iz)]    = wj*    (-8.*svm*svp*K_P*K_q*P_q+4.*svm*svp*std::pow(K_P,2)*q_q+2.*std::pow(K_q,2)*(4.*ssm*ssp+svm*svp*(P_P+4.*q_q))+K_K*(4.*svm*svp*std::pow(P_q,2)-2.*q_q*(4.*ssm*ssp+svm*svp*(P_P+4.*q_q))));
                K_norm_rho[SI_K_norm_vc(7,2,iq,iz)]    = wj*    ((-2.*std::pow(K_q,2)*(-4.*svm*svp*K_P*K_q*P_q+2.*svm*svp*std::pow(K_P,2)*q_q+std::pow(K_q,2)*(4.*ssm*ssp+svm*svp*(P_P+4.*q_q))+K_K*(2.*svm*svp*std::pow(P_q,2)-1.*q_q*(4.*ssm*ssp+svm*svp*(P_P+4.*q_q)))))/K_K);
                K_norm_rho[SI_K_norm_vc(7,3,iq,iz)]    = wj*    (0.);
                K_norm_rho[SI_K_norm_vc(7,4,iq,iz)]    = wj*    ((8.*svm*svp*(-1.*std::pow(K_q,2)+K_K*q_q)*(K_q*P_q-1.*K_P*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(7,5,iq,iz)]    = wj*    ((4.*K_q*(std::pow(K_q,2)-1.*K_K*q_q)*(-1.*(ssp*svm+ssm*svp)*K_P*K_q+2.*(ssp*svm-1.*ssm*svp)*std::pow(K_q,2)+K_K*((ssp*svm+ssm*svp)*P_q+2.*(-1.*ssp*svm+ssm*svp)*q_q)))/K_K);
                K_norm_rho[SI_K_norm_vc(7,6,iq,iz)]    = wj*    ((4.*(ssp*svm+ssm*svp)*(-1.*std::pow(K_q,2)+K_K*q_q)*(K_q*P_q-1.*K_P*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(7,7,iq,iz)]    = wj*    ((4.*(std::pow(K_q,2)-1.*K_K*q_q)*(-4.*svm*svp*K_P*K_q*P_q+2.*svm*svp*std::pow(K_P,2)*q_q+std::pow(K_q,2)*(4.*ssm*ssp+svm*svp*(P_P+4.*q_q))+K_K*(2.*svm*svp*std::pow(P_q,2)-1.*q_q*(4.*ssm*ssp+svm*svp*(P_P+4.*q_q)))))/K_K);
            }
        }

        cdouble norm_sum=0.;

        for(int id1=0; id1<n_dirac_rho; id1++){
            for(int id2=0; id2<n_dirac_rho; id2++){
                for(int iq=0; iq<n_radial_meson; iq++){
                    for(int iz=0; iz<n_angular_meson_z; iz++){
                        norm_sum +=  K_norm_rho[SI_K_norm_vc(id1,id2,iq,iz)] * vc_8700_0037(id1,std::exp(sampling_points_radial_meson[iq])) * vc_8700_0037(id2,std::exp(sampling_points_radial_meson[iq]));
                    }
                }
            }
        }

        K_norm_rho.clear();

        return prefactor*norm_sum;
    }

    static cdouble norm_integral_rho(cdouble P_P, cdouble K_K)
    {
        std::vector<cdouble >     K_norm_rho(8*8*n_radial_meson*n_angular_meson_z);
        cdouble
                K_P         = std::sqrt(K_K)*std::sqrt(P_P),
                prefactor   = 1./(2.*M_PI*M_PI*M_PI);

        for (int iq=0; iq<n_radial_meson; iq++){
            cdouble
                    q_q = std::exp(sampling_points_radial_meson[iq]),
                    qw  = weights_radial_meson[iq],
                    qj  = q_q*q_q/2.;
            #pragma omp parallel for
            for (int iz=0; iz<n_angular_meson_z; iz++){
                cdouble
                        z   = sampling_points_angular_meson_z[iz],
                        zw  = weights_angular_meson_z[iz],
                        zj  = std::sqrt(1.-z*z);
                cdouble
                        P_q     =   std::sqrt(P_P*q_q)*z,
                        K_q     =   std::sqrt(K_K*q_q)*z,
                        qm_qm   =   q_q + P_P/4. - P_q,
                        qp_qp   =   q_q + P_P/4. + P_q,
                        svm     =   chfi_q::sv_u(qm_qm),
                        svp     =   chfi_q::sv_u(qp_qp),
                        ssm     =   chfi_q::ss_u(qm_qm),
                        ssp     =   chfi_q::ss_u(qp_qp),
                        wj      =   qw*qj*zw*zj;


                K_norm_rho[SI_K_norm_vc(0,0,iq,iz)]    = wj*    (-12.*ssm*ssp+(2.*svm*svp*std::pow(K_P,2))/K_K-(8.*svm*svp*std::pow(K_q,2))/K_K+svm*svp*P_P-4.*svm*svp*q_q);
                K_norm_rho[SI_K_norm_vc(0,1,iq,iz)]    = wj*    (-6.*ssp*svm*K_P-6.*ssm*svp*K_P+12.*ssp*svm*K_q-12.*ssm*svp*K_q);
                K_norm_rho[SI_K_norm_vc(0,2,iq,iz)]    = wj*    ((2.*K_q*((ssp*svm+ssm*svp)*K_P*K_q+2.*((-1.*ssp*svm+ssm*svp)*std::pow(K_q,2)+K_K*((ssp*svm+ssm*svp)*P_q+2.*(-1.*ssp*svm+ssm*svp)*q_q))))/K_K);
                K_norm_rho[SI_K_norm_vc(0,3,iq,iz)]    = wj*    (16.*svm*svp*(K_q*P_q-1.*K_P*q_q));
                K_norm_rho[SI_K_norm_vc(0,4,iq,iz)]    = wj*    ((2.*((ssp*svm-1.*ssm*svp)*K_P*K_q-2.*(ssp*svm+ssm*svp)*std::pow(K_q,2)+K_K*((-1.*ssp*svm+ssm*svp)*P_q+2.*(ssp*svm+ssm*svp)*q_q)))/K_K);
                K_norm_rho[SI_K_norm_vc(0,5,iq,iz)]    = wj*    ((2.*svm*svp*K_q*(std::pow(K_P,2)*K_q-4.*std::pow(K_q,3)-1.*K_K*K_P*P_q+4.*K_K*K_q*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(0,6,iq,iz)]    = wj*    ((-2.*svm*svp*K_P*K_q*P_q+std::pow(K_q,2)*(-4.*ssm*ssp+svm*svp*(P_P+4.*q_q))+K_K*(2.*svm*svp*std::pow(P_q,2)-1.*q_q*(-4.*ssm*ssp+svm*svp*(P_P+4.*q_q))))/K_K);
                K_norm_rho[SI_K_norm_vc(0,7,iq,iz)]    = wj*    ((-4.*((ssp*svm+ssm*svp)*K_P+2.*(-1.*ssp*svm+ssm*svp)*K_q)*(std::pow(K_q,2)-1.*K_K*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(1,0,iq,iz)]    = wj*    (-6.*((ssp*svm+ssm*svp)*K_P+2.*(-1.*ssp*svm+ssm*svp)*K_q));
                K_norm_rho[SI_K_norm_vc(1,1,iq,iz)]    = wj*    (-4.*svm*svp*(std::pow(K_P,2)-4.*std::pow(K_q,2))+K_K*(12.*ssm*ssp+svm*svp*(P_P-4.*q_q)));
                K_norm_rho[SI_K_norm_vc(1,2,iq,iz)]    = wj*    (-1.*K_q*(-4.*svm*svp*K_P*P_q+K_q*(12.*ssm*ssp+svm*svp*(P_P+12.*q_q))));
                K_norm_rho[SI_K_norm_vc(1,3,iq,iz)]    = wj*    (8.*((ssp*svm-1.*ssm*svp)*K_P*K_q-2.*(ssp*svm+ssm*svp)*std::pow(K_q,2)+K_K*((-1.*ssp*svm+ssm*svp)*P_q+2.*(ssp*svm+ssm*svp)*q_q)));
                K_norm_rho[SI_K_norm_vc(1,4,iq,iz)]    = wj*    (4.*svm*svp*(-1.*K_q*P_q+K_P*q_q));
                K_norm_rho[SI_K_norm_vc(1,5,iq,iz)]    = wj*    (2.*K_q*(-1.*(ssp*svm+ssm*svp)*K_P*K_q+2.*(ssp*svm-1.*ssm*svp)*std::pow(K_q,2)+K_K*((ssp*svm+ssm*svp)*P_q+2.*(-1.*ssp*svm+ssm*svp)*q_q)));
                K_norm_rho[SI_K_norm_vc(1,6,iq,iz)]    = wj*    (2.*(ssp*svm+ssm*svp)*(-1.*K_q*P_q+K_P*q_q));
                K_norm_rho[SI_K_norm_vc(1,7,iq,iz)]    = wj*    (-8.*svm*svp*K_P*K_q*P_q+4.*svm*svp*std::pow(K_P,2)*q_q+2.*std::pow(K_q,2)*(4.*ssm*ssp+svm*svp*(P_P+4.*q_q))+K_K*(4.*svm*svp*std::pow(P_q,2)-2.*q_q*(4.*ssm*ssp+svm*svp*(P_P+4.*q_q))));
                K_norm_rho[SI_K_norm_vc(2,0,iq,iz)]    = wj*    ((2.*K_q*((ssp*svm+ssm*svp)*K_P*K_q+2.*((-1.*ssp*svm+ssm*svp)*std::pow(K_q,2)+K_K*((ssp*svm+ssm*svp)*P_q+2.*(-1.*ssp*svm+ssm*svp)*q_q))))/K_K);
                K_norm_rho[SI_K_norm_vc(2,1,iq,iz)]    = wj*    (-1.*K_q*(-4.*svm*svp*K_P*P_q+K_q*(12.*ssm*ssp+svm*svp*(P_P+12.*q_q))));
                K_norm_rho[SI_K_norm_vc(2,2,iq,iz)]    = wj*    ((std::pow(K_q,2)*(-4.*svm*svp*K_P*K_q*P_q+2.*svm*svp*std::pow(K_P,2)*q_q+std::pow(K_q,2)*(4.*ssm*ssp+svm*svp*(P_P+4.*q_q))+K_K*(-2.*svm*svp*std::pow(P_q,2)+8.*q_q*(ssm*ssp+svm*svp*q_q))))/K_K);
                K_norm_rho[SI_K_norm_vc(2,3,iq,iz)]    = wj*    (8.*(ssp*svm-1.*ssm*svp)*K_q*(K_q*P_q-1.*K_P*q_q));
                K_norm_rho[SI_K_norm_vc(2,4,iq,iz)]    = wj*    ((4.*svm*svp*std::pow(K_q,2)*(K_q*P_q-1.*K_P*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(2,5,iq,iz)]    = wj*    ((2.*std::pow(K_q,3)*((ssp*svm+ssm*svp)*K_P*K_q+(-2.*ssp*svm+2.*ssm*svp)*std::pow(K_q,2)+K_K*(-1.*(ssp*svm+ssm*svp)*P_q+2.*(ssp*svm-1.*ssm*svp)*q_q)))/K_K);
                K_norm_rho[SI_K_norm_vc(2,6,iq,iz)]    = wj*    ((2.*(ssp*svm+ssm*svp)*std::pow(K_q,2)*(K_q*P_q-1.*K_P*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(2,7,iq,iz)]    = wj*    ((-2.*std::pow(K_q,2)*(-4.*svm*svp*K_P*K_q*P_q+2.*svm*svp*std::pow(K_P,2)*q_q+std::pow(K_q,2)*(4.*ssm*ssp+svm*svp*(P_P+4.*q_q))+K_K*(2.*svm*svp*std::pow(P_q,2)-1.*q_q*(4.*ssm*ssp+svm*svp*(P_P+4.*q_q)))))/K_K);
                K_norm_rho[SI_K_norm_vc(3,0,iq,iz)]    = wj*    (16.*svm*svp*(K_q*P_q-1.*K_P*q_q));
                K_norm_rho[SI_K_norm_vc(3,1,iq,iz)]    = wj*    (8.*((ssp*svm-1.*ssm*svp)*K_P*K_q-2.*(ssp*svm+ssm*svp)*std::pow(K_q,2)+K_K*((-1.*ssp*svm+ssm*svp)*P_q+2.*(ssp*svm+ssm*svp)*q_q)));
                K_norm_rho[SI_K_norm_vc(3,2,iq,iz)]    = wj*    (8.*(ssp*svm-1.*ssm*svp)*K_q*(K_q*P_q-1.*K_P*q_q));
                K_norm_rho[SI_K_norm_vc(3,3,iq,iz)]    = wj*    (-8.*(-2.*svm*svp*K_P*K_q*P_q+svm*svp*std::pow(K_P,2)*q_q+std::pow(K_q,2)*(-4.*ssm*ssp+4.*svm*svp*q_q)+K_K*(4.*ssm*ssp*q_q+svm*svp*(std::pow(P_q,2)-4.*std::pow(q_q,2)))));
                K_norm_rho[SI_K_norm_vc(3,4,iq,iz)]    = wj*    (0.);
                K_norm_rho[SI_K_norm_vc(3,5,iq,iz)]    = wj*    (0.);
                K_norm_rho[SI_K_norm_vc(3,6,iq,iz)]    = wj*    (0.);
                K_norm_rho[SI_K_norm_vc(3,7,iq,iz)]    = wj*    (0.);
                K_norm_rho[SI_K_norm_vc(4,0,iq,iz)]    = wj*    ((2.*((ssp*svm-1.*ssm*svp)*K_P*K_q-2.*(ssp*svm+ssm*svp)*std::pow(K_q,2)+K_K*((-1.*ssp*svm+ssm*svp)*P_q+2.*(ssp*svm+ssm*svp)*q_q)))/K_K);
                K_norm_rho[SI_K_norm_vc(4,1,iq,iz)]    = wj*    (4.*svm*svp*(-1.*K_q*P_q+K_P*q_q));
                K_norm_rho[SI_K_norm_vc(4,2,iq,iz)]    = wj*    ((4.*svm*svp*std::pow(K_q,2)*(K_q*P_q-1.*K_P*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(4,3,iq,iz)]    = wj*    (0.);
                K_norm_rho[SI_K_norm_vc(4,4,iq,iz)]    = wj*    (((4.*ssm*ssp+svm*svp*(P_P-4.*q_q))*(-1.*std::pow(K_q,2)+K_K*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(4,5,iq,iz)]    = wj*    ((-2.*K_q*((-1.*ssp*svm+ssm*svp)*K_P+2.*(ssp*svm+ssm*svp)*K_q)*(std::pow(K_q,2)-1.*K_K*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(4,6,iq,iz)]    = wj*    ((2.*((ssp*svm-1.*ssm*svp)*P_q-2.*(ssp*svm+ssm*svp)*q_q)*(-1.*std::pow(K_q,2)+K_K*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(4,7,iq,iz)]    = wj*    ((8.*svm*svp*(-1.*std::pow(K_q,2)+K_K*q_q)*(K_q*P_q-1.*K_P*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(5,0,iq,iz)]    = wj*    ((2.*svm*svp*K_q*(std::pow(K_P,2)*K_q-4.*std::pow(K_q,3)-1.*K_K*K_P*P_q+4.*K_K*K_q*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(5,1,iq,iz)]    = wj*    (2.*K_q*(-1.*(ssp*svm+ssm*svp)*K_P*K_q+2.*(ssp*svm-1.*ssm*svp)*std::pow(K_q,2)+K_K*((ssp*svm+ssm*svp)*P_q+2.*(-1.*ssp*svm+ssm*svp)*q_q)));
                K_norm_rho[SI_K_norm_vc(5,2,iq,iz)]    = wj*    ((2.*std::pow(K_q,3)*((ssp*svm+ssm*svp)*K_P*K_q+(-2.*ssp*svm+2.*ssm*svp)*std::pow(K_q,2)+K_K*(-1.*(ssp*svm+ssm*svp)*P_q+2.*(ssp*svm-1.*ssm*svp)*q_q)))/K_K);
                K_norm_rho[SI_K_norm_vc(5,3,iq,iz)]    = wj*    (0.);
                K_norm_rho[SI_K_norm_vc(5,4,iq,iz)]    = wj*    ((-2.*K_q*((-1.*ssp*svm+ssm*svp)*K_P+2.*(ssp*svm+ssm*svp)*K_q)*(std::pow(K_q,2)-1.*K_K*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(5,5,iq,iz)]    = wj*    ((std::pow(K_q,2)*(-2.*svm*svp*std::pow(K_P,2)+8.*svm*svp*std::pow(K_q,2)+K_K*(-4.*ssm*ssp+svm*svp*(P_P-4.*q_q)))*(-1.*std::pow(K_q,2)+K_K*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(5,6,iq,iz)]    = wj*    ((K_q*(std::pow(K_q,2)-1.*K_K*q_q)*(-2.*svm*svp*K_P*P_q+K_q*(-4.*ssm*ssp+svm*svp*(P_P+4.*q_q))))/K_K);
                K_norm_rho[SI_K_norm_vc(5,7,iq,iz)]    = wj*    ((4.*K_q*(std::pow(K_q,2)-1.*K_K*q_q)*(-1.*(ssp*svm+ssm*svp)*K_P*K_q+2.*(ssp*svm-1.*ssm*svp)*std::pow(K_q,2)+K_K*((ssp*svm+ssm*svp)*P_q+2.*(-1.*ssp*svm+ssm*svp)*q_q)))/K_K);
                K_norm_rho[SI_K_norm_vc(6,0,iq,iz)]    = wj*    ((-2.*svm*svp*K_P*K_q*P_q+std::pow(K_q,2)*(-4.*ssm*ssp+svm*svp*(P_P+4.*q_q))+K_K*(2.*svm*svp*std::pow(P_q,2)-1.*q_q*(-4.*ssm*ssp+svm*svp*(P_P+4.*q_q))))/K_K);
                K_norm_rho[SI_K_norm_vc(6,1,iq,iz)]    = wj*    (2.*(ssp*svm+ssm*svp)*(-1.*K_q*P_q+K_P*q_q));
                K_norm_rho[SI_K_norm_vc(6,2,iq,iz)]    = wj*    ((2.*(ssp*svm+ssm*svp)*std::pow(K_q,2)*(K_q*P_q-1.*K_P*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(6,3,iq,iz)]    = wj*    (0.);
                K_norm_rho[SI_K_norm_vc(6,4,iq,iz)]    = wj*    ((2.*((ssp*svm-1.*ssm*svp)*P_q-2.*(ssp*svm+ssm*svp)*q_q)*(-1.*std::pow(K_q,2)+K_K*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(6,5,iq,iz)]    = wj*    ((K_q*(std::pow(K_q,2)-1.*K_K*q_q)*(-2.*svm*svp*K_P*P_q+K_q*(-4.*ssm*ssp+svm*svp*(P_P+4.*q_q))))/K_K);
                K_norm_rho[SI_K_norm_vc(6,6,iq,iz)]    = wj*    (((-1.*std::pow(K_q,2)+K_K*q_q)*(-2.*svm*svp*std::pow(P_q,2)+q_q*(-4.*ssm*ssp+svm*svp*(P_P+4.*q_q))))/K_K);
                K_norm_rho[SI_K_norm_vc(6,7,iq,iz)]    = wj*    ((4.*(ssp*svm+ssm*svp)*(-1.*std::pow(K_q,2)+K_K*q_q)*(K_q*P_q-1.*K_P*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(7,0,iq,iz)]    = wj*    ((-4.*((ssp*svm+ssm*svp)*K_P+2.*(-1.*ssp*svm+ssm*svp)*K_q)*(std::pow(K_q,2)-1.*K_K*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(7,1,iq,iz)]    = wj*    (-8.*svm*svp*K_P*K_q*P_q+4.*svm*svp*std::pow(K_P,2)*q_q+2.*std::pow(K_q,2)*(4.*ssm*ssp+svm*svp*(P_P+4.*q_q))+K_K*(4.*svm*svp*std::pow(P_q,2)-2.*q_q*(4.*ssm*ssp+svm*svp*(P_P+4.*q_q))));
                K_norm_rho[SI_K_norm_vc(7,2,iq,iz)]    = wj*    ((-2.*std::pow(K_q,2)*(-4.*svm*svp*K_P*K_q*P_q+2.*svm*svp*std::pow(K_P,2)*q_q+std::pow(K_q,2)*(4.*ssm*ssp+svm*svp*(P_P+4.*q_q))+K_K*(2.*svm*svp*std::pow(P_q,2)-1.*q_q*(4.*ssm*ssp+svm*svp*(P_P+4.*q_q)))))/K_K);
                K_norm_rho[SI_K_norm_vc(7,3,iq,iz)]    = wj*    (0.);
                K_norm_rho[SI_K_norm_vc(7,4,iq,iz)]    = wj*    ((8.*svm*svp*(-1.*std::pow(K_q,2)+K_K*q_q)*(K_q*P_q-1.*K_P*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(7,5,iq,iz)]    = wj*    ((4.*K_q*(std::pow(K_q,2)-1.*K_K*q_q)*(-1.*(ssp*svm+ssm*svp)*K_P*K_q+2.*(ssp*svm-1.*ssm*svp)*std::pow(K_q,2)+K_K*((ssp*svm+ssm*svp)*P_q+2.*(-1.*ssp*svm+ssm*svp)*q_q)))/K_K);
                K_norm_rho[SI_K_norm_vc(7,6,iq,iz)]    = wj*    ((4.*(ssp*svm+ssm*svp)*(-1.*std::pow(K_q,2)+K_K*q_q)*(K_q*P_q-1.*K_P*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(7,7,iq,iz)]    = wj*    ((4.*(std::pow(K_q,2)-1.*K_K*q_q)*(-4.*svm*svp*K_P*K_q*P_q+2.*svm*svp*std::pow(K_P,2)*q_q+std::pow(K_q,2)*(4.*ssm*ssp+svm*svp*(P_P+4.*q_q))+K_K*(2.*svm*svp*std::pow(P_q,2)-1.*q_q*(4.*ssm*ssp+svm*svp*(P_P+4.*q_q)))))/K_K);
            }
        }

        cdouble norm_sum=0.;

        for(int id1=0; id1<n_dirac_rho; id1++){
            for(int id2=0; id2<n_dirac_rho; id2++){
                for(int iq=0; iq<n_radial_meson; iq++){
                    for(int iz=0; iz<n_angular_meson_z; iz++){
                        norm_sum +=  K_norm_rho[SI_K_norm_vc(id1,id2,iq,iz)] * vc_0037_0037(id1,std::exp(sampling_points_radial_meson[iq])) * vc_0037_0037(id2,std::exp(sampling_points_radial_meson[iq]));
                    }
                }
            }
        }

        K_norm_rho.clear();

        return prefactor*norm_sum;
    }

    static cdouble norm_integral_JPsi_T(cdouble P_P, cdouble K_K)
    {
        std::vector<cdouble >     K_norm_rho(8*8*n_radial_meson*n_angular_meson_z);

        cdouble
                g         = 3.097*3.097/(K_K+2.*3.097*3.097),
                h         = -I*std::sqrt(K_K/(K_K+2.*3.097*3.097));

        cdouble
                K_P         = std::sqrt(K_K)*std::sqrt(P_P),
                prefactor   = 1./(2.*M_PI*M_PI*M_PI);

        for (int iq=0; iq<n_radial_meson; iq++){
            cdouble
                    q_q = std::exp(sampling_points_radial_meson[iq]),
                    qw  = weights_radial_meson[iq],
                    qj  = q_q*q_q/2.;
            #pragma omp parallel for
            for (int iz=0; iz<n_angular_meson_z; iz++){
                cdouble
                        z   = sampling_points_angular_meson_z[iz],
                        zw  = weights_angular_meson_z[iz],
                        zj  = std::sqrt(1.-z*z);
                cdouble
                        P_q     =   std::sqrt(P_P*q_q)*z,
                        K_q     =   std::sqrt(K_K*q_q)*z,
                        qm_qm   =   q_q + P_P/4. - P_q,
                        qp_qp   =   q_q + P_P/4. + P_q,
                        svm     =   chfi_q::sv_c(qm_qm),
                        svp     =   chfi_q::sv_c(qp_qp),
                        ssm     =   chfi_q::ss_c(qm_qm),
                        ssp     =   chfi_q::ss_c(qp_qp),
                        wj      =   qw*qj*zw*zj;

                K_norm_rho[SI_K_norm_vc(0,0,iq,iz)]    = wj*    (-12.*ssm*ssp+(2.*svm*svp*std::pow(K_P,2))/K_K-(8.*svm*svp*std::pow(K_q,2))/K_K+svm*svp*P_P-4.*svm*svp*q_q);
                K_norm_rho[SI_K_norm_vc(0,1,iq,iz)]    = wj*    (-6.*ssp*svm*K_P-6.*ssm*svp*K_P+12.*ssp*svm*K_q-12.*ssm*svp*K_q);
                K_norm_rho[SI_K_norm_vc(0,2,iq,iz)]    = wj*    ((2.*K_q*((ssp*svm+ssm*svp)*K_P*K_q+2.*((-1.*ssp*svm+ssm*svp)*std::pow(K_q,2)+K_K*((ssp*svm+ssm*svp)*P_q+2.*(-1.*ssp*svm+ssm*svp)*q_q))))/K_K);
                K_norm_rho[SI_K_norm_vc(0,3,iq,iz)]    = wj*    (16.*svm*svp*(K_q*P_q-1.*K_P*q_q));
                K_norm_rho[SI_K_norm_vc(0,4,iq,iz)]    = wj*    ((2.*((ssp*svm-1.*ssm*svp)*K_P*K_q-2.*(ssp*svm+ssm*svp)*std::pow(K_q,2)+K_K*((-1.*ssp*svm+ssm*svp)*P_q+2.*(ssp*svm+ssm*svp)*q_q)))/K_K);
                K_norm_rho[SI_K_norm_vc(0,5,iq,iz)]    = wj*    ((2.*svm*svp*K_q*(std::pow(K_P,2)*K_q-4.*std::pow(K_q,3)-1.*K_K*K_P*P_q+4.*K_K*K_q*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(0,6,iq,iz)]    = wj*    ((-2.*svm*svp*K_P*K_q*P_q+std::pow(K_q,2)*(-4.*ssm*ssp+svm*svp*(P_P+4.*q_q))+K_K*(2.*svm*svp*std::pow(P_q,2)-1.*q_q*(-4.*ssm*ssp+svm*svp*(P_P+4.*q_q))))/K_K);
                K_norm_rho[SI_K_norm_vc(0,7,iq,iz)]    = wj*    ((-4.*((ssp*svm+ssm*svp)*K_P+2.*(-1.*ssp*svm+ssm*svp)*K_q)*(std::pow(K_q,2)-1.*K_K*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(1,0,iq,iz)]    = wj*    (-6.*((ssp*svm+ssm*svp)*K_P+2.*(-1.*ssp*svm+ssm*svp)*K_q));
                K_norm_rho[SI_K_norm_vc(1,1,iq,iz)]    = wj*    (-4.*svm*svp*(std::pow(K_P,2)-4.*std::pow(K_q,2))+K_K*(12.*ssm*ssp+svm*svp*(P_P-4.*q_q)));
                K_norm_rho[SI_K_norm_vc(1,2,iq,iz)]    = wj*    (-1.*K_q*(-4.*svm*svp*K_P*P_q+K_q*(12.*ssm*ssp+svm*svp*(P_P+12.*q_q))));
                K_norm_rho[SI_K_norm_vc(1,3,iq,iz)]    = wj*    (8.*((ssp*svm-1.*ssm*svp)*K_P*K_q-2.*(ssp*svm+ssm*svp)*std::pow(K_q,2)+K_K*((-1.*ssp*svm+ssm*svp)*P_q+2.*(ssp*svm+ssm*svp)*q_q)));
                K_norm_rho[SI_K_norm_vc(1,4,iq,iz)]    = wj*    (4.*svm*svp*(-1.*K_q*P_q+K_P*q_q));
                K_norm_rho[SI_K_norm_vc(1,5,iq,iz)]    = wj*    (2.*K_q*(-1.*(ssp*svm+ssm*svp)*K_P*K_q+2.*(ssp*svm-1.*ssm*svp)*std::pow(K_q,2)+K_K*((ssp*svm+ssm*svp)*P_q+2.*(-1.*ssp*svm+ssm*svp)*q_q)));
                K_norm_rho[SI_K_norm_vc(1,6,iq,iz)]    = wj*    (2.*(ssp*svm+ssm*svp)*(-1.*K_q*P_q+K_P*q_q));
                K_norm_rho[SI_K_norm_vc(1,7,iq,iz)]    = wj*    (-8.*svm*svp*K_P*K_q*P_q+4.*svm*svp*std::pow(K_P,2)*q_q+2.*std::pow(K_q,2)*(4.*ssm*ssp+svm*svp*(P_P+4.*q_q))+K_K*(4.*svm*svp*std::pow(P_q,2)-2.*q_q*(4.*ssm*ssp+svm*svp*(P_P+4.*q_q))));
                K_norm_rho[SI_K_norm_vc(2,0,iq,iz)]    = wj*    ((2.*K_q*((ssp*svm+ssm*svp)*K_P*K_q+2.*((-1.*ssp*svm+ssm*svp)*std::pow(K_q,2)+K_K*((ssp*svm+ssm*svp)*P_q+2.*(-1.*ssp*svm+ssm*svp)*q_q))))/K_K);
                K_norm_rho[SI_K_norm_vc(2,1,iq,iz)]    = wj*    (-1.*K_q*(-4.*svm*svp*K_P*P_q+K_q*(12.*ssm*ssp+svm*svp*(P_P+12.*q_q))));
                K_norm_rho[SI_K_norm_vc(2,2,iq,iz)]    = wj*    ((std::pow(K_q,2)*(-4.*svm*svp*K_P*K_q*P_q+2.*svm*svp*std::pow(K_P,2)*q_q+std::pow(K_q,2)*(4.*ssm*ssp+svm*svp*(P_P+4.*q_q))+K_K*(-2.*svm*svp*std::pow(P_q,2)+8.*q_q*(ssm*ssp+svm*svp*q_q))))/K_K);
                K_norm_rho[SI_K_norm_vc(2,3,iq,iz)]    = wj*    (8.*(ssp*svm-1.*ssm*svp)*K_q*(K_q*P_q-1.*K_P*q_q));
                K_norm_rho[SI_K_norm_vc(2,4,iq,iz)]    = wj*    ((4.*svm*svp*std::pow(K_q,2)*(K_q*P_q-1.*K_P*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(2,5,iq,iz)]    = wj*    ((2.*std::pow(K_q,3)*((ssp*svm+ssm*svp)*K_P*K_q+(-2.*ssp*svm+2.*ssm*svp)*std::pow(K_q,2)+K_K*(-1.*(ssp*svm+ssm*svp)*P_q+2.*(ssp*svm-1.*ssm*svp)*q_q)))/K_K);
                K_norm_rho[SI_K_norm_vc(2,6,iq,iz)]    = wj*    ((2.*(ssp*svm+ssm*svp)*std::pow(K_q,2)*(K_q*P_q-1.*K_P*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(2,7,iq,iz)]    = wj*    ((-2.*std::pow(K_q,2)*(-4.*svm*svp*K_P*K_q*P_q+2.*svm*svp*std::pow(K_P,2)*q_q+std::pow(K_q,2)*(4.*ssm*ssp+svm*svp*(P_P+4.*q_q))+K_K*(2.*svm*svp*std::pow(P_q,2)-1.*q_q*(4.*ssm*ssp+svm*svp*(P_P+4.*q_q)))))/K_K);
                K_norm_rho[SI_K_norm_vc(3,0,iq,iz)]    = wj*    (16.*svm*svp*(K_q*P_q-1.*K_P*q_q));
                K_norm_rho[SI_K_norm_vc(3,1,iq,iz)]    = wj*    (8.*((ssp*svm-1.*ssm*svp)*K_P*K_q-2.*(ssp*svm+ssm*svp)*std::pow(K_q,2)+K_K*((-1.*ssp*svm+ssm*svp)*P_q+2.*(ssp*svm+ssm*svp)*q_q)));
                K_norm_rho[SI_K_norm_vc(3,2,iq,iz)]    = wj*    (8.*(ssp*svm-1.*ssm*svp)*K_q*(K_q*P_q-1.*K_P*q_q));
                K_norm_rho[SI_K_norm_vc(3,3,iq,iz)]    = wj*    (-8.*(-2.*svm*svp*K_P*K_q*P_q+svm*svp*std::pow(K_P,2)*q_q+std::pow(K_q,2)*(-4.*ssm*ssp+4.*svm*svp*q_q)+K_K*(4.*ssm*ssp*q_q+svm*svp*(std::pow(P_q,2)-4.*std::pow(q_q,2)))));
                K_norm_rho[SI_K_norm_vc(3,4,iq,iz)]    = wj*    (0.);
                K_norm_rho[SI_K_norm_vc(3,5,iq,iz)]    = wj*    (0.);
                K_norm_rho[SI_K_norm_vc(3,6,iq,iz)]    = wj*    (0.);
                K_norm_rho[SI_K_norm_vc(3,7,iq,iz)]    = wj*    (0.);
                K_norm_rho[SI_K_norm_vc(4,0,iq,iz)]    = wj*    ((2.*((ssp*svm-1.*ssm*svp)*K_P*K_q-2.*(ssp*svm+ssm*svp)*std::pow(K_q,2)+K_K*((-1.*ssp*svm+ssm*svp)*P_q+2.*(ssp*svm+ssm*svp)*q_q)))/K_K);
                K_norm_rho[SI_K_norm_vc(4,1,iq,iz)]    = wj*    (4.*svm*svp*(-1.*K_q*P_q+K_P*q_q));
                K_norm_rho[SI_K_norm_vc(4,2,iq,iz)]    = wj*    ((4.*svm*svp*std::pow(K_q,2)*(K_q*P_q-1.*K_P*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(4,3,iq,iz)]    = wj*    (0.);
                K_norm_rho[SI_K_norm_vc(4,4,iq,iz)]    = wj*    (((4.*ssm*ssp+svm*svp*(P_P-4.*q_q))*(-1.*std::pow(K_q,2)+K_K*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(4,5,iq,iz)]    = wj*    ((-2.*K_q*((-1.*ssp*svm+ssm*svp)*K_P+2.*(ssp*svm+ssm*svp)*K_q)*(std::pow(K_q,2)-1.*K_K*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(4,6,iq,iz)]    = wj*    ((2.*((ssp*svm-1.*ssm*svp)*P_q-2.*(ssp*svm+ssm*svp)*q_q)*(-1.*std::pow(K_q,2)+K_K*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(4,7,iq,iz)]    = wj*    ((8.*svm*svp*(-1.*std::pow(K_q,2)+K_K*q_q)*(K_q*P_q-1.*K_P*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(5,0,iq,iz)]    = wj*    ((2.*svm*svp*K_q*(std::pow(K_P,2)*K_q-4.*std::pow(K_q,3)-1.*K_K*K_P*P_q+4.*K_K*K_q*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(5,1,iq,iz)]    = wj*    (2.*K_q*(-1.*(ssp*svm+ssm*svp)*K_P*K_q+2.*(ssp*svm-1.*ssm*svp)*std::pow(K_q,2)+K_K*((ssp*svm+ssm*svp)*P_q+2.*(-1.*ssp*svm+ssm*svp)*q_q)));
                K_norm_rho[SI_K_norm_vc(5,2,iq,iz)]    = wj*    ((2.*std::pow(K_q,3)*((ssp*svm+ssm*svp)*K_P*K_q+(-2.*ssp*svm+2.*ssm*svp)*std::pow(K_q,2)+K_K*(-1.*(ssp*svm+ssm*svp)*P_q+2.*(ssp*svm-1.*ssm*svp)*q_q)))/K_K);
                K_norm_rho[SI_K_norm_vc(5,3,iq,iz)]    = wj*    (0.);
                K_norm_rho[SI_K_norm_vc(5,4,iq,iz)]    = wj*    ((-2.*K_q*((-1.*ssp*svm+ssm*svp)*K_P+2.*(ssp*svm+ssm*svp)*K_q)*(std::pow(K_q,2)-1.*K_K*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(5,5,iq,iz)]    = wj*    ((std::pow(K_q,2)*(-2.*svm*svp*std::pow(K_P,2)+8.*svm*svp*std::pow(K_q,2)+K_K*(-4.*ssm*ssp+svm*svp*(P_P-4.*q_q)))*(-1.*std::pow(K_q,2)+K_K*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(5,6,iq,iz)]    = wj*    ((K_q*(std::pow(K_q,2)-1.*K_K*q_q)*(-2.*svm*svp*K_P*P_q+K_q*(-4.*ssm*ssp+svm*svp*(P_P+4.*q_q))))/K_K);
                K_norm_rho[SI_K_norm_vc(5,7,iq,iz)]    = wj*    ((4.*K_q*(std::pow(K_q,2)-1.*K_K*q_q)*(-1.*(ssp*svm+ssm*svp)*K_P*K_q+2.*(ssp*svm-1.*ssm*svp)*std::pow(K_q,2)+K_K*((ssp*svm+ssm*svp)*P_q+2.*(-1.*ssp*svm+ssm*svp)*q_q)))/K_K);
                K_norm_rho[SI_K_norm_vc(6,0,iq,iz)]    = wj*    ((-2.*svm*svp*K_P*K_q*P_q+std::pow(K_q,2)*(-4.*ssm*ssp+svm*svp*(P_P+4.*q_q))+K_K*(2.*svm*svp*std::pow(P_q,2)-1.*q_q*(-4.*ssm*ssp+svm*svp*(P_P+4.*q_q))))/K_K);
                K_norm_rho[SI_K_norm_vc(6,1,iq,iz)]    = wj*    (2.*(ssp*svm+ssm*svp)*(-1.*K_q*P_q+K_P*q_q));
                K_norm_rho[SI_K_norm_vc(6,2,iq,iz)]    = wj*    ((2.*(ssp*svm+ssm*svp)*std::pow(K_q,2)*(K_q*P_q-1.*K_P*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(6,3,iq,iz)]    = wj*    (0.);
                K_norm_rho[SI_K_norm_vc(6,4,iq,iz)]    = wj*    ((2.*((ssp*svm-1.*ssm*svp)*P_q-2.*(ssp*svm+ssm*svp)*q_q)*(-1.*std::pow(K_q,2)+K_K*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(6,5,iq,iz)]    = wj*    ((K_q*(std::pow(K_q,2)-1.*K_K*q_q)*(-2.*svm*svp*K_P*P_q+K_q*(-4.*ssm*ssp+svm*svp*(P_P+4.*q_q))))/K_K);
                K_norm_rho[SI_K_norm_vc(6,6,iq,iz)]    = wj*    (((-1.*std::pow(K_q,2)+K_K*q_q)*(-2.*svm*svp*std::pow(P_q,2)+q_q*(-4.*ssm*ssp+svm*svp*(P_P+4.*q_q))))/K_K);
                K_norm_rho[SI_K_norm_vc(6,7,iq,iz)]    = wj*    ((4.*(ssp*svm+ssm*svp)*(-1.*std::pow(K_q,2)+K_K*q_q)*(K_q*P_q-1.*K_P*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(7,0,iq,iz)]    = wj*    ((-4.*((ssp*svm+ssm*svp)*K_P+2.*(-1.*ssp*svm+ssm*svp)*K_q)*(std::pow(K_q,2)-1.*K_K*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(7,1,iq,iz)]    = wj*    (-8.*svm*svp*K_P*K_q*P_q+4.*svm*svp*std::pow(K_P,2)*q_q+2.*std::pow(K_q,2)*(4.*ssm*ssp+svm*svp*(P_P+4.*q_q))+K_K*(4.*svm*svp*std::pow(P_q,2)-2.*q_q*(4.*ssm*ssp+svm*svp*(P_P+4.*q_q))));
                K_norm_rho[SI_K_norm_vc(7,2,iq,iz)]    = wj*    ((-2.*std::pow(K_q,2)*(-4.*svm*svp*K_P*K_q*P_q+2.*svm*svp*std::pow(K_P,2)*q_q+std::pow(K_q,2)*(4.*ssm*ssp+svm*svp*(P_P+4.*q_q))+K_K*(2.*svm*svp*std::pow(P_q,2)-1.*q_q*(4.*ssm*ssp+svm*svp*(P_P+4.*q_q)))))/K_K);
                K_norm_rho[SI_K_norm_vc(7,3,iq,iz)]    = wj*    (0.);
                K_norm_rho[SI_K_norm_vc(7,4,iq,iz)]    = wj*    ((8.*svm*svp*(-1.*std::pow(K_q,2)+K_K*q_q)*(K_q*P_q-1.*K_P*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(7,5,iq,iz)]    = wj*    ((4.*K_q*(std::pow(K_q,2)-1.*K_K*q_q)*(-1.*(ssp*svm+ssm*svp)*K_P*K_q+2.*(ssp*svm-1.*ssm*svp)*std::pow(K_q,2)+K_K*((ssp*svm+ssm*svp)*P_q+2.*(-1.*ssp*svm+ssm*svp)*q_q)))/K_K);
                K_norm_rho[SI_K_norm_vc(7,6,iq,iz)]    = wj*    ((4.*(ssp*svm+ssm*svp)*(-1.*std::pow(K_q,2)+K_K*q_q)*(K_q*P_q-1.*K_P*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(7,7,iq,iz)]    = wj*    ((4.*(std::pow(K_q,2)-1.*K_K*q_q)*(-4.*svm*svp*K_P*K_q*P_q+2.*svm*svp*std::pow(K_P,2)*q_q+std::pow(K_q,2)*(4.*ssm*ssp+svm*svp*(P_P+4.*q_q))+K_K*(2.*svm*svp*std::pow(P_q,2)-1.*q_q*(4.*ssm*ssp+svm*svp*(P_P+4.*q_q)))))/K_K);
            }
        }

        cdouble norm_sum=0., os_add1=1., os_add2=1.;

        for(int id1=0; id1<n_dirac_rho; id1++){
            for(int id2=0; id2<n_dirac_rho; id2++){
                for(int iq=0; iq<n_radial_meson; iq++){
                    for(int iz=0; iz<n_angular_meson_z; iz++){
                        if (id1==1 || id1==2 || id1==3 || id1==7){os_add1=g*h;} else
                        if (id1==4 || id1==6){os_add1=g;} else
                        if (id1==5){os_add1=g*h*h;} else os_add1=1.;
                        if (id2==1 || id2==2 || id2==3 || id2==7){os_add2=g*h;} else
                        if (id2==4 || id2==6){os_add2=g;} else
                        if (id2==5){os_add2=g*h*h;} else os_add2=1.;
                        norm_sum +=  K_norm_rho[SI_K_norm_vc(id1,id2,iq,iz)] * vc_8700_8700(id1,std::exp(sampling_points_radial_meson[iq])) * os_add1 * vc_8700_8700(id2,sampling_points_radial_meson[iq]) * os_add2;
                    }
                }
            }
        }

        K_norm_rho.clear();

        return prefactor*norm_sum;
    }

    static cdouble norm_integral_JPsi_L(cdouble P_P, cdouble K_K)
    {
      vcdouble     K_norm_vc(8*8*n_radial_meson*n_angular_meson_z);

      cdouble
              g         = 3.097*3.097/(K_K+2.*3.097*3.097),
              h         = -I*std::sqrt(K_K/(K_K+2.*3.097*3.097));

      cdouble
              K_P         = std::sqrt(K_K)*std::sqrt(P_P),
              prefactor   = 3./(2.*M_PI*M_PI*M_PI);

      for (int iq=0; iq<n_radial_meson; iq++){
          cdouble
                  q_q = std::exp(sampling_points_radial_meson[iq]),
                  qw  = weights_radial_meson[iq],
                  qj  = q_q*q_q/2.;
                  #pragma omp parallel for
          for (int iz=0; iz<n_angular_meson_z; iz++){
              cdouble
                      z   = sampling_points_angular_meson_z[iz],
                      zw  = weights_angular_meson_z[iz],
                      zj  = std::sqrt(1.-z*z);
              cdouble
                      P_q     =   std::sqrt(P_P*q_q)*z,
                      K_q     =   std::sqrt(K_K*q_q)*z,
                      qm_qm   =   q_q + P_P/4. - P_q,
                      qp_qp   =   q_q + P_P/4. + P_q,
                      svp     =   chfi_q::sv_c(qp_qp),
                      ssp     =   chfi_q::ss_c(qp_qp),
                      svm     =   chfi_q::sv_c(qm_qm),
                      ssm     =   chfi_q::ss_c(qm_qm),
                      wj      =   qw*qj*zw*zj;

              K_norm_vc[SI_K_norm_vc(0,0,iq,iz)]    = wj*    (-4.*ssm*ssp-1.*svm*svp*P_P+(8.*svm*svp*std::pow(P_q,2))/P_P-4.*svm*svp*q_q);
              K_norm_vc[SI_K_norm_vc(0,1,iq,iz)]    = wj*    (-2.*ssp*svm*K_P+2.*ssm*svp*K_P+4.*ssp*svm*K_q-4.*ssm*svp*K_q+(8.*ssm*svp*K_P*P_q)/P_P);
              K_norm_vc[SI_K_norm_vc(0,2,iq,iz)]    = wj*    ((4.*ssp*svm*K_q*std::pow(P_q,2))/P_P-(4.*ssm*svp*K_q*std::pow(P_q,2))/P_P-4.*ssp*svm*K_q*q_q+4.*ssm*svp*K_q*q_q);
              K_norm_vc[SI_K_norm_vc(0,3,iq,iz)]    = wj*    (-2.*svm*svp*K_P*P_q-(8.*ssm*ssp*K_P*P_q)/P_P+(8.*svm*svp*K_P*P_q*q_q)/P_P);
              K_norm_vc[SI_K_norm_vc(0,4,iq,iz)]    = wj*    (-2.*ssp*svm*P_q+2.*ssm*svp*P_q+(4.*ssp*svm*std::pow(P_q,2))/P_P+(4.*ssm*svp*std::pow(P_q,2))/P_P);
              K_norm_vc[SI_K_norm_vc(0,5,iq,iz)]    = wj*    (-1.*svm*svp*K_P*K_q*P_q-(4.*ssm*ssp*K_P*K_q*P_q)/P_P+(8.*svm*svp*std::pow(K_q,2)*std::pow(P_q,2))/P_P-(4.*svm*svp*K_P*K_q*P_q*q_q)/P_P);
              K_norm_vc[SI_K_norm_vc(0,6,iq,iz)]    = wj*    (svm*svp*std::pow(P_q,2)+(4.*ssm*ssp*std::pow(P_q,2))/P_P-(4.*svm*svp*std::pow(P_q,2)*q_q)/P_P);
              K_norm_vc[SI_K_norm_vc(0,7,iq,iz)]    = wj*    ((-8.*ssp*svm*K_q*std::pow(P_q,2))/P_P+(8.*ssm*svp*K_q*std::pow(P_q,2))/P_P+(8.*ssp*svm*K_P*P_q*q_q)/P_P-(8.*ssm*svp*K_P*P_q*q_q)/P_P);
              K_norm_vc[SI_K_norm_vc(1,0,iq,iz)]    = wj*    (2.*ssp*svm*K_P-2.*ssm*svp*K_P+4.*ssp*svm*K_q-4.*ssm*svp*K_q-(8.*ssp*svm*K_P*P_q)/P_P);
              K_norm_vc[SI_K_norm_vc(1,1,iq,iz)]    = wj*    (4.*ssm*ssp*K_K+8.*svm*svp*std::pow(K_q,2)-(8.*ssm*ssp*std::pow(K_P,2))/P_P-1.*svm*svp*K_K*P_P-(16.*svm*svp*K_P*K_q*P_q)/P_P+(8.*svm*svp*K_K*std::pow(P_q,2))/P_P-4.*svm*svp*K_K*q_q+(8.*svm*svp*std::pow(K_P,2)*q_q)/P_P);
              K_norm_vc[SI_K_norm_vc(1,2,iq,iz)]    = wj*    (-4.*ssm*ssp*std::pow(K_q,2)+svm*svp*std::pow(K_q,2)*P_P-1.*svm*svp*K_P*K_q*P_q+(4.*ssm*ssp*K_P*K_q*P_q)/P_P+(4.*svm*svp*K_P*K_q*std::pow(P_q,2))/P_P-4.*svm*svp*K_P*K_q*q_q-4.*svm*svp*std::pow(K_q,2)*q_q+(4.*svm*svp*K_P*K_q*P_q*q_q)/P_P);
              K_norm_vc[SI_K_norm_vc(1,3,iq,iz)]    = wj*    (4.*ssp*svm*K_P*K_q+4.*ssm*svp*K_P*K_q-8.*ssp*svm*std::pow(K_q,2)-8.*ssm*svp*std::pow(K_q,2)-(8.*ssm*svp*std::pow(K_P,2)*P_q)/P_P+(16.*ssp*svm*K_P*K_q*P_q)/P_P+(16.*ssm*svp*K_P*K_q*P_q)/P_P-(8.*ssp*svm*K_K*std::pow(P_q,2))/P_P-(8.*ssm*svp*K_K*std::pow(P_q,2))/P_P+8.*ssp*svm*K_K*q_q+8.*ssm*svp*K_K*q_q-(16.*ssp*svm*std::pow(K_P,2)*q_q)/P_P-(16.*ssm*svp*std::pow(K_P,2)*q_q)/P_P);
              K_norm_vc[SI_K_norm_vc(1,4,iq,iz)]    = wj*    (-1.*svm*svp*K_P*P_q-4.*svm*svp*K_q*P_q-(4.*ssm*ssp*K_P*P_q)/P_P+(4.*svm*svp*K_P*std::pow(P_q,2))/P_P+(4.*svm*svp*K_P*P_q*q_q)/P_P);
              K_norm_vc[SI_K_norm_vc(1,5,iq,iz)]    = wj*    (2.*ssp*svm*K_K*K_q*P_q+2.*ssm*svp*K_K*K_q*P_q-(4.*ssm*svp*std::pow(K_P,2)*K_q*P_q)/P_P-(8.*ssm*svp*K_P*std::pow(K_q,2)*P_q)/P_P-(4.*ssp*svm*K_K*K_q*std::pow(P_q,2))/P_P+(4.*ssm*svp*K_K*K_q*std::pow(P_q,2))/P_P);
              K_norm_vc[SI_K_norm_vc(1,6,iq,iz)]    = wj*    (-2.*ssp*svm*K_q*P_q-2.*ssm*svp*K_q*P_q+(4.*ssm*svp*K_P*std::pow(P_q,2))/P_P+(4.*ssp*svm*K_P*P_q*q_q)/P_P+(4.*ssm*svp*K_P*P_q*q_q)/P_P);
              K_norm_vc[SI_K_norm_vc(1,7,iq,iz)]    = wj*    (-2.*svm*svp*K_P*K_q*P_q+(8.*ssm*ssp*K_P*K_q*P_q)/P_P+2.*svm*svp*K_K*std::pow(P_q,2)-(8.*ssm*ssp*K_K*std::pow(P_q,2))/P_P-(8.*svm*svp*K_P*K_q*std::pow(P_q,2))/P_P+(8.*svm*svp*std::pow(K_P,2)*P_q*q_q)/P_P+(8.*svm*svp*K_P*K_q*P_q*q_q)/P_P-(8.*svm*svp*K_K*std::pow(P_q,2)*q_q)/P_P);
              K_norm_vc[SI_K_norm_vc(2,0,iq,iz)]    = wj*    ((4.*ssp*svm*K_q*std::pow(P_q,2))/P_P-(4.*ssm*svp*K_q*std::pow(P_q,2))/P_P-4.*ssp*svm*K_q*q_q+4.*ssm*svp*K_q*q_q);
              K_norm_vc[SI_K_norm_vc(2,1,iq,iz)]    = wj*    (-4.*ssm*ssp*std::pow(K_q,2)+svm*svp*std::pow(K_q,2)*P_P-1.*svm*svp*K_P*K_q*P_q+(4.*ssm*ssp*K_P*K_q*P_q)/P_P-(4.*svm*svp*K_P*K_q*std::pow(P_q,2))/P_P+4.*svm*svp*K_P*K_q*q_q-4.*svm*svp*std::pow(K_q,2)*q_q+(4.*svm*svp*K_P*K_q*P_q*q_q)/P_P);
              K_norm_vc[SI_K_norm_vc(2,2,iq,iz)]    = wj*    (svm*svp*std::pow(K_q,2)*std::pow(P_q,2)-(4.*ssm*ssp*std::pow(K_q,2)*std::pow(P_q,2))/P_P+4.*ssm*ssp*std::pow(K_q,2)*q_q-1.*svm*svp*std::pow(K_q,2)*P_P*q_q-(4.*svm*svp*std::pow(K_q,2)*std::pow(P_q,2)*q_q)/P_P+4.*svm*svp*std::pow(K_q,2)*std::pow(q_q,2));
              K_norm_vc[SI_K_norm_vc(2,3,iq,iz)]    = wj*    ((4.*ssp*svm*K_P*K_q*std::pow(P_q,2))/P_P+(4.*ssm*svp*K_P*K_q*std::pow(P_q,2))/P_P-4.*ssp*svm*K_P*K_q*q_q-4.*ssm*svp*K_P*K_q*q_q);
              K_norm_vc[SI_K_norm_vc(2,4,iq,iz)]    = wj*    ((-4.*svm*svp*K_q*std::pow(P_q,3))/P_P+4.*svm*svp*K_q*P_q*q_q);
              K_norm_vc[SI_K_norm_vc(2,5,iq,iz)]    = wj*    (-2.*ssp*svm*std::pow(K_q,3)*P_q-2.*ssm*svp*std::pow(K_q,3)*P_q+(2.*ssp*svm*K_P*std::pow(K_q,2)*std::pow(P_q,2))/P_P+(2.*ssm*svp*K_P*std::pow(K_q,2)*std::pow(P_q,2))/P_P+(4.*ssp*svm*std::pow(K_q,3)*std::pow(P_q,2))/P_P-(4.*ssm*svp*std::pow(K_q,3)*std::pow(P_q,2))/P_P-(4.*ssp*svm*K_P*std::pow(K_q,2)*P_q*q_q)/P_P+(4.*ssm*svp*K_P*std::pow(K_q,2)*P_q*q_q)/P_P);
              K_norm_vc[SI_K_norm_vc(2,6,iq,iz)]    = wj*    ((-2.*ssp*svm*K_q*std::pow(P_q,3))/P_P-(2.*ssm*svp*K_q*std::pow(P_q,3))/P_P+2.*ssp*svm*K_q*P_q*q_q+2.*ssm*svp*K_q*P_q*q_q);
              K_norm_vc[SI_K_norm_vc(2,7,iq,iz)]    = wj*    (-2.*svm*svp*std::pow(K_q,2)*std::pow(P_q,2)+(8.*ssm*ssp*std::pow(K_q,2)*std::pow(P_q,2))/P_P+2.*svm*svp*K_P*K_q*P_q*q_q-(8.*ssm*ssp*K_P*K_q*P_q*q_q)/P_P+(8.*svm*svp*std::pow(K_q,2)*std::pow(P_q,2)*q_q)/P_P-(8.*svm*svp*K_P*K_q*P_q*std::pow(q_q,2))/P_P);
              K_norm_vc[SI_K_norm_vc(3,0,iq,iz)]    = wj*    (2.*svm*svp*K_P*P_q+(8.*ssm*ssp*K_P*P_q)/P_P-(8.*svm*svp*K_P*P_q*q_q)/P_P);
              K_norm_vc[SI_K_norm_vc(3,1,iq,iz)]    = wj*    (-4.*ssp*svm*K_P*K_q-4.*ssm*svp*K_P*K_q-8.*ssp*svm*std::pow(K_q,2)-8.*ssm*svp*std::pow(K_q,2)+(8.*ssp*svm*std::pow(K_P,2)*P_q)/P_P+(16.*ssp*svm*K_P*K_q*P_q)/P_P+(16.*ssm*svp*K_P*K_q*P_q)/P_P-(8.*ssp*svm*K_K*std::pow(P_q,2))/P_P-(8.*ssm*svp*K_K*std::pow(P_q,2))/P_P+8.*ssp*svm*K_K*q_q+8.*ssm*svp*K_K*q_q-(16.*ssp*svm*std::pow(K_P,2)*q_q)/P_P-(16.*ssm*svp*std::pow(K_P,2)*q_q)/P_P);
              K_norm_vc[SI_K_norm_vc(3,2,iq,iz)]    = wj*    ((-4.*ssp*svm*K_P*K_q*std::pow(P_q,2))/P_P-(4.*ssm*svp*K_P*K_q*std::pow(P_q,2))/P_P+4.*ssp*svm*K_P*K_q*q_q+4.*ssm*svp*K_P*K_q*q_q);
              K_norm_vc[SI_K_norm_vc(3,3,iq,iz)]    = wj*    (16.*ssm*ssp*std::pow(K_q,2)+4.*svm*svp*std::pow(K_q,2)*P_P-8.*svm*svp*K_P*K_q*P_q-(32.*ssm*ssp*K_P*K_q*P_q)/P_P+4.*svm*svp*K_K*std::pow(P_q,2)+(16.*ssm*ssp*K_K*std::pow(P_q,2))/P_P+(8.*svm*svp*std::pow(K_P,2)*std::pow(P_q,2))/P_P-16.*ssm*ssp*K_K*q_q-16.*svm*svp*std::pow(K_q,2)*q_q+(32.*ssm*ssp*std::pow(K_P,2)*q_q)/P_P-4.*svm*svp*K_K*P_P*q_q+(32.*svm*svp*K_P*K_q*P_q*q_q)/P_P-(16.*svm*svp*K_K*std::pow(P_q,2)*q_q)/P_P+16.*svm*svp*K_K*std::pow(q_q,2)-(32.*svm*svp*std::pow(K_P,2)*std::pow(q_q,2))/P_P);
              K_norm_vc[SI_K_norm_vc(3,4,iq,iz)]    = wj*    ((4.*ssp*svm*K_P*std::pow(P_q,2))/P_P-(4.*ssm*svp*K_P*std::pow(P_q,2))/P_P-(8.*ssp*svm*K_P*P_q*q_q)/P_P-(8.*ssm*svp*K_P*P_q*q_q)/P_P);
              K_norm_vc[SI_K_norm_vc(3,5,iq,iz)]    = wj*    (-2.*svm*svp*K_P*std::pow(K_q,2)*P_q-8.*svm*svp*std::pow(K_q,3)*P_q+(8.*ssm*ssp*K_P*std::pow(K_q,2)*P_q)/P_P+(4.*svm*svp*std::pow(K_P,2)*K_q*std::pow(P_q,2))/P_P+(16.*svm*svp*K_P*std::pow(K_q,2)*std::pow(P_q,2))/P_P-(8.*svm*svp*K_K*K_q*std::pow(P_q,3))/P_P+8.*svm*svp*K_K*K_q*P_q*q_q-(8.*svm*svp*std::pow(K_P,2)*K_q*P_q*q_q)/P_P-(8.*svm*svp*K_P*std::pow(K_q,2)*P_q*q_q)/P_P);
              K_norm_vc[SI_K_norm_vc(3,6,iq,iz)]    = wj*    ((-4.*svm*svp*K_P*std::pow(P_q,3))/P_P+2.*svm*svp*K_P*P_q*q_q-(8.*ssm*ssp*K_P*P_q*q_q)/P_P+(8.*svm*svp*K_P*P_q*std::pow(q_q,2))/P_P);
              K_norm_vc[SI_K_norm_vc(3,7,iq,iz)]    = wj*    (8.*ssp*svm*std::pow(K_q,2)*P_q-8.*ssm*svp*std::pow(K_q,2)*P_q-(8.*ssp*svm*K_P*K_q*std::pow(P_q,2))/P_P+(24.*ssm*svp*K_P*K_q*std::pow(P_q,2))/P_P+(8.*ssp*svm*K_K*std::pow(P_q,3))/P_P-(8.*ssm*svp*K_K*std::pow(P_q,3))/P_P-8.*ssp*svm*K_K*P_q*q_q+8.*ssm*svp*K_K*P_q*q_q-(16.*ssm*svp*std::pow(K_P,2)*P_q*q_q)/P_P);
              K_norm_vc[SI_K_norm_vc(4,0,iq,iz)]    = wj*    (-2.*ssp*svm*P_q+2.*ssm*svp*P_q+(4.*ssp*svm*std::pow(P_q,2))/P_P+(4.*ssm*svp*std::pow(P_q,2))/P_P);
              K_norm_vc[SI_K_norm_vc(4,1,iq,iz)]    = wj*    (svm*svp*K_P*P_q-4.*svm*svp*K_q*P_q+(4.*ssm*ssp*K_P*P_q)/P_P+(4.*svm*svp*K_P*std::pow(P_q,2))/P_P-(4.*svm*svp*K_P*P_q*q_q)/P_P);
              K_norm_vc[SI_K_norm_vc(4,2,iq,iz)]    = wj*    ((-4.*svm*svp*K_q*std::pow(P_q,3))/P_P+4.*svm*svp*K_q*P_q*q_q);
              K_norm_vc[SI_K_norm_vc(4,3,iq,iz)]    = wj*    ((-4.*ssp*svm*K_P*std::pow(P_q,2))/P_P+(4.*ssm*svp*K_P*std::pow(P_q,2))/P_P+(8.*ssp*svm*K_P*P_q*q_q)/P_P+(8.*ssm*svp*K_P*P_q*q_q)/P_P);
              K_norm_vc[SI_K_norm_vc(4,4,iq,iz)]    = wj*    (svm*svp*std::pow(P_q,2)+(4.*ssm*ssp*std::pow(P_q,2))/P_P-(4.*svm*svp*std::pow(P_q,2)*q_q)/P_P);
              K_norm_vc[SI_K_norm_vc(4,5,iq,iz)]    = wj*    ((-2.*ssp*svm*K_P*K_q*std::pow(P_q,2))/P_P+(2.*ssm*svp*K_P*K_q*std::pow(P_q,2))/P_P+(4.*ssp*svm*std::pow(K_q,2)*std::pow(P_q,2))/P_P+(4.*ssm*svp*std::pow(K_q,2)*std::pow(P_q,2))/P_P);
              K_norm_vc[SI_K_norm_vc(4,6,iq,iz)]    = wj*    ((2.*ssp*svm*std::pow(P_q,3))/P_P-(2.*ssm*svp*std::pow(P_q,3))/P_P-(4.*ssp*svm*std::pow(P_q,2)*q_q)/P_P-(4.*ssm*svp*std::pow(P_q,2)*q_q)/P_P);
              K_norm_vc[SI_K_norm_vc(4,7,iq,iz)]    = wj*    ((8.*svm*svp*K_q*std::pow(P_q,3))/P_P-(8.*svm*svp*K_P*std::pow(P_q,2)*q_q)/P_P);
              K_norm_vc[SI_K_norm_vc(5,0,iq,iz)]    = wj*    (-1.*svm*svp*K_P*K_q*P_q-(4.*ssm*ssp*K_P*K_q*P_q)/P_P+(8.*svm*svp*std::pow(K_q,2)*std::pow(P_q,2))/P_P-(4.*svm*svp*K_P*K_q*P_q*q_q)/P_P);
              K_norm_vc[SI_K_norm_vc(5,1,iq,iz)]    = wj*    (2.*ssp*svm*K_K*K_q*P_q+2.*ssm*svp*K_K*K_q*P_q-(4.*ssp*svm*std::pow(K_P,2)*K_q*P_q)/P_P+(8.*ssp*svm*K_P*std::pow(K_q,2)*P_q)/P_P-(4.*ssp*svm*K_K*K_q*std::pow(P_q,2))/P_P+(4.*ssm*svp*K_K*K_q*std::pow(P_q,2))/P_P);
              K_norm_vc[SI_K_norm_vc(5,2,iq,iz)]    = wj*    (-2.*ssp*svm*std::pow(K_q,3)*P_q-2.*ssm*svp*std::pow(K_q,3)*P_q+(2.*ssp*svm*K_P*std::pow(K_q,2)*std::pow(P_q,2))/P_P+(2.*ssm*svp*K_P*std::pow(K_q,2)*std::pow(P_q,2))/P_P+(4.*ssp*svm*std::pow(K_q,3)*std::pow(P_q,2))/P_P-(4.*ssm*svp*std::pow(K_q,3)*std::pow(P_q,2))/P_P-(4.*ssp*svm*K_P*std::pow(K_q,2)*P_q*q_q)/P_P+(4.*ssm*svp*K_P*std::pow(K_q,2)*P_q*q_q)/P_P);
              K_norm_vc[SI_K_norm_vc(5,3,iq,iz)]    = wj*    (2.*svm*svp*K_P*std::pow(K_q,2)*P_q-8.*svm*svp*std::pow(K_q,3)*P_q-(8.*ssm*ssp*K_P*std::pow(K_q,2)*P_q)/P_P-(4.*svm*svp*std::pow(K_P,2)*K_q*std::pow(P_q,2))/P_P+(16.*svm*svp*K_P*std::pow(K_q,2)*std::pow(P_q,2))/P_P-(8.*svm*svp*K_K*K_q*std::pow(P_q,3))/P_P+8.*svm*svp*K_K*K_q*P_q*q_q-(8.*svm*svp*std::pow(K_P,2)*K_q*P_q*q_q)/P_P+(8.*svm*svp*K_P*std::pow(K_q,2)*P_q*q_q)/P_P);
              K_norm_vc[SI_K_norm_vc(5,4,iq,iz)]    = wj*    ((-2.*ssp*svm*K_P*K_q*std::pow(P_q,2))/P_P+(2.*ssm*svp*K_P*K_q*std::pow(P_q,2))/P_P+(4.*ssp*svm*std::pow(K_q,2)*std::pow(P_q,2))/P_P+(4.*ssm*svp*std::pow(K_q,2)*std::pow(P_q,2))/P_P);
              K_norm_vc[SI_K_norm_vc(5,5,iq,iz)]    = wj*    (svm*svp*K_K*std::pow(K_q,2)*std::pow(P_q,2)-(4.*ssm*ssp*K_K*std::pow(K_q,2)*std::pow(P_q,2))/P_P-(2.*svm*svp*std::pow(K_P,2)*std::pow(K_q,2)*std::pow(P_q,2))/P_P+(8.*svm*svp*std::pow(K_q,4)*std::pow(P_q,2))/P_P-(4.*svm*svp*K_K*std::pow(K_q,2)*std::pow(P_q,2)*q_q)/P_P);
              K_norm_vc[SI_K_norm_vc(5,6,iq,iz)]    = wj*    (-1.*svm*svp*std::pow(K_q,2)*std::pow(P_q,2)+(4.*ssm*ssp*std::pow(K_q,2)*std::pow(P_q,2))/P_P+(2.*svm*svp*K_P*K_q*std::pow(P_q,3))/P_P-(4.*svm*svp*std::pow(K_q,2)*std::pow(P_q,2)*q_q)/P_P);
              K_norm_vc[SI_K_norm_vc(5,7,iq,iz)]    = wj*    ((4.*ssp*svm*K_P*std::pow(K_q,2)*std::pow(P_q,2))/P_P+(4.*ssm*svp*K_P*std::pow(K_q,2)*std::pow(P_q,2))/P_P-(8.*ssp*svm*std::pow(K_q,3)*std::pow(P_q,2))/P_P+(8.*ssm*svp*std::pow(K_q,3)*std::pow(P_q,2))/P_P-(4.*ssp*svm*K_K*K_q*std::pow(P_q,3))/P_P-(4.*ssm*svp*K_K*K_q*std::pow(P_q,3))/P_P+(8.*ssp*svm*K_K*K_q*std::pow(P_q,2)*q_q)/P_P-(8.*ssm*svp*K_K*K_q*std::pow(P_q,2)*q_q)/P_P);
              K_norm_vc[SI_K_norm_vc(6,0,iq,iz)]    = wj*    (svm*svp*std::pow(P_q,2)+(4.*ssm*ssp*std::pow(P_q,2))/P_P-(4.*svm*svp*std::pow(P_q,2)*q_q)/P_P);
              K_norm_vc[SI_K_norm_vc(6,1,iq,iz)]    = wj*    (-2.*ssp*svm*K_q*P_q-2.*ssm*svp*K_q*P_q+(4.*ssp*svm*K_P*std::pow(P_q,2))/P_P-(4.*ssp*svm*K_P*P_q*q_q)/P_P-(4.*ssm*svp*K_P*P_q*q_q)/P_P);
              K_norm_vc[SI_K_norm_vc(6,2,iq,iz)]    = wj*    ((-2.*ssp*svm*K_q*std::pow(P_q,3))/P_P-(2.*ssm*svp*K_q*std::pow(P_q,3))/P_P+2.*ssp*svm*K_q*P_q*q_q+2.*ssm*svp*K_q*P_q*q_q);
              K_norm_vc[SI_K_norm_vc(6,3,iq,iz)]    = wj*    ((4.*svm*svp*K_P*std::pow(P_q,3))/P_P-2.*svm*svp*K_P*P_q*q_q+(8.*ssm*ssp*K_P*P_q*q_q)/P_P-(8.*svm*svp*K_P*P_q*std::pow(q_q,2))/P_P);
              K_norm_vc[SI_K_norm_vc(6,4,iq,iz)]    = wj*    ((2.*ssp*svm*std::pow(P_q,3))/P_P-(2.*ssm*svp*std::pow(P_q,3))/P_P-(4.*ssp*svm*std::pow(P_q,2)*q_q)/P_P-(4.*ssm*svp*std::pow(P_q,2)*q_q)/P_P);
              K_norm_vc[SI_K_norm_vc(6,5,iq,iz)]    = wj*    (-1.*svm*svp*std::pow(K_q,2)*std::pow(P_q,2)+(4.*ssm*ssp*std::pow(K_q,2)*std::pow(P_q,2))/P_P+(2.*svm*svp*K_P*K_q*std::pow(P_q,3))/P_P-(4.*svm*svp*std::pow(K_q,2)*std::pow(P_q,2)*q_q)/P_P);
              K_norm_vc[SI_K_norm_vc(6,6,iq,iz)]    = wj*    ((-2.*svm*svp*std::pow(P_q,4))/P_P+svm*svp*std::pow(P_q,2)*q_q-(4.*ssm*ssp*std::pow(P_q,2)*q_q)/P_P+(4.*svm*svp*std::pow(P_q,2)*std::pow(q_q,2))/P_P);
              K_norm_vc[SI_K_norm_vc(6,7,iq,iz)]    = wj*    ((4.*ssp*svm*K_q*std::pow(P_q,3))/P_P+(4.*ssm*svp*K_q*std::pow(P_q,3))/P_P-(4.*ssp*svm*K_P*std::pow(P_q,2)*q_q)/P_P-(4.*ssm*svp*K_P*std::pow(P_q,2)*q_q)/P_P);
              K_norm_vc[SI_K_norm_vc(7,0,iq,iz)]    = wj*    ((-8.*ssp*svm*K_q*std::pow(P_q,2))/P_P+(8.*ssm*svp*K_q*std::pow(P_q,2))/P_P+(8.*ssp*svm*K_P*P_q*q_q)/P_P-(8.*ssm*svp*K_P*P_q*q_q)/P_P);
              K_norm_vc[SI_K_norm_vc(7,1,iq,iz)]    = wj*    (-2.*svm*svp*K_P*K_q*P_q+(8.*ssm*ssp*K_P*K_q*P_q)/P_P+2.*svm*svp*K_K*std::pow(P_q,2)-(8.*ssm*ssp*K_K*std::pow(P_q,2))/P_P+(8.*svm*svp*K_P*K_q*std::pow(P_q,2))/P_P-(8.*svm*svp*std::pow(K_P,2)*P_q*q_q)/P_P+(8.*svm*svp*K_P*K_q*P_q*q_q)/P_P-(8.*svm*svp*K_K*std::pow(P_q,2)*q_q)/P_P);
              K_norm_vc[SI_K_norm_vc(7,2,iq,iz)]    = wj*    (-2.*svm*svp*std::pow(K_q,2)*std::pow(P_q,2)+(8.*ssm*ssp*std::pow(K_q,2)*std::pow(P_q,2))/P_P+2.*svm*svp*K_P*K_q*P_q*q_q-(8.*ssm*ssp*K_P*K_q*P_q*q_q)/P_P+(8.*svm*svp*std::pow(K_q,2)*std::pow(P_q,2)*q_q)/P_P-(8.*svm*svp*K_P*K_q*P_q*std::pow(q_q,2))/P_P);
              K_norm_vc[SI_K_norm_vc(7,3,iq,iz)]    = wj*    (8.*ssp*svm*std::pow(K_q,2)*P_q-8.*ssm*svp*std::pow(K_q,2)*P_q-(24.*ssp*svm*K_P*K_q*std::pow(P_q,2))/P_P+(8.*ssm*svp*K_P*K_q*std::pow(P_q,2))/P_P+(8.*ssp*svm*K_K*std::pow(P_q,3))/P_P-(8.*ssm*svp*K_K*std::pow(P_q,3))/P_P-8.*ssp*svm*K_K*P_q*q_q+8.*ssm*svp*K_K*P_q*q_q+(16.*ssp*svm*std::pow(K_P,2)*P_q*q_q)/P_P);
              K_norm_vc[SI_K_norm_vc(7,4,iq,iz)]    = wj*    ((8.*svm*svp*K_q*std::pow(P_q,3))/P_P-(8.*svm*svp*K_P*std::pow(P_q,2)*q_q)/P_P);
              K_norm_vc[SI_K_norm_vc(7,5,iq,iz)]    = wj*    ((4.*ssp*svm*K_P*std::pow(K_q,2)*std::pow(P_q,2))/P_P+(4.*ssm*svp*K_P*std::pow(K_q,2)*std::pow(P_q,2))/P_P-(8.*ssp*svm*std::pow(K_q,3)*std::pow(P_q,2))/P_P+(8.*ssm*svp*std::pow(K_q,3)*std::pow(P_q,2))/P_P-(4.*ssp*svm*K_K*K_q*std::pow(P_q,3))/P_P-(4.*ssm*svp*K_K*K_q*std::pow(P_q,3))/P_P+(8.*ssp*svm*K_K*K_q*std::pow(P_q,2)*q_q)/P_P-(8.*ssm*svp*K_K*K_q*std::pow(P_q,2)*q_q)/P_P);
              K_norm_vc[SI_K_norm_vc(7,6,iq,iz)]    = wj*    ((4.*ssp*svm*K_q*std::pow(P_q,3))/P_P+(4.*ssm*svp*K_q*std::pow(P_q,3))/P_P-(4.*ssp*svm*K_P*std::pow(P_q,2)*q_q)/P_P-(4.*ssm*svp*K_P*std::pow(P_q,2)*q_q)/P_P);
              K_norm_vc[SI_K_norm_vc(7,7,iq,iz)]    = wj*    (-4.*svm*svp*std::pow(K_q,2)*std::pow(P_q,2)-(16.*ssm*ssp*std::pow(K_q,2)*std::pow(P_q,2))/P_P+(16.*svm*svp*K_P*K_q*std::pow(P_q,3))/P_P-(8.*svm*svp*K_K*std::pow(P_q,4))/P_P+4.*svm*svp*K_K*std::pow(P_q,2)*q_q+(16.*ssm*ssp*K_K*std::pow(P_q,2)*q_q)/P_P-(8.*svm*svp*std::pow(K_P,2)*std::pow(P_q,2)*q_q)/P_P-(16.*svm*svp*std::pow(K_q,2)*std::pow(P_q,2)*q_q)/P_P+(16.*svm*svp*K_K*std::pow(P_q,2)*std::pow(q_q,2))/P_P);
          }
      }

      cdouble norm_sum=0., os_add1=1., os_add2=1.;

      for(int id1=0; id1<n_dirac_rho; id1++){
          for(int id2=0; id2<n_dirac_rho; id2++){
              for(int iq=0; iq<n_radial_meson; iq++){
                  for(int iz=0; iz<n_angular_meson_z; iz++){
                      if (id1==1 || id1==2 || id1==3 || id1==7){os_add1=g*h;} else
                      if (id1==4 || id1==6){os_add1=g;} else
                      if (id1==5){os_add1=g*h*h;} else os_add1=1.;
                      if (id2==1 || id2==2 || id2==3 || id2==7){os_add2=g*h;} else
                      if (id2==4 || id2==6){os_add2=g;} else
                      if (id2==5){os_add2=g*h*h;} else os_add2=1.;
                      norm_sum +=  K_norm_vc[SI_K_norm_vc(id1,id2,iq,iz)] * vc_8700_8700(id1,std::exp(sampling_points_radial_meson[iq])) * os_add1 * vc_8700_8700(id2,sampling_points_radial_meson[iq]) * os_add2;
                  }
              }
          }
      }

      K_norm_vc.clear();

      return prefactor*norm_sum;
    }

    static cdouble norm_integral_ps(cdouble P_P, cdouble K_K, int i, int j)
    {
            vcdouble K_norm_ps(4*4*n_radial_meson*n_angular_meson_z);

            cdouble
                    K_P       = std::sqrt(K_K)*std::sqrt(P_P),
                    prefactor = -3./(2.*M_PI*M_PI*M_PI);

            #pragma omp parallel for
            for (int iq=0; iq<n_radial_meson; iq++){
                cdouble
                        q_q = std::exp(sampling_points_radial_meson[iq]),
                        qw  = weights_radial_meson[iq],
                        qj  = q_q*q_q/2.;

                for (int iz=0; iz<n_angular_meson_z; iz++){
                    cdouble
                            z   = sampling_points_angular_meson_z[iz],
                            zw  = weights_angular_meson_z[iz],
                            zj  = std::sqrt(1.-z*z);
                    cdouble
                            P_q     =   std::sqrt(P_P)*std::sqrt(q_q)*z,
                            K_q     =   std::sqrt(K_K)*std::sqrt(q_q)*z,
                            qm_qm   =   q_q + (eta-1.)*(eta-1.)*P_P + 2.*(eta-1.)*P_q,
                            qp_qp   =   q_q + eta*eta*P_P + 2.*eta*P_q;
                            cdouble svm=0.,ssm=0.,svp=0.,ssp=0.,
                            wj      =   qw*zw*qj*zj;
                            if (i==37)
                            {
                              svm     =   chfi_q::sv_u(qm_qm);
                              ssm     =   chfi_q::ss_u(qm_qm);
                            } else if (i==200) {
                              svm     =   chfi_q::sv_0200(qm_qm);
                              ssm     =   chfi_q::ss_0200(qm_qm);
                            } else if (i==500) {
                              svm     =   chfi_q::sv_0500(qm_qm);
                              ssm     =   chfi_q::ss_0500(qm_qm);
                            } else if (i==850) {
                              svm     =   chfi_q::sv_s(qm_qm);
                              ssm     =   chfi_q::ss_s(qm_qm);
                            } else if (i==2100) {
                              svm     =   chfi_q::sv_2100(qm_qm);
                              ssm     =   chfi_q::ss_2100(qm_qm);
                            } else if (i==8700) {
                              svm     =   chfi_q::sv_c(qm_qm);
                              ssm     =   chfi_q::ss_c(qm_qm);
                            }

                            if (j==37)
                            {
                              svp     =   chfi_q::sv_u(qp_qp);
                              ssp     =   chfi_q::ss_u(qp_qp);
                            } else if (j==200) {
                              svp     =   chfi_q::sv_0200(qp_qp);
                              ssp     =   chfi_q::ss_0200(qp_qp);
                            } else if (j==500) {
                              svp     =   chfi_q::sv_0500(qp_qp);
                              ssp     =   chfi_q::ss_0500(qp_qp);
                            } else if (j==850) {
                              svp     =   chfi_q::sv_s(qp_qp);
                              ssp     =   chfi_q::ss_s(qp_qp);
                            } else if (j==2100) {
                              svp     =   chfi_q::sv_2100(qp_qp);
                              ssp     =   chfi_q::ss_2100(qp_qp);
                            } else if (j==8700) {
                              svp     =   chfi_q::sv_c(qp_qp);
                              ssp     =   chfi_q::ss_c(qp_qp);
                            }

                    K_norm_ps[SI_K_norm_ps(0,0,iq,iz)] = wj*  (4.*(ssm*ssp+svm*svp*((-1.+eta)*eta*P_P+(-1.+2.*eta)*P_q+q_q)));
                    K_norm_ps[SI_K_norm_ps(0,1,iq,iz)] = wj*  (4.*((ssp*(svm-1.*eta*svm)+eta*ssm*svp)*K_P+(-1.*ssp*svm+ssm*svp)*K_q));
                    K_norm_ps[SI_K_norm_ps(0,2,iq,iz)] = wj*  (4.*K_q*((ssp*(svm-1.*eta*svm)+eta*ssm*svp)*P_q+(-1.*ssp*svm+ssm*svp)*q_q));
                    K_norm_ps[SI_K_norm_ps(0,3,iq,iz)] = wj*  (8.*svm*svp*(K_q*P_q-1.*K_P*q_q));
                    K_norm_ps[SI_K_norm_ps(1,0,iq,iz)] = wj*  (4.*((ssp*(svm-1.*eta*svm)+eta*ssm*svp)*K_P+(-1.*ssp*svm+ssm*svp)*K_q));
                    K_norm_ps[SI_K_norm_ps(1,1,iq,iz)] = wj*  (4.*(-2.*svm*svp*((-1.+eta)*K_P+K_q)*(eta*K_P+K_q)+K_K*(-1.*ssm*ssp+svm*svp*((-1.+eta)*eta*P_P+(-1.+2.*eta)*P_q+q_q))));
                    K_norm_ps[SI_K_norm_ps(1,2,iq,iz)] = wj*  (-4.*K_q*(svm*svp*K_P*(2.*(-1.+eta)*eta*P_q+(-1.+2.*eta)*q_q)+K_q*(ssm*ssp+svm*svp*(-1.*(-1.+eta)*eta*P_P+q_q))));
                    K_norm_ps[SI_K_norm_ps(1,3,iq,iz)] = wj*  (8.*(-1.*((-1.+eta)*ssp*svm+eta*ssm*svp)*K_P*K_q-1.*(ssp*svm+ssm*svp)*std::pow(K_q,2)+K_K*(((-1.+eta)*ssp*svm+eta*ssm*svp)*P_q+(ssp*svm+ssm*svp)*q_q)));
                    K_norm_ps[SI_K_norm_ps(2,0,iq,iz)] = wj*  (4.*K_q*((ssp*(svm-1.*eta*svm)+eta*ssm*svp)*P_q+(-1.*ssp*svm+ssm*svp)*q_q));
                    K_norm_ps[SI_K_norm_ps(2,1,iq,iz)] = wj*  (-4.*K_q*(svm*svp*K_P*(2.*(-1.+eta)*eta*P_q+(-1.+2.*eta)*q_q)+K_q*(ssm*ssp+svm*svp*(-1.*(-1.+eta)*eta*P_P+q_q))));
                    K_norm_ps[SI_K_norm_ps(2,2,iq,iz)] = wj*  (-4.*std::pow(K_q,2)*(ssm*ssp*q_q+svm*svp*(2.*(-1.+eta)*eta*std::pow(P_q,2)-1.*((-1.+eta)*eta*P_P+(1.-2.*eta)*P_q)*q_q+std::pow(q_q,2))));
                    K_norm_ps[SI_K_norm_ps(2,3,iq,iz)] = wj*  (8.*((-1.+eta)*ssp*svm+eta*ssm*svp)*K_q*(K_q*P_q-1.*K_P*q_q));
                    K_norm_ps[SI_K_norm_ps(3,0,iq,iz)] = wj*  (8.*svm*svp*(K_q*P_q-1.*K_P*q_q));
                    K_norm_ps[SI_K_norm_ps(3,1,iq,iz)] = wj*  (8.*(-1.*((-1.+eta)*ssp*svm+eta*ssm*svp)*K_P*K_q-1.*(ssp*svm+ssm*svp)*std::pow(K_q,2)+K_K*(((-1.+eta)*ssp*svm+eta*ssm*svp)*P_q+(ssp*svm+ssm*svp)*q_q)));
                    K_norm_ps[SI_K_norm_ps(3,2,iq,iz)] = wj*  (8.*((-1.+eta)*ssp*svm+eta*ssm*svp)*K_q*(K_q*P_q-1.*K_P*q_q));
                    K_norm_ps[SI_K_norm_ps(3,3,iq,iz)] = wj*  (16.*(4.*(-1.+eta)*eta*svm*svp*K_P*K_q*P_q-2.*(-1.+eta)*eta*svm*svp*std::pow(K_P,2)*q_q+K_K*(-2.*(-1.+eta)*eta*svm*svp*std::pow(P_q,2)+(ssm*ssp+svm*svp*((-1.+eta)*eta*P_P+(1.-2.*eta)*P_q))*q_q-1.*svm*svp*std::pow(q_q,2))+std::pow(K_q,2)*(-1.*ssm*ssp+svm*svp*(-1.*(-1.+eta)*eta*P_P+(-1.+2.*eta)*P_q+q_q))));
                }
            }

            cdouble norm_sum=0.;

            for(int id1=0; id1<n_dirac_pion; id1++){
                for(int id2=0; id2<n_dirac_pion; id2++){
                    for(int iq=0; iq<n_radial_meson; iq++){
                        for(int iz=0; iz<n_angular_meson_z; iz++){
                            norm_sum +=  K_norm_ps[SI_K_norm_ps(id1,id2,iq,iz)] * meson::amplitude_ps_analytic("0850_0037",id1,std::exp(sampling_points_radial_meson[iq])) * meson::amplitude_ps_analytic("0850_0037",id2,std::exp(sampling_points_radial_meson[iq]));
                        }
                    }
                }
            }

            K_norm_ps.clear();

            return prefactor*norm_sum;
        }

    static cdouble norm_integral_vc(cdouble P_P, cdouble K_K, int i, int j)
    {
        std::vector<cdouble >     K_norm_rho(8*8*n_radial_meson*n_angular_meson_z);

        cdouble
                K_P         = std::sqrt(K_K)*std::sqrt(P_P),
                prefactor   = 1./(2.*M_PI*M_PI*M_PI);

        for (int iq=0; iq<n_radial_meson; iq++){
            cdouble
                    q_q = std::exp(sampling_points_radial_meson[iq]),
                    qw  = weights_radial_meson[iq];
            #pragma omp parallel for
            for (int iz=0; iz<n_angular_meson_z; iz++){
                cdouble
                        z   = sampling_points_angular_meson_z[iz],
                        zw  = weights_angular_meson_z[iz];
                cdouble
                        P_q     =   std::sqrt(P_P)*std::sqrt(q_q)*z,
                        K_q     =   std::sqrt(K_K)*std::sqrt(q_q)*z,
                        qm_qm   =   q_q + (eta-1.)*(eta-1.)*P_P + 2.*(eta-1.)*P_q,
                        qp_qp   =   q_q + eta*eta*P_P + 2.*eta*P_q;
                        cdouble svm=0.,ssm=0.,svp=0.,ssp=0.,
                        wj      =   qw*zw*q_q*q_q/2.*std::sqrt(1.-z*z);
                        if (i==37)
                        {
                          svm     =   chfi_q::sv_u(qm_qm);
                          ssm     =   chfi_q::ss_u(qm_qm);
                        } else if (i==200) {
                          svm     =   chfi_q::sv_0200(qm_qm);
                          ssm     =   chfi_q::ss_0200(qm_qm);
                        } else if (i==500) {
                          svm     =   chfi_q::sv_0500(qm_qm);
                          ssm     =   chfi_q::ss_0500(qm_qm);
                        } else if (i==850) {
                          svm     =   chfi_q::sv_s(qm_qm);
                          ssm     =   chfi_q::ss_s(qm_qm);
                        } else if (i==2100) {
                          svm     =   chfi_q::sv_2100(qm_qm);
                          ssm     =   chfi_q::ss_2100(qm_qm);
                        }

                        if (j==37)
                        {
                          svp     =   chfi_q::sv_u(qp_qp);
                          ssp     =   chfi_q::ss_u(qp_qp);
                        } else if (j==200) {
                          svp     =   chfi_q::sv_0200(qp_qp);
                          ssp     =   chfi_q::ss_0200(qp_qp);
                        } else if (j==500) {
                          svp     =   chfi_q::sv_0500(qp_qp);
                          ssp     =   chfi_q::ss_0500(qp_qp);
                        } else if (j==850) {
                          svp     =   chfi_q::sv_s(qp_qp);
                          ssp     =   chfi_q::ss_s(qp_qp);
                        } else if (j==2100) {
                          svp     =   chfi_q::sv_2100(qp_qp);
                          ssp     =   chfi_q::ss_2100(qp_qp);
                        }

                K_norm_rho[SI_K_norm_vc(0,0,iq,iz)]    = wj*    (-12.*ssm*ssp+(2.*svm*svp*std::pow(K_P,2))/K_K-(8.*svm*svp*std::pow(K_q,2))/K_K+svm*svp*P_P-4.*svm*svp*q_q);
                K_norm_rho[SI_K_norm_vc(0,1,iq,iz)]    = wj*    (-6.*ssp*svm*K_P-6.*ssm*svp*K_P+12.*ssp*svm*K_q-12.*ssm*svp*K_q);
                K_norm_rho[SI_K_norm_vc(0,2,iq,iz)]    = wj*    ((2.*K_q*((ssp*svm+ssm*svp)*K_P*K_q+2.*((-1.*ssp*svm+ssm*svp)*std::pow(K_q,2)+K_K*((ssp*svm+ssm*svp)*P_q+2.*(-1.*ssp*svm+ssm*svp)*q_q))))/K_K);
                K_norm_rho[SI_K_norm_vc(0,3,iq,iz)]    = wj*    (16.*svm*svp*(K_q*P_q-1.*K_P*q_q));
                K_norm_rho[SI_K_norm_vc(0,4,iq,iz)]    = wj*    ((2.*((ssp*svm-1.*ssm*svp)*K_P*K_q-2.*(ssp*svm+ssm*svp)*std::pow(K_q,2)+K_K*((-1.*ssp*svm+ssm*svp)*P_q+2.*(ssp*svm+ssm*svp)*q_q)))/K_K);
                K_norm_rho[SI_K_norm_vc(0,5,iq,iz)]    = wj*    ((2.*svm*svp*K_q*(std::pow(K_P,2)*K_q-4.*std::pow(K_q,3)-1.*K_K*K_P*P_q+4.*K_K*K_q*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(0,6,iq,iz)]    = wj*    ((-2.*svm*svp*K_P*K_q*P_q+std::pow(K_q,2)*(-4.*ssm*ssp+svm*svp*(P_P+4.*q_q))+K_K*(2.*svm*svp*std::pow(P_q,2)-1.*q_q*(-4.*ssm*ssp+svm*svp*(P_P+4.*q_q))))/K_K);
                K_norm_rho[SI_K_norm_vc(0,7,iq,iz)]    = wj*    ((-4.*((ssp*svm+ssm*svp)*K_P+2.*(-1.*ssp*svm+ssm*svp)*K_q)*(std::pow(K_q,2)-1.*K_K*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(1,0,iq,iz)]    = wj*    (-6.*((ssp*svm+ssm*svp)*K_P+2.*(-1.*ssp*svm+ssm*svp)*K_q));
                K_norm_rho[SI_K_norm_vc(1,1,iq,iz)]    = wj*    (-4.*svm*svp*(std::pow(K_P,2)-4.*std::pow(K_q,2))+K_K*(12.*ssm*ssp+svm*svp*(P_P-4.*q_q)));
                K_norm_rho[SI_K_norm_vc(1,2,iq,iz)]    = wj*    (-1.*K_q*(-4.*svm*svp*K_P*P_q+K_q*(12.*ssm*ssp+svm*svp*(P_P+12.*q_q))));
                K_norm_rho[SI_K_norm_vc(1,3,iq,iz)]    = wj*    (8.*((ssp*svm-1.*ssm*svp)*K_P*K_q-2.*(ssp*svm+ssm*svp)*std::pow(K_q,2)+K_K*((-1.*ssp*svm+ssm*svp)*P_q+2.*(ssp*svm+ssm*svp)*q_q)));
                K_norm_rho[SI_K_norm_vc(1,4,iq,iz)]    = wj*    (4.*svm*svp*(-1.*K_q*P_q+K_P*q_q));
                K_norm_rho[SI_K_norm_vc(1,5,iq,iz)]    = wj*    (2.*K_q*(-1.*(ssp*svm+ssm*svp)*K_P*K_q+2.*(ssp*svm-1.*ssm*svp)*std::pow(K_q,2)+K_K*((ssp*svm+ssm*svp)*P_q+2.*(-1.*ssp*svm+ssm*svp)*q_q)));
                K_norm_rho[SI_K_norm_vc(1,6,iq,iz)]    = wj*    (2.*(ssp*svm+ssm*svp)*(-1.*K_q*P_q+K_P*q_q));
                K_norm_rho[SI_K_norm_vc(1,7,iq,iz)]    = wj*    (-8.*svm*svp*K_P*K_q*P_q+4.*svm*svp*std::pow(K_P,2)*q_q+2.*std::pow(K_q,2)*(4.*ssm*ssp+svm*svp*(P_P+4.*q_q))+K_K*(4.*svm*svp*std::pow(P_q,2)-2.*q_q*(4.*ssm*ssp+svm*svp*(P_P+4.*q_q))));
                K_norm_rho[SI_K_norm_vc(2,0,iq,iz)]    = wj*    ((2.*K_q*((ssp*svm+ssm*svp)*K_P*K_q+2.*((-1.*ssp*svm+ssm*svp)*std::pow(K_q,2)+K_K*((ssp*svm+ssm*svp)*P_q+2.*(-1.*ssp*svm+ssm*svp)*q_q))))/K_K);
                K_norm_rho[SI_K_norm_vc(2,1,iq,iz)]    = wj*    (-1.*K_q*(-4.*svm*svp*K_P*P_q+K_q*(12.*ssm*ssp+svm*svp*(P_P+12.*q_q))));
                K_norm_rho[SI_K_norm_vc(2,2,iq,iz)]    = wj*    ((std::pow(K_q,2)*(-4.*svm*svp*K_P*K_q*P_q+2.*svm*svp*std::pow(K_P,2)*q_q+std::pow(K_q,2)*(4.*ssm*ssp+svm*svp*(P_P+4.*q_q))+K_K*(-2.*svm*svp*std::pow(P_q,2)+8.*q_q*(ssm*ssp+svm*svp*q_q))))/K_K);
                K_norm_rho[SI_K_norm_vc(2,3,iq,iz)]    = wj*    (8.*(ssp*svm-1.*ssm*svp)*K_q*(K_q*P_q-1.*K_P*q_q));
                K_norm_rho[SI_K_norm_vc(2,4,iq,iz)]    = wj*    ((4.*svm*svp*std::pow(K_q,2)*(K_q*P_q-1.*K_P*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(2,5,iq,iz)]    = wj*    ((2.*std::pow(K_q,3)*((ssp*svm+ssm*svp)*K_P*K_q+(-2.*ssp*svm+2.*ssm*svp)*std::pow(K_q,2)+K_K*(-1.*(ssp*svm+ssm*svp)*P_q+2.*(ssp*svm-1.*ssm*svp)*q_q)))/K_K);
                K_norm_rho[SI_K_norm_vc(2,6,iq,iz)]    = wj*    ((2.*(ssp*svm+ssm*svp)*std::pow(K_q,2)*(K_q*P_q-1.*K_P*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(2,7,iq,iz)]    = wj*    ((-2.*std::pow(K_q,2)*(-4.*svm*svp*K_P*K_q*P_q+2.*svm*svp*std::pow(K_P,2)*q_q+std::pow(K_q,2)*(4.*ssm*ssp+svm*svp*(P_P+4.*q_q))+K_K*(2.*svm*svp*std::pow(P_q,2)-1.*q_q*(4.*ssm*ssp+svm*svp*(P_P+4.*q_q)))))/K_K);
                K_norm_rho[SI_K_norm_vc(3,0,iq,iz)]    = wj*    (16.*svm*svp*(K_q*P_q-1.*K_P*q_q));
                K_norm_rho[SI_K_norm_vc(3,1,iq,iz)]    = wj*    (8.*((ssp*svm-1.*ssm*svp)*K_P*K_q-2.*(ssp*svm+ssm*svp)*std::pow(K_q,2)+K_K*((-1.*ssp*svm+ssm*svp)*P_q+2.*(ssp*svm+ssm*svp)*q_q)));
                K_norm_rho[SI_K_norm_vc(3,2,iq,iz)]    = wj*    (8.*(ssp*svm-1.*ssm*svp)*K_q*(K_q*P_q-1.*K_P*q_q));
                K_norm_rho[SI_K_norm_vc(3,3,iq,iz)]    = wj*    (-8.*(-2.*svm*svp*K_P*K_q*P_q+svm*svp*std::pow(K_P,2)*q_q+std::pow(K_q,2)*(-4.*ssm*ssp+4.*svm*svp*q_q)+K_K*(4.*ssm*ssp*q_q+svm*svp*(std::pow(P_q,2)-4.*std::pow(q_q,2)))));
                K_norm_rho[SI_K_norm_vc(3,4,iq,iz)]    = wj*    (0.);
                K_norm_rho[SI_K_norm_vc(3,5,iq,iz)]    = wj*    (0.);
                K_norm_rho[SI_K_norm_vc(3,6,iq,iz)]    = wj*    (0.);
                K_norm_rho[SI_K_norm_vc(3,7,iq,iz)]    = wj*    (0.);
                K_norm_rho[SI_K_norm_vc(4,0,iq,iz)]    = wj*    ((2.*((ssp*svm-1.*ssm*svp)*K_P*K_q-2.*(ssp*svm+ssm*svp)*std::pow(K_q,2)+K_K*((-1.*ssp*svm+ssm*svp)*P_q+2.*(ssp*svm+ssm*svp)*q_q)))/K_K);
                K_norm_rho[SI_K_norm_vc(4,1,iq,iz)]    = wj*    (4.*svm*svp*(-1.*K_q*P_q+K_P*q_q));
                K_norm_rho[SI_K_norm_vc(4,2,iq,iz)]    = wj*    ((4.*svm*svp*std::pow(K_q,2)*(K_q*P_q-1.*K_P*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(4,3,iq,iz)]    = wj*    (0.);
                K_norm_rho[SI_K_norm_vc(4,4,iq,iz)]    = wj*    (((4.*ssm*ssp+svm*svp*(P_P-4.*q_q))*(-1.*std::pow(K_q,2)+K_K*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(4,5,iq,iz)]    = wj*    ((-2.*K_q*((-1.*ssp*svm+ssm*svp)*K_P+2.*(ssp*svm+ssm*svp)*K_q)*(std::pow(K_q,2)-1.*K_K*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(4,6,iq,iz)]    = wj*    ((2.*((ssp*svm-1.*ssm*svp)*P_q-2.*(ssp*svm+ssm*svp)*q_q)*(-1.*std::pow(K_q,2)+K_K*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(4,7,iq,iz)]    = wj*    ((8.*svm*svp*(-1.*std::pow(K_q,2)+K_K*q_q)*(K_q*P_q-1.*K_P*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(5,0,iq,iz)]    = wj*    ((2.*svm*svp*K_q*(std::pow(K_P,2)*K_q-4.*std::pow(K_q,3)-1.*K_K*K_P*P_q+4.*K_K*K_q*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(5,1,iq,iz)]    = wj*    (2.*K_q*(-1.*(ssp*svm+ssm*svp)*K_P*K_q+2.*(ssp*svm-1.*ssm*svp)*std::pow(K_q,2)+K_K*((ssp*svm+ssm*svp)*P_q+2.*(-1.*ssp*svm+ssm*svp)*q_q)));
                K_norm_rho[SI_K_norm_vc(5,2,iq,iz)]    = wj*    ((2.*std::pow(K_q,3)*((ssp*svm+ssm*svp)*K_P*K_q+(-2.*ssp*svm+2.*ssm*svp)*std::pow(K_q,2)+K_K*(-1.*(ssp*svm+ssm*svp)*P_q+2.*(ssp*svm-1.*ssm*svp)*q_q)))/K_K);
                K_norm_rho[SI_K_norm_vc(5,3,iq,iz)]    = wj*    (0.);
                K_norm_rho[SI_K_norm_vc(5,4,iq,iz)]    = wj*    ((-2.*K_q*((-1.*ssp*svm+ssm*svp)*K_P+2.*(ssp*svm+ssm*svp)*K_q)*(std::pow(K_q,2)-1.*K_K*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(5,5,iq,iz)]    = wj*    ((std::pow(K_q,2)*(-2.*svm*svp*std::pow(K_P,2)+8.*svm*svp*std::pow(K_q,2)+K_K*(-4.*ssm*ssp+svm*svp*(P_P-4.*q_q)))*(-1.*std::pow(K_q,2)+K_K*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(5,6,iq,iz)]    = wj*    ((K_q*(std::pow(K_q,2)-1.*K_K*q_q)*(-2.*svm*svp*K_P*P_q+K_q*(-4.*ssm*ssp+svm*svp*(P_P+4.*q_q))))/K_K);
                K_norm_rho[SI_K_norm_vc(5,7,iq,iz)]    = wj*    ((4.*K_q*(std::pow(K_q,2)-1.*K_K*q_q)*(-1.*(ssp*svm+ssm*svp)*K_P*K_q+2.*(ssp*svm-1.*ssm*svp)*std::pow(K_q,2)+K_K*((ssp*svm+ssm*svp)*P_q+2.*(-1.*ssp*svm+ssm*svp)*q_q)))/K_K);
                K_norm_rho[SI_K_norm_vc(6,0,iq,iz)]    = wj*    ((-2.*svm*svp*K_P*K_q*P_q+std::pow(K_q,2)*(-4.*ssm*ssp+svm*svp*(P_P+4.*q_q))+K_K*(2.*svm*svp*std::pow(P_q,2)-1.*q_q*(-4.*ssm*ssp+svm*svp*(P_P+4.*q_q))))/K_K);
                K_norm_rho[SI_K_norm_vc(6,1,iq,iz)]    = wj*    (2.*(ssp*svm+ssm*svp)*(-1.*K_q*P_q+K_P*q_q));
                K_norm_rho[SI_K_norm_vc(6,2,iq,iz)]    = wj*    ((2.*(ssp*svm+ssm*svp)*std::pow(K_q,2)*(K_q*P_q-1.*K_P*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(6,3,iq,iz)]    = wj*    (0.);
                K_norm_rho[SI_K_norm_vc(6,4,iq,iz)]    = wj*    ((2.*((ssp*svm-1.*ssm*svp)*P_q-2.*(ssp*svm+ssm*svp)*q_q)*(-1.*std::pow(K_q,2)+K_K*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(6,5,iq,iz)]    = wj*    ((K_q*(std::pow(K_q,2)-1.*K_K*q_q)*(-2.*svm*svp*K_P*P_q+K_q*(-4.*ssm*ssp+svm*svp*(P_P+4.*q_q))))/K_K);
                K_norm_rho[SI_K_norm_vc(6,6,iq,iz)]    = wj*    (((-1.*std::pow(K_q,2)+K_K*q_q)*(-2.*svm*svp*std::pow(P_q,2)+q_q*(-4.*ssm*ssp+svm*svp*(P_P+4.*q_q))))/K_K);
                K_norm_rho[SI_K_norm_vc(6,7,iq,iz)]    = wj*    ((4.*(ssp*svm+ssm*svp)*(-1.*std::pow(K_q,2)+K_K*q_q)*(K_q*P_q-1.*K_P*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(7,0,iq,iz)]    = wj*    ((-4.*((ssp*svm+ssm*svp)*K_P+2.*(-1.*ssp*svm+ssm*svp)*K_q)*(std::pow(K_q,2)-1.*K_K*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(7,1,iq,iz)]    = wj*    (-8.*svm*svp*K_P*K_q*P_q+4.*svm*svp*std::pow(K_P,2)*q_q+2.*std::pow(K_q,2)*(4.*ssm*ssp+svm*svp*(P_P+4.*q_q))+K_K*(4.*svm*svp*std::pow(P_q,2)-2.*q_q*(4.*ssm*ssp+svm*svp*(P_P+4.*q_q))));
                K_norm_rho[SI_K_norm_vc(7,2,iq,iz)]    = wj*    ((-2.*std::pow(K_q,2)*(-4.*svm*svp*K_P*K_q*P_q+2.*svm*svp*std::pow(K_P,2)*q_q+std::pow(K_q,2)*(4.*ssm*ssp+svm*svp*(P_P+4.*q_q))+K_K*(2.*svm*svp*std::pow(P_q,2)-1.*q_q*(4.*ssm*ssp+svm*svp*(P_P+4.*q_q)))))/K_K);
                K_norm_rho[SI_K_norm_vc(7,3,iq,iz)]    = wj*    (0.);
                K_norm_rho[SI_K_norm_vc(7,4,iq,iz)]    = wj*    ((8.*svm*svp*(-1.*std::pow(K_q,2)+K_K*q_q)*(K_q*P_q-1.*K_P*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(7,5,iq,iz)]    = wj*    ((4.*K_q*(std::pow(K_q,2)-1.*K_K*q_q)*(-1.*(ssp*svm+ssm*svp)*K_P*K_q+2.*(ssp*svm-1.*ssm*svp)*std::pow(K_q,2)+K_K*((ssp*svm+ssm*svp)*P_q+2.*(-1.*ssp*svm+ssm*svp)*q_q)))/K_K);
                K_norm_rho[SI_K_norm_vc(7,6,iq,iz)]    = wj*    ((4.*(ssp*svm+ssm*svp)*(-1.*std::pow(K_q,2)+K_K*q_q)*(K_q*P_q-1.*K_P*q_q))/K_K);
                K_norm_rho[SI_K_norm_vc(7,7,iq,iz)]    = wj*    ((4.*(std::pow(K_q,2)-1.*K_K*q_q)*(-4.*svm*svp*K_P*K_q*P_q+2.*svm*svp*std::pow(K_P,2)*q_q+std::pow(K_q,2)*(4.*ssm*ssp+svm*svp*(P_P+4.*q_q))+K_K*(2.*svm*svp*std::pow(P_q,2)-1.*q_q*(4.*ssm*ssp+svm*svp*(P_P+4.*q_q)))))/K_K);
            }
        }

        cdouble norm_sum=0.;

        for(int id1=0; id1<n_dirac_rho; id1++){
            for(int id2=0; id2<n_dirac_rho; id2++){
                for(int iq=0; iq<n_radial_meson; iq++){
                    for(int iz=0; iz<n_angular_meson_z; iz++){
                        cdouble ampl;
                        if (i==37 && j==37){ampl=vc_0037_0037(id1,std::exp(sampling_points_radial_meson[iq]))*vc_0037_0037(id2,std::exp(sampling_points_radial_meson[iq]));}
                        else if ((i==200 && j==37) || (i==37 && j==200)){ampl=vc_0200_0037(id1,std::exp(sampling_points_radial_meson[iq]))*vc_0200_0037(id2,std::exp(sampling_points_radial_meson[iq]));}
                        else if ((i==500 && j==37) || (i==37 && j==500)){ampl=vc_0500_0037(id1,std::exp(sampling_points_radial_meson[iq]))*vc_0500_0037(id2,std::exp(sampling_points_radial_meson[iq]));}
                        norm_sum +=  K_norm_rho[SI_K_norm_vc(id1,id2,iq,iz)] * ampl;
                    }
                }
            }
        }

        K_norm_rho.clear();

        return prefactor*norm_sum;
    }
    */

  private:

    /*

        static int SI_K_ps(int id1, int id2, int iq, int ip, int iz, int izz) {
            return   id1
                   + id2    * 4
                   + iq     * 4 * 4
                   + ip     * 4 * 4 * n_radial_meson
                   + iz     * 4 * 4 * n_radial_meson * n_radial_meson
                   + izz    * 4 * 4 * n_radial_meson * n_radial_meson * n_angular_meson_z;
        }

        static int SI_F_ps(int id, int ip, int iz){
            return    id
                    + ip    *4
                    + iz    *4*n_radial_meson;
        }

        static int SI_K_norm_ps(int id1, int id2, int iq, int iz){
            return      id1
                      + id2   *4
                      + iq    *4*4
                      + iz    *4*4*n_radial_meson;
        }

        static int SI_F_pi_int(int id, int ix, int iy){
          return          id
                        + ix  *n_dirac_pion
                        + iy  *n_dirac_pion*32;
        }

        static int SI_K_norm_vc(int id1, int id2, int ip, int iz){
            return    id1
                    + id2   *8
                    + ip    *8*8
                    + iz    *8*8*n_radial_meson;
        }

        static int SI_K_vc(int id1, int id2, int iq, int ip, int iz, int izz) {
            return    id1
                    + id2   * 8
                    + iq    * 8 * 8
                    + ip    * 8 * 8 * n_radial_meson
                    + iz    * 8 * 8 * n_radial_meson * n_radial_meson
                    + izz   * 8 * 8 * n_radial_meson * n_radial_meson * n_angular_meson_z;
        }


        static int SI_F_vc(int id, int ip, int iz){
            return    id
                    + ip    *8
                    + iz    *8*n_radial_meson;
        }

        static int SI_K_rho_it(int id, int ip, int iz){
            return    id
                    + ip    *8
                    + iz    *8*n_radial_meson;
        }
    */

};
