
/*
FILENAME: ns_data.hpp
AUTHOR:   Nico Santowsky
EMAIL:    physics@nsanto.de
DATE:     2021-12-21
LICENSE:  Apache License 2.0
*/

#pragma once

#include <cmath>
#include <iostream>
#include <vector>
#include <complex>
#include "../../../../../routines/interpolation/src/interpolation.hpp"


typedef std::vector<std::vector<std::complex<double>>>  vvcdouble;
typedef std::vector<std::complex<double>>               vcdouble;
typedef std::complex<double>                            cdouble;
typedef std::vector<double>                             vdouble;

class ns_data
{
public:
    static void read();

    static cdouble sc_ms_0037_0037(int i, cdouble pp);

    static cdouble ps_7950_7950(int i, cdouble pp);
    static cdouble ps_6500_6500(int i, cdouble pp);
    static cdouble ps_5000_5000(int i, cdouble pp);
    static cdouble ps_3500_3500(int i, cdouble pp);
    static cdouble ps_2100_2100(int i, cdouble pp);
    static cdouble ps_1500_1500(int i, cdouble pp);
    static cdouble ps_0855_0855(int i, cdouble pp);
    static cdouble ps_0500_0500(int i, cdouble pp);
    static cdouble ps_0200_0200(int i, cdouble pp);
    static cdouble ps_6500_0037(int i, cdouble pp);
    static cdouble ps_5000_0037(int i, cdouble pp);
    static cdouble ps_3500_0037(int i, cdouble pp);
    static cdouble ps_2100_0037(int i, cdouble pp);
    static cdouble ps_1500_0037(int i, cdouble pp);
    static cdouble ps_0855_0037(int i, cdouble pp);
    static cdouble ps_0500_0037(int i, cdouble pp);
    static cdouble ps_0200_0037(int i, cdouble pp);
    static cdouble ps_0037_0037(int i, cdouble pp);
    static cdouble ps_7950_6500(int i, cdouble pp);
    static cdouble ps_7950_5000(int i, cdouble pp);
    static cdouble ps_7950_3500(int i, cdouble pp);
    static cdouble ps_7950_2100(int i, cdouble pp);
    static cdouble ps_7950_1500(int i, cdouble pp);
    static cdouble ps_7950_0855(int i, cdouble pp);
    static cdouble ps_7950_0500(int i, cdouble pp);
    static cdouble ps_7950_0200(int i, cdouble pp);
    static cdouble ps_7950_0037(int i, cdouble pp);

    static cdouble vc_7950_7950(int i, cdouble pp);
    static cdouble vc_6500_6500(int i, cdouble pp);
    static cdouble vc_5000_5000(int i, cdouble pp);
    static cdouble vc_3500_3500(int i, cdouble pp);
    static cdouble vc_2100_2100(int i, cdouble pp);
    static cdouble vc_1500_1500(int i, cdouble pp);
    static cdouble vc_0855_0855(int i, cdouble pp);
    static cdouble vc_0500_0500(int i, cdouble pp);
    static cdouble vc_0200_0200(int i, cdouble pp);
    static cdouble vc_6500_0037(int i, double pp);
    static cdouble vc_5000_0037(int i, double pp);
    static cdouble vc_3500_0037(int i, double pp);
    static cdouble vc_2100_0037(int i, double pp);
    static cdouble vc_1500_0037(int i, double pp);
    static cdouble vc_0855_0037(int i, double pp);
    static cdouble vc_0500_0037(int i, double pp);
    static cdouble vc_0200_0037(int i, double pp);
    static cdouble vc_0037_0037(int i, cdouble pp);
    static cdouble vc_7950_6500(int i, cdouble pp);
    static cdouble vc_7950_5000(int i, cdouble pp);
    static cdouble vc_7950_3500(int i, cdouble pp);
    static cdouble vc_7950_2100(int i, cdouble pp);
    static cdouble vc_7950_1500(int i, cdouble pp);
    static cdouble vc_7950_0855(int i, cdouble pp);
    static cdouble vc_7950_0500(int i, cdouble pp);
    static cdouble vc_7950_0200(int i, cdouble pp);
    static cdouble vc_7950_0037(int i, cdouble pp);

    static cdouble sc_7950_7950(int i, double pp);
    static cdouble sc_6500_6500(int i, double pp);
    static cdouble sc_5000_5000(int i, double pp);
    static cdouble sc_3500_3500(int i, double pp);
    static cdouble sc_2100_2100(int i, double pp);
    static cdouble sc_1500_1500(int i, double pp);
    static cdouble sc_0855_0855(int i, double pp);
    static cdouble sc_0500_0500(int i, double pp);
    static cdouble sc_0200_0200(int i, double pp);
    static cdouble sc_6500_0037(int i, double pp);
    static cdouble sc_5000_0037(int i, double pp);
    static cdouble sc_3500_0037(int i, double pp);
    static cdouble sc_2100_0037(int i, double pp);
    static cdouble sc_1500_0037(int i, double pp);
    static cdouble sc_0855_0037(int i, double pp);
    static cdouble sc_0500_0037(int i, double pp);
    static cdouble sc_0200_0037(int i, double pp);
    static cdouble sc_0037_0037(int i, double pp);
    static cdouble sc_7950_6500(int i, double pp);
    static cdouble sc_7950_5000(int i, double pp);
    static cdouble sc_7950_3500(int i, double pp);
    static cdouble sc_7950_2100(int i, double pp);
    static cdouble sc_7950_1500(int i, double pp);
    static cdouble sc_7950_0855(int i, double pp);
    static cdouble sc_7950_0500(int i, double pp);
    static cdouble sc_7950_0200(int i, double pp);
    static cdouble sc_7950_0037(int i, double pp);
    static cdouble sc_0037_0037_C(int i, cdouble pp);

    static cdouble ax_7950_7950(int i, double pp);
    static cdouble ax_6500_6500(int i, double pp);
    static cdouble ax_5000_5000(int i, double pp);
    static cdouble ax_3500_3500(int i, double pp);
    static cdouble ax_2100_2100(int i, double pp);
    static cdouble ax_1500_1500(int i, double pp);
    static cdouble ax_0855_0855(int i, double pp);
    static cdouble ax_0500_0500(int i, double pp);
    static cdouble ax_0200_0200(int i, double pp);
    static cdouble ax_6500_0037(int i, double pp);
    static cdouble ax_5000_0037(int i, double pp);
    static cdouble ax_3500_0037(int i, double pp);
    static cdouble ax_2100_0037(int i, double pp);
    static cdouble ax_1500_0037(int i, double pp);
    static cdouble ax_0855_0037(int i, double pp);
    static cdouble ax_0500_0037(int i, double pp);
    static cdouble ax_0200_0037(int i, double pp);
    static cdouble ax_0037_0037(int i, double pp);
    static cdouble ax_7950_6500(int i, double pp);
    static cdouble ax_7950_5000(int i, double pp);
    static cdouble ax_7950_3500(int i, double pp);
    static cdouble ax_7950_2100(int i, double pp);
    static cdouble ax_7950_1500(int i, double pp);
    static cdouble ax_7950_0855(int i, double pp);
    static cdouble ax_7950_0500(int i, double pp);
    static cdouble ax_7950_0200(int i, double pp);
    static cdouble ax_7950_0037(int i, double pp);

    static cdouble prop_ps(std::string id, cdouble pp);
    static cdouble prop_vc_t(std::string id, cdouble pp);
    static cdouble prop_vc_l(std::string id, cdouble pp);

    static cdouble prop_sc(std::string id, cdouble pp);
    static cdouble prop_ax_t(std::string id, cdouble pp);
    static cdouble prop_ax_l(std::string id, cdouble pp);

private:

    static inline vdouble
                pgrid_7950_7950,
                pgrid_7950_6500,
                pgrid_7950_5000,
                pgrid_7950_3500,
                pgrid_7950_2100,
                pgrid_7950_1500,
                pgrid_7950_0855,
                pgrid_7950_0500,
                pgrid_7950_0200,
                pgrid_7950_0037,

                pgrid_7950_7950_v,
                pgrid_6500_6500_v,
                pgrid_5000_5000_v,
                pgrid_3500_3500_v,
                pgrid_2100_2100_v,
                pgrid_1500_1500_v,
                pgrid_0855_0855_v,
                pgrid_0500_0500_v,
                pgrid_0200_0200_v,
                pgrid_0037_0037_v,
                pgrid_7950_6500_v,
                pgrid_7950_5000_v,
                pgrid_7950_3500_v,
                pgrid_7950_2100_v,
                pgrid_7950_1500_v,
                pgrid_7950_0855_v,
                pgrid_7950_0500_v,
                pgrid_7950_0200_v,
                pgrid_7950_0037_v,

                pgrid_7950_7950_s,
                pgrid_6500_6500_s,
                pgrid_5000_5000_s,
                pgrid_3500_3500_s,
                pgrid_2100_2100_s,
                pgrid_1500_1500_s,
                pgrid_0855_0855_s,
                pgrid_0500_0500_s,
                pgrid_0200_0200_s,
                pgrid_0037_0037_s,
                pgrid_7950_7700_s,
                pgrid_7950_6500_s,
                pgrid_7950_5000_s,
                pgrid_7950_3500_s,
                pgrid_7950_2100_s,
                pgrid_7950_1500_s,
                pgrid_7950_0855_s,
                pgrid_7950_0500_s,
                pgrid_7950_0200_s,
                pgrid_7950_0037_s,

                pgrid_7950_7950_a,
                pgrid_6500_6500_a,
                pgrid_5000_5000_a,
                pgrid_3500_3500_a,
                pgrid_2100_2100_a,
                pgrid_1500_1500_a,
                pgrid_0855_0855_a,
                pgrid_0500_0500_a,
                pgrid_0200_0200_a,
                pgrid_0037_0037_a,
                pgrid_7950_7850_a,
                pgrid_7950_6500_a,
                pgrid_7950_5000_a,
                pgrid_7950_3500_a,
                pgrid_7950_2100_a,
                pgrid_7950_1500_a,
                pgrid_7950_0855_a,
                pgrid_7950_0500_a,
                pgrid_7950_0200_a,
                pgrid_7950_0037_a;

    static inline vvcdouble
                fgrid_7950_7950,
                fgrid_7950_6500,
                fgrid_7950_5000,
                fgrid_7950_3500,
                fgrid_7950_2100,
                fgrid_7950_1500,
                fgrid_7950_0855,
                fgrid_7950_0500,
                fgrid_7950_0200,
                fgrid_7950_0037,

                fgrid_7950_7950_v,
                fgrid_6500_6500_v,
                fgrid_5000_5000_v,
                fgrid_3500_3500_v,
                fgrid_2100_2100_v,
                fgrid_1500_1500_v,
                fgrid_0855_0855_v,
                fgrid_0500_0500_v,
                fgrid_0200_0200_v,
                fgrid_0037_0037_v,
                fgrid_7950_6500_v,
                fgrid_7950_5000_v,
                fgrid_7950_3500_v,
                fgrid_7950_2100_v,
                fgrid_7950_1500_v,
                fgrid_7950_0855_v,
                fgrid_7950_0500_v,
                fgrid_7950_0200_v,
                fgrid_7950_0037_v,

                fgrid_7950_7950_s,
                fgrid_6500_6500_s,
                fgrid_5000_5000_s,
                fgrid_3500_3500_s,
                fgrid_2100_2100_s,
                fgrid_1500_1500_s,
                fgrid_0855_0855_s,
                fgrid_0500_0500_s,
                fgrid_0200_0200_s,
                fgrid_0037_0037_s,
                fgrid_7950_7700_s,
                fgrid_7950_6500_s,
                fgrid_7950_5000_s,
                fgrid_7950_3500_s,
                fgrid_7950_2100_s,
                fgrid_7950_1500_s,
                fgrid_7950_0855_s,
                fgrid_7950_0500_s,
                fgrid_7950_0200_s,
                fgrid_7950_0037_s,

                fgrid_7950_7950_a,
                fgrid_6500_6500_a,
                fgrid_5000_5000_a,
                fgrid_3500_3500_a,
                fgrid_2100_2100_a,
                fgrid_1500_1500_a,
                fgrid_0855_0855_a,
                fgrid_0500_0500_a,
                fgrid_0200_0200_a,
                fgrid_0037_0037_a,
                fgrid_7950_7850_a,
                fgrid_7950_6500_a,
                fgrid_7950_5000_a,
                fgrid_7950_3500_a,
                fgrid_7950_2100_a,
                fgrid_7950_1500_a,
                fgrid_7950_0855_a,
                fgrid_7950_0500_a,
                fgrid_7950_0200_a,
                fgrid_7950_0037_a;

};
