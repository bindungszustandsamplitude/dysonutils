
/*
FILENAME: eigenvalues.hpp
AUTHOR:   Nico Santowsky
EMAIL:    physics@nsanto.de
DATE:     2021-12-21
LICENSE:  CC BY-NC-SA 4.0
*/

#pragma once

#include <iostream>
#include <cmath>
#include <complex>
#include <vector>
#include <cassert>

template <typename T> using vec   = std::vector<T>;
template <typename T> using vec2  = std::vector<std::vector<T>>;

using std::cout;
using std::endl;

namespace dysonUtils::numerics::eigenvalues
{

    template<typename T=double>
    class PowerMethod
    {
    public:
        PowerMethod(vec<T> mat) : matrix(mat) {N = 10000;};

        void calculate(double precision);

        vec<T>  matrix;
        vec<T>  solution,eigenvalues;
        T       eigenvalue;
        int     N;
    };

    template <typename T>
    void PowerMethod<T>::calculate(double precision)    // precision is the convergence criterion
    {
        assert(sqrt((float)matrix.size()) == (float)sqrt(matrix.size()));
                                                        // ensures that matrix is square
        solution.resize(sqrt(matrix.size()),1.);

        bool conv=true;

        int counter = 0;

        while(conv)
        {
            T err       = 0.;
            eigenvalue  = 0.;

            eigenvalues.resize(solution.size());
            vec<T> solution_ = solution;

            T norm = 0.;

            for(size_t i=0; i<solution.size(); i++)
            {
                T dummy=0.;
                for(size_t j=0; j<solution.size(); j++)
                {
                    dummy += matrix[j+i*solution.size()]*solution[j];
                }

                solution_[i]    =   dummy;
                eigenvalues[i]  =   solution_[i]/solution[i];
                eigenvalue      +=  solution_[i]/solution[i]/(T)solution.size();
            }
            norm = solution_[0];

            for(size_t i=0; i<solution_.size(); i++)
            {
                solution_[i] /= norm;            // normalization of solution vector
                err += std::abs(solution[i]-solution_[i]);  // error defined by sum over absolute changes

                solution[i] = solution_[i];
            }

            counter++;

            if(counter == N)
            {
                cout << "[power method] :: timeout. returning 0." << endl;
                solution.clear();
                solution.resize(solution_.size(),0.);
                eigenvalue = 0.;
            }

            conv = std::abs(err) > precision && counter < N;
        }



    }
}
