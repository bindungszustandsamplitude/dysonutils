#include <cstdio>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <fstream>
#include <sys/stat.h>
#include "../interpolation.h"

using std::cout;
using std::endl;
using std::ofstream;
using std::vector;

using namespace dysonUtils;

int main (int argc, char* argv[])
{
    cout << "\nthis program creates data and gnuplot scripts in ./interpolation_data/." << endl;

    unsigned int N = 100;                   // grid size of interpolation

    vector<double> x_1d = {0.,1.,2.,3.,4.};
    vector<double> f_1d = {1.,3.,4.,2.,3.};

    mkdir("./interpolation_data",0777);

    ofstream write;

    write.open("./interpolation_data/raw_1d.txt");
        for(unsigned i=0; i<5; i++){
            write << std::scientific
                    << x_1d[i] << "\t"
                    << f_1d[i] << endl;
        }
    write.close();

    write.open("./interpolation_data/interpolation_1d.txt");
        for(unsigned int i=0; i<N; i++)
        {
            double x = 4.*(double)i/(double)N;
            write << std::scientific
                    << x << "\t"
                    << numerics::interpolation::linear_1d(x_1d,f_1d,x) << "\t"
                    << numerics::interpolation::cubic_hermite_1d(x_1d,f_1d,x) << "\t"
                    << numerics::interpolation::rational_1d(x_1d,f_1d,x) << endl;
        }
    write.close();

    vector<double> x1_2d = {-2.,-1.,0.,1.,2.};
    vector<double> x2_2d = {-2.,-1.,0.,1.,2.};
    vector<double> f_2d =   {0.,1.,2.5,3.,4.5,
                              5.,4.,3.,3.,1.,
                              1.,3.,2.,4.,5.,
                              5.,3.,4.,2.,1.,
                              -1.,-2.,0.,3.,1.};

    write.open("./interpolation_data/raw_2d.txt");
    for(unsigned i=0; i<5; i++){
        for(unsigned j=0; j<5; j++){
            write << std::scientific
                    << x1_2d[i] << "\t"
                    << x2_2d[j] << "\t"
                    << f_2d[i+x1_2d.size()*j] << endl;
        }
    }
    write.close();

    write.open("./interpolation_data/interpolation_2d.txt");
    for(unsigned int i=0; i<N; i++)
    {
        for(unsigned int j=0; j<N; j++)
        {
            double  x_ = -2.+4.*(double)i/(double)N,
                    y_ = -2.+4.*(double)j/(double)N;
            write << std::scientific
                    << x_ << "\t"
                    << y_ << "\t"
                    << numerics::interpolation::linear_2d(x1_2d,x2_2d,f_2d,x_,y_) << "\t"
                    << numerics::interpolation::cubic_hermite_2d(x1_2d,x2_2d,f_2d,x_,y_) << endl;
        }
        write << endl;
    }
    write.close();

    write.open("./interpolation_data/plot_1d.gnu");

    write   << "reset\n"
            << "se gr\n"
            << "se xr [0:4]\n"
            << "se yr [0:5]\n"
            << "plot"
            << "'raw_1d.txt' u 1:2 pt 6 ps 1.5 lw 1.5 t'input points',"
            << "'interpolation_1d.txt' u 1:2 w l t'linear interpolation',"
            << "''u 1:3 w l t'cubic interpolation',"
            << "''u 1:4 w l t'rational interpolation'"
            << endl;

    write.close();

    write.open("./interpolation_data/plot_2d.gnu");

    write   << "reset\n"
            << "se gr\n"
            << "splot"
            << "'raw_2d.txt' u 1:2:3 pt 6 ps 1.5 lw 1.5 t'input points',"
            << "'interpolation_2d.txt' u 1:2:3 w l t'linear interpolation',"
            << "''u 1:2:4 w l t'cubic interpolation',"
            << endl;

    write.close();

    write.open("./interpolation_data/README");

    write   << "Load the files 'plot_1d.gnu' and 'plot_2d.gnu' in gnuplot."
            << endl;

    write.close();

    cout << "\ndone." << endl;

    return 0;
}
