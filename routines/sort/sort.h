
/*
FILENAME: sort.hpp
AUTHOR:   Nico Santowsky
EMAIL:    physics@nsanto.de
DATE:     2021-12-21
LICENSE:  CC BY-NC-SA 4.0
*/

#pragma once

#include <cmath>
#include <vector>
#include <complex>

using std::vector;
using std::complex;

template <typename T>
void sort(vector<T>& vec)
{
    for (unsigned int i=0; i<vec.size()-1; i++)
    {
        for (int j=i; j>=0; j--)
        {
            if(vec[j]<vec[j+1])
            {
                T   d   = vec[j],
                    d1  = vec[j+1];
                vec[j]    = d1;
                vec[j+1]  = d;
            }
            else
            {
                j = -1;
            }
        }
    }
}

template <typename T>
void sort_cmplx(vector<complex<T>>& vec)
{
    if (vec.size()!=0){
    for (unsigned int i=0; i<vec.size()-1; i++)
    {
        for (int j=i; j>=0; j--)
        {
            if(std::real(vec[j])<std::real(vec[j+1]))
            {
                complex<T>  d   = vec[j],
                            d1  = vec[j+1];
                vec[j]    = d1;
                vec[j+1]  = d;
            }
            else
            {
                j = -1;
            }
        }
    }
    }
}
