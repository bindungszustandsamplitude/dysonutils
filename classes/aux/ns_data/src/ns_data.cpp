
/*
FILENAME: ns_data.cpp
AUTHOR:   Nico Santowsky
EMAIL:    physics@nsanto.de
DATE:     2021-12-21
LICENSE:  Apache License 2.0
*/

#include "./include/ns_data.hpp"

#include <cstdio>
#include <iostream>
#include <cmath>
#include <fstream>
#include <vector>
#include <complex>

void ns_data::read()
{
    double dummy;
    std::fstream read;

    read.open("/home/nico/nico_research/programs/classes/bound_states/ns_data/src/data/amplitudes/mesons/pseudoscalar/7950_7950.txt", std::ios::in);
    fgrid_7950_7950.resize(4);
    for(int i=0; i<60; i++)
    {
        read >> dummy;
        pgrid_7950_7950.push_back(dummy);
        read >> dummy;
        fgrid_7950_7950[0].push_back(dummy);
        read >> dummy;
        fgrid_7950_7950[1].push_back(dummy);
        read >> dummy;
        fgrid_7950_7950[2].push_back(dummy);
        read >> dummy;
        fgrid_7950_7950[3].push_back(dummy);
    }
    read.close();

    read.open("/home/nico/nico_research/programs/classes/bound_states/ns_data/src/data/amplitudes/mesons/pseudoscalar/7950_6500.txt");
    fgrid_7950_6500.resize(4);
    for(int i=0; i<60; i++)
    {
        read >> dummy;
        pgrid_7950_6500.push_back(dummy);
        read >> dummy;
        fgrid_7950_6500[0].push_back(dummy);
        read >> dummy;
        fgrid_7950_6500[1].push_back(dummy);
        read >> dummy;
        fgrid_7950_6500[2].push_back(dummy);
        read >> dummy;
        fgrid_7950_6500[3].push_back(dummy);
    }
    read.close();

    read.open("/home/nico/nico_research/programs/classes/bound_states/ns_data/src/data/amplitudes/mesons/pseudoscalar/7950_5000.txt");
    fgrid_7950_5000.resize(4);
    for(int i=0; i<60; i++)
    {
        read >> dummy;
        pgrid_7950_5000.push_back(dummy);
        read >> dummy;
        fgrid_7950_5000[0].push_back(dummy);
        read >> dummy;
        fgrid_7950_5000[1].push_back(dummy);
        read >> dummy;
        fgrid_7950_5000[2].push_back(dummy);
        read >> dummy;
        fgrid_7950_5000[3].push_back(dummy);
    }
    read.close();

    read.open("/home/nico/nico_research/programs/classes/bound_states/ns_data/src/data/amplitudes/mesons/pseudoscalar/7950_3500.txt");
    fgrid_7950_3500.resize(4);
    for(int i=0; i<60; i++)
    {
        read >> dummy;
        pgrid_7950_3500.push_back(dummy);
        read >> dummy;
        fgrid_7950_3500[0].push_back(dummy);
        read >> dummy;
        fgrid_7950_3500[1].push_back(dummy);
        read >> dummy;
        fgrid_7950_3500[2].push_back(dummy);
        read >> dummy;
        fgrid_7950_3500[3].push_back(dummy);
    }
    read.close();

    fgrid_7950_0037.resize(4);
    fgrid_7950_0200.resize(4);
    fgrid_7950_0500.resize(4);
    fgrid_7950_0855.resize(4);
    fgrid_7950_1500.resize(4);
    fgrid_7950_2100.resize(4);

    pgrid_7950_0037 = pgrid_7950_7950;
    pgrid_7950_0200 = pgrid_7950_7950;
    pgrid_7950_0500 = pgrid_7950_7950;
    pgrid_7950_0855 = pgrid_7950_7950;
    pgrid_7950_1500 = pgrid_7950_7950;
    pgrid_7950_2100 = pgrid_7950_7950;

    double pwr_p = 5.0;

    vvcdouble a_grid;
    a_grid.resize(4);
    for(int i=0; i<60; i++)
    {
        // implementation of powers of two to come close to the behavior of the eigenvalue curves for sinking masses...
        a_grid[0].push_back((fgrid_7950_3500[0][i] - fgrid_7950_7950[0][i])/(pow(0.3500 - 0.7950,pwr_p)));
        a_grid[1].push_back((fgrid_7950_3500[1][i] - fgrid_7950_7950[1][i])/(pow(0.3500 - 0.7950,pwr_p)));
        a_grid[2].push_back((fgrid_7950_3500[2][i] - fgrid_7950_7950[2][i])/(pow(0.3500 - 0.7950,pwr_p)));
        a_grid[3].push_back((fgrid_7950_3500[3][i] - fgrid_7950_7950[3][i])/(pow(0.3500 - 0.7950,pwr_p)));

        fgrid_7950_2100[0].push_back(fgrid_7950_7950[0][i]+a_grid[0][i]*pow(0.210-0.795,pwr_p));
        fgrid_7950_2100[1].push_back(fgrid_7950_7950[1][i]+a_grid[1][i]*pow(0.210-0.795,pwr_p));
        fgrid_7950_2100[2].push_back(fgrid_7950_7950[2][i]+a_grid[2][i]*pow(0.210-0.795,pwr_p));
        fgrid_7950_2100[3].push_back(fgrid_7950_7950[3][i]+a_grid[3][i]*pow(0.210-0.795,pwr_p));

        fgrid_7950_1500[0].push_back(fgrid_7950_7950[0][i]+a_grid[0][i]*pow(0.150-0.795,pwr_p));
        fgrid_7950_1500[1].push_back(fgrid_7950_7950[1][i]+a_grid[1][i]*pow(0.150-0.795,pwr_p));
        fgrid_7950_1500[2].push_back(fgrid_7950_7950[2][i]+a_grid[2][i]*pow(0.150-0.795,pwr_p));
        fgrid_7950_1500[3].push_back(fgrid_7950_7950[3][i]+a_grid[3][i]*pow(0.150-0.795,pwr_p));

        fgrid_7950_0855[0].push_back(fgrid_7950_7950[0][i]+a_grid[0][i]*pow(0.0855-0.795,pwr_p));
        fgrid_7950_0855[1].push_back(fgrid_7950_7950[1][i]+a_grid[1][i]*pow(0.0855-0.795,pwr_p));
        fgrid_7950_0855[2].push_back(fgrid_7950_7950[2][i]+a_grid[2][i]*pow(0.0855-0.795,pwr_p));
        fgrid_7950_0855[3].push_back(fgrid_7950_7950[3][i]+a_grid[3][i]*pow(0.0855-0.795,pwr_p));

        fgrid_7950_0500[0].push_back(fgrid_7950_7950[0][i]+a_grid[0][i]*pow(0.050-0.795,pwr_p));
        fgrid_7950_0500[1].push_back(fgrid_7950_7950[1][i]+a_grid[1][i]*pow(0.050-0.795,pwr_p));
        fgrid_7950_0500[2].push_back(fgrid_7950_7950[2][i]+a_grid[2][i]*pow(0.050-0.795,pwr_p));
        fgrid_7950_0500[3].push_back(fgrid_7950_7950[3][i]+a_grid[3][i]*pow(0.050-0.795,pwr_p));

        fgrid_7950_0200[0].push_back(fgrid_7950_7950[0][i]+a_grid[0][i]*pow(0.0200-0.795,pwr_p));
        fgrid_7950_0200[1].push_back(fgrid_7950_7950[1][i]+a_grid[1][i]*pow(0.0200-0.795,pwr_p));
        fgrid_7950_0200[2].push_back(fgrid_7950_7950[2][i]+a_grid[2][i]*pow(0.0200-0.795,pwr_p));
        fgrid_7950_0200[3].push_back(fgrid_7950_7950[3][i]+a_grid[3][i]*pow(0.0200-0.795,pwr_p));

        fgrid_7950_0037[0].push_back(fgrid_7950_7950[0][i]+a_grid[0][i]*pow(0.0037-0.795,pwr_p));
        fgrid_7950_0037[1].push_back(fgrid_7950_7950[1][i]+a_grid[1][i]*pow(0.0037-0.795,pwr_p));
        fgrid_7950_0037[2].push_back(fgrid_7950_7950[2][i]+a_grid[2][i]*pow(0.0037-0.795,pwr_p));
        fgrid_7950_0037[3].push_back(fgrid_7950_7950[3][i]+a_grid[3][i]*pow(0.0037-0.795,pwr_p));

    }



// VECTOR MESONS NOW

    read.open("/home/nico/nico_research/programs/classes/bound_states/ns_data/src/data/amplitudes/mesons/vector/7950_7950.txt", std::ios::in);
    fgrid_7950_7950_v.resize(8);
    for(int i=0; i<60; i++)
    {
        read >> dummy;
        pgrid_7950_7950_v.push_back(dummy);
        read >> dummy;
        fgrid_7950_7950_v[0].push_back(dummy);
        read >> dummy;
        fgrid_7950_7950_v[1].push_back(dummy);
        read >> dummy;
        fgrid_7950_7950_v[2].push_back(dummy);
        read >> dummy;
        fgrid_7950_7950_v[3].push_back(dummy);
        read >> dummy;
        fgrid_7950_7950_v[4].push_back(dummy);
        read >> dummy;
        fgrid_7950_7950_v[5].push_back(dummy);
        read >> dummy;
        fgrid_7950_7950_v[6].push_back(dummy);
        read >> dummy;
        fgrid_7950_7950_v[7].push_back(dummy);
    }
    read.close();

    read.open("/home/nico/nico_research/programs/classes/bound_states/ns_data/src/data/amplitudes/mesons/vector/6500_6500.txt", std::ios::in);
    fgrid_6500_6500_v.resize(8);
    for(int i=0; i<60; i++)
    {
        read >> dummy;
        pgrid_6500_6500_v.push_back(dummy);
        read >> dummy;
        fgrid_6500_6500_v[0].push_back(dummy);
        read >> dummy;
        fgrid_6500_6500_v[1].push_back(dummy);
        read >> dummy;
        fgrid_6500_6500_v[2].push_back(dummy);
        read >> dummy;
        fgrid_6500_6500_v[3].push_back(dummy);
        read >> dummy;
        fgrid_6500_6500_v[4].push_back(dummy);
        read >> dummy;
        fgrid_6500_6500_v[5].push_back(dummy);
        read >> dummy;
        fgrid_6500_6500_v[6].push_back(dummy);
        read >> dummy;
        fgrid_6500_6500_v[7].push_back(dummy);
    }
    read.close();

    read.open("/home/nico/nico_research/programs/classes/bound_states/ns_data/src/data/amplitudes/mesons/vector/5000_5000.txt", std::ios::in);
    fgrid_5000_5000_v.resize(8);
    for(int i=0; i<60; i++)
    {
        read >> dummy;
        pgrid_5000_5000_v.push_back(dummy);
        read >> dummy;
        fgrid_5000_5000_v[0].push_back(dummy);
        read >> dummy;
        fgrid_5000_5000_v[1].push_back(dummy);
        read >> dummy;
        fgrid_5000_5000_v[2].push_back(dummy);
        read >> dummy;
        fgrid_5000_5000_v[3].push_back(dummy);
        read >> dummy;
        fgrid_5000_5000_v[4].push_back(dummy);
        read >> dummy;
        fgrid_5000_5000_v[5].push_back(dummy);
        read >> dummy;
        fgrid_5000_5000_v[6].push_back(dummy);
        read >> dummy;
        fgrid_5000_5000_v[7].push_back(dummy);
    }
    read.close();

    read.open("/home/nico/nico_research/programs/classes/bound_states/ns_data/src/data/amplitudes/mesons/vector/3500_3500.txt", std::ios::in);
    fgrid_3500_3500_v.resize(8);
    for(int i=0; i<60; i++)
    {
        read >> dummy;
        pgrid_3500_3500_v.push_back(dummy);
        read >> dummy;
        fgrid_3500_3500_v[0].push_back(dummy);
        read >> dummy;
        fgrid_3500_3500_v[1].push_back(dummy);
        read >> dummy;
        fgrid_3500_3500_v[2].push_back(dummy);
        read >> dummy;
        fgrid_3500_3500_v[3].push_back(dummy);
        read >> dummy;
        fgrid_3500_3500_v[4].push_back(dummy);
        read >> dummy;
        fgrid_3500_3500_v[5].push_back(dummy);
        read >> dummy;
        fgrid_3500_3500_v[6].push_back(dummy);
        read >> dummy;
        fgrid_3500_3500_v[7].push_back(dummy);
    }
    read.close();

    read.open("/home/nico/nico_research/programs/classes/bound_states/ns_data/src/data/amplitudes/mesons/vector/2100_2100.txt", std::ios::in);
    fgrid_2100_2100_v.resize(8);
    for(int i=0; i<60; i++)
    {
        read >> dummy;
        pgrid_2100_2100_v.push_back(dummy);
        read >> dummy;
        fgrid_2100_2100_v[0].push_back(dummy);
        read >> dummy;
        fgrid_2100_2100_v[1].push_back(dummy);
        read >> dummy;
        fgrid_2100_2100_v[2].push_back(dummy);
        read >> dummy;
        fgrid_2100_2100_v[3].push_back(dummy);
        read >> dummy;
        fgrid_2100_2100_v[4].push_back(dummy);
        read >> dummy;
        fgrid_2100_2100_v[5].push_back(dummy);
        read >> dummy;
        fgrid_2100_2100_v[6].push_back(dummy);
        read >> dummy;
        fgrid_2100_2100_v[7].push_back(dummy);
    }
    read.close();

    read.open("/home/nico/nico_research/programs/classes/bound_states/ns_data/src/data/amplitudes/mesons/vector/1500_1500.txt", std::ios::in);
    fgrid_1500_1500_v.resize(8);
    for(int i=0; i<60; i++)
    {
        read >> dummy;
        pgrid_1500_1500_v.push_back(dummy);
        read >> dummy;
        fgrid_1500_1500_v[0].push_back(dummy);
        read >> dummy;
        fgrid_1500_1500_v[1].push_back(dummy);
        read >> dummy;
        fgrid_1500_1500_v[2].push_back(dummy);
        read >> dummy;
        fgrid_1500_1500_v[3].push_back(dummy);
        read >> dummy;
        fgrid_1500_1500_v[4].push_back(dummy);
        read >> dummy;
        fgrid_1500_1500_v[5].push_back(dummy);
        read >> dummy;
        fgrid_1500_1500_v[6].push_back(dummy);
        read >> dummy;
        fgrid_1500_1500_v[7].push_back(dummy);
    }
    read.close();

    read.open("/home/nico/nico_research/programs/classes/bound_states/ns_data/src/data/amplitudes/mesons/vector/0855_0855.txt", std::ios::in);
    fgrid_0855_0855_v.resize(8);
    for(int i=0; i<60; i++)
    {
        read >> dummy;
        pgrid_0855_0855_v.push_back(dummy);
        read >> dummy;
        fgrid_0855_0855_v[0].push_back(dummy);
        read >> dummy;
        fgrid_0855_0855_v[1].push_back(dummy);
        read >> dummy;
        fgrid_0855_0855_v[2].push_back(dummy);
        read >> dummy;
        fgrid_0855_0855_v[3].push_back(dummy);
        read >> dummy;
        fgrid_0855_0855_v[4].push_back(dummy);
        read >> dummy;
        fgrid_0855_0855_v[5].push_back(dummy);
        read >> dummy;
        fgrid_0855_0855_v[6].push_back(dummy);
        read >> dummy;
        fgrid_0855_0855_v[7].push_back(dummy);
    }
    read.close();

    read.open("/home/nico/nico_research/programs/classes/bound_states/ns_data/src/data/amplitudes/mesons/vector/0500_0500.txt", std::ios::in);
    fgrid_0500_0500_v.resize(8);
    for(int i=0; i<60; i++)
    {
        read >> dummy;
        pgrid_0500_0500_v.push_back(dummy);
        read >> dummy;
        fgrid_0500_0500_v[0].push_back(dummy);
        read >> dummy;
        fgrid_0500_0500_v[1].push_back(dummy);
        read >> dummy;
        fgrid_0500_0500_v[2].push_back(dummy);
        read >> dummy;
        fgrid_0500_0500_v[3].push_back(dummy);
        read >> dummy;
        fgrid_0500_0500_v[4].push_back(dummy);
        read >> dummy;
        fgrid_0500_0500_v[5].push_back(dummy);
        read >> dummy;
        fgrid_0500_0500_v[6].push_back(dummy);
        read >> dummy;
        fgrid_0500_0500_v[7].push_back(dummy);
    }
    read.close();

    read.open("/home/nico/nico_research/programs/classes/bound_states/ns_data/src/data/amplitudes/mesons/vector/0200_0200.txt", std::ios::in);
    fgrid_0200_0200_v.resize(8);
    for(int i=0; i<60; i++)
    {
        read >> dummy;
        pgrid_0200_0200_v.push_back(dummy);
        read >> dummy;
        fgrid_0200_0200_v[0].push_back(dummy);
        read >> dummy;
        fgrid_0200_0200_v[1].push_back(dummy);
        read >> dummy;
        fgrid_0200_0200_v[2].push_back(dummy);
        read >> dummy;
        fgrid_0200_0200_v[3].push_back(dummy);
        read >> dummy;
        fgrid_0200_0200_v[4].push_back(dummy);
        read >> dummy;
        fgrid_0200_0200_v[5].push_back(dummy);
        read >> dummy;
        fgrid_0200_0200_v[6].push_back(dummy);
        read >> dummy;
        fgrid_0200_0200_v[7].push_back(dummy);
    }
    read.close();

    read.open("/home/nico/nico_research/programs/classes/bound_states/ns_data/src/data/amplitudes/mesons/vector/0037_0037.txt", std::ios::in);
    fgrid_0037_0037_v.resize(8);
    for(int i=0; i<60; i++)
    {
        read >> dummy;
        pgrid_0037_0037_v.push_back(dummy);
        read >> dummy;
        fgrid_0037_0037_v[0].push_back(dummy);
        read >> dummy;
        fgrid_0037_0037_v[1].push_back(dummy);
        read >> dummy;
        fgrid_0037_0037_v[2].push_back(dummy);
        read >> dummy;
        fgrid_0037_0037_v[3].push_back(dummy);
        read >> dummy;
        fgrid_0037_0037_v[4].push_back(dummy);
        read >> dummy;
        fgrid_0037_0037_v[5].push_back(dummy);
        read >> dummy;
        fgrid_0037_0037_v[6].push_back(dummy);
        read >> dummy;
        fgrid_0037_0037_v[7].push_back(dummy);
    }
    read.close();

    read.open("/home/nico/nico_research/programs/classes/bound_states/ns_data/src/data/amplitudes/mesons/vector/7950_6500.txt");
    fgrid_7950_6500_v.resize(8);
    for(int i=0; i<60; i++)
    {
        read >> dummy;
        pgrid_7950_6500_v.push_back(dummy);
        read >> dummy;
        fgrid_7950_6500_v[0].push_back(dummy);
        read >> dummy;
        fgrid_7950_6500_v[1].push_back(dummy);
        read >> dummy;
        fgrid_7950_6500_v[2].push_back(dummy);
        read >> dummy;
        fgrid_7950_6500_v[3].push_back(dummy);
        read >> dummy;
        fgrid_7950_6500_v[4].push_back(dummy);
        read >> dummy;
        fgrid_7950_6500_v[5].push_back(dummy);
        read >> dummy;
        fgrid_7950_6500_v[6].push_back(dummy);
        read >> dummy;
        fgrid_7950_6500_v[7].push_back(dummy);
    }
    read.close();

    read.open("/home/nico/nico_research/programs/classes/bound_states/ns_data/src/data/amplitudes/mesons/vector/7950_5000.txt");
    fgrid_7950_5000_v.resize(8);
    for(int i=0; i<60; i++)
    {
        read >> dummy;
        pgrid_7950_5000_v.push_back(dummy);
        read >> dummy;
        fgrid_7950_5000_v[0].push_back(dummy);
        read >> dummy;
        fgrid_7950_5000_v[1].push_back(dummy);
        read >> dummy;
        fgrid_7950_5000_v[2].push_back(dummy);
        read >> dummy;
        fgrid_7950_5000_v[3].push_back(dummy);
        read >> dummy;
        fgrid_7950_5000_v[4].push_back(dummy);
        read >> dummy;
        fgrid_7950_5000_v[5].push_back(dummy);
        read >> dummy;
        fgrid_7950_5000_v[6].push_back(dummy);
        read >> dummy;
        fgrid_7950_5000_v[7].push_back(dummy);
    }
    read.close();

    fgrid_7950_0037_v.resize(8);
    fgrid_7950_0200_v.resize(8);
    fgrid_7950_0500_v.resize(8);
    fgrid_7950_0855_v.resize(8);
    fgrid_7950_1500_v.resize(8);
    fgrid_7950_2100_v.resize(8);
    fgrid_7950_3500_v.resize(8);

    pgrid_7950_0037_v = pgrid_7950_7950_v;
    pgrid_7950_0200_v = pgrid_7950_7950_v;
    pgrid_7950_0500_v = pgrid_7950_7950_v;
    pgrid_7950_0855_v = pgrid_7950_7950_v;
    pgrid_7950_1500_v = pgrid_7950_7950_v;
    pgrid_7950_2100_v = pgrid_7950_7950_v;
    pgrid_7950_3500_v = pgrid_7950_7950_v;

    double pwr_v = 2.0;

    a_grid.clear();
    a_grid.resize(8);
    for(int i=0; i<60; i++)
    {
        // implementation of powers of three to come close to the behavior of the eigenvalue curves for sinking masses...
        a_grid[0].push_back((fgrid_7950_5000_v[0][i] - fgrid_7950_7950_v[0][i])/(pow(0.5000 - 0.7950,pwr_v)));
        a_grid[1].push_back((fgrid_7950_5000_v[1][i] - fgrid_7950_7950_v[1][i])/(pow(0.5000 - 0.7950,pwr_v)));
        a_grid[2].push_back((fgrid_7950_5000_v[2][i] - fgrid_7950_7950_v[2][i])/(pow(0.5000 - 0.7950,pwr_v)));
        a_grid[3].push_back((fgrid_7950_5000_v[3][i] - fgrid_7950_7950_v[3][i])/(pow(0.5000 - 0.7950,pwr_v)));
        a_grid[4].push_back((fgrid_7950_5000_v[4][i] - fgrid_7950_7950_v[4][i])/(pow(0.5000 - 0.7950,pwr_v)));
        a_grid[5].push_back((fgrid_7950_5000_v[5][i] - fgrid_7950_7950_v[5][i])/(pow(0.5000 - 0.7950,pwr_v)));
        a_grid[6].push_back((fgrid_7950_5000_v[6][i] - fgrid_7950_7950_v[6][i])/(pow(0.5000 - 0.7950,pwr_v)));
        a_grid[7].push_back((fgrid_7950_5000_v[7][i] - fgrid_7950_7950_v[7][i])/(pow(0.5000 - 0.7950,pwr_v)));

        fgrid_7950_3500_v[0].push_back(fgrid_7950_7950_v[0][i]+a_grid[0][i]*pow(0.350-0.795,pwr_v));
        fgrid_7950_3500_v[1].push_back(fgrid_7950_7950_v[1][i]+a_grid[1][i]*pow(0.350-0.795,pwr_v));
        fgrid_7950_3500_v[2].push_back(fgrid_7950_7950_v[2][i]+a_grid[2][i]*pow(0.350-0.795,pwr_v));
        fgrid_7950_3500_v[3].push_back(fgrid_7950_7950_v[3][i]+a_grid[3][i]*pow(0.350-0.795,pwr_v));
        fgrid_7950_3500_v[4].push_back(fgrid_7950_7950_v[4][i]+a_grid[4][i]*pow(0.350-0.795,pwr_v));
        fgrid_7950_3500_v[5].push_back(fgrid_7950_7950_v[5][i]+a_grid[5][i]*pow(0.350-0.795,pwr_v));
        fgrid_7950_3500_v[6].push_back(fgrid_7950_7950_v[6][i]+a_grid[6][i]*pow(0.350-0.795,pwr_v));
        fgrid_7950_3500_v[7].push_back(fgrid_7950_7950_v[7][i]+a_grid[7][i]*pow(0.350-0.795,pwr_v));

        fgrid_7950_2100_v[0].push_back(fgrid_7950_7950_v[0][i]+a_grid[0][i]*pow(0.210-0.795,pwr_v));
        fgrid_7950_2100_v[1].push_back(fgrid_7950_7950_v[1][i]+a_grid[1][i]*pow(0.210-0.795,pwr_v));
        fgrid_7950_2100_v[2].push_back(fgrid_7950_7950_v[2][i]+a_grid[2][i]*pow(0.210-0.795,pwr_v));
        fgrid_7950_2100_v[3].push_back(fgrid_7950_7950_v[3][i]+a_grid[3][i]*pow(0.210-0.795,pwr_v));
        fgrid_7950_2100_v[4].push_back(fgrid_7950_7950_v[0][i]+a_grid[4][i]*pow(0.210-0.795,pwr_v));
        fgrid_7950_2100_v[5].push_back(fgrid_7950_7950_v[1][i]+a_grid[5][i]*pow(0.210-0.795,pwr_v));
        fgrid_7950_2100_v[6].push_back(fgrid_7950_7950_v[2][i]+a_grid[6][i]*pow(0.210-0.795,pwr_v));
        fgrid_7950_2100_v[7].push_back(fgrid_7950_7950_v[3][i]+a_grid[7][i]*pow(0.210-0.795,pwr_v));

        fgrid_7950_1500_v[0].push_back(fgrid_7950_7950_v[0][i]+a_grid[0][i]*pow(0.150-0.795,pwr_v));
        fgrid_7950_1500_v[1].push_back(fgrid_7950_7950_v[1][i]+a_grid[1][i]*pow(0.150-0.795,pwr_v));
        fgrid_7950_1500_v[2].push_back(fgrid_7950_7950_v[2][i]+a_grid[2][i]*pow(0.150-0.795,pwr_v));
        fgrid_7950_1500_v[3].push_back(fgrid_7950_7950_v[3][i]+a_grid[3][i]*pow(0.150-0.795,pwr_v));
        fgrid_7950_1500_v[4].push_back(fgrid_7950_7950_v[0][i]+a_grid[4][i]*pow(0.150-0.795,pwr_v));
        fgrid_7950_1500_v[5].push_back(fgrid_7950_7950_v[1][i]+a_grid[5][i]*pow(0.150-0.795,pwr_v));
        fgrid_7950_1500_v[6].push_back(fgrid_7950_7950_v[2][i]+a_grid[6][i]*pow(0.150-0.795,pwr_v));
        fgrid_7950_1500_v[7].push_back(fgrid_7950_7950_v[3][i]+a_grid[7][i]*pow(0.150-0.795,pwr_v));

        fgrid_7950_0855_v[0].push_back(fgrid_7950_7950_v[0][i]+a_grid[0][i]*pow(0.0855-0.795,pwr_v));
        fgrid_7950_0855_v[1].push_back(fgrid_7950_7950_v[1][i]+a_grid[1][i]*pow(0.0855-0.795,pwr_v));
        fgrid_7950_0855_v[2].push_back(fgrid_7950_7950_v[2][i]+a_grid[2][i]*pow(0.0855-0.795,pwr_v));
        fgrid_7950_0855_v[3].push_back(fgrid_7950_7950_v[3][i]+a_grid[3][i]*pow(0.0855-0.795,pwr_v));
        fgrid_7950_0855_v[4].push_back(fgrid_7950_7950_v[0][i]+a_grid[4][i]*pow(0.0855-0.795,pwr_v));
        fgrid_7950_0855_v[5].push_back(fgrid_7950_7950_v[1][i]+a_grid[5][i]*pow(0.0855-0.795,pwr_v));
        fgrid_7950_0855_v[6].push_back(fgrid_7950_7950_v[2][i]+a_grid[6][i]*pow(0.0855-0.795,pwr_v));
        fgrid_7950_0855_v[7].push_back(fgrid_7950_7950_v[3][i]+a_grid[7][i]*pow(0.0855-0.795,pwr_v));

        fgrid_7950_0500_v[0].push_back(fgrid_7950_7950_v[0][i]+a_grid[0][i]*pow(0.0500-0.795,pwr_v));
        fgrid_7950_0500_v[1].push_back(fgrid_7950_7950_v[1][i]+a_grid[1][i]*pow(0.0500-0.795,pwr_v));
        fgrid_7950_0500_v[2].push_back(fgrid_7950_7950_v[2][i]+a_grid[2][i]*pow(0.0500-0.795,pwr_v));
        fgrid_7950_0500_v[3].push_back(fgrid_7950_7950_v[3][i]+a_grid[3][i]*pow(0.0500-0.795,pwr_v));
        fgrid_7950_0500_v[4].push_back(fgrid_7950_7950_v[0][i]+a_grid[4][i]*pow(0.0500-0.795,pwr_v));
        fgrid_7950_0500_v[5].push_back(fgrid_7950_7950_v[1][i]+a_grid[5][i]*pow(0.0500-0.795,pwr_v));
        fgrid_7950_0500_v[6].push_back(fgrid_7950_7950_v[2][i]+a_grid[6][i]*pow(0.0500-0.795,pwr_v));
        fgrid_7950_0500_v[7].push_back(fgrid_7950_7950_v[3][i]+a_grid[7][i]*pow(0.0500-0.795,pwr_v));

        fgrid_7950_0200_v[0].push_back(fgrid_7950_7950_v[0][i]+a_grid[0][i]*pow(0.0200-0.795,pwr_v));
        fgrid_7950_0200_v[1].push_back(fgrid_7950_7950_v[1][i]+a_grid[1][i]*pow(0.0200-0.795,pwr_v));
        fgrid_7950_0200_v[2].push_back(fgrid_7950_7950_v[2][i]+a_grid[2][i]*pow(0.0200-0.795,pwr_v));
        fgrid_7950_0200_v[3].push_back(fgrid_7950_7950_v[3][i]+a_grid[3][i]*pow(0.0200-0.795,pwr_v));
        fgrid_7950_0200_v[4].push_back(fgrid_7950_7950_v[0][i]+a_grid[4][i]*pow(0.0200-0.795,pwr_v));
        fgrid_7950_0200_v[5].push_back(fgrid_7950_7950_v[1][i]+a_grid[5][i]*pow(0.0200-0.795,pwr_v));
        fgrid_7950_0200_v[6].push_back(fgrid_7950_7950_v[2][i]+a_grid[6][i]*pow(0.0200-0.795,pwr_v));
        fgrid_7950_0200_v[7].push_back(fgrid_7950_7950_v[3][i]+a_grid[7][i]*pow(0.0200-0.795,pwr_v));

        fgrid_7950_0037_v[0].push_back(fgrid_7950_7950_v[0][i]+a_grid[0][i]*pow(0.0037-0.795,pwr_v));
        fgrid_7950_0037_v[1].push_back(fgrid_7950_7950_v[1][i]+a_grid[1][i]*pow(0.0037-0.795,pwr_v));
        fgrid_7950_0037_v[2].push_back(fgrid_7950_7950_v[2][i]+a_grid[2][i]*pow(0.0037-0.795,pwr_v));
        fgrid_7950_0037_v[3].push_back(fgrid_7950_7950_v[3][i]+a_grid[3][i]*pow(0.0037-0.795,pwr_v));
        fgrid_7950_0037_v[4].push_back(fgrid_7950_7950_v[0][i]+a_grid[4][i]*pow(0.0037-0.795,pwr_v));
        fgrid_7950_0037_v[5].push_back(fgrid_7950_7950_v[1][i]+a_grid[5][i]*pow(0.0037-0.795,pwr_v));
        fgrid_7950_0037_v[6].push_back(fgrid_7950_7950_v[2][i]+a_grid[6][i]*pow(0.0037-0.795,pwr_v));
        fgrid_7950_0037_v[7].push_back(fgrid_7950_7950_v[3][i]+a_grid[7][i]*pow(0.0037-0.795,pwr_v));

    }

    // SCALAR DIQUARKS NOW

    read.open("/home/nico/nico_research/programs/classes/bound_states/ns_data/src/data/amplitudes/diquarks/scalar/range.txt", std::ios::in);
    fgrid_7950_0037_s.resize(4);
    for(int i=0; i<60; i++)
    {
        read >> dummy;
        read >> dummy;
        read >> dummy;
        fgrid_7950_0037_s[0].push_back(dummy);
        read >> dummy;
        read >> dummy;
        fgrid_7950_0037_s[1].push_back(dummy);
        read >> dummy;
        read >> dummy;
        fgrid_7950_0037_s[2].push_back(dummy);
        read >> dummy;
        read >> dummy;
        fgrid_7950_0037_s[3].push_back(dummy);
    }
    read.close();

    read.open("/home/nico/nico_research/programs/classes/bound_states/ns_data/src/data/amplitudes/diquarks/scalar/7950_7950.txt",std::ios::in);
    fgrid_7950_7950_s.resize(4);
    for(int i=0; i<60; i++)
    {
        read >> dummy;
        pgrid_7950_7950_s.push_back(dummy);
        read >> dummy;
        fgrid_7950_7950_s[0].push_back(dummy);
        read >> dummy;
        fgrid_7950_7950_s[1].push_back(dummy);
        read >> dummy;
        fgrid_7950_7950_s[2].push_back(dummy);
        read >> dummy;
        fgrid_7950_7950_s[3].push_back(dummy);
    }
    read.close();

    read.open("/home/nico/nico_research/programs/classes/bound_states/ns_data/src/data/amplitudes/diquarks/scalar/6500_6500.txt",std::ios::in);
    fgrid_6500_6500_s.resize(4);
    for(int i=0; i<60; i++)
    {
        read >> dummy;
        pgrid_6500_6500_s.push_back(dummy);
        read >> dummy;
        fgrid_6500_6500_s[0].push_back(dummy);
        read >> dummy;
        fgrid_6500_6500_s[1].push_back(dummy);
        read >> dummy;
        fgrid_6500_6500_s[2].push_back(dummy);
        read >> dummy;
        fgrid_6500_6500_s[3].push_back(dummy);
    }
    read.close();

    read.open("/home/nico/nico_research/programs/classes/bound_states/ns_data/src/data/amplitudes/diquarks/scalar/5000_5000.txt",std::ios::in);
    fgrid_5000_5000_s.resize(4);
    for(int i=0; i<60; i++)
    {
        read >> dummy;
        pgrid_5000_5000_s.push_back(dummy);
        read >> dummy;
        fgrid_5000_5000_s[0].push_back(dummy);
        read >> dummy;
        fgrid_5000_5000_s[1].push_back(dummy);
        read >> dummy;
        fgrid_5000_5000_s[2].push_back(dummy);
        read >> dummy;
        fgrid_5000_5000_s[3].push_back(dummy);
    }
    read.close();

    read.open("/home/nico/nico_research/programs/classes/bound_states/ns_data/src/data/amplitudes/diquarks/scalar/3500_3500.txt",std::ios::in);
    fgrid_3500_3500_s.resize(4);
    for(int i=0; i<60; i++)
    {
        read >> dummy;
        pgrid_3500_3500_s.push_back(dummy);
        read >> dummy;
        fgrid_3500_3500_s[0].push_back(dummy);
        read >> dummy;
        fgrid_3500_3500_s[1].push_back(dummy);
        read >> dummy;
        fgrid_3500_3500_s[2].push_back(dummy);
        read >> dummy;
        fgrid_3500_3500_s[3].push_back(dummy);
    }
    read.close();

    read.open("/home/nico/nico_research/programs/classes/bound_states/ns_data/src/data/amplitudes/diquarks/scalar/2100_2100.txt",std::ios::in);
    fgrid_2100_2100_s.resize(4);
    for(int i=0; i<60; i++)
    {
        read >> dummy;
        pgrid_2100_2100_s.push_back(dummy);
        read >> dummy;
        fgrid_2100_2100_s[0].push_back(dummy);
        read >> dummy;
        fgrid_2100_2100_s[1].push_back(dummy);
        read >> dummy;
        fgrid_2100_2100_s[2].push_back(dummy);
        read >> dummy;
        fgrid_2100_2100_s[3].push_back(dummy);
    }
    read.close();

    read.open("/home/nico/nico_research/programs/classes/bound_states/ns_data/src/data/amplitudes/diquarks/scalar/1500_1500.txt",std::ios::in);
    fgrid_1500_1500_s.resize(4);
    for(int i=0; i<60; i++)
    {
        read >> dummy;
        pgrid_1500_1500_s.push_back(dummy);
        read >> dummy;
        fgrid_1500_1500_s[0].push_back(dummy);
        read >> dummy;
        fgrid_1500_1500_s[1].push_back(dummy);
        read >> dummy;
        fgrid_1500_1500_s[2].push_back(dummy);
        read >> dummy;
        fgrid_1500_1500_s[3].push_back(dummy);
    }
    read.close();

    read.open("/home/nico/nico_research/programs/classes/bound_states/ns_data/src/data/amplitudes/diquarks/scalar/0855_0855.txt",std::ios::in);
    fgrid_0855_0855_s.resize(4);
    for(int i=0; i<60; i++)
    {
        read >> dummy;
        pgrid_0855_0855_s.push_back(dummy);
        read >> dummy;
        fgrid_0855_0855_s[0].push_back(dummy);
        read >> dummy;
        fgrid_0855_0855_s[1].push_back(dummy);
        read >> dummy;
        fgrid_0855_0855_s[2].push_back(dummy);
        read >> dummy;
        fgrid_0855_0855_s[3].push_back(dummy);
    }
    read.close();

    read.open("/home/nico/nico_research/programs/classes/bound_states/ns_data/src/data/amplitudes/diquarks/scalar/0500_0500.txt",std::ios::in);
    fgrid_0500_0500_s.resize(4);
    for(int i=0; i<60; i++)
    {
        read >> dummy;
        pgrid_0500_0500_s.push_back(dummy);
        read >> dummy;
        fgrid_0500_0500_s[0].push_back(dummy);
        read >> dummy;
        fgrid_0500_0500_s[1].push_back(dummy);
        read >> dummy;
        fgrid_0500_0500_s[2].push_back(dummy);
        read >> dummy;
        fgrid_0500_0500_s[3].push_back(dummy);
    }
    read.close();

    read.open("/home/nico/nico_research/programs/classes/bound_states/ns_data/src/data/amplitudes/diquarks/scalar/0200_0200.txt",std::ios::in);
    fgrid_0200_0200_s.resize(4);
    for(int i=0; i<60; i++)
    {
        read >> dummy;
        pgrid_0200_0200_s.push_back(dummy);
        read >> dummy;
        fgrid_0200_0200_s[0].push_back(dummy);
        read >> dummy;
        fgrid_0200_0200_s[1].push_back(dummy);
        read >> dummy;
        fgrid_0200_0200_s[2].push_back(dummy);
        read >> dummy;
        fgrid_0200_0200_s[3].push_back(dummy);
    }
    read.close();

    read.open("/home/nico/nico_research/programs/classes/bound_states/ns_data/src/data/amplitudes/diquarks/scalar/0037_0037.txt",std::ios::in);
    fgrid_0037_0037_s.resize(4);
    for(int i=0; i<60; i++)
    {
        read >> dummy;
        pgrid_0037_0037_s.push_back(dummy);
        read >> dummy;
        fgrid_0037_0037_s[0].push_back(dummy);
        read >> dummy;
        fgrid_0037_0037_s[1].push_back(dummy);
        read >> dummy;
        fgrid_0037_0037_s[2].push_back(dummy);
        read >> dummy;
        fgrid_0037_0037_s[3].push_back(dummy);
    }
    read.close();


    fgrid_7950_0200_s.resize(4);
    fgrid_7950_0500_s.resize(4);
    fgrid_7950_0855_s.resize(4);
    fgrid_7950_1500_s.resize(4);
    fgrid_7950_2100_s.resize(4);
    fgrid_7950_3500_s.resize(4);
    fgrid_7950_5000_s.resize(4);
    fgrid_7950_6500_s.resize(4);

    pgrid_7950_0037_s = pgrid_7950_7950_s;
    pgrid_7950_0200_s = pgrid_7950_7950_s;
    pgrid_7950_0500_s = pgrid_7950_7950_s;
    pgrid_7950_0855_s = pgrid_7950_7950_s;
    pgrid_7950_1500_s = pgrid_7950_7950_s;
    pgrid_7950_2100_s = pgrid_7950_7950_s;
    pgrid_7950_3500_s = pgrid_7950_7950_s;
    pgrid_7950_5000_s = pgrid_7950_7950_s;
    pgrid_7950_6500_s = pgrid_7950_7950_v;

    double pwr_s=3.0;

    a_grid.clear();
    a_grid.resize(4);
    for(int i=0; i<60; i++)
    {
        // implementation of powers of three...
        a_grid[0].push_back((fgrid_7950_0037_s[0][i] - fgrid_7950_7950_s[0][i])/(pow(0.0037 - 0.7950,pwr_s)));
        a_grid[1].push_back((fgrid_7950_0037_s[1][i] - fgrid_7950_7950_s[1][i])/(pow(0.0037 - 0.7950,pwr_s)));
        a_grid[2].push_back((fgrid_7950_0037_s[2][i] - fgrid_7950_7950_s[2][i])/(pow(0.0037 - 0.7950,pwr_s)));
        a_grid[3].push_back((fgrid_7950_0037_s[3][i] - fgrid_7950_7950_s[3][i])/(pow(0.0037 - 0.7950,pwr_s)));

        fgrid_7950_6500_s[0].push_back(fgrid_7950_7950_s[0][i]+a_grid[0][i]*pow(0.650-0.795,pwr_s));
        fgrid_7950_6500_s[1].push_back(fgrid_7950_7950_s[1][i]+a_grid[1][i]*pow(0.650-0.795,pwr_s));
        fgrid_7950_6500_s[2].push_back(fgrid_7950_7950_s[2][i]+a_grid[2][i]*pow(0.650-0.795,pwr_s));
        fgrid_7950_6500_s[3].push_back(fgrid_7950_7950_s[3][i]+a_grid[3][i]*pow(0.650-0.795,pwr_s));

        fgrid_7950_5000_s[0].push_back(fgrid_7950_7950_s[0][i]+a_grid[0][i]*pow(0.500-0.795,pwr_s));
        fgrid_7950_5000_s[1].push_back(fgrid_7950_7950_s[1][i]+a_grid[1][i]*pow(0.500-0.795,pwr_s));
        fgrid_7950_5000_s[2].push_back(fgrid_7950_7950_s[2][i]+a_grid[2][i]*pow(0.500-0.795,pwr_s));
        fgrid_7950_5000_s[3].push_back(fgrid_7950_7950_s[3][i]+a_grid[3][i]*pow(0.500-0.795,pwr_s));

        fgrid_7950_3500_s[0].push_back(fgrid_7950_7950_s[0][i]+a_grid[0][i]*pow(0.350-0.795,pwr_s));
        fgrid_7950_3500_s[1].push_back(fgrid_7950_7950_s[1][i]+a_grid[1][i]*pow(0.350-0.795,pwr_s));
        fgrid_7950_3500_s[2].push_back(fgrid_7950_7950_s[2][i]+a_grid[2][i]*pow(0.350-0.795,pwr_s));
        fgrid_7950_3500_s[3].push_back(fgrid_7950_7950_s[3][i]+a_grid[3][i]*pow(0.350-0.795,pwr_s));

        fgrid_7950_2100_s[0].push_back(fgrid_7950_7950_s[0][i]+a_grid[0][i]*pow(0.210-0.795,pwr_s));
        fgrid_7950_2100_s[1].push_back(fgrid_7950_7950_s[1][i]+a_grid[1][i]*pow(0.210-0.795,pwr_s));
        fgrid_7950_2100_s[2].push_back(fgrid_7950_7950_s[2][i]+a_grid[2][i]*pow(0.210-0.795,pwr_s));
        fgrid_7950_2100_s[3].push_back(fgrid_7950_7950_s[3][i]+a_grid[3][i]*pow(0.210-0.795,pwr_s));

        fgrid_7950_1500_s[0].push_back(fgrid_7950_7950_s[0][i]+a_grid[0][i]*pow(0.150-0.795,pwr_s));
        fgrid_7950_1500_s[1].push_back(fgrid_7950_7950_s[1][i]+a_grid[1][i]*pow(0.150-0.795,pwr_s));
        fgrid_7950_1500_s[2].push_back(fgrid_7950_7950_s[2][i]+a_grid[2][i]*pow(0.150-0.795,pwr_s));
        fgrid_7950_1500_s[3].push_back(fgrid_7950_7950_s[3][i]+a_grid[3][i]*pow(0.150-0.795,pwr_s));

        fgrid_7950_0855_s[0].push_back(fgrid_7950_7950_s[0][i]+a_grid[0][i]*pow(0.0855-0.795,pwr_s));
        fgrid_7950_0855_s[1].push_back(fgrid_7950_7950_s[1][i]+a_grid[1][i]*pow(0.0855-0.795,pwr_s));
        fgrid_7950_0855_s[2].push_back(fgrid_7950_7950_s[2][i]+a_grid[2][i]*pow(0.0855-0.795,pwr_s));
        fgrid_7950_0855_s[3].push_back(fgrid_7950_7950_s[3][i]+a_grid[3][i]*pow(0.0855-0.795,pwr_s));

        fgrid_7950_0500_s[0].push_back(fgrid_7950_7950_s[0][i]+a_grid[0][i]*pow(0.0500-0.795,pwr_s));
        fgrid_7950_0500_s[1].push_back(fgrid_7950_7950_s[1][i]+a_grid[1][i]*pow(0.0500-0.795,pwr_s));
        fgrid_7950_0500_s[2].push_back(fgrid_7950_7950_s[2][i]+a_grid[2][i]*pow(0.0500-0.795,pwr_s));
        fgrid_7950_0500_s[3].push_back(fgrid_7950_7950_s[3][i]+a_grid[3][i]*pow(0.0500-0.795,pwr_s));

        fgrid_7950_0200_s[0].push_back(fgrid_7950_7950_s[0][i]+a_grid[0][i]*pow(0.0200-0.795,pwr_s));
        fgrid_7950_0200_s[1].push_back(fgrid_7950_7950_s[1][i]+a_grid[1][i]*pow(0.0200-0.795,pwr_s));
        fgrid_7950_0200_s[2].push_back(fgrid_7950_7950_s[2][i]+a_grid[2][i]*pow(0.0200-0.795,pwr_s));
        fgrid_7950_0200_s[3].push_back(fgrid_7950_7950_s[3][i]+a_grid[3][i]*pow(0.0200-0.795,pwr_s));

        fgrid_7950_0037_s[0].push_back(fgrid_7950_7950_s[0][i]+a_grid[0][i]*pow(0.0037-0.795,pwr_s));
        fgrid_7950_0037_s[1].push_back(fgrid_7950_7950_s[1][i]+a_grid[1][i]*pow(0.0037-0.795,pwr_s));
        fgrid_7950_0037_s[2].push_back(fgrid_7950_7950_s[2][i]+a_grid[2][i]*pow(0.0037-0.795,pwr_s));
        fgrid_7950_0037_s[3].push_back(fgrid_7950_7950_s[3][i]+a_grid[3][i]*pow(0.0037-0.795,pwr_s));

    }

// AXIALVECTOR DIQUARKS NOW

    read.open("/home/nico/nico_research/programs/classes/bound_states/ns_data/src/data/amplitudes/diquarks/axialvector/range.txt", std::ios::in);
    fgrid_7950_7950_a.resize(8);
    fgrid_7950_0037_a.resize(8);

    for(int i=0; i<60; i++)
    {
        read >> dummy;
        pgrid_7950_7950_a.push_back(dummy);
        read >> dummy;
        fgrid_7950_7950_a[0].push_back(dummy);
        read >> dummy;
        fgrid_7950_0037_a[0].push_back(dummy);
        read >> dummy;
        fgrid_7950_7950_a[1].push_back(dummy);
        read >> dummy;
        fgrid_7950_0037_a[1].push_back(dummy);
        read >> dummy;
        fgrid_7950_7950_a[2].push_back(dummy);
        read >> dummy;
        fgrid_7950_0037_a[2].push_back(dummy);
        read >> dummy;
        fgrid_7950_7950_a[3].push_back(dummy);
        read >> dummy;
        fgrid_7950_0037_a[3].push_back(dummy);
        read >> dummy;
        fgrid_7950_7950_a[4].push_back(dummy);
        read >> dummy;
        fgrid_7950_0037_a[4].push_back(dummy);
        read >> dummy;
        fgrid_7950_7950_a[5].push_back(dummy);
        read >> dummy;
        fgrid_7950_0037_a[5].push_back(dummy);
        read >> dummy;
        fgrid_7950_7950_a[6].push_back(dummy);
        read >> dummy;
        fgrid_7950_0037_a[6].push_back(dummy);
        read >> dummy;
        fgrid_7950_7950_a[7].push_back(dummy);
        read >> dummy;
        fgrid_7950_0037_a[7].push_back(dummy);
    }
    read.close();

    read.open("/home/nico/nico_research/programs/classes/bound_states/ns_data/src/data/amplitudes/mesons/vector/6500_6500.txt", std::ios::in);
    fgrid_6500_6500_a.resize(8);
    for(int i=0; i<60; i++)
    {
        read >> dummy;
        pgrid_6500_6500_a.push_back(dummy);
        read >> dummy;
        fgrid_6500_6500_a[0].push_back(dummy);
        read >> dummy;
        fgrid_6500_6500_a[1].push_back(dummy);
        read >> dummy;
        fgrid_6500_6500_a[2].push_back(dummy);
        read >> dummy;
        fgrid_6500_6500_a[3].push_back(dummy);
        read >> dummy;
        fgrid_6500_6500_a[4].push_back(dummy);
        read >> dummy;
        fgrid_6500_6500_a[5].push_back(dummy);
        read >> dummy;
        fgrid_6500_6500_a[6].push_back(dummy);
        read >> dummy;
        fgrid_6500_6500_a[7].push_back(dummy);
    }
    read.close();

    read.open("/home/nico/nico_research/programs/classes/bound_states/ns_data/src/data/amplitudes/mesons/vector/5000_5000.txt", std::ios::in);
    fgrid_5000_5000_a.resize(8);
    for(int i=0; i<60; i++)
    {
        read >> dummy;
        pgrid_5000_5000_a.push_back(dummy);
        read >> dummy;
        fgrid_5000_5000_a[0].push_back(dummy);
        read >> dummy;
        fgrid_5000_5000_a[1].push_back(dummy);
        read >> dummy;
        fgrid_5000_5000_a[2].push_back(dummy);
        read >> dummy;
        fgrid_5000_5000_a[3].push_back(dummy);
        read >> dummy;
        fgrid_5000_5000_a[4].push_back(dummy);
        read >> dummy;
        fgrid_5000_5000_a[5].push_back(dummy);
        read >> dummy;
        fgrid_5000_5000_a[6].push_back(dummy);
        read >> dummy;
        fgrid_5000_5000_a[7].push_back(dummy);
    }
    read.close();

    read.open("/home/nico/nico_research/programs/classes/bound_states/ns_data/src/data/amplitudes/mesons/vector/3500_3500.txt", std::ios::in);
    fgrid_3500_3500_a.resize(8);
    for(int i=0; i<60; i++)
    {
        read >> dummy;
        pgrid_3500_3500_a.push_back(dummy);
        read >> dummy;
        fgrid_3500_3500_a[0].push_back(dummy);
        read >> dummy;
        fgrid_3500_3500_a[1].push_back(dummy);
        read >> dummy;
        fgrid_3500_3500_a[2].push_back(dummy);
        read >> dummy;
        fgrid_3500_3500_a[3].push_back(dummy);
        read >> dummy;
        fgrid_3500_3500_a[4].push_back(dummy);
        read >> dummy;
        fgrid_3500_3500_a[5].push_back(dummy);
        read >> dummy;
        fgrid_3500_3500_a[6].push_back(dummy);
        read >> dummy;
        fgrid_3500_3500_a[7].push_back(dummy);
    }
    read.close();

    read.open("/home/nico/nico_research/programs/classes/bound_states/ns_data/src/data/amplitudes/mesons/vector/2100_2100.txt", std::ios::in);
    fgrid_2100_2100_a.resize(8);
    for(int i=0; i<60; i++)
    {
        read >> dummy;
        pgrid_2100_2100_a.push_back(dummy);
        read >> dummy;
        fgrid_2100_2100_a[0].push_back(dummy);
        read >> dummy;
        fgrid_2100_2100_a[1].push_back(dummy);
        read >> dummy;
        fgrid_2100_2100_a[2].push_back(dummy);
        read >> dummy;
        fgrid_2100_2100_a[3].push_back(dummy);
        read >> dummy;
        fgrid_2100_2100_a[4].push_back(dummy);
        read >> dummy;
        fgrid_2100_2100_a[5].push_back(dummy);
        read >> dummy;
        fgrid_2100_2100_a[6].push_back(dummy);
        read >> dummy;
        fgrid_2100_2100_a[7].push_back(dummy);
    }
    read.close();

    read.open("/home/nico/nico_research/programs/classes/bound_states/ns_data/src/data/amplitudes/mesons/vector/1500_1500.txt", std::ios::in);
    fgrid_1500_1500_a.resize(8);
    for(int i=0; i<60; i++)
    {
        read >> dummy;
        pgrid_1500_1500_a.push_back(dummy);
        read >> dummy;
        fgrid_1500_1500_a[0].push_back(dummy);
        read >> dummy;
        fgrid_1500_1500_a[1].push_back(dummy);
        read >> dummy;
        fgrid_1500_1500_a[2].push_back(dummy);
        read >> dummy;
        fgrid_1500_1500_a[3].push_back(dummy);
        read >> dummy;
        fgrid_1500_1500_a[4].push_back(dummy);
        read >> dummy;
        fgrid_1500_1500_a[5].push_back(dummy);
        read >> dummy;
        fgrid_1500_1500_a[6].push_back(dummy);
        read >> dummy;
        fgrid_1500_1500_a[7].push_back(dummy);
    }
    read.close();

    read.open("/home/nico/nico_research/programs/classes/bound_states/ns_data/src/data/amplitudes/mesons/vector/0855_0855.txt", std::ios::in);
    fgrid_0855_0855_a.resize(8);
    for(int i=0; i<60; i++)
    {
        read >> dummy;
        pgrid_0855_0855_a.push_back(dummy);
        read >> dummy;
        fgrid_0855_0855_a[0].push_back(dummy);
        read >> dummy;
        fgrid_0855_0855_a[1].push_back(dummy);
        read >> dummy;
        fgrid_0855_0855_a[2].push_back(dummy);
        read >> dummy;
        fgrid_0855_0855_a[3].push_back(dummy);
        read >> dummy;
        fgrid_0855_0855_a[4].push_back(dummy);
        read >> dummy;
        fgrid_0855_0855_a[5].push_back(dummy);
        read >> dummy;
        fgrid_0855_0855_a[6].push_back(dummy);
        read >> dummy;
        fgrid_0855_0855_a[7].push_back(dummy);
    }
    read.close();

    read.open("/home/nico/nico_research/programs/classes/bound_states/ns_data/src/data/amplitudes/mesons/vector/0500_0500.txt", std::ios::in);
    fgrid_0500_0500_a.resize(8);
    for(int i=0; i<60; i++)
    {
        read >> dummy;
        pgrid_0500_0500_a.push_back(dummy);
        read >> dummy;
        fgrid_0500_0500_a[0].push_back(dummy);
        read >> dummy;
        fgrid_0500_0500_a[1].push_back(dummy);
        read >> dummy;
        fgrid_0500_0500_a[2].push_back(dummy);
        read >> dummy;
        fgrid_0500_0500_a[3].push_back(dummy);
        read >> dummy;
        fgrid_0500_0500_a[4].push_back(dummy);
        read >> dummy;
        fgrid_0500_0500_a[5].push_back(dummy);
        read >> dummy;
        fgrid_0500_0500_a[6].push_back(dummy);
        read >> dummy;
        fgrid_0500_0500_a[7].push_back(dummy);
    }
    read.close();

    read.open("/home/nico/nico_research/programs/classes/bound_states/ns_data/src/data/amplitudes/mesons/vector/0200_0200.txt", std::ios::in);
    fgrid_0200_0200_a.resize(8);
    for(int i=0; i<60; i++)
    {
        read >> dummy;
        pgrid_0200_0200_a.push_back(dummy);
        read >> dummy;
        fgrid_0200_0200_a[0].push_back(dummy);
        read >> dummy;
        fgrid_0200_0200_a[1].push_back(dummy);
        read >> dummy;
        fgrid_0200_0200_a[2].push_back(dummy);
        read >> dummy;
        fgrid_0200_0200_a[3].push_back(dummy);
        read >> dummy;
        fgrid_0200_0200_a[4].push_back(dummy);
        read >> dummy;
        fgrid_0200_0200_a[5].push_back(dummy);
        read >> dummy;
        fgrid_0200_0200_a[6].push_back(dummy);
        read >> dummy;
        fgrid_0200_0200_a[7].push_back(dummy);
    }
    read.close();

    read.open("/home/nico/nico_research/programs/classes/bound_states/ns_data/src/data/amplitudes/mesons/vector/0037_0037.txt", std::ios::in);
    fgrid_0037_0037_a.resize(8);
    for(int i=0; i<60; i++)
    {
        read >> dummy;
        pgrid_0037_0037_a.push_back(dummy);
        read >> dummy;
        fgrid_0037_0037_a[0].push_back(dummy);
        read >> dummy;
        fgrid_0037_0037_a[1].push_back(dummy);
        read >> dummy;
        fgrid_0037_0037_a[2].push_back(dummy);
        read >> dummy;
        fgrid_0037_0037_a[3].push_back(dummy);
        read >> dummy;
        fgrid_0037_0037_a[4].push_back(dummy);
        read >> dummy;
        fgrid_0037_0037_a[5].push_back(dummy);
        read >> dummy;
        fgrid_0037_0037_a[6].push_back(dummy);
        read >> dummy;
        fgrid_0037_0037_a[7].push_back(dummy);
    }
    read.close();


    fgrid_7950_0200_a.resize(8);
    fgrid_7950_0500_a.resize(8);
    fgrid_7950_0855_a.resize(8);
    fgrid_7950_1500_a.resize(8);
    fgrid_7950_2100_a.resize(8);
    fgrid_7950_3500_a.resize(8);
    fgrid_7950_5000_a.resize(8);
    fgrid_7950_6500_a.resize(8);

    pgrid_7950_0037_a = pgrid_7950_7950_a;
    pgrid_7950_0200_a = pgrid_7950_7950_a;
    pgrid_7950_0500_a = pgrid_7950_7950_a;
    pgrid_7950_0855_a = pgrid_7950_7950_a;
    pgrid_7950_1500_a = pgrid_7950_7950_a;
    pgrid_7950_2100_a = pgrid_7950_7950_a;
    pgrid_7950_3500_a = pgrid_7950_7950_a;
    pgrid_7950_5000_a = pgrid_7950_7950_a;
    pgrid_7950_6500_a = pgrid_7950_7950_a;

    double pwr_a = 3.0;

    a_grid.clear();
    a_grid.resize(8);
    for(int i=0; i<60; i++)
    {
        a_grid[0].push_back((fgrid_7950_0037_a[0][i] - fgrid_7950_7950_a[0][i])/(pow(0.795-0.0037,pwr_a)));
        a_grid[1].push_back((fgrid_7950_0037_a[1][i] - fgrid_7950_7950_a[1][i])/(pow(0.795-0.0037,pwr_a)));
        a_grid[2].push_back((fgrid_7950_0037_a[2][i] - fgrid_7950_7950_a[2][i])/(pow(0.795-0.0037,pwr_a)));
        a_grid[3].push_back((fgrid_7950_0037_a[3][i] - fgrid_7950_7950_a[3][i])/(pow(0.795-0.0037,pwr_a)));
        a_grid[4].push_back((fgrid_7950_0037_a[4][i] - fgrid_7950_7950_a[4][i])/(pow(0.795-0.0037,pwr_a)));
        a_grid[5].push_back((fgrid_7950_0037_a[5][i] - fgrid_7950_7950_a[5][i])/(pow(0.795-0.0037,pwr_a)));
        a_grid[6].push_back((fgrid_7950_0037_a[6][i] - fgrid_7950_7950_a[6][i])/(pow(0.795-0.0037,pwr_a)));
        a_grid[7].push_back((fgrid_7950_0037_a[7][i] - fgrid_7950_7950_a[7][i])/(pow(0.795-0.0037,pwr_a)));

        fgrid_7950_6500_a[0].push_back(fgrid_7950_7950_a[0][i]+a_grid[0][i]*pow(0.795-0.650,pwr_a));
        fgrid_7950_6500_a[1].push_back(fgrid_7950_7950_a[1][i]+a_grid[1][i]*pow(0.795-0.650,pwr_a));
        fgrid_7950_6500_a[2].push_back(fgrid_7950_7950_a[2][i]+a_grid[2][i]*pow(0.795-0.650,pwr_a));
        fgrid_7950_6500_a[3].push_back(fgrid_7950_7950_a[3][i]+a_grid[3][i]*pow(0.795-0.650,pwr_a));
        fgrid_7950_6500_a[4].push_back(fgrid_7950_7950_a[4][i]+a_grid[4][i]*pow(0.795-0.650,pwr_a));
        fgrid_7950_6500_a[5].push_back(fgrid_7950_7950_a[5][i]+a_grid[5][i]*pow(0.795-0.650,pwr_a));
        fgrid_7950_6500_a[6].push_back(fgrid_7950_7950_a[6][i]+a_grid[6][i]*pow(0.795-0.650,pwr_a));
        fgrid_7950_6500_a[7].push_back(fgrid_7950_7950_a[7][i]+a_grid[7][i]*pow(0.795-0.650,pwr_a));

        fgrid_7950_5000_a[0].push_back(fgrid_7950_7950_a[0][i]+a_grid[0][i]*pow(0.795-0.500,pwr_a));
        fgrid_7950_5000_a[1].push_back(fgrid_7950_7950_a[1][i]+a_grid[1][i]*pow(0.795-0.500,pwr_a));
        fgrid_7950_5000_a[2].push_back(fgrid_7950_7950_a[2][i]+a_grid[2][i]*pow(0.795-0.500,pwr_a));
        fgrid_7950_5000_a[3].push_back(fgrid_7950_7950_a[3][i]+a_grid[3][i]*pow(0.795-0.500,pwr_a));
        fgrid_7950_5000_a[4].push_back(fgrid_7950_7950_a[4][i]+a_grid[4][i]*pow(0.795-0.500,pwr_a));
        fgrid_7950_5000_a[5].push_back(fgrid_7950_7950_a[5][i]+a_grid[5][i]*pow(0.795-0.500,pwr_a));
        fgrid_7950_5000_a[6].push_back(fgrid_7950_7950_a[6][i]+a_grid[6][i]*pow(0.795-0.500,pwr_a));
        fgrid_7950_5000_a[7].push_back(fgrid_7950_7950_a[7][i]+a_grid[7][i]*pow(0.795-0.500,pwr_a));

        fgrid_7950_3500_a[0].push_back(fgrid_7950_7950_a[0][i]+a_grid[0][i]*pow(0.795-0.350,pwr_a));
        fgrid_7950_3500_a[1].push_back(fgrid_7950_7950_a[1][i]+a_grid[1][i]*pow(0.795-0.350,pwr_a));
        fgrid_7950_3500_a[2].push_back(fgrid_7950_7950_a[2][i]+a_grid[2][i]*pow(0.795-0.350,pwr_a));
        fgrid_7950_3500_a[3].push_back(fgrid_7950_7950_a[3][i]+a_grid[3][i]*pow(0.795-0.350,pwr_a));
        fgrid_7950_3500_a[4].push_back(fgrid_7950_7950_a[4][i]+a_grid[4][i]*pow(0.795-0.350,pwr_a));
        fgrid_7950_3500_a[5].push_back(fgrid_7950_7950_a[5][i]+a_grid[5][i]*pow(0.795-0.350,pwr_a));
        fgrid_7950_3500_a[6].push_back(fgrid_7950_7950_a[6][i]+a_grid[6][i]*pow(0.795-0.350,pwr_a));
        fgrid_7950_3500_a[7].push_back(fgrid_7950_7950_a[7][i]+a_grid[7][i]*pow(0.795-0.350,pwr_a));

        fgrid_7950_2100_a[0].push_back(fgrid_7950_7950_a[0][i]+a_grid[0][i]*pow(0.795-0.210,pwr_a));
        fgrid_7950_2100_a[1].push_back(fgrid_7950_7950_a[1][i]+a_grid[1][i]*pow(0.795-0.210,pwr_a));
        fgrid_7950_2100_a[2].push_back(fgrid_7950_7950_a[2][i]+a_grid[2][i]*pow(0.795-0.210,pwr_a));
        fgrid_7950_2100_a[3].push_back(fgrid_7950_7950_a[3][i]+a_grid[3][i]*pow(0.795-0.210,pwr_a));
        fgrid_7950_2100_a[4].push_back(fgrid_7950_7950_a[0][i]+a_grid[4][i]*pow(0.795-0.210,pwr_a));
        fgrid_7950_2100_a[5].push_back(fgrid_7950_7950_a[1][i]+a_grid[5][i]*pow(0.795-0.210,pwr_a));
        fgrid_7950_2100_a[6].push_back(fgrid_7950_7950_a[2][i]+a_grid[6][i]*pow(0.795-0.210,pwr_a));
        fgrid_7950_2100_a[7].push_back(fgrid_7950_7950_a[3][i]+a_grid[7][i]*pow(0.795-0.210,pwr_a));

        fgrid_7950_1500_a[0].push_back(fgrid_7950_7950_a[0][i]+a_grid[0][i]*pow(0.795-0.150,pwr_a));
        fgrid_7950_1500_a[1].push_back(fgrid_7950_7950_a[1][i]+a_grid[1][i]*pow(0.795-0.150,pwr_a));
        fgrid_7950_1500_a[2].push_back(fgrid_7950_7950_a[2][i]+a_grid[2][i]*pow(0.795-0.150,pwr_a));
        fgrid_7950_1500_a[3].push_back(fgrid_7950_7950_a[3][i]+a_grid[3][i]*pow(0.795-0.150,pwr_a));
        fgrid_7950_1500_a[4].push_back(fgrid_7950_7950_a[0][i]+a_grid[4][i]*pow(0.795-0.150,pwr_a));
        fgrid_7950_1500_a[5].push_back(fgrid_7950_7950_a[1][i]+a_grid[5][i]*pow(0.795-0.150,pwr_a));
        fgrid_7950_1500_a[6].push_back(fgrid_7950_7950_a[2][i]+a_grid[6][i]*pow(0.795-0.150,pwr_a));
        fgrid_7950_1500_a[7].push_back(fgrid_7950_7950_a[3][i]+a_grid[7][i]*pow(0.795-0.150,pwr_a));

        fgrid_7950_0855_a[0].push_back(fgrid_7950_7950_a[0][i]+a_grid[0][i]*pow(0.795-0.0855,pwr_a));
        fgrid_7950_0855_a[1].push_back(fgrid_7950_7950_a[1][i]+a_grid[1][i]*pow(0.795-0.0855,pwr_a));
        fgrid_7950_0855_a[2].push_back(fgrid_7950_7950_a[2][i]+a_grid[2][i]*pow(0.795-0.0855,pwr_a));
        fgrid_7950_0855_a[3].push_back(fgrid_7950_7950_a[3][i]+a_grid[3][i]*pow(0.795-0.0855,pwr_a));
        fgrid_7950_0855_a[4].push_back(fgrid_7950_7950_a[0][i]+a_grid[4][i]*pow(0.795-0.0855,pwr_a));
        fgrid_7950_0855_a[5].push_back(fgrid_7950_7950_a[1][i]+a_grid[5][i]*pow(0.795-0.0855,pwr_a));
        fgrid_7950_0855_a[6].push_back(fgrid_7950_7950_a[2][i]+a_grid[6][i]*pow(0.795-0.0855,pwr_a));
        fgrid_7950_0855_a[7].push_back(fgrid_7950_7950_a[3][i]+a_grid[7][i]*pow(0.795-0.0855,pwr_a));

        fgrid_7950_0500_a[0].push_back(fgrid_7950_7950_a[0][i]+a_grid[0][i]*pow(0.795-0.0500,pwr_a));
        fgrid_7950_0500_a[1].push_back(fgrid_7950_7950_a[1][i]+a_grid[1][i]*pow(0.795-0.0500,pwr_a));
        fgrid_7950_0500_a[2].push_back(fgrid_7950_7950_a[2][i]+a_grid[2][i]*pow(0.795-0.0500,pwr_a));
        fgrid_7950_0500_a[3].push_back(fgrid_7950_7950_a[3][i]+a_grid[3][i]*pow(0.795-0.0500,pwr_a));
        fgrid_7950_0500_a[4].push_back(fgrid_7950_7950_a[0][i]+a_grid[4][i]*pow(0.795-0.0500,pwr_a));
        fgrid_7950_0500_a[5].push_back(fgrid_7950_7950_a[1][i]+a_grid[5][i]*pow(0.795-0.0500,pwr_a));
        fgrid_7950_0500_a[6].push_back(fgrid_7950_7950_a[2][i]+a_grid[6][i]*pow(0.795-0.0500,pwr_a));
        fgrid_7950_0500_a[7].push_back(fgrid_7950_7950_a[3][i]+a_grid[7][i]*pow(0.795-0.0500,pwr_a));

        fgrid_7950_0200_a[0].push_back(fgrid_7950_7950_a[0][i]+a_grid[0][i]*pow(0.795-0.0200,pwr_a));
        fgrid_7950_0200_a[1].push_back(fgrid_7950_7950_a[1][i]+a_grid[1][i]*pow(0.795-0.0200,pwr_a));
        fgrid_7950_0200_a[2].push_back(fgrid_7950_7950_a[2][i]+a_grid[2][i]*pow(0.795-0.0200,pwr_a));
        fgrid_7950_0200_a[3].push_back(fgrid_7950_7950_a[3][i]+a_grid[3][i]*pow(0.795-0.0200,pwr_a));
        fgrid_7950_0200_a[4].push_back(fgrid_7950_7950_a[0][i]+a_grid[4][i]*pow(0.795-0.0200,pwr_a));
        fgrid_7950_0200_a[5].push_back(fgrid_7950_7950_a[1][i]+a_grid[5][i]*pow(0.795-0.0200,pwr_a));
        fgrid_7950_0200_a[6].push_back(fgrid_7950_7950_a[2][i]+a_grid[6][i]*pow(0.795-0.0200,pwr_a));
        fgrid_7950_0200_a[7].push_back(fgrid_7950_7950_a[3][i]+a_grid[7][i]*pow(0.795-0.0200,pwr_a));

        fgrid_7950_0037_a[0].push_back(fgrid_7950_7950_a[0][i]+a_grid[0][i]*pow(0.795-0.0037,pwr_a));
        fgrid_7950_0037_a[1].push_back(fgrid_7950_7950_a[1][i]+a_grid[1][i]*pow(0.795-0.0037,pwr_a));
        fgrid_7950_0037_a[2].push_back(fgrid_7950_7950_a[2][i]+a_grid[2][i]*pow(0.795-0.0037,pwr_a));
        fgrid_7950_0037_a[3].push_back(fgrid_7950_7950_a[3][i]+a_grid[3][i]*pow(0.795-0.0037,pwr_a));
        fgrid_7950_0037_a[4].push_back(fgrid_7950_7950_a[0][i]+a_grid[4][i]*pow(0.795-0.0037,pwr_a));
        fgrid_7950_0037_a[5].push_back(fgrid_7950_7950_a[1][i]+a_grid[5][i]*pow(0.795-0.0037,pwr_a));
        fgrid_7950_0037_a[6].push_back(fgrid_7950_7950_a[2][i]+a_grid[6][i]*pow(0.795-0.0037,pwr_a));
        fgrid_7950_0037_a[7].push_back(fgrid_7950_7950_a[3][i]+a_grid[7][i]*pow(0.795-0.0037,pwr_a));

    }

}

cdouble ns_data::sc_ms_0037_0037(int i, cdouble pp) {
    double a,b,c;
    if(i==0)
    {
        a               = 1.645;
        b               = 9.775;
        c               = 1.400;
    } else {
        std::cout << "error :: only first amplitude can be evaluated analytically for now." << std::endl;}

    return 1./(1.+a*pp)+b*exp(-c*pp);
}

cdouble ns_data::ps_7950_7950(int i, cdouble pp) {
    double a,b,c;
    if(i==0)
    {
        a               = 0.834865;
        b               = 13.6381;
        c               = 0.812782;
    } else {
        std::cout << "error :: only first amplitude can be evaluated analytically for now." << std::endl;}

    return 1./(1.+a*pp)+b*exp(-c*pp);
}

cdouble ns_data::ps_6500_6500(int i, cdouble pp) {
    double a,b,c;
    if(i==0)
    {
        a               = 0.824;
        b               = 13.282;
        c               = 0.869;
    } else {
        std::cout << "error :: only first amplitude can be evaluated analytically for now." << std::endl;}

    return 1./(1.+a*pp)+b*exp(-c*pp);
}

cdouble ns_data::ps_5000_5000(int i, cdouble pp) {
    double a,b,c;
    if(i==0)
    {
        a               = 0.840;
        b               = 12.80;
        c               = 0.988;
    } else {
        std::cout << "error :: only first amplitude can be evaluated analytically for now." << std::endl;}

    return 1./(1.+a*pp)+b*exp(-c*pp);
}

cdouble ns_data::ps_3500_3500(int i, cdouble pp) {
    double a,b,c;
    if(i==0)
    {
        a               = 0.943;
        b               = 12.14;
        c               = 1.128;
    } else {
        std::cout << "error :: only first amplitude can be evaluated analytically for now." << std::endl;}

    return 1./(1.+a*pp)+b*exp(-c*pp);
}

cdouble ns_data::ps_2100_2100(int i, cdouble pp) {
    double a,b,c;
    if(i==0)
    {
        a               = 1.162;
        b               = 11.17;
        c               = 1.281;
    } else {
        std::cout << "error :: only first amplitude can be evaluated analytically for now." << std::endl;}

    return 1./(1.+a*pp)+b*exp(-c*pp);
}

cdouble ns_data::ps_1500_1500(int i, cdouble pp) {
    double a,b,c;
    if(i==0)
    {
        a               = 1.330;
        b               = 10.55;
        c               = 1.349;
    } else {
        std::cout << "error :: only first amplitude can be evaluated analytically for now." << std::endl;}

    return 1./(1.+a*pp)+b*exp(-c*pp);
}

cdouble ns_data::ps_0855_0855(int i, cdouble pp) {
    double a,b,c;
    if(i==0)
    {
        a               = 1.568;
        b               = 9.613;
        c               = 1.418;
    } else {
        std::cout << "error :: only first amplitude can be evaluated analytically for now." << std::endl;}

    return 1./(1.+a*pp)+b*exp(-c*pp);
}

cdouble ns_data::ps_0500_0500(int i, cdouble pp) {
    double a,b,c;
    if(i==0)
    {
        a               = 1.686;
        b               = 8.917;
        c               = 1.451;
    } else {
        std::cout << "error :: only first amplitude can be evaluated analytically for now." << std::endl;}

    return 1./(1.+a*pp)+b*exp(-c*pp);
}

cdouble ns_data::ps_0200_0200(int i, cdouble pp) {
    double a,b,c;
    if(i==0)
    {
        a               = 1.759;
        b               = 8.117;
        c               = 1.471;
    } else {
        std::cout << "error :: only first amplitude can be evaluated analytically for now." << std::endl;}

    return 1./(1.+a*pp)+b*exp(-c*pp);
}

cdouble ns_data::ps_6500_0037(int i, cdouble pp) {
    double a,b,c;
    if(i==0)
    {
        a               = 0.;
        b               = 0.2;
        c               = 0.;
    } else {
        std::cout << "error :: only first amplitude can be evaluated analytically for now." << std::endl;}

    return 1./(1.+a*pp)+b*exp(-c*pp);
}

cdouble ns_data::ps_5000_0037(int i, cdouble pp) {
    double a,b,c;
    if(i==0)
    {
        a               = 0.;
        b               = 0.;
        c               = 0.;
    } else {
        std::cout << "error :: only first amplitude can be evaluated analytically for now." << std::endl;}

    return 1./(1.+a*pp)+b*exp(-c*pp);
}

cdouble ns_data::ps_3500_0037(int i, cdouble pp) {
    double a,b,c;
    if(i==0)
    {
        a               = 0.;
        b               = 0.;
        c               = 0.;
    } else {
        std::cout << "error :: only first amplitude can be evaluated analytically for now." << std::endl;}

    return 1./(1.+a*pp)+b*exp(-c*pp);
}

cdouble ns_data::ps_2100_0037(int i, cdouble pp) {
    double a,b,c;
    if(i==0)
    {
        a               = 0.;
        b               = 0.;
        c               = 0.;
    } else {
        std::cout << "error :: only first amplitude can be evaluated analytically for now." << std::endl;}

    return 1./(1.+a*pp)+b*exp(-c*pp);
}

cdouble ns_data::ps_1500_0037(int i, cdouble pp) {
    double a,b,c;
    if(i==0)
    {
        a               = 0.;
        b               = 0.;
        c               = 0.;
    } else {
        std::cout << "error :: only first amplitude can be evaluated analytically for now." << std::endl;}

    return 1./(1.+a*pp)+b*exp(-c*pp);
}

cdouble ns_data::ps_0855_0037(int i, cdouble pp) {
    double a,b,c;
    if(i==0)
    {
        a               = 0.;
        b               = 0.;
        c               = 0.;
    } else {
        std::cout << "error :: only first amplitude can be evaluated analytically for now." << std::endl;}

    return 1./(1.+a*pp)+b*exp(-c*pp);
}

cdouble ns_data::ps_0500_0037(int i, cdouble pp) {
    double a,b,c;
    if(i==0)
    {
        a               = 0.;
        b               = 0.;
        c               = 0.;
    } else {
        std::cout << "error :: only first amplitude can be evaluated analytically for now." << std::endl;}

    return 1./(1.+a*pp)+b*exp(-c*pp);
}

cdouble ns_data::ps_0200_0037(int i, cdouble pp) {
    double a,b,c;
    if(i==0)
    {
        a               = 0.;
        b               = 0.;
        c               = 0.;
    } else {
        std::cout << "error :: only first amplitude can be evaluated analytically for now." << std::endl;}

    return 1./(1.+a*pp)+b*exp(-c*pp);
}

cdouble ns_data::ps_0037_0037(int i, cdouble pp) {
    double a,b,c;
    if(i==0)
    {
        a               = 1.799;
        b               = 7.527;
        c               = 1.473;
    } else {
        std::cout << "error :: only first amplitude can be evaluated analytically for now." << std::endl;}

    return 1./(1.+a*pp)+b*exp(-c*pp);
}

cdouble ns_data::ps_7950_6500(int i, cdouble pp) {
    double a,b,c;
    if(i==0)
    {
        a               = 0.892981;
        b               = 13.5915;
        c               = 0.891734;
    } else {
        std::cout << "error :: only first amplitude can be evaluated analytically for now." << std::endl;}

    return 1./(1.+a*pp)+b*exp(-c*pp);
}

cdouble ns_data::ps_7950_5000(int i, cdouble pp) {
    double a,b,c;
    if(i==0)
    {
        a               = 1.11263;
        b               = 13.7709;
        c               = 1.09492;
    } else {
        std::cout << "error :: only first amplitude can be evaluated analytically for now." << std::endl;}

    return 1./(1.+a*pp)+b*exp(-c*pp);
}

cdouble ns_data::ps_7950_3500(int i, cdouble pp) {
    double a,b,c;
    if(i==0)
    {
        a               = 0.987;//1.83935;
        b               = 14.331;//14.3344;
        c               = 1.372;//1.55489;
    } else {
        std::cout << "error :: only first amplitude can be evaluated analytically for now." << std::endl;}

    return 1./(1.+a*pp)+b*exp(-c*pp);
}

cdouble ns_data::ps_7950_2100(int i, cdouble pp) {
    double a,b,c;
    if(i==0)
    {
        a               = 1.562;//4.03;
        b               = 14.985;//15.87;
        c               = 1.695;//2.12;
    } else {
        std::cout << "error :: only first amplitude can be evaluated analytically for now." << std::endl;}

    return 1./(1.+a*pp)+b*exp(-c*pp);
}

cdouble ns_data::ps_7950_1500(int i, cdouble pp) {
    double a,b,c;
    if(i==0)
    {
        a               = 1.935;//6.05;
        b               = 15.355;//17.23;
        c               = 1.848;//2.42;
    } else {
        std::cout << "error :: only first amplitude can be evaluated analytically for now." << std::endl;}

    return 1./(1.+a*pp)+b*exp(-c*pp);
}

cdouble ns_data::ps_7950_0855(int i, cdouble pp) {
    double a,b,c;
    if(i==0)
    {
        a               = 2.526;//9.68;
        b               = 15.795;//19.58;
        c               = 2.033;//2.76;
    } else {
        std::cout << "error :: only first amplitude can be evaluated analytically for now." << std::endl;}

    return 1./(1.+a*pp)+b*exp(-c*pp);
}

cdouble ns_data::ps_7950_0500(int i, cdouble pp) {
    double a,b,c;
    if(i==0)
    {
        a               = 2.934;//12.65;
        b               = 16.063;//21.45;
        c               = 2.140;//2.98;
    } else {
        std::cout << "error :: only first amplitude can be evaluated analytically for now." << std::endl;}

    return 1./(1.+a*pp)+b*exp(-c*pp);
}

cdouble ns_data::ps_7950_0200(int i, cdouble pp) {
    double a,b,c;
    if(i==0)
    {
        a               = 3.339;//15.92;
        b               = 16.301;//23.47;
        c               = 2.232;//3.17;
    } else {
        std::cout << "error :: only first amplitude can be evaluated analytically for now." << std::endl;}

    return 1./(1.+a*pp)+b*exp(-c*pp);
}

cdouble ns_data::ps_7950_0037(int i, cdouble pp) {
    double a,b,c;
    if(i==0)
    {
        a               = 3.541;//18.06;
        b               = 16.438;//24.78;
        c               = 2.287;//3.28;
    } else {
        std::cout << "error :: only first amplitude can be evaluated analytically for now." << std::endl;}

    return 1./(1.+a*pp)+b*exp(-c*pp);
}


cdouble ns_data::vc_7950_7950(int i, cdouble pp) {
    double a,b,c;
    if(i==0)
    {
        a               = 0.889483;
        b               = 6.29886;
        c               = 0.793485;
    } else {
        std::cout << "error :: only first amplitude can be evaluated analytically for now." << std::endl;}

    return 1./(1.+a*pp)+b*exp(-c*pp);
}

cdouble ns_data::vc_7950_6500(int i, cdouble pp) {
    double a,b,c;
    if(i==0)
    {
        a               = 1.0292;
        b               = 6.3553;
        c               = 0.923338;
    } else {
        std::cout << "error :: only first amplitude can be evaluated analytically for now." << std::endl;}

    return 1./(1.+a*pp)+b*exp(-c*pp);
}

cdouble ns_data::vc_7950_5000(int i, cdouble pp) {
    double a,b,c;
    if(i==0)
    {
        a               = 1.365;//1.57063;
        b               = 6.790;//6.78987;
        c               = 1.223;//1.35872;
    } else {
        std::cout << "error :: only first amplitude can be evaluated analytically for now." << std::endl;}

    return 1./(1.+a*pp)+b*exp(-c*pp);
}

cdouble ns_data::vc_7950_3500(int i, cdouble pp) {
    double a,b,c;
    if(i==0)
    {
        a               = 1.778;//2.81;
        b               = 7.566;//8.34;
        c               = 1.666;//2.10;
    } else {
        std::cout << "error :: only first amplitude can be evaluated analytically for now." << std::endl;}

    return 1./(1.+a*pp)+b*exp(-c*pp);
}

cdouble ns_data::vc_7950_2100(int i, cdouble pp) {
    double a,b,c;
    if(i==0)
    {
        a               = 2.342;//5.04;
        b               = 8.671;//11.8;
        c               = 2.231;//3.06;
    } else {
        std::cout << "error :: only first amplitude can be evaluated analytically for now." << std::endl;}

    return 1./(1.+a*pp)+b*exp(-c*pp);
}

cdouble ns_data::vc_7950_1500(int i, cdouble pp) {
    double a,b,c;
    if(i==0)
    {
        a               = 2.745;//6.47;
        b               = 9.262;//14.4;
        c               = 2.507;//3.60;
    } else {
        std::cout << "error :: only first amplitude can be evaluated analytically for now." << std::endl;}

    return 1./(1.+a*pp)+b*exp(-c*pp);
}

cdouble ns_data::vc_7950_0855(int i, cdouble pp) {
    double a,b,c;
    if(i==0)
    {
        a               = 3.272;//8.39;
        b               = 9.974;//18.0;
        c               = 2.809;//4.20;
    } else {
        std::cout << "error :: only first amplitude can be evaluated analytically for now." << std::endl;}

    return 1./(1.+a*pp)+b*exp(-c*pp);
}

cdouble ns_data::vc_7950_0500(int i, cdouble pp) {
    double a,b,c;
    if(i==0)
    {
        a               = 3.678;//9.60;
        b               = 10.395;//20.3;
        c               = 2.978;//4.50;
    } else {
        std::cout << "error :: only first amplitude can be evaluated analytically for now." << std::endl;}

    return 1./(1.+a*pp)+b*exp(-c*pp);
}

cdouble ns_data::vc_7950_0200(int i, cdouble pp) {
    double a,b,c;
    if(i==0)
    {
        a               = 4.053;//10.83;
        b               = 10.778;//22.65;
        c               = 3.126;//4.81;
    } else {
        std::cout << "error :: only first amplitude can be evaluated analytically for now." << std::endl;}

    return 1./(1.+a*pp)+b*exp(-c*pp);
}

cdouble ns_data::vc_7950_0037(int i, cdouble pp) {
    double a,b,c;
    if(i==0)
    {
        a               = 4.289;//11.50;
        b               = 10.991;//24.0;
        c               = 3.205;//4.98;
    } else {
        std::cout << "error :: only first amplitude can be evaluated analytically for now." << std::endl;}

    return 1./(1.+a*pp)+b*exp(-c*pp);
}

cdouble ns_data::vc_6500_6500(int i, cdouble pp) {
    double a,b,c;
    if(i==0)
    {
        a               = 1.09304;
        b               = 6.19;
        c               = 0.895;
    } else {
        std::cout << "error :: only first amplitude can be evaluated analytically for now." << std::endl;}

    return 1./(1.+a*pp)+b*exp(-c*pp);
}

cdouble ns_data::vc_5000_5000(int i, cdouble pp) {
    double a,b,c;
    if(i==0)
    {
        a               = 1.333;
        b               = 5.975;
        c               = 1.032;
    } else {
        std::cout << "error :: only first amplitude can be evaluated analytically for now." << std::endl;}

    return 1./(1.+a*pp)+b*exp(-c*pp);
}

cdouble ns_data::vc_3500_3500(int i, cdouble pp) {
    double a,b,c;
    if(i==0)
    {
        a               = 1.670;
        b               = 5.668;
        c               = 1.234;
    } else {
        std::cout << "error :: only first amplitude can be evaluated analytically for now." << std::endl;}

    return 1./(1.+a*pp)+b*exp(-c*pp);
}

cdouble ns_data::vc_2100_2100(int i, cdouble pp) {
    double a,b,c;
    if(i==0)
    {
        a               = 2.369;
        b               = 5.223;
        c               = 1.504;
    } else {
        std::cout << "error :: only first amplitude can be evaluated analytically for now." << std::endl;}

    return 1./(1.+a*pp)+b*exp(-c*pp);
}

cdouble ns_data::vc_1500_1500(int i, cdouble pp) {
    double a,b,c;
    if(i==0)
    {
        a               = 2.836;
        b               = 4.940;
        c               = 1.659;
    } else {
        std::cout << "error :: only first amplitude can be evaluated analytically for now." << std::endl;}

    return 1./(1.+a*pp)+b*exp(-c*pp);
}

cdouble ns_data::vc_0855_0855(int i, cdouble pp) {
    double a,b,c;
    if(i==0)
    {
        a               = 3.432;
        b               = 4.447;
        c               = 1.865;
    } else {
        std::cout << "error :: only first amplitude can be evaluated analytically for now." << std::endl;}

    return 1./(1.+a*pp)+b*exp(-c*pp);
}

cdouble ns_data::vc_0500_0500(int i, cdouble pp) {
    double a,b,c;
    if(i==0)
    {
        a               = 3.691;
        b               = 4.050;
        c               = 1.998;
    } else {
        std::cout << "error :: only first amplitude can be evaluated analytically for now." << std::endl;}

    return 1./(1.+a*pp)+b*exp(-c*pp);
}

cdouble ns_data::vc_0200_0200(int i, cdouble pp) {
    double a,b,c;
    if(i==0)
    {
        a               = 3.778;
        b               = 3.514;
        c               = 2.114;
    } else {
        std::cout << "error :: only first amplitude can be evaluated analytically for now." << std::endl;}

    return 1./(1.+a*pp)+b*exp(-c*pp);
}

cdouble ns_data::vc_0037_0037(int i, cdouble pp) {
    double a,b,c;
    if(i==0)
    {
        a               = 3.657;
        b               = 3.123;
        c               = 2.172;
    } else {
        std::cout << "error :: only first amplitude can be evaluated analytically for now." << std::endl;}

    return 1./(1.+a*pp)+b*exp(-c*pp);
}






//cdouble ns_data::vc_6500_6500(int i, double pp) {return numerics::interpolation::linear_1d(pgrid_6500_6500_v,fgrid_6500_6500_v[i],pp);}
//cdouble ns_data::vc_5000_5000(int i, double pp) {return numerics::interpolation::linear_1d(pgrid_5000_5000_v,fgrid_5000_5000_v[i],pp);}
//cdouble ns_data::vc_3500_3500(int i, double pp) {return numerics::interpolation::linear_1d(pgrid_3500_3500_v,fgrid_3500_3500_v[i],pp);}
//cdouble ns_data::vc_2100_2100(int i, double pp) {return numerics::interpolation::linear_1d(pgrid_2100_2100_v,fgrid_2100_2100_v[i],pp);}
//cdouble ns_data::vc_1500_1500(int i, double pp) {return numerics::interpolation::linear_1d(pgrid_1500_1500_v,fgrid_1500_1500_v[i],pp);}
//cdouble ns_data::vc_0855_0855(int i, double pp) {return numerics::interpolation::linear_1d(pgrid_0855_0855_v,fgrid_0855_0855_v[i],pp);}
//cdouble ns_data::vc_0500_0500(int i, double pp) {return numerics::interpolation::linear_1d(pgrid_0500_0500_v,fgrid_0500_0500_v[i],pp);}
//cdouble ns_data::vc_0200_0200(int i, double pp) {return numerics::interpolation::linear_1d(pgrid_0200_0200_v,fgrid_0200_0200_v[i],pp);}
cdouble ns_data::vc_6500_0037(int i, double pp) {return 0.;}
cdouble ns_data::vc_5000_0037(int i, double pp) {return 0.;}
cdouble ns_data::vc_3500_0037(int i, double pp) {return 0.;}
cdouble ns_data::vc_2100_0037(int i, double pp) {return 0.;}
cdouble ns_data::vc_1500_0037(int i, double pp) {return 0.;}
cdouble ns_data::vc_0855_0037(int i, double pp) {return 0.;}
cdouble ns_data::vc_0500_0037(int i, double pp) {return 0.;}
cdouble ns_data::vc_0200_0037(int i, double pp) {return 0.;}
//cdouble ns_data::vc_0037_0037(int i, double pp) {return numerics::interpolation::linear_1d(pgrid_0037_0037_v,fgrid_0037_0037_v[i],pp);}


cdouble ns_data::sc_7950_7950(int i, double pp) {return numerics::interpolation::linear_1d(pgrid_7950_7950_s,fgrid_7950_7950_s[i],pp);}
cdouble ns_data::sc_6500_6500(int i, double pp) {return numerics::interpolation::linear_1d(pgrid_6500_6500_s,fgrid_6500_6500_s[i],pp);}
cdouble ns_data::sc_5000_5000(int i, double pp) {return numerics::interpolation::linear_1d(pgrid_5000_5000_s,fgrid_5000_5000_s[i],pp);}
cdouble ns_data::sc_3500_3500(int i, double pp) {return numerics::interpolation::linear_1d(pgrid_3500_3500_s,fgrid_3500_3500_s[i],pp);}
cdouble ns_data::sc_2100_2100(int i, double pp) {return numerics::interpolation::linear_1d(pgrid_2100_2100_s,fgrid_2100_2100_s[i],pp);}
cdouble ns_data::sc_1500_1500(int i, double pp) {return numerics::interpolation::linear_1d(pgrid_1500_1500_s,fgrid_1500_1500_s[i],pp);}
cdouble ns_data::sc_0855_0855(int i, double pp) {return numerics::interpolation::linear_1d(pgrid_0855_0855_s,fgrid_0855_0855_s[i],pp);}
cdouble ns_data::sc_0500_0500(int i, double pp) {return numerics::interpolation::linear_1d(pgrid_0500_0500_s,fgrid_0500_0500_s[i],pp);}
cdouble ns_data::sc_0200_0200(int i, double pp) {return numerics::interpolation::linear_1d(pgrid_0200_0200_s,fgrid_0200_0200_s[i],pp);}
cdouble ns_data::sc_0037_0037(int i, double pp) {return numerics::interpolation::linear_1d(pgrid_0037_0037_s,fgrid_0037_0037_s[i],pp);}
cdouble ns_data::sc_7950_6500(int i, double pp) {return numerics::interpolation::linear_1d(pgrid_7950_6500_s,fgrid_7950_6500_s[i],pp);}
cdouble ns_data::sc_7950_5000(int i, double pp) {return numerics::interpolation::linear_1d(pgrid_7950_5000_s,fgrid_7950_5000_s[i],pp);}
cdouble ns_data::sc_7950_3500(int i, double pp) {return numerics::interpolation::linear_1d(pgrid_7950_3500_s,fgrid_7950_3500_s[i],pp);}
cdouble ns_data::sc_7950_2100(int i, double pp) {return numerics::interpolation::linear_1d(pgrid_7950_2100_s,fgrid_7950_2100_s[i],pp);}
cdouble ns_data::sc_7950_1500(int i, double pp) {return numerics::interpolation::linear_1d(pgrid_7950_1500_s,fgrid_7950_1500_s[i],pp);}
cdouble ns_data::sc_7950_0855(int i, double pp) {return numerics::interpolation::linear_1d(pgrid_7950_0855_s,fgrid_7950_0855_s[i],pp);}
cdouble ns_data::sc_7950_0500(int i, double pp) {return numerics::interpolation::linear_1d(pgrid_7950_0500_s,fgrid_7950_0500_s[i],pp);}
cdouble ns_data::sc_7950_0200(int i, double pp) {return numerics::interpolation::linear_1d(pgrid_7950_0200_s,fgrid_7950_0200_s[i],pp);}
cdouble ns_data::sc_6500_0037(int i, double pp) {return 0.;}
cdouble ns_data::sc_5000_0037(int i, double pp) {return 0.;}
cdouble ns_data::sc_3500_0037(int i, double pp) {return 0.;}
cdouble ns_data::sc_2100_0037(int i, double pp) {return 0.;}
cdouble ns_data::sc_1500_0037(int i, double pp) {return 0.;}
cdouble ns_data::sc_0855_0037(int i, double pp) {return 0.;}
cdouble ns_data::sc_0500_0037(int i, double pp) {return 0.;}
cdouble ns_data::sc_0200_0037(int i, double pp) {return 0.;}
cdouble ns_data::sc_7950_0037(int i, double pp) {return numerics::interpolation::linear_1d(pgrid_7950_0037_s,fgrid_7950_0037_s[i],pp);}
cdouble ns_data::sc_0037_0037_C(int i, cdouble pp) {return 1./(1.+2.49*pp)+8.39*exp(-1.71*pp);}


cdouble ns_data::ax_7950_7950(int i, double pp) {return numerics::interpolation::linear_1d(pgrid_7950_7950_a,fgrid_7950_7950_a[i],pp);}
cdouble ns_data::ax_6500_6500(int i, double pp) {return numerics::interpolation::linear_1d(pgrid_6500_6500_a,fgrid_6500_6500_a[i],pp);}
cdouble ns_data::ax_5000_5000(int i, double pp) {return numerics::interpolation::linear_1d(pgrid_5000_5000_a,fgrid_5000_5000_a[i],pp);}
cdouble ns_data::ax_3500_3500(int i, double pp) {return numerics::interpolation::linear_1d(pgrid_3500_3500_a,fgrid_3500_3500_a[i],pp);}
cdouble ns_data::ax_2100_2100(int i, double pp) {return numerics::interpolation::linear_1d(pgrid_2100_2100_a,fgrid_2100_2100_a[i],pp);}
cdouble ns_data::ax_1500_1500(int i, double pp) {return numerics::interpolation::linear_1d(pgrid_1500_1500_a,fgrid_1500_1500_a[i],pp);}
cdouble ns_data::ax_0855_0855(int i, double pp) {return numerics::interpolation::linear_1d(pgrid_0855_0855_a,fgrid_0855_0855_a[i],pp);}
cdouble ns_data::ax_0500_0500(int i, double pp) {return numerics::interpolation::linear_1d(pgrid_0500_0500_a,fgrid_0500_0500_a[i],pp);}
cdouble ns_data::ax_0200_0200(int i, double pp) {return numerics::interpolation::linear_1d(pgrid_0200_0200_a,fgrid_0200_0200_a[i],pp);}
cdouble ns_data::ax_0037_0037(int i, double pp) {return numerics::interpolation::linear_1d(pgrid_0037_0037_a,fgrid_0037_0037_a[i],pp);}
cdouble ns_data::ax_7950_6500(int i, double pp) {return numerics::interpolation::linear_1d(pgrid_7950_6500_a,fgrid_7950_6500_a[i],pp);}
cdouble ns_data::ax_7950_5000(int i, double pp) {return numerics::interpolation::linear_1d(pgrid_7950_5000_a,fgrid_7950_5000_a[i],pp);}
cdouble ns_data::ax_7950_3500(int i, double pp) {return numerics::interpolation::linear_1d(pgrid_7950_3500_a,fgrid_7950_3500_a[i],pp);}
cdouble ns_data::ax_7950_2100(int i, double pp) {return numerics::interpolation::linear_1d(pgrid_7950_2100_a,fgrid_7950_2100_a[i],pp);}
cdouble ns_data::ax_7950_1500(int i, double pp) {return numerics::interpolation::linear_1d(pgrid_7950_1500_a,fgrid_7950_1500_a[i],pp);}
cdouble ns_data::ax_7950_0855(int i, double pp) {return numerics::interpolation::linear_1d(pgrid_7950_0855_a,fgrid_7950_0855_a[i],pp);}
cdouble ns_data::ax_7950_0500(int i, double pp) {return numerics::interpolation::linear_1d(pgrid_7950_0500_a,fgrid_7950_0500_a[i],pp);}
cdouble ns_data::ax_7950_0200(int i, double pp) {return numerics::interpolation::linear_1d(pgrid_7950_0200_a,fgrid_7950_0200_a[i],pp);}
cdouble ns_data::ax_6500_0037(int i, double pp) {return 0.;}
cdouble ns_data::ax_5000_0037(int i, double pp) {return 0.;}
cdouble ns_data::ax_3500_0037(int i, double pp) {return 0.;}
cdouble ns_data::ax_2100_0037(int i, double pp) {return 0.;}
cdouble ns_data::ax_1500_0037(int i, double pp) {return 0.;}
cdouble ns_data::ax_0855_0037(int i, double pp) {return 0.;}
cdouble ns_data::ax_0500_0037(int i, double pp) {return 0.;}
cdouble ns_data::ax_0200_0037(int i, double pp) {return 0.;}
cdouble ns_data::ax_7950_0037(int i, double pp) {return numerics::interpolation::linear_1d(pgrid_7950_0037_a,fgrid_7950_0037_a[i],pp);}

cdouble ns_data::prop_ps(std::string id, cdouble pp)
{
    double uv,a,b,c,d,mass;
    if (id == "7950_7950")
    {
        mass    =   2.802; // MT: ~2.802, phys: ~2.983
        uv      =   0.0814;
        a       =   1.461;
        b       =   17.8187;
        c       =   0.00148;
        d       =   0.494;
    }
    if (id == "6500_6500")
    {
        mass    =   2.435;
        uv      =   0.1144;
        a       =   1.291;
        b       =   15.77;
        c       =   0.006168;
        d       =   0.766;
    }
    if (id == "5000_5000")
    {
        mass    =   2.035;
        uv      =   0.145;
        a       =   0.568;
        b       =   12.687;
        c       =   0.00682;
        d       =   1.311;
    }
    if (id == "3500_3500")
    {
        mass    =   1.612;
        uv      =   0.195;
        a       =   -0.0527;
        b       =   9.530;
        c       =   0.00892;
        d       =   1.9867;
    }
    if (id == "2100_2100")
    {
        mass    =   1.175;
        uv      =   0.286;
        a       =   -0.439;
        b       =   6.494;
        c       =   0.0136;
        d       =   3.412;
    }
    if (id == "1500_1500")
    {
        mass    =   0.964;
        uv      =   0.357;
        a       =   -0.361;
        b       =   5.616;
        c       =   0.000623;
        d       =   0.0966;
    }
    if (id == "0855_0855")
    {
        mass    =   0.703;
        uv      =   0.489;
        a       =   -0.632;
        b       =   3.322;
        c       =   0.0485;
        d       =   7.546;
    }
    if (id == "0500_0500")
    {
        mass    =   0.528;
        uv      =   0.611;
        a       =   0.560;
        b       =   5.176;
        c       =   0.00105;
        d       =   0.126;
    }
    if (id == "0200_0200")
    {
        mass    =   0.329;
        uv      =   0.782;
        a       =   0.0894;
        b       =   3.432;
        c       =   0.00190;
        d       =   0.132;
    }
    if (id == "0037_0037")
    {
        mass    =   0.140;
        uv      =   0.940;
        a       =   -0.298;
        b       =   1.994;
        c       =   0.00104;
        d       =   0.258;
    }
    if (id == "7950_6500")
    {
        mass    =   2.620;
        uv      =   0.0995;
        a       =   1.480;
        b       =   15.012;
        c       =   0.00537;
        d       =   0.500;
    }
    if (id == "7950_5000")
    {
        mass    =   2.433;
        uv      =   0.1140;
        a       =   1.471;
        b       =   13.689;
        c       =   0.00462;
        d       =   0.634;
    }
    if (id == "7950_3500")
    {
        mass    =   2.252;
        uv      =   0.1344;
        a       =   1.471;
        b       =   11.324;
        c       =   0.00645;
        d       =   0.689;
    }
    if (id == "7950_2100")
    {
        mass    =   2.075;
        uv      =   0.149;
        a       =   1.471;//
        b       =   9.324;//
        c       =   0.00645;//
        d       =   0.759;//
    }
    if (id == "7950_1500")
    {
        mass    =   2.001;
        uv      =   0.156;
        a       =   1.471;//
        b       =   8.324;//
        c       =   0.00645;//
        d       =   0.799;//
    }
    if (id == "7950_0855")
    {
        mass    =   1.921;
        uv      =   0.164;
        a       =   1.471;
        b       =   7.700;
        c       =   0.00645;
        d       =   0.689;
    }
    if (id == "7950_0500")
    {
        mass    =   1.877;
        uv      =   0.168;
        a       =   1.471;
        b       =   7.200;
        c       =   0.00645;
        d       =   0.689;
    }
    if (id == "7950_0200")
    {
        mass    =   1.840;
        uv      =   0.172;
        a       =   1.471;
        b       =   7.000;
        c       =   0.00645;
        d       =   0.689;
    }
    if (id == "7950_0037")
    {
        mass    =   1.820;
        uv      =   0.173;
        a       =   1.471;
        b       =   7.000;
        c       =   0.00645;
        d       =   0.689;
    }
    return 1./(pp+mass*mass)+uv*(pp+a)/(pp+b)+c*exp(-d*pp);
}

cdouble ns_data::prop_vc_t(std::string id, cdouble pp)
{
    double uv,a,b,c,d,mass;
    if (id == "7950_7950")
    {
        mass    =   2.991;
        uv      =   0.255;
        a       =   13.29;
        b       =   20.87;
        c       =   0.0105;
        d       =   0.206;
    }
    if (id == "6500_6500")
    {
        mass    =   2.637;
        uv      =   0.315;
        a       =   11.54;
        b       =   18.89;
        c       =   0.0183;
        d       =   0.183;
    }
    if (id == "5000_5000")
    {
        mass    =   2.260;
        uv      =   0.408;
        a       =   10.06;
        b       =   16.53;
        c       =   0.0241;
        d       =   0.230;
    }
    if (id == "3500_3500")
    {
        mass    =   1.865;
        uv      =   0.574;
        a       =   8.540;
        b       =   14.11;
        c       =   0.0397;
        d       =   0.280;
    }
    if (id == "2100_2100")
    {
        mass    =   1.469;
        uv      =   0.898;
        a       =   6.998;
        b       =   11.65;
        c       =   0.0766;
        d       =   0.287;
    }
    if (id == "1500_1500")
    {
        mass    =   1.286;
        uv      =   1.161;
        a       =   7.697;
        b       =   12.09;
        c       =   0.0820;
        d       =   0.610;
    }
    if (id == "0855_0855")
    {
        mass    =   1.070;
        uv      =   1.690;
        a       =   6.783;
        b       =   10.64;
        c       =   0.160;
        d       =   0.607;
    }
    if (id == "0500_0500")
    {
        mass    =   0.938;
        uv      =   2.213;
        a       =   6.578;
        b       =   10.17;
        c       =   0.213;
        d       =   0.684;
    }
    if (id == "0200_0200")
    {
        mass    =   0.813;
        uv      =   3.052;
        a       =   6.461;
        b       =   9.774;
        c       =   0.326;
        d       =   0.860;
    }
    if (id == "0037_0037")
    {
        mass    =   0.775;
        uv      =   3.814;
        a       =   6.440;
        b       =   9.622;
        c       =   0.329;
        d       =   0.914;
    }
    if (id == "7950_6500")
    {
        mass    =   2.819;
        uv      =   0.285;
        a       =   13.73;
        b       =   21.83;
        c       =   0.0102;
        d       =   0.201;
    }
    if (id == "7950_5000")
    {
        mass    =   2.654;
        uv      =   0.322;
        a       =   10.81;
        b       =   17.71;
        c       =   0.014;
        d       =   0.238;
    }

    // until here calculated the following ones are extrapolated

    if (id == "7950_3500")
    {
        mass    =   2.481;
        uv      =   0.356;
        a       =   10.81;
        b       =   17.70;
        c       =   0.014;
        d       =   0.238;
    }
    if (id == "7950_2100")
    {
        mass    =   2.321;
        uv      =   0.387;
        a       =   10.81;
        b       =   17.71;
        c       =   0.014;
        d       =   0.238;
    }
    if (id == "7950_1500")
    {
        mass    =   2.252;
        uv      =   0.401;
        a       =   10.81;
        b       =   17.71;
        c       =   0.014;
        d       =   0.238;
    }
    if (id == "7950_0855")
    {
        mass    =   2.179;
        uv      =   0.415;
        a       =   10.81;
        b       =   17.71;
        c       =   0.014;
        d       =   0.238;
    }
    if (id == "7950_0500")
    {
        mass    =   2.138;
        uv      =   0.424;
        a       =   10.81;
        b       =   17.71;
        c       =   0.014;
        d       =   0.238;
    }
    if (id == "7950_0200")
    {
        mass    =   2.104;
        uv      =   0.430;
        a       =   10.81;
        b       =   17.71;
        c       =   0.014;
        d       =   0.238;
    }
    if (id == "7950_0037")
    {
        mass    =   2.085;
        uv      =   0.434;
        a       =   10.81;
        b       =   17.71;
        c       =   0.014;
        d       =   0.238;
    }

    return 1./(pp+mass*mass)+uv*(pp+a)/(pp+b)+c*exp(-d*pp);
}

cdouble ns_data::prop_vc_l(std::string id, cdouble pp)
{
    double uv,a,b,c,d;
    if (id == "7950_7950")
    {
        uv      =   0.255;
        a       =   1.43;
        b       =   20.69;
        c       =   15.28;
        d       =   19.67;
    }
    if (id == "6500_6500")
    {
        uv      =   0.315;
        a       =   1.404;
        b       =   10.379;
        c       =   16.74;
        d       =   13.18;
    }
    if (id == "5000_5000")
    {
        uv      =   0.408;
        a       =   1.831;
        b       =   11.04;
        c       =   13.14;
        d       =   11.15;
    }
    if (id == "3500_3500")
    {
        uv      =   0.574;
        a       =   2.588;
        b       =   8.478;
        c       =   14.79;
        d       =   8.454;
    }
    if (id == "2100_2100")
    {
        uv      =   0.898;
        a       =   4.025;
        b       =   6.165;
        c       =   17.20;
        d       =   6.021;
    }
    if (id == "1500_1500")
    {
        uv      =   1.161;
        a       =   4.562;
        b       =   4.355;
        c       =   13.84;
        d       =   2.244;
    }
    if (id == "0855_0855")
    {
        uv      =   1.690;
        a       =   6.664;
        b       =   3.539;
        c       =   17.66;
        d       =   3.485;
    }
    if (id == "0500_0500")
    {
        uv      =   2.213;
        a       =   9.222;
        b       =   3.427;
        c       =   23.04;
        d       =   3.255;
    }
    if (id == "0200_0200")
    {
        uv      =   3.052;
        a       =   10.36;
        b       =   2.002;
        c       =   18.31;
        d       =   2.067;
    }
    if (id == "0037_0037")
    {
        uv      =   3.815;
        a       =   12.22;
        b       =   1.125;
        c       =   24.18;
        d       =   1.574;
    }
    if (id == "7950_6500")
    {
        uv      =   0.285;
        a       =   1.375;
        b       =   18.71;
        c       =   14.84;
        d       =   18.11;
    }
    if (id == "7950_5000")
    {
        uv      =   0.322;
        a       =   1.47;
        b       =   16.20;
        c       =   15.15;
        d       =   15.74;
    }

    // until here calculated, from here extrapolated

    if (id == "7950_3500")
    {
        uv      =   0.356;
        a       =   1.47;
        b       =   14.20;
        c       =   15.15;
        d       =   13.74;
    }
    if (id == "7950_2100")
    {
        uv      =   0.387;
        a       =   1.47;
        b       =   13.00;
        c       =   15.15;
        d       =   12.30;
    }
    if (id == "7950_1500")
    {
        uv      =   0.401;
        a       =   1.47;
        b       =   12.00;
        c       =   15.15;
        d       =   11.30;
    }
    if (id == "7950_0855")
    {
        uv      =   0.415;
        a       =   1.47;
        b       =   10.80;
        c       =   15.15;
        d       =   10.00;
    }
    if (id == "7950_0500")
    {
        uv      =   0.424;
        a       =   1.47;
        b       =   10.30;
        c       =   15.15;
        d       =   9.60;
    }
    if (id == "7950_0200")
    {
        uv      =   0.430;
        a       =   1.47;
        b       =   10.00;
        c       =   15.15;
        d       =   9.20;
    }
    if (id == "7950_0037")
    {
        uv      =   0.434;
        a       =   1.47;
        b       =   9.80;
        c       =   15.15;
        d       =   9.00;
    }
    return a/(pp+b)-c/(pow(pp+d,2))+uv;
}

cdouble ns_data::prop_sc(std::string id, cdouble pp)
{
    double uv,a,b,c,d,mass;
    if (id == "7950_7950")
    {
        mass    =   3.389;
        uv      =   0.194;
        a       =   17.34;
        b       =   27.47;
        c       =   0.015;
        d       =   0.198;
    }
    if (id == "7950_7700")
    {
        mass    =   3.359;
        uv      =   0.197;
        a       =   17.98;
        b       =   28.43;
        c       =   0.0147;
        d       =   0.206;
    }
    if (id == "7950_7500")
    {
        mass    =   3.339;
        uv      =   0.199;
        a       =   17.23;
        b       =   27.28;
        c       =   0.0154;
        d       =   0.210;
    }
    if (id == "7950_6500")
    {
        mass    =   3.227;
        uv      =   0.211;
        a       =   17.23;
        b       =   27.28;
        c       =   0.0154;
        d       =   0.210;
    }
    if (id == "7950_5000")
    {
        mass    =   3.060;
        uv      =   0.228;
        a       =   17.23;
        b       =   27.28;
        c       =   0.0154;
        d       =   0.210;
    }
    if (id == "7950_3500")
    {
        mass    =   2.892;
        uv      =   0.244;
        a       =   17.23;
        b       =   27.28;
        c       =   0.0154;
        d       =   0.210;
    }
    if (id == "7950_2100")
    {
        mass    =   2.736;
        uv      =   0.260;
        a       =   17.23;
        b       =   27.28;
        c       =   0.0154;
        d       =   0.210;
    }
    if (id == "7950_1500")
    {
        mass    =   2.669;
        uv      =   0.266;
        a       =   17.23;
        b       =   27.28;
        c       =   0.0154;
        d       =   0.210;
    }
    if (id == "7950_0855")
    {
        mass    =   2.597;
        uv      =   0.274;
        a       =   17.23;
        b       =   27.28;
        c       =   0.0154;
        d       =   0.210;
    }
    if (id == "7950_0500")
    {
        mass    =   2.558;
        uv      =   0.277;
        a       =   17.23;
        b       =   27.28;
        c       =   0.0154;
        d       =   0.210;
    }
    if (id == "7950_0200")
    {
        mass    =   2.524;
        uv      =   0.281;
        a       =   17.23;
        b       =   27.28;
        c       =   0.0154;
        d       =   0.210;
    }
    if (id == "7950_0037")
    {
        mass    =   2.506;
        uv      =   0.283;
        a       =   17.23;
        b       =   27.28;
        c       =   0.0154;
        d       =   0.210;
    }
    if (id == "0037_0037")
    {
        mass    =   0.810;
        uv      =   0.995;
        a       =   0.313;
        b       =   2.837;
        c       =   0.185;
        d       =   0.222;
    }
    if (id == "0200_0200")
    {
        mass    =   0.924;
        uv      =   0.818;
        a       =   0.541;
        b       =   3.426;
        c       =   0.106;
        d       =   0.180;
    }
    if (id == "0500_0500")
    {
        mass    =   1.097;
        uv      =   0.629;
        a       =   1.013;
        b       =   4.448;
        c       =   0.0363;
        d       =   0.122;
    }
    if (id == "0855_0855")
    {
        mass    =   1.270;
        uv      =   0.511;
        a       =   1.686;
        b       =   5.911;
        c       =   0.0134;
        d       =   0.0399;
    }
    if (id == "1500_1500")
    {
        mass    =   1.537;
        uv      =   0.396;
        a       =   2.423;
        b       =   7.246;
        c       =   0.0208;
        d       =   1.586;
    }
    if (id == "2100_2100")
    {
        mass    =   1.754;
        uv      =   0.336;
        a       =   3.008;
        b       =   8.434;
        c       =   0.0254;
        d       =   0.851;
    }
    if (id == "3500_3500")
    {
        mass    =   2.201;
        uv      =   0.264;
        a       =   4.979;
        b       =   11.56;
        c       =   0.0267;
        d       =   0.494;
    }
    if (id == "5000_5000")
    {
        mass    =   2.628;
        uv      =   0.229;
        a       =   7.561;
        b       =   14.90;
        c       =   0.0258;
        d       =   0.328;
    }
    if (id == "6500_6500")
    {
        mass    =   3.026;
        uv      =   0.207;
        a       =   11.29;
        b       =   19.62;
        c       =   0.0210;
        d       =   0.253;
    }
    return 1./(pp+mass*mass)+uv*(pp+a)/(pp+b)+c*exp(-d*pp);
}

cdouble ns_data::prop_ax_t(std::string id, cdouble pp)
{
    double uv,a,b,c,d,mass;
    if (id == "7950_7950")
    {
        mass    =   3.430;
        uv      =   0.685;
        a       =   13.51;
        b       =   17.04;
        c       =   0.039;
        d       =   0.158;
    }
    if (id == "7950_7850")
    {
        mass    =   3.420;
        uv      =   0.686;
        a       =   13.48;
        b       =   16.98;
        c       =   0.0401;
        d       =   0.160;
    }
    if (id == "7950_6500")
    {
        mass    =   3.270;
        uv      =   0.698;
        a       =   13.48;
        b       =   16.98;
        c       =   0.0401;
        d       =   0.160;
    }
    if (id == "7950_5000")
    {
        mass    =   3.105;
        uv      =   0.712;
        a       =   13.48;
        b       =   16.98;
        c       =   0.0401;
        d       =   0.160;
    }
    if (id == "7950_3500")
    {
        mass    =   2.940;
        uv      =   0.728;
        a       =   13.48;
        b       =   16.98;
        c       =   0.0401;
        d       =   0.160;
    }

    // until here calculated the following ones are extrapolated

    if (id == "7950_2100")
    {
        mass    =   2.786;
        uv      =   0.742;
        a       =   13.48;
        b       =   16.98;
        c       =   0.0401;
        d       =   0.160;
    }
    if (id == "7950_1500")
    {
        mass    =   2.720;
        uv      =   0.750;
        a       =   13.48;
        b       =   16.98;
        c       =   0.0401;
        d       =   0.160;
    }
    if (id == "7950_0855")
    {
        mass    =   2.649;
        uv      =   0.756;
        a       =   13.48;
        b       =   16.98;
        c       =   0.0401;
        d       =   0.160;
    }
    if (id == "7950_0500")
    {
        mass    =   2.610;
        uv      =   0.760;
        a       =   13.48;
        b       =   16.98;
        c       =   0.0401;
        d       =   0.160;
    }
    if (id == "7950_0200")
    {
        mass    =   2.577;
        uv      =   0.763;
        a       =   13.48;
        b       =   16.98;
        c       =   0.0401;
        d       =   0.160;
    }
    if (id == "7950_0037")
    {
        mass    =   2.559;
        uv      =   0.764;
        a       =   13.48;
        b       =   16.98;
        c       =   0.0401;
        d       =   0.160;
    }
    if (id == "6500_6500")
    {
        mass    =   3.076;
        uv      =   0.755;
        a       =   9.444;
        b       =   12.45;
        c       =   0.0654;
        d       =   0.181;
    }
    if (id == "5000_5000")
    {
        mass    =   2.689;
        uv      =   0.894;
        a       =   8.555;
        b       =   11.39;
        c       =   0.0780;
        d       =   0.220;
    }
    if (id == "3500_3500")
    {
        mass    =   2.281;
        uv      =   1.049;
        a       =   6.840;
        b       =   9.407;
        c       =   0.0972;
        d       =   0.288;
    }
    if (id == "2100_2100")
    {
        mass    =   1.861;
        uv      =   1.266;
        a       =   5.361;
        b       =   7.657;
        c       =   0.107;
        d       =   0.413;
    }
    if (id == "1500_1500")
    {
        mass    =   1.658;
        uv      =   1.538;
        a       =   5.158;
        b       =   7.269;
        c       =   0.107;
        d       =   0.552;
    }
    if (id == "0855_0855")
    {
        mass    =   1.416;
        uv      =   1.877;
        a       =   4.426;
        b       =   6.297;
        c       =   0.0862;
        d       =   0.827;
    }
    if (id == "0500_0500")
    {
        mass    =   1.261;
        uv      =   2.245;
        a       =   3.701;
        b       =   5.348;
        c       =   0.0871;
        d       =   0.814;
    }
    if (id == "0200_0200")
    {
        mass    =   1.107;
        uv      =   2.836;
        a       =   5.245;
        b       =   6.797;
        c       =   -0.162;
        d       =   0.263;
    }
    if (id == "0037_0037")
    {
        mass    =   1.007;
        uv      =   3.391;
        a       =   3.033;
        b       =   4.421;
        c       =   0.0528;
        d       =   0.0863;
    }

    return 1./(pp+mass*mass)+uv*(pp+a)/(pp+b)+c*exp(-d*pp);
}

cdouble ns_data::prop_ax_l(std::string id, cdouble pp)
{
    double uv,a,b,c,d;
    if (id == "7950_7950")
    {
        uv      =   0.685;
        a       =   0.714;
        b       =   18.03;
        c       =   14.81;
        d       =   17.00;
    }
    if (id == "6500_6500")
    {
        uv      =   0.756;
        a       =   1.951;
        b       =   21.48;
        c       =   42.08;
        d       =   20.22;
    }
    if (id == "5000_5000")
    {
        uv      =   0.894;
        a       =   44.17;
        b       =   222.5;
        c       =   17.07;
        d       =   14.50;
    }
    if (id == "3500_3500")
    {
        uv      =   1.049;
        a       =   1.720;
        b       =   11.69;
        c       =   21.55;
        d       =   11.04;
    }
    if (id == "2100_2100")
    {
        uv      =   1.266;
        a       =   1.798;
        b       =   8.101;
        c       =   18.58;
        d       =   8.151;
    }
    if (id == "1500_1500")
    {
        uv      =   1.539;
        a       =   2.035;
        b       =   7.314;
        c       =   18.11;
        d       =   7.007;
    }
    if (id == "0855_0855")
    {
        uv      =   1.877;
        a       =   1.953;
        b       =   5.263;
        c       =   13.99;
        d       =   5.217;
    }
    if (id == "0500_0500")
    {
        uv      =   2.245;
        a       =   2.090;
        b       =   4.547;
        c       =   12.94;
        d       =   4.406;
    }
    if (id == "0200_0200")
    {
        uv      =   2.836;
        a       =   2.406;
        b       =   3.792;
        c       =   13.31;
        d       =   3.728;
    }
    if (id == "0037_0037")
    {
        uv      =   3.391;
        a       =   2.692;
        b       =   8.388;
        c       =   4.437;
        d       =   2.449;
    }
    if (id == "7950_7850")
    {
        uv      =   0.686;
        a       =   0.727;
        b       =   17.95;
        c       =   15.01;
        d       =   16.94;
    }

    // until here calculated, from here extrapolated

    if (id == "7950_6500")
    {
        uv      =   0.698;
        a       =   0.727;
        b       =   15.95;
        c       =   15.01;
        d       =   15.94;
    }
    if (id == "7950_5000")
    {
        uv      =   0.712;
        a       =   0.727;
        b       =   13.95;
        c       =   15.01;
        d       =   14.94;
    }

    if (id == "7950_3500")
    {
        uv      =   0.728;
        a       =   0.727;
        b       =   11.95;
        c       =   15.01;
        d       =   13.94;
    }
    if (id == "7950_2100")
    {
        uv      =   0.742;
        a       =   0.727;
        b       =   10.55;
        c       =   15.01;
        d       =   13.04;
    }
    if (id == "7950_1500")
    {
        uv      =   0.750;
        a       =   0.727;
        b       =   10.05;
        c       =   15.01;
        d       =   12.24;
    }
    if (id == "7950_0855")
    {
        uv      =   0.756;
        a       =   0.727;
        b       =   9.75;
        c       =   15.01;
        d       =   11.84;
    }
    if (id == "7950_0500")
    {
        uv      =   0.760;
        a       =   0.727;
        b       =   9.45;
        c       =   15.01;
        d       =   11.54;
    }
    if (id == "7950_0200")
    {
        uv      =   0.763;
        a       =   0.727;
        b       =   9.25;
        c       =   15.01;
        d       =   11.34;
    }
    if (id == "7950_0037")
    {
        uv      =   0.764;
        a       =   0.727;
        b       =   9.05;
        c       =   15.01;
        d       =   11.14;
    }
    return a/(pp+b)-c/(pow(pp+d,2))+uv;
}
