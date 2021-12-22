
/*
FILENAME: interpolation.hpp
AUTHOR:   Nico Santowsky
EMAIL:    physics@nsanto.de
DATE:     2021-12-21
LICENSE:  CC BY-NC-SA 4.0
*/

#pragma once

#include <iostream>
#include <cstdio>
#include <vector>
#include <cassert>

using std::cout;
using std::cerr;
using std::endl;

template <typename T> using vec  =  std::vector<T>;

namespace dysonUtils::numerics::interpolation
{

    //********** constructions **********//

    template<typename Tx=double, typename Tf=double>
    Tf      linear_1d(vec<Tx> xgrid, vec<Tf> fgrid, Tx x);


    template<typename Tx=double, typename Tf=double>
    Tf      linear_2d(vec<Tx> xgrid, vec<Tx> ygrid, vec<Tf> fgrid, Tx x, Tx y);


    template<typename Tx=double, typename Tf=double>
    Tf      linear_Nd(unsigned int N, vec<vec<Tx>> grid, vec<Tf> values, vec<Tx> x);



    template<typename Tx=double, typename Tf=double>
    Tf      cubic_hermite_1d(vec<Tx>& grid_x, vec<Tf>& grid_f, Tx x);


    template<typename Tx=double, typename Tf=double>
    Tf      cubic_hermite_2d(vec<Tx>& grid_x, vec<Tx>& grid_y, vec<Tf>& grid_f, Tx x, Tx y);


    template<typename Tx=double, typename Tf=double>
    Tf      rational_1d(vec<Tx>& grid_x, vec<Tf>& grid_f, Tx x);


    template<typename T=double>
    int     binarySearch(vec<T>& grid_x, T x);



    //********** definitions **********//


    inline void help()
    {
        cout    << "----------------------------------------------\n"
                << "------------- HELP FUNCTION ------------------\n"
                << "----------------------------------------------\n\n"
                << "This namespace provides interpolation subroutines for 1D and 2D grids.\n\n"
                << "For 1D grids, there are the following routines:\n"
                << "interpolation::linear_1d( xgrid, fgrid, x )\n"
                << "interpolation::cubic_hermite_1d( xgrid, fgrid, x )\n"
                << "interpolation::rational_1d( xgrid, fgrid, x )\n\n"
                << "For 2D grids, there are:\n"
                << "interpolation::linear_2d( xgrid, ygrid, fgrid, x, y )\n"
                << "interpolation::cubic_hermite_1d( xgrid, ygrid, fgrid, x, y )\n\n"
                << "2D mapping from (superindex) to (i,j) (and vice versa) on an n x m grid goes like\n"
                << "(i,j) -> (i+j*n)." << endl;
    }


    inline int si_nxm(int n, int r, int c)
    {
        return c+n*r;
    }


    template<typename Tx, typename Tf>
    Tf linear_1d(vec<Tx> xgrid, vec<Tf> fgrid, Tx x)
    {
        int ix;
        if      (x < xgrid[0])              ix = 0;
        else if (x>xgrid[xgrid.size()-1])   ix = xgrid.size()-2;
        else                                ix  = binarySearch(xgrid,x);

        return  fgrid[ix]+(x-xgrid[ix])/(xgrid[ix+1]-xgrid[ix])*(fgrid[ix+1]-fgrid[ix]);
    }



    template<typename Tx, typename Tf>
    Tf linear_2d(vec<Tx> xgrid, vec<Tx> ygrid, vec<Tf> fgrid, Tx x, Tx y)
    {
        int ix,iy;
        if      (x < xgrid[0])              ix=0;
        else if (x>xgrid[xgrid.size()-1])   ix=xgrid.size()-2;
        else                                ix = binarySearch(xgrid,x);

        if      (y<ygrid[0])                iy=0;
        else if (y>ygrid[ygrid.size()-1])   iy=ygrid.size()-2;
        else                                iy = binarySearch(ygrid,y);

        int     nx = xgrid.size();
        Tf      d0,d1;

        d0 = fgrid[ix+iy*nx] + (x-xgrid[ix]) / (xgrid[ix+1]-xgrid[ix])
                * (fgrid[(ix+1)+iy*nx]-fgrid[ix+iy*nx]);

        d1 = fgrid[ix+(iy+1)*nx] + (x-xgrid[ix]) / (xgrid[ix+1]-xgrid[ix])
                * (fgrid[(ix+1)+(iy+1)*nx]-fgrid[ix+(iy+1)*nx]);

        return  d0 + (y-ygrid[iy])/(ygrid[iy+1]-ygrid[iy])*(d1-d0);
    }


    template<typename Tx, typename Tf>
    Tf linear_Nd(vec<vec<Tx>> grid, vec<Tf> values, vec<Tx> x)
    {
        int N = grid.size();

        unsigned int n = 1;
        for(int i=0; i<grid.size(); ++i)
        {
            n *= grid[i].size();
        }

        if(values.size() != n)
        {
            cerr << "Interpolation error in " << N << " dimensional interpolation :: dimensions do not match!"
                 << endl;
            assert(false);
        }

        vec<unsigned int> pos(N);

        for(int i=0; i<N; ++i)
        {
            if(x[i]>grid[i][grid[i].size()-1])
                pos[i] = grid[i].size() - 2;
            else
                pos[i] = binarySearch(grid[i],x[i]);
        }

        vec<Tf> cube (pow(2,N));


        for(int j=0; j<pow(2,N); j++)
        {
            vec<bool> bin(N,0);

            unsigned int SI = 0;

            for(int k=0; k<N; ++k)
            {
                int l = j/pow(2,k);
                bin[k] = l-(l/2)*2;

                unsigned int prod = 1;

                for(int m=0; m<k; ++m)
                {
                    prod *= grid[m].size();
                }

                SI += prod*(pos[k] + bin[k]);
            }

            cube[j] = values[SI];
        }

        for(int i=N-1; i>=0; --i)
        {
            vec<int> bin(pow(2,N-1));

            vec<Tf> cube1(pow(2,i));

            for(unsigned int j=0; j<pow(2,i); ++j)
            {
                cube1[j] = cube[2*j] + (cube[1+2*j] - cube[2*j]) * ( x[N-1-i] - grid[N-1-i][pos[N-1-i]] ) /
                        ( grid[N-1-i][pos[N-1-i]+1] - grid[N-1-i][pos[N-1-i]] );
            }

            cube = cube1;
        }

        return cube[0];

    }


    template<typename Tx, typename Tf>
    Tf cubic_hermite_1d(vec<Tx>& grid_x, vec<Tf>& grid_f, Tx x)
    {
        int             ix, nx;
        double          dx;
        vec<Tf>         p(4);

        nx  = grid_x.size();
        ix  = binarySearch(grid_x,x);
        dx  = (x - grid_x[ix]) / (grid_x[ix+1]-grid_x[ix]);

        if(ix == nx-1 || x < grid_x[0])
        {
            //cerr << "[cubic interpolation] error :: out of bounds!" << endl;
            return linear_1d(grid_x, grid_f, x);
        }

        for (int i1=-1; i1<3; i1++)
        {
            p[i1+1] = grid_f[std::max( std::min(ix+i1, nx-1), 0 )];
        }

        if(ix==0)       p[0]=p[0]+grid_f[0]-grid_f[1];
        if(ix==nx-2)    p[3]=p[3]+grid_f[nx-1]-grid_f[nx-2];

        vec<Tx>
                basis   =   {1.,dx,dx*dx,dx*dx*dx};

        vec<float>
                conv    =   {0.,1.,0.,0.,-0.5,0.,0.5,0.,1.,-2.5,2.,-0.5,-0.5,1.5,-1.5,0.5};

        Tf dummy;
        for(int i=0; i<4; i++){
            for(int j=0; j<4; j++){
                dummy   +=  basis[i] * conv[si_nxm(4, i, j)] * p[j];
            }
        }

        return dummy;
    }



    template<typename Tx, typename Tf>
    Tf cubic_hermite_2d(vec<Tx>& grid_x, vec<Tx>& grid_y, vec<Tf>& grid_f, Tx x, Tx y)
    {
        int             ix, iy, nx, ny;
        double          dx, dy;
        vec<Tf>         p(4*4);

        nx  = grid_x.size();
        ny  = grid_y.size();

        ix  = binarySearch(grid_x,x);
        iy  = binarySearch(grid_y,y);

        dx  = (x - grid_x[ix]) / (grid_x[ix+1]-grid_x[ix]);
        dy  = (y - grid_y[iy]) / (grid_y[iy+1]-grid_y[iy]);

        for (int i1=-1; i1<3; i1++){
            for (int i2=-1; i2<3; i2++){
                p[si_nxm(4, i1+1, i2+1)] =
                        grid_f[ si_nxm(grid_x.size(),std::max(std::min(iy+i1,ny-1),0)
                                , std::max(std::min(ix+i2,nx-1),0))];
            }
        }

        for (int i=0; i<4; i++){
            if(ix == 0)     p[si_nxm(4, 0, i)] =
                    p[si_nxm(4, 0, i)] + grid_f[si_nxm(4, 0, i)]    - grid_f[si_nxm(4, 1, i)];
            if(ix == nx-2)  p[si_nxm(4, 3, i)] =
                    p[si_nxm(4, 3, i)] + grid_f[si_nxm(4, nx-1, i)] - grid_f[si_nxm(4, nx-2, i)];
            if(iy == 0)     p[si_nxm(4, i, 0)] =
                    p[si_nxm(4, i, 0)] + grid_f[si_nxm(4, i, 0)]    - grid_f[si_nxm(4, i, 1)];
            if(iy == ny-2)  p[si_nxm(4, i, 3)] =
                    p[si_nxm(4, i, 3)] + grid_f[si_nxm(4, i, nx-1)] - grid_f[si_nxm(4, i, nx-2)];
        }

        vec<Tx>
                prod_x_intermediate(4),prod_y_intermediate(4),
                basis_x =   {1.,dx,dx*dx,dx*dx*dx},
                basis_y =   {1.,dy,dy*dy,dy*dy*dy};

        vec<float>
                conv  =   {0.,1.,0.,0.,-0.5,0.,0.5,0.,1.,-2.5,2.,-0.5,-0.5,1.5,-1.5,0.5};

        vec<Tf>
                py(4);

        for (int j=0; j<4; j++){
            for (int i=0; i<4; i++){
                prod_x_intermediate[j] += basis_x[i]*conv[si_nxm(4, i, j)];
                prod_y_intermediate[j] += basis_y[i]*conv[si_nxm(4, i, j)];
            }
        }

        for (int j=0; j<4; j++){
            for (int i=0; i<4; i++){
                py[j] += prod_x_intermediate[i]*p[si_nxm(4, j, i)];
            }
        }

        Tf dummy;

        for (int i=0; i<4; i++){
            dummy +=  prod_y_intermediate[i]*py[i];
        }

        return dummy;
    }



    template<typename Tx, typename Tf>
    Tf rational_1d(vec<Tx>& grid_x, vec<Tf>& grid_f, Tx x)
    {
        if (grid_x.size() != grid_f.size()){
            cerr << "[rational] interpolation warning :: grid sizes do not match." << endl;
        }

        unsigned int    N = grid_x.size();
        vec<Tf>      a(N);

        a[0] = (grid_f[0]/grid_f[1]-1.)/(grid_x[1]-grid_x[0]);

        for (unsigned int i=1; i<N-1; i++)
        {
            Tf base = a[0]*(grid_x[i+1]-grid_x[0]) / (1.-grid_f[0]/grid_f[i+1]);

            for (unsigned int j=1; j<=i-1; j++)
            {
                base = a[j]*(grid_x[i+1]-grid_x[j]) / (1.+base);
            }

            a[i] = (1.+base) / (grid_x[i]-grid_x[i+1]);

            if(a[i]!=a[i]){
                cerr << "[rational] interpolation error :: interpolation coefficient is NaN!" << endl;
                return 0;
            }
        }

        Tf base_ = 1.;

        for(int i=N-2; i>=0; i--)
        {
            base_ = 1.+a[i]*(x-grid_x[i])/base_;
        }

        return grid_f[0]/base_;
    }





    template<typename T>
    int binarySearch(vec<T>& grid_x, T x)
    {
        if(x > grid_x[grid_x.size()-1]) return grid_x.size()-1;

        unsigned int    i,
                        j = 0;

        for(i=0; i<grid_x.size(); i++)
        {
            if (x >= grid_x[i] && x <= grid_x[i+1])
            {
                j=i;
                break;
            }
        }

        return j;
    }


}
