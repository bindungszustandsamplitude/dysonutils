#pragma once

#include <cmath>
#include <fstream>
#include <complex>

typedef std::complex<double> cdouble;
typedef std::vector<cdouble> vcdouble;

using std::cout, std::endl;

namespace dysonUtils::numerics::map
{
    class transrot_complex
    {
    public:
        transrot_complex()  = default;
        ~transrot_complex() = default;

        void generate(
                double x0_, double y0_,
                double xp_, double yp_,
                double xt_,
                double w_,
                int nx_, int ny_);

        vcdouble sample, result;

        double  x0, y0, xp, yp, xt, w;
        int     nx, ny;

        void print(std::string s);

    };

    void transrot_complex::generate(
            double x0_, double y0_,
            double xp_, double yp_,
            double xt_,
            double w_,
            int nx_, int ny_)
    {
        x0  = x0_;
        y0  = y0_;
        xp  = xp_;
        yp  = yp_;
        xt  = xt_;
        w   = w_;
        nx  = nx_;
        ny  = ny_;

        sample.resize(nx*ny);
        result.resize(nx*ny);

        for (int ix=0; ix<nx; ++ix){
            for (int iy=0; iy<ny; ++iy){
                sample[ix+nx*iy].real( (double)ix/(double)(nx-1) );
                sample[ix+nx*iy].imag( -1.+(double)iy/(double)(ny-1.)*2. );
            }
        }

        double  a   = atan((y0-yp)/(xp-x0)),
                l   = (xt-x0)/cos(a);

        for(int ix=0; ix<nx; ++ix){
            for(int iy=0; iy<ny; ++iy){
                double  x = sample[ix+nx*iy].real(),
                        y = sample[ix+nx*iy].imag();

                result[ix+nx*iy].real(l*x*cos(a) + y*w*sin(a) + x0);
                result[ix+nx*iy].imag(-l*x*sin(a) + y*w*cos(a) + y0);
            }
        }

    }

    void transrot_complex::print(std::string s)
    {
        std::ofstream write;
        write.open(s);

        for(int iy=0; iy<ny; ++iy){
            for(int ix=0; ix<nx; ++ix){
                write   << std::scientific
                        << result[ix+nx*iy].real() << "\t"
                        << result[ix+nx*iy].imag() << endl;
            }
        }

        write.close();
    }

}