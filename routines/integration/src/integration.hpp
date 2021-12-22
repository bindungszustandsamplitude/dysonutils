
/*
FILENAME: integration.hpp
AUTHOR:   Nico Santowsky
EMAIL:    physics@nsanto.de
DATE:     2021-12-21
LICENSE:  CC BY-NC-SA 4.0
*/

#pragma once

#include <cmath>
#include <iostream>
#include <vector>
#include <cassert>

using std::string;

template <typename T> using vec  =  std::vector<T>;

typedef std::complex<double>                            cdouble;

namespace dysonUtils::numerics::integration
{

    // The following objects include integration grids, which are used in the following:
    // object.grid      :: x-grid
    // object.weights   :: associated weights
    // object.n_total   :: number of grid points
    // object.grid_type :: string in which is written which grid it actually is


    template <typename T=double>
    class Linear // Linear grid (simplest)
    {
    public:
        Linear()
        {
            n_total     =   10;
            grid_type   =   "Linear";
        }

        ~Linear() = default;

        string  grid_type;

        int     n_total;    // n_total: total number of grid points

        vec<T>  grid,weights;

        void generate(T low, T upp) // low = lower integration bound, upp = upper integration bound
        {
            grid.resize(n_total);
            weights.resize(n_total);

            T   weight  =   (upp-low)/(T)n_total;

            for(int i=0; i<n_total; i++)
            {
                grid[i]     =   low + weight * (T)i;
                weights[i]  =   weight;
            }
        }
    };


    template <typename T=double>
    class Gauleg // Gauss-Legendre integration
    {

    public:
        Gauleg()
        {
            n_sep       = 1;
            grid_type   = "Gauss-Legendre";
        }

        ~Gauleg() = default;

        string  grid_type;

        int     n_total,    // n_total: total number of grid points
                n_sep;      // n_sep: number of separations (for multiple gaulegs next to each other,
                            //                       should be a factor of n_total); default value is 1

        vec<T>  grid,weights;

        T lower_bound,upper_bound;

        void generate(T low, T upp, int N) // low = lower integration bound, upp = upper integration bound
        {
            n_total = N;
            lower_bound = low;
            upper_bound = upp;

            if (n_total/n_sep * n_sep != n_total)
            {
                std::cerr << "ERROR :: gauleg_n #sampling points not integer!" << n_total << std::endl;
                // this is fatal because an error comes into play due to the division of two integers
                assert(false);
            }

            weights.clear();
            grid.clear();

            std::vector<T>
                    x(n_total/n_sep),       // temporary grid for the inner gaulegs
                    w(n_total/n_sep);       // -> associated weights

            for(int is=0; is<n_sep; is++)
            {
                T       dx  = (upp - low) / (T)n_sep,
                        x1 = low+is*dx,
                        x2 = low+(is+1)*dx;

                int     n = n_total / n_sep;

            x.resize(n);
            w.resize(n);

            // the following sequence is the standard NR-gauleg routine

            #define NR_END 1
            #define EPS 3.0e-11

            int m,j,i;
            T z0,z,xm,xl,pp,p3,p2,p1;
            m=(n+1)/2;
            xm=0.5*(x2+x1);
            xl=0.5*(x2-x1);
            for (i=1;i<=m;i++) {
                z=cos(3.141592654*(i-0.25)/(n+0.5));
                do {
                    p1=1.0;
                    p2=0.0;
                    for (j=1;j<=n;j++) {
                        p3=p2;
                        p2=p1;
                        p1=((2.0*j-1.0)*z*p2-(j-1.0)*p3)/j;
                    }
                    pp=n*(z*p1-p2)/(z*z-1.0);
                    z0=z;
                    z=z0-p1/pp;
                } while (fabs(z-z0) > EPS);
                x[i-1]=xm-xl*z;
                x[n+1-i-1]=xm+xl*z;
                w[i-1]=2.0*xl/((1.0-z*z)*pp*pp);
                w[n+1-i-1]=w[i-1];
            }

            for (int k=0; k<n_total/n_sep; k++)
            {
                grid.push_back(x[k]);
                weights.push_back(w[k]);
            }

            }
        }
    };


    template <typename T=double>
    class Gauche // Gauss-Chebyshev integration
    {
    public:
        Gauche()
        {
            n_total     =   2;
            grid_type   =   "Gauss-Chebyshev";
        }

        ~Gauche() = default;

        int     n_total;

        vec<T>  grid,weights;

        string  grid_type;

        void generate(T low, T upp) // low = lower integration bound, upp = upper integration bound
        {
            T   str =   (upp - low)/2.;

            grid.resize(n_total);
            weights.resize(n_total);
            for (int i=1; i<=n_total; i++)
            {
                T   xi  = low + (std::cos( M_PI * i/(n_total+1.) ) + 1.) * str,
                    wi  = M_PI / (n_total+1.) * std::pow(std::sin(M_PI*i/(n_total+1.)), 2.) * str;

                grid[i-1]       = xi;
                weights[i-1]    = wi / std::sqrt(1.-xi*xi);
            }
        }
    };


    template <typename T=double>
    class FourVectorIntegration // generates grids and weights for a four vector integration (p^2,z,y,phi)
    {                           // (p^2, y, phi) are gauleg and (z) is gauche
                                // jacobians p^2 * sqrt(1-z^2) are not included
                                // p^2 integration already logarithmic
        public:
        FourVectorIntegration()
        {
            lower_bound_radial  =   1.e-2;
            upper_bound_radial  =   1.e+2;
            n_radial            =   2;
            n_angular_z         =   2;
            n_angular_y         =   2;
            n_angular_phi       =   2;
        }

        ~FourVectorIntegration() = default;

        vec<T>          grid_radial, grid_radial_log, grid_z, grid_y, grid_phi,
                        weights_radial, weights_z, weights_y, weights_phi;

        unsigned int    n_radial, n_angular_z, n_angular_y, n_angular_phi;

        T               lower_bound_radial, upper_bound_radial;

        void generate()
        {
            Gauleg<T>  gauleg1,gauleg2;
            gauleg1.n_total  =   n_radial/2;
            gauleg1.n_sep    =   1;
            gauleg2.n_total  =   n_radial/2;
            gauleg2.n_sep    =   1;
            gauleg1.generate(log(lower_bound_radial),0.,gauleg1.n_total);   // gauleg on a log grid
            gauleg2.generate(0.,log(upper_bound_radial),gauleg2.n_total);   // gauleg on a log grid

            grid_radial.clear();
            weights_radial.clear();
            for(unsigned int i=0; i<gauleg1.grid.size(); i++)
            {
                grid_radial.push_back(exp(gauleg1.grid[i]));    // backtrafo from log to normal grid
                weights_radial.push_back(gauleg1.weights[i]*exp(gauleg1.grid[i]));
            }
            for(unsigned int i=0; i<gauleg2.grid.size(); i++)
            {
                grid_radial.push_back(exp(gauleg2.grid[i]));    // backtrafo from log to normal grid
                weights_radial.push_back(gauleg2.weights[i]*exp(gauleg2.grid[i]));
            }   // backtrafo of weights

            grid_radial_log.clear();

            for(unsigned int i=0; i<n_radial; i++)
            {
                grid_radial_log.push_back(log(grid_radial[i]));
            }

            Gauche<T>  gauche;
            gauche.n_total  =   n_angular_z;
            gauche.generate(-1.,1.);
            grid_z          =   gauche.grid;
            weights_z       =   gauche.weights;

            Gauleg<T> gauleg;

            gauleg.n_total  =   n_angular_y;
            gauleg.n_sep    =   1;
            gauleg.generate(-1.,1.,n_angular_y);
            grid_y          =   gauleg.grid;
            weights_y       =   gauleg.weights;

            gauleg.n_total  =   n_angular_phi;
            gauleg.n_sep    =   1;
            gauleg.generate(0.,2.*M_PI,n_angular_phi);
            grid_phi        =   gauleg.grid;
            weights_phi     =   gauleg.weights;
        }

    };


    template <typename T=Gauleg<double>>
    class SpiralMap
    {
    public:
        SpiralMap()
        {
            i_.real(0.);
            i_.imag(1.);
            rw_path   = false;
            dijp_path = false;
        }

        ~SpiralMap() = default;

        vec<cdouble> grid,weights;

        unsigned int N;

        double M_meson,M_tetra,Gamma;

        double uv_cutoff=1.e+3;

        bool    rw_path   ,
                dijp_path ;

        void generate(T container)
        {
            assert(container.lower_bound == -1. && container.upper_bound == 1.);

            N = container.n_total;

            grid.resize(N);
            weights.resize(N);

            double sgn = 1.;
            if(Gamma < 0) sgn = -1.;

            for(unsigned int i=0; i<N; ++i)
            {
                double  t = container.grid[i],
                        w = container.weights[i];

                if(!rw_path && !dijp_path) {
                        // grid[i] =
                        // std::exp(-i_*sgn*M_PI*(1.25+0.75*t))*std::sqrt(1.5*(1.+t))
                        // * std::abs(M_meson*M_meson - 0.25*std::pow(M_tetra+i_*Gamma/2.,2.));
                        grid[i] =
                        std::exp(-i_*sgn*M_PI*(1.25+0.75*t))*std::sqrt(1.5*(1.+t))
                        * std::abs(M_meson*M_meson + 0.25*std::pow(i_*M_tetra+Gamma/2.,2.));

                        weights[i] = w * abs(M_meson*M_meson + 0.25*pow(i_*M_tetra+Gamma/2.,2.))
                        * exp(-i_*sgn*M_PI*(1.25+0.75*t)) * (-0.75*i_*sgn*M_PI*sqrt(1.5*(1.+t))
                        + 3./(4.*sqrt(1.5*(1.+t))));

                }
                else if(rw_path && !dijp_path)
                {
                        grid[i] =
                             std::exp(-i_*sgn*M_PI*(1.+t))*std::sqrt(1.+t)
                             * std::abs(M_meson*M_meson - 0.25*std::pow(M_tetra+i_*Gamma/2.,2.));

                        weights[i] =
                             w * abs(M_meson*M_meson-0.25*pow(M_tetra+i_*Gamma/2.,2.))
                             * exp(-i_*sgn*M_PI*(1.+t)) * (-i_*sgn*M_PI*sqrt(1.+t) + 1./(2.*sqrt(1.+t)));
                 }
                else if (dijp_path && !rw_path)
                {
                    if(t < 0)
                    {
                        grid[i] =
                                -0.01 * (1. + 500. * (M_tetra - 2.*M_meson)/(2.*M_meson)) * (t + 1.);

                        weights[i] =
                                w * (- 0.01 * (1. + 500. * (M_tetra - 2.*M_meson)/(2.*M_meson) ) );
                    }
                    else
                    {
                        grid[i] =
                                -0.01 * (1. + 500. * (M_tetra - 2.*M_meson)/(2.*M_meson)) * std::pow(6., t)
                                * std::exp(-i_ * M_PI * t*t*t);

                        weights[i] =
                                w * (- 0.01 * (1. + 500. * ((M_tetra - 2.*M_meson)/(2.*M_meson)) ) * std::pow(6.,t)
                                * std::exp(-i_ * M_PI * t*t*t) * ( std::log(6.) - 3. * i_ * M_PI * t*t ) );
                    }

                }
            }
        }

    private:
        cdouble i_;
    };


    template <typename T=Gauleg<double>>
    class Spiral
    {
    public:
        Spiral() = default;

        ~Spiral() = default;

        int Nspiral, Ncutoff;

        bool    rw_path     = false,
                dijp_path   = false;

        double cutoff;

        double M_meson, M_tetra, Gamma;

        vec<cdouble> grid, weights;

        void generate(int Ns, int Nc, double co, double M_meson_, double M_tetra_, double Gamma_)
        {
            Ncutoff = Nc;
            assert(static_cast<double> (Ncutoff/2) == static_cast<double> (Ncutoff/2.));
            Nspiral = Ns;
            cutoff  = co;

            T g;
            g.n_sep =   1;
            g.generate(-1., 1., Nspiral);

            SpiralMap s;
            s.rw_path   = rw_path;
            s.dijp_path = dijp_path;
            s.M_meson   = M_meson_;
            s.M_tetra   = M_tetra_;
            s.Gamma     = Gamma_;
            M_meson     = M_meson_;
            M_tetra     = M_tetra_;
            Gamma       = Gamma_;
            s.uv_cutoff = cutoff;
            s.generate(g);

            T g1;
            double trans = 0.;

            if(!rw_path && !dijp_path)
                trans = std::sqrt(3.) * std::abs(s.M_meson*s.M_meson + 0.25*std::pow(i_*s.M_tetra + s.Gamma/2., 2.));
            else if(rw_path && !dijp_path)
                trans = std::sqrt(2.) * std::abs(s.M_meson*s.M_meson - 0.25*std::pow(s.M_tetra + i_*s.Gamma/2., 2.));
            else if(dijp_path && !rw_path)
                trans = 0.06 * ( 1. + 500. * (M_tetra - 2.*M_meson) / (2. * M_meson) );

            g1.generate(log(trans), 0., Ncutoff/2);

            T g2;
            g2.generate(0., log(cutoff), Ncutoff/2);

            grid.clear();
            weights.clear();

            for(int i=0; i<Nspiral; i++){
                grid.push_back(s.grid[i]);
                weights.push_back(s.weights[i]);
            }
            for(int i=0; i<Ncutoff/2; i++){
                grid.push_back(std::exp(g1.grid[i]));
                weights.push_back(g1.weights[i]*std::exp(g1.grid[i]));
            }
            for(int i=0; i<Ncutoff/2; i++){
                grid.push_back(std::exp(g2.grid[i]));
                weights.push_back(g2.weights[i]*std::exp(g2.grid[i]));
            }

        }

        int N()
        {
            return Nspiral + Ncutoff;
        }

    private:
        static constexpr cdouble i_ = {0., 1.};

    };
}
