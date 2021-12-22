
/*
FILENAME: pade.hpp
AUTHOR:   Nico Santowsky
EMAIL:    physics@nsanto.de
DATE:     2021-12-21
LICENSE:  CC BY-NC-SA 4.0
*/

#pragma once

#include <cmath>
#include <iostream>
#include <string>
#include <complex>
#include <vector>
#include <fstream>

using std::vector;

typedef std::vector<std::vector<std::complex<double>>>  vvcdouble;
typedef std::vector<std::complex<double>>               vcdouble;
typedef std::complex<double>                            cdouble;
typedef std::vector<double>                             vdouble;

template <typename T> using vec = std::vector<T>;

template <typename T=double>
class pade
{

public:
    pade();

    ~pade() = default;

    void readfile(std::string s, int N1, int N2, int no_lines, bool squareroot);

    void readfile_cmplx(string sr, string sc, int no_lines);

    void exe(unsigned int n);

    T get(T x);

    void getpole();

    vector<vector<T>> data,data_;

    vector<T> poles,residues;

    int global_counter;

    T pole_position,pole_error;

    double min,max;

    void get_mass(T guess_, unsigned int n_points, unsigned int n_calculations);

private:

    vector<T> coeff;

    T residue,pole,guess;

    double d_dummy;

    bool isin(int i, vec<int> v);

    cdouble i_;

};

template <typename T>
pade<T>::pade() {min=0.;max=100.;i_.real(0.);i_.imag(1.);}


template <typename T>
void pade<T>::get_mass(T guess_, unsigned int n_points, unsigned int n_calculations)
{
    guess = guess_;
    global_counter = 0;
    for(unsigned int i=0; i<n_calculations; i++)
    {
        exe(n_points);
        getpole();
        if(std::abs(residue) > 1.e-2 && std::real(pole) > min && std::real(pole) < max)
        {
            poles.push_back(pole);
            residues.push_back(residue);
        }
        global_counter++;
    }

    T expect=0.,dev=0.;

    for(unsigned int i=0; i<poles.size(); i++)
    {
        expect += poles[i]/(T)poles.size();
    }
    for(unsigned int i=0; i<poles.size(); i++)
    {
        dev += (poles[i]-expect)*(poles[i]-expect)/(double)poles.size();
    }

    pole_position = expect;
    pole_error = sqrt(dev);
}

template <typename T>
void pade<T>::getpole()
{
    T   x=guess,eps=1.,diff;

    int count=0;

    while(abs(eps)>1.e-10 && count < 100)
    {
        diff = (1./get(x+1.e-6)-1./get(x-1.e-6))/(2.e-6);
        x = x - 1./(get(x)*diff);
        eps = 1./get(x);
        count++;
        pole = 1.e+12;
    }

    /*
    double step = 0.01;
    while(abs(eps)>1.e-10 && count < 10000)
    {
        double y   = 1./get(x);
        x   += step;
        double yp  = 1./get(x);
        if(y/abs(y) != yp/abs(yp)){
            eps = 1./get(x-step/2.);
            x -= step;
            step=step/10.;
        }
        count += 1;
    }
     */

    pole    = x;
    residue = 1.e-5*get(x+1.e-5);
}


template <typename T>
T pade<T>::get (T x)
{
    T base_ = 1.;

    for(int i=data_[0].size()-2; i>=0; i--)
    {
        base_ = 1.+coeff[i]*(x-data_[0][i])/base_;
    }

    return data_[1][0]/base_;
}

template <typename T>
void pade<T>::exe(unsigned int n)       // executes the pade routine (generates coefficients of rational fct)
{                                       // chooses n random points of the input values
    unsigned int    N = data[0].size();
    vec<int>        chosen;

    data_.clear();
    data_.resize(2);
    int counter=0;

    while(chosen.size()<n)
    {
        srand(time(nullptr) + counter + global_counter * 100);
        int j = rand() % N;
        if(!isin(j,chosen)) chosen.push_back(j);
        counter++;
    }

    for (unsigned int i=0; i<n; i++)
    {
        data_[0].push_back(data[0][chosen[i]]);
        data_[1].push_back(data[1][chosen[i]]);
    }

    coeff.resize(n);

    coeff[0] = (data_[1][0]/data_[1][1]-1.)/(data_[0][1]-data_[0][0]);

    for (unsigned int i=1; i<n-1; i++)
    {
        T base = coeff[0]*(data_[0][i+1]-data_[0][0]) / (1.-data_[1][0]/data_[1][i+1]);

        for (unsigned int j=1; j<=i-1; j++)
        {
            base = coeff[j]*(data_[0][i+1]-data_[0][j]) / (1.+base);
        }

        coeff[i] = (1.+base) / (data_[0][i]-data_[0][i+1]);

        if(coeff[i]!=coeff[i]){
            cerr << "[rational] interpolation error :: interpolation coefficient is NaN!" << endl;
            assert(false);
        }
    }
}


template <typename T>
void pade<T>::readfile(string s, int N1, int N2, int no_lines, bool squareroot){
    data.resize(2);
    std::ifstream read;
    read.open(s);

    if(squareroot == true)
    {
        for(int i=0; i<no_lines; i++)
        {
            for(int j=1; j<N1; ++j) read >> d_dummy;
            read >> d_dummy;
            data[0].push_back(sqrt(-d_dummy));
            for(int j=0; j<N2-N1; j++){
                read >> d_dummy;
            }
            data[1].push_back(1./(log(d_dummy)));
            read.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
    else if (squareroot == false)
    {
        for(int i=0; i<no_lines; i++)
        {
            for(int j=1; j<N1; ++j) read >> d_dummy;
            read >> d_dummy;
            data[0].push_back(d_dummy);
            for(int j=0; j<N2-N1; j++) read >> d_dummy;
            data[1].push_back(1./(log(d_dummy)));
            read.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }

    read.close();
}

template <typename T>
void pade<T>::readfile_cmplx(string sr, string sc, int no_lines){
    data.resize(2);
    std::ifstream readr, readc;
    readr.open(sr);
    readc.open(sc);

    double d_dummy_im;

    for(int i=0; i<no_lines; i++)
    {
        readr >> d_dummy;
        readr >> d_dummy_im;
        readc >> d_dummy;
        readc >> d_dummy_im;

        if(d_dummy > min && d_dummy < max) {
            data[0].push_back(d_dummy + i_ * d_dummy_im);
            readr >> d_dummy;
            readc >> d_dummy_im;
            data[1].push_back(1. / log(d_dummy + i_ * d_dummy_im));
        }
        readr.ignore(100000,'\n');
        readc.ignore(100000,'\n');
    }


    readr.close();
    readc.close();
}

template <typename T>
bool pade<T>::isin(int i, vec<int> v)
{
    int N=v.size();
    bool b=false;
    for(int j=0; j<N && !b; j++)
    {
        if(v[j]==i) b=true;
    }
    return b;
}
