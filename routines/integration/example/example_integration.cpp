#include <iostream>
#include <cstdio>
#include <vector>
#include <fstream>
#include <complex>
#include <sys/stat.h>

#include "integration.h"

using std::cout;
using std::endl;
using std::ofstream;

template <typename T>
using vec = std::vector<T>;

using namespace dysonUtils;

int main()
{
    mkdir("./data",0777);

    ofstream write;


    // SIMPLE LINEAR GRID

    numerics::integration::Linear<double> linear;

    linear.n_total  =   64;     // 64 points in total
    linear.generate(-1.,1.);    // generating grid and weights for boundaries -1 to 1.

    write.open("./data/linear.txt");
    for (unsigned int i=0; i<linear.grid.size(); i++)
    {
        write << std::scientific << linear.grid[i] << "\t" << linear.weights[i] << endl;
    }
    write.close();


    // SIMPLE GAULEG GRID

    numerics::integration::Gauleg<double> gauleg;

    gauleg.n_sep  =   1;     // 1 separation
    gauleg.generate(-1.,1.,128);    // generating grid and weights for boundaries -1 to 1.

    write.open("./data/gauleg_simple.txt");
    for (unsigned int i=0; i<gauleg.grid.size(); i++)
    {
        write << std::scientific << gauleg.grid[i] << "\t" << gauleg.weights[i] << endl;
    }
    write.close();


    // MULTIPLE GAULEG GRID

    numerics::integration::Gauleg<double> gauleg_2;

    gauleg_2.n_sep    =   4; // 4 separations
    gauleg_2.generate(-1.,1.,128);

    write.open("./data/gauleg_multiple.txt");
    for (unsigned int i=0; i<gauleg_2.grid.size(); i++)
    {
        write << std::scientific << gauleg_2.grid[i] << "\t" << gauleg_2.weights[i] << endl;
    }
    write.close();


    // GAUCHE (GAUSS-CHEBYSHEV) GRID (for angular integration)

    numerics::integration::Gauche<double> gauche;

    gauche.n_total    =   64;
    gauche.generate(-1.,1.);

    write.open("./data/gauche.txt");
    for (unsigned int i=0; i<gauche.grid.size(); i++)
    {
        write << std::scientific << gauche.grid[i] << "\t" << gauche.weights[i] << endl;
    }
    write.close();


    // GENERATING PLOT FILE FOR GNUPLOT ("load plot.gnu")

    write.open("./data/plot.gnu");
        write   << "reset\n"
                << "plot 'linear.txt', 'gauleg_simple.txt', 'gauleg_multiple.txt', 'gauche.txt'"
                << endl;
    write.close();


    cout    << "done.\n"
            << "--> output and gnuplot script is located in ./data/"
            << "plot with gnuplot; load \"plot.gnu\""
            << endl;


    // the following is an example for the fourvector, but it simply uses the routines showed above, therefore
    // there are no printouts necessary

    numerics::integration::FourVectorIntegration<double> fourvector;

    fourvector.n_radial             =   64;     // # radial grid points (Gauss-Legendre, logarithmic w/ backtrafo)
    fourvector.n_angular_z          =   8;      // # angular grid points for z (Gauss-Chebyshev)
    fourvector.n_angular_y          =   8;      // # angular grid points for y (Gauss-Legendre)
    fourvector.n_angular_phi        =   8;      // # angular grid points for phi (Gauss-Legendre)

    fourvector.upper_bound_radial   =   1.e+6;  // upper bound for radial integral
    fourvector.lower_bound_radial   =   1.e-6;  // lower bound for radial integral

    fourvector.generate();                      // generation of all grids and weights

    /*
    the grids/weights can be accessed by
    fourvector
                .grid_radial        / .weights_radial
                .grid_angular_z     / .weights_angular_z
                .grid_angular_y     / .weights_angular_y
                .grid_angular_phi   / .weights_angular_phi

    Note that for z integration, one has to drop the Jacobian
    */


}
