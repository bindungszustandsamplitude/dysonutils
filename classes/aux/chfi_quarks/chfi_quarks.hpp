
/*
FILENAME: chfi_quarks.hpp
AUTHOR:   Nico Santowsky
EMAIL:    physics@nsanto.de
DATE:     2021-12-21
LICENSE:  Apache License 2.0
*/

#pragma once

#include "../../../routines/interpolation/src/interpolation.hpp"
#include <cmath>
#include <complex>
#include <vector>

typedef std::vector<std::vector<std::complex<double>>>  vvcdouble;
typedef std::vector<std::complex<double>>               vcdouble;
typedef std::complex<double>                            cdouble;
typedef std::vector<double>                             vdouble;

class chfi_q
{
  public:
    static void read()
    {
      I.real(0.);
      I.imag(1.);
      vdouble x1;
      double dummy=0.;

      std::fstream read_u;
        read_u.open("/home/nico/nico_research/programs/classes/quarks/chfi_quarks/quark_files/chfi_u.dat", std::ios::in);
          for (int i=0; i<10; i++){read_u >> dummy;}
          for (int i=0; i<6*5101; i++){
            read_u >> dummy;
            x1.push_back(dummy);
          }
        read_u.close();
        for(int i=0; i<5100; i++){
          x_chfi_u.push_back(x1[i*6+0]);
          x_chfi_u.push_back(x1[i*6+1]);
          x_chfi_u.push_back(x1[i*6+4]+I*x1[i*6+5]);
          x_chfi_u.push_back(x1[i*6+2]+I*x1[i*6+3]);
        }
        offset_u = std::real(x_chfi_u[0]);
        for (int i=0; i<17; i++){
          agrid_chfi_u.push_back( std::real((x_chfi_u[4*(299+300*i)+1])/(std::sqrt(x_chfi_u[4*(299+300*i)]-offset_u))) );
        }
        for (int i=0; i<5100; i++){
          cdouble a=x_chfi_u[i*4+2],b=x_chfi_u[i*4+3],pp=x_chfi_u[i*4]+I*x_chfi_u[i*4+1];
          fgrid_sv_u.push_back(a/(pp*a*a+b*b));
          fgrid_ss_u.push_back(b/(pp*a*a+b*b));
        }
        for (int i=0; i<300; i++){
          xgrid_chfi_u.push_back(std::real(x_chfi_u[i*4]));
        }
        x1.clear();

      std::fstream read_0200;
        read_0200.open("/home/nico/nico_research/programs/classes/quarks/chfi_quarks/quark_files/chfi_0200.dat", std::ios::in);
          for (int i=0; i<10; i++){read_0200 >> dummy;}
          for (int i=0; i<6*5101; i++){
            read_0200 >> dummy;
            x1.push_back(dummy);
          }
        read_0200.close();
        for(int i=0; i<5100; i++){
          x_chfi_0200.push_back(x1[i*6+0]);
          x_chfi_0200.push_back(x1[i*6+1]);
          x_chfi_0200.push_back(x1[i*6+4]+I*x1[i*6+5]);
          x_chfi_0200.push_back(x1[i*6+2]+I*x1[i*6+3]);
        }
        offset_0200 = std::real(x_chfi_0200[0]);
        for (int i=0; i<17; i++){
          agrid_chfi_0200.push_back( std::real((x_chfi_0200[4*(299+300*i)+1])/(std::sqrt(x_chfi_0200[4*(299+300*i)]-offset_0200))) );
        }
        for (int i=0; i<5100; i++){
          cdouble a=x_chfi_0200[i*4+2],b=x_chfi_0200[i*4+3],pp=x_chfi_0200[i*4]+I*x_chfi_0200[i*4+1];
          fgrid_sv_0200.push_back(a/(pp*a*a+b*b));
          fgrid_ss_0200.push_back(b/(pp*a*a+b*b));
        }
        for (int i=0; i<300; i++){
          xgrid_chfi_0200.push_back(std::real(x_chfi_0200[i*4]));
        }
        x1.clear();

      std::fstream read_0500;
        read_0500.open("/home/nico/nico_research/programs/classes/quarks/chfi_quarks/quark_files/chfi_0500.dat", std::ios::in);
          for (int i=0; i<10; i++){read_0500 >> dummy;}
          for (int i=0; i<6*5101; i++){
            read_0500 >> dummy;
            x1.push_back(dummy);
          }
        read_0500.close();
        for(int i=0; i<5100; i++){
          x_chfi_0500.push_back(x1[i*6+0]);
          x_chfi_0500.push_back(x1[i*6+1]);
          x_chfi_0500.push_back(x1[i*6+4]+I*x1[i*6+5]);
          x_chfi_0500.push_back(x1[i*6+2]+I*x1[i*6+3]);
        }
        offset_0500 = std::real(x_chfi_0500[0]);
        for (int i=0; i<17; i++){
          agrid_chfi_0500.push_back( std::real((x_chfi_0500[4*(299+300*i)+1])/(std::sqrt(x_chfi_0500[4*(299+300*i)]-offset_0500))) );
        }
        for (int i=0; i<5100; i++){
          cdouble a=x_chfi_0500[i*4+2],b=x_chfi_0500[i*4+3],pp=x_chfi_0500[i*4]+I*x_chfi_0500[i*4+1];
          fgrid_sv_0500.push_back(a/(pp*a*a+b*b));
          fgrid_ss_0500.push_back(b/(pp*a*a+b*b));
        }
        for (int i=0; i<300; i++){
          xgrid_chfi_0500.push_back(std::real(x_chfi_0500[i*4]));
        }
        x1.clear();

      std::fstream read_2100;
          read_2100.open("/home/nico/nico_research/programs/classes/quarks/chfi_quarks/quark_files/chfi_2100.dat", std::ios::in);
            for (int i=0; i<10; i++){read_2100 >> dummy;}
            for (int i=0; i<6*5101; i++){
              read_2100 >> dummy;
              x1.push_back(dummy);
            }
          read_2100.close();
          for(int i=0; i<5100; i++){
            x_chfi_2100.push_back(x1[i*6+0]);
            x_chfi_2100.push_back(x1[i*6+1]);
            x_chfi_2100.push_back(x1[i*6+4]+I*x1[i*6+5]);
            x_chfi_2100.push_back(x1[i*6+2]+I*x1[i*6+3]);
          }
          offset_2100 = std::real(x_chfi_2100[0]);
          for (int i=0; i<17; i++){
            agrid_chfi_2100.push_back( std::real((x_chfi_2100[4*(299+300*i)+1])/(std::sqrt(x_chfi_2100[4*(299+300*i)]-offset_2100))) );
          }
          for (int i=0; i<5100; i++){
            cdouble a=x_chfi_2100[i*4+2],b=x_chfi_2100[i*4+3],pp=x_chfi_2100[i*4]+I*x_chfi_2100[i*4+1];
            fgrid_sv_2100.push_back(a/(pp*a*a+b*b));
            fgrid_ss_2100.push_back(b/(pp*a*a+b*b));
          }
          for (int i=0; i<300; i++){
            xgrid_chfi_2100.push_back(std::real(x_chfi_2100[i*4]));
          }
          x1.clear();

      std::fstream read_s;
        read_s.open("/home/nico/nico_research/programs/classes/quarks/chfi_quarks/quark_files/chfi_s.dat", std::ios::in);
          for (int i=0; i<10; i++){read_s >> dummy;}
          for (int i=0; i<6*5101; i++){
            read_s >> dummy;
            x1.push_back(dummy);
          }
        read_s.close();
        for(int i=0; i<5100; i++){
          x_chfi_s.push_back(x1[i*6+0]);
          x_chfi_s.push_back(x1[i*6+1]);
          x_chfi_s.push_back(x1[i*6+4]+I*x1[i*6+5]);
          x_chfi_s.push_back(x1[i*6+2]+I*x1[i*6+3]);
        }
        offset_s = std::real(x_chfi_s[0]);
        for (int i=0; i<17; i++){
          agrid_chfi_s.push_back( std::real((x_chfi_s[4*(299+300*i)+1])/(std::sqrt(x_chfi_s[4*(299+300*i)]-offset_s))) );
        }
        for (int i=0; i<5100; i++){
          cdouble a=x_chfi_s[i*4+2],b=x_chfi_s[i*4+3],pp=x_chfi_s[i*4]+I*x_chfi_s[i*4+1];
          fgrid_sv_s.push_back(a/(pp*a*a+b*b));
          fgrid_ss_s.push_back(b/(pp*a*a+b*b));
        }
        for (int i=0; i<300; i++){
          xgrid_chfi_s.push_back(std::real(x_chfi_s[i*4]));
        }
        x1.clear();

      std::fstream read_8440;
        read_8440.open("/home/nico/nico_research/programs/classes/quarks/chfi_quarks/quark_files/chfi_8440.dat", std::ios::in);
          for (int i=0; i<10; i++){read_8440 >> dummy;}
          for (int i=0; i<6*5101; i++){
            read_8440 >> dummy;
            x1.push_back(dummy);
          }
        read_8440.close();
        for(int i=0; i<5100; i++){
          x_chfi_8440.push_back(x1[i*6+0]);
          x_chfi_8440.push_back(x1[i*6+1]);
          x_chfi_8440.push_back(x1[i*6+4]+I*x1[i*6+5]);
          x_chfi_8440.push_back(x1[i*6+2]+I*x1[i*6+3]);
        }
        offset_8440 = std::real(x_chfi_8440[0]);
        for (int i=0; i<17; i++){
          agrid_chfi_8440.push_back( std::real((x_chfi_8440[4*(299+300*i)+1])/(std::sqrt(x_chfi_8440[4*(299+300*i)]-offset_8440))) );
        }
        for (int i=0; i<5100; i++){
          cdouble a=x_chfi_8440[i*4+2],b=x_chfi_8440[i*4+3],pp=x_chfi_8440[i*4]+I*x_chfi_8440[i*4+1];
          fgrid_sv_8440.push_back(a/(pp*a*a+b*b));
          fgrid_ss_8440.push_back(b/(pp*a*a+b*b));
        }
        for (int i=0; i<300; i++){
          xgrid_chfi_8440.push_back(std::real(x_chfi_8440[i*4]));
        }
        x1.clear();

      std::fstream read_c;
        read_c.open("/home/nico/nico_research/programs/classes/quarks/chfi_quarks/quark_files/chfi_c.dat", std::ios::in);
          for (int i=0; i<10; i++){read_c >> dummy;}
          for (int i=0; i<6*5101; i++){
            read_c >> dummy;
            x1.push_back(dummy);
          }
        read_c.close();
        for(int i=0; i<5100; i++){
          x_chfi_c.push_back(x1[i*6+0]);
          x_chfi_c.push_back(x1[i*6+1]);
          x_chfi_c.push_back(x1[i*6+4]+I*x1[i*6+5]);
          x_chfi_c.push_back(x1[i*6+2]+I*x1[i*6+3]);
        }
        offset_c = std::real(x_chfi_c[0]);
        for (int i=0; i<17; i++){
          agrid_chfi_c.push_back( std::real((x_chfi_c[4*(299+300*i)+1])/(std::sqrt(x_chfi_c[4*(299+300*i)]-offset_c))) );
        }
        for (int i=0; i<5100; i++){
          cdouble a=x_chfi_c[i*4+2],b=x_chfi_c[i*4+3],pp=x_chfi_c[i*4]+I*x_chfi_c[i*4+1];
          fgrid_sv_c.push_back(a/(pp*a*a+b*b));
          fgrid_ss_c.push_back(b/(pp*a*a+b*b));
        }
        for (int i=0; i<300; i++){
          xgrid_chfi_c.push_back(std::real(x_chfi_c[i*4]));
        }
        x1.clear();

    /*
      std::fstream read_ren;
        read_ren.open("/home/nico/nico_research/programs/classes/quarks/chfi_quarks/quark_files/chfi_u.dat", std::ios::in);
          for (int i=0; i<4; i++){read_ren >> dummy;}
          read_ren >> Z2;
          read_ren >> Zm;
        read_ren.close();
    */
    }

    static cdouble sv_u(cdouble p_p)
    {
        double a = std::imag(p_p)/(std::sqrt(std::real(p_p)-offset_u));
        if (std::isnan(a)) {a=0.;}
        return numerics::interpolation::linear_2d(xgrid_chfi_u,agrid_chfi_u,fgrid_sv_u,std::real(p_p),a);
    }

    static cdouble ss_u(cdouble p_p)
    {
        double a = std::imag(p_p)/(std::sqrt(std::real(p_p)-offset_u));
        if (std::isnan(a)) {a=0.;}
        return numerics::interpolation::linear_2d(xgrid_chfi_u,agrid_chfi_u,fgrid_ss_u,std::real(p_p),a);
    }

    static cdouble sv_0200(cdouble p_p)
    {
      double a = std::imag(p_p)/(std::sqrt(std::real(p_p)-offset_0200));
      if (std::isnan(a)) {a=0.;}
      return numerics::interpolation::linear_2d(xgrid_chfi_0200,agrid_chfi_0200,fgrid_sv_0200,std::real(p_p),a);
    }

    static cdouble ss_0200(cdouble p_p)
    {
      double a = std::imag(p_p)/(std::sqrt(std::real(p_p)-offset_0200));
      if (std::isnan(a)) {a=0.;}
      return numerics::interpolation::linear_2d(xgrid_chfi_0200,agrid_chfi_0200,fgrid_ss_0200,std::real(p_p),a);
    }

    static cdouble sv_0500(cdouble p_p)
    {
      double a = std::imag(p_p)/(std::sqrt(std::real(p_p)-offset_0500));
      if (std::isnan(a)) {a=0.;}
      return numerics::interpolation::linear_2d(xgrid_chfi_0500,agrid_chfi_0500,fgrid_sv_0500,std::real(p_p),a);
    }

    static cdouble ss_0500(cdouble p_p)
    {
      double a = std::imag(p_p)/(std::sqrt(std::real(p_p)-offset_0500));
      if (std::isnan(a)) {a=0.;}
      return numerics::interpolation::linear_2d(xgrid_chfi_0500,agrid_chfi_0500,fgrid_ss_0500,std::real(p_p),a);
    }

    static cdouble sv_2100(cdouble p_p)
    {
      double a = std::imag(p_p)/(std::sqrt(std::real(p_p)-offset_2100));
      if (std::isnan(a)) {a=0.;}
      return numerics::interpolation::linear_2d(xgrid_chfi_2100,agrid_chfi_2100,fgrid_sv_2100,std::real(p_p),a);
    }

    static cdouble ss_2100(cdouble p_p)
    {
      double a = std::imag(p_p)/(std::sqrt(std::real(p_p)-offset_2100));
      if (std::isnan(a)) {a=0.;}
      return numerics::interpolation::linear_2d(xgrid_chfi_2100,agrid_chfi_2100,fgrid_ss_2100,std::real(p_p),a);
    }

    static cdouble sv_s(cdouble p_p)
    {
      double a = std::imag(p_p)/(std::sqrt(std::real(p_p)-offset_s));
      if (std::isnan(a)) {a=0.;}
      return numerics::interpolation::linear_2d(xgrid_chfi_s,agrid_chfi_s,fgrid_sv_s,std::real(p_p),a);
    }

    static cdouble ss_s(cdouble p_p)
    {
      double a = std::imag(p_p)/(std::sqrt(std::real(p_p)-offset_s));
      if (std::isnan(a)) {a=0.;}
      return numerics::interpolation::linear_2d(xgrid_chfi_s,agrid_chfi_s,fgrid_ss_s,std::real(p_p),a);
    }

    static cdouble sv_8440(cdouble p_p)
    {
      double a = std::imag(p_p)/(std::sqrt(std::real(p_p)-offset_8440));
      if (std::isnan(a)) {a=0.;}
      return numerics::interpolation::linear_2d(xgrid_chfi_8440,agrid_chfi_8440,fgrid_sv_8440,std::real(p_p),a);
    }

    static cdouble ss_8440(cdouble p_p)
    {
      double a = std::imag(p_p)/(std::sqrt(std::real(p_p)-offset_8440));
      if (std::isnan(a)) {a=0.;}
      return numerics::interpolation::linear_2d(xgrid_chfi_8440,agrid_chfi_8440,fgrid_ss_8440,std::real(p_p),a);
    }

    static cdouble sv_c(cdouble p_p)
    {
      double a = std::imag(p_p)/(std::sqrt(std::real(p_p)-offset_c));
      if (std::isnan(a)) {a=0.;}
      return numerics::interpolation::linear_2d(xgrid_chfi_c,agrid_chfi_c,fgrid_sv_c,std::real(p_p),a);
    }

    static cdouble ss_c(cdouble p_p)
    {
      double a = std::imag(p_p)/(std::sqrt(std::real(p_p)-offset_c));
      if (std::isnan(a)) {a=0.;}
      return numerics::interpolation::linear_2d(xgrid_chfi_c,agrid_chfi_c,fgrid_ss_c,std::real(p_p),a);
    }


private:

    static inline vcdouble
            x_chfi_u,
            x_chfi_0200,
            x_chfi_0500,
            x_chfi_s,
            x_chfi_2100,
            x_chfi_8440,
            x_chfi_c,
            fgrid_sv_u,
            fgrid_ss_u,
            fgrid_sv_0200,
            fgrid_ss_0200,
            fgrid_sv_0500,
            fgrid_ss_0500,
            fgrid_sv_s,
            fgrid_ss_s,
            fgrid_sv_2100,
            fgrid_ss_2100,
            fgrid_sv_8440,
            fgrid_ss_8440,
            fgrid_sv_c,
            fgrid_ss_c;

    static inline vdouble
            xgrid_chfi_u,
            agrid_chfi_u,
            xgrid_chfi_0200,
            agrid_chfi_0200,
            xgrid_chfi_0500,
            agrid_chfi_0500,
            xgrid_chfi_s,
            agrid_chfi_s,
            xgrid_chfi_2100,
            agrid_chfi_2100,
            xgrid_chfi_8440,
            agrid_chfi_8440,
            xgrid_chfi_c,
            agrid_chfi_c;


    static inline double
            offset_u,
            offset_0200,
            offset_0500,
            offset_s,
            offset_2100,
            offset_8440,
            offset_c;

    static inline cdouble I;

};
