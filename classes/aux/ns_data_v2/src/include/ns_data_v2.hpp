
/*
FILENAME: ns_data_v2.hpp
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

namespace dysonUtils {
    namespace ns_data_v2 {
        namespace amplitudes {
            namespace meson {
                namespace scalar {
                    namespace fit {
                        cdouble m_0037_0037(int i, cdouble pp);

                        cdouble m_0200_0200(int i, cdouble pp);

                        cdouble m_0500_0500(int i, cdouble pp);

                        cdouble m_0855_0855(int i, cdouble pp);

                        cdouble m_1500_1500(int i, cdouble pp);

                        cdouble m_2100_2100(int i, cdouble pp);

                        cdouble m_3500_3500(int i, cdouble pp);

                        cdouble m_5000_5000(int i, cdouble pp);

                        cdouble m_6500_6500(int i, cdouble pp);

                        cdouble m_7950_7950(int i, cdouble pp);
                    }

                    namespace interpolation {
                        void read();

                        static std::vector <std::vector<double>>
                                cont_0037_0037,
                                cont_0200_0200,
                                cont_0500_0500,
                                cont_0855_0855,
                                cont_1500_1500,
                                cont_2100_2100,
                                cont_3500_3500,
                                cont_5000_5000,
                                cont_6500_6500,
                                cont_7950_7950;

                        double m_0037_0037(int i, double pp);

                        double m_0200_0200(int i, double pp);

                        double m_0500_0500(int i, double pp);

                        double m_0855_0855(int i, double pp);

                        double m_1500_1500(int i, double pp);

                        double m_2100_2100(int i, double pp);

                        double m_3500_3500(int i, double pp);

                        double m_5000_5000(int i, double pp);

                        double m_6500_6500(int i, double pp);

                        double m_7950_7950(int i, double pp);
                    }
                }

                namespace pseudoscalar {
                    namespace fit {
                        static vec<double> p, v;

                        void rd();

                        cdouble m_0037_0037(int i, cdouble pp);

                        cdouble m_0200_0200(int i, cdouble pp);

                        cdouble m_0500_0500(int i, cdouble pp);

                        cdouble m_0855_0855(int i, cdouble pp);

                        cdouble m_1500_1500(int i, cdouble pp);

                        cdouble m_2100_2100(int i, cdouble pp);

                        cdouble m_3500_3500(int i, cdouble pp);

                        cdouble m_5000_5000(int i, cdouble pp);

                        cdouble m_6500_6500(int i, cdouble pp);

                        cdouble m_7950_7950(int i, cdouble pp);

                        cdouble m_7950_0037(int i, cdouble pp);

                        cdouble m_7950_0200(int i, cdouble pp);

                        cdouble m_7950_0500(int i, cdouble pp);

                        cdouble m_7950_0855(int i, cdouble pp);

                        cdouble m_7950_1500(int i, cdouble pp);

                        cdouble m_7950_2100(int i, cdouble pp);

                        cdouble m_7950_3500(int i, cdouble pp);

                        cdouble m_7950_5000(int i, cdouble pp);

                        cdouble m_7950_6500(int i, cdouble pp);

                        cdouble m_0200_0037(int i, cdouble pp);

                        cdouble m_0500_0037(int i, cdouble pp);

                        cdouble m_0855_0037(int i, cdouble pp);

                        cdouble m_1500_0037(int i, cdouble pp);

                        cdouble m_2100_0037(int i, cdouble pp);

                        cdouble m_3500_0037(int i, cdouble pp);

                        cdouble m_5000_0037(int i, cdouble pp);

                        cdouble m_6500_0037(int i, cdouble pp);

                        cdouble m_7950_0037(int i, cdouble pp);
                    }

                    namespace interpolation {
                        void read();

                        static std::vector <std::vector<double>>
                                cont_0037_0037,
                                cont_0200_0200,
                                cont_0500_0500,
                                cont_0855_0855,
                                cont_1500_1500,
                                cont_2100_2100,
                                cont_3500_3500,
                                cont_5000_5000,
                                cont_6500_6500,
                                cont_7950_7950;

                        double m_0037_0037(int i, double pp);

                        double m_0200_0200(int i, double pp);

                        double m_0500_0500(int i, double pp);

                        double m_0855_0855(int i, double pp);

                        double m_1500_1500(int i, double pp);

                        double m_2100_2100(int i, double pp);

                        double m_3500_3500(int i, double pp);

                        double m_5000_5000(int i, double pp);

                        double m_6500_6500(int i, double pp);

                        double m_7950_7950(int i, double pp);
                    }
                }

                namespace vector {
                    namespace fit {
                        static vec<double> p, v;

                        void rd();

                        cdouble m_0037_0037(int i, cdouble pp);

                        cdouble m_0200_0200(int i, cdouble pp);

                        cdouble m_0500_0500(int i, cdouble pp);

                        cdouble m_0855_0855(int i, cdouble pp);

                        cdouble m_1500_1500(int i, cdouble pp);

                        cdouble m_2100_2100(int i, cdouble pp);

                        cdouble m_3500_3500(int i, cdouble pp);

                        cdouble m_5000_5000(int i, cdouble pp);

                        cdouble m_6500_6500(int i, cdouble pp);

                        cdouble m_7950_7950(int i, cdouble pp);

                        cdouble m_0200_0037(int i, cdouble pp);

                        cdouble m_0500_0037(int i, cdouble pp);

                        cdouble m_0855_0037(int i, cdouble pp);

                        cdouble m_1500_0037(int i, cdouble pp);

                        cdouble m_2100_0037(int i, cdouble pp);

                        cdouble m_3500_0037(int i, cdouble pp);

                        cdouble m_5000_0037(int i, cdouble pp);

                        cdouble m_6500_0037(int i, cdouble pp);

                        cdouble m_7950_0037(int i, cdouble pp);

                        cdouble m_7950_0200(int i, cdouble pp);

                        cdouble m_7950_0500(int i, cdouble pp);

                        cdouble m_7950_0855(int i, cdouble pp);

                        cdouble m_7950_1500(int i, cdouble pp);

                        cdouble m_7950_2100(int i, cdouble pp);

                        cdouble m_7950_3500(int i, cdouble pp);

                        cdouble m_7950_5000(int i, cdouble pp);

                        cdouble m_7950_6500(int i, cdouble pp);
                    }

                    namespace interpolation {
                        void read();

                        static std::vector <std::vector<double>>
                                cont_0037_0037,
                                cont_0200_0200,
                                cont_0500_0500,
                                cont_0855_0855,
                                cont_1500_1500,
                                cont_2100_2100,
                                cont_3500_3500,
                                cont_5000_5000,
                                cont_6500_6500,
                                cont_7950_7950;

                        double m_0037_0037(int i, double pp);

                        double m_0200_0200(int i, double pp);

                        double m_0500_0500(int i, double pp);

                        double m_0855_0855(int i, double pp);

                        double m_1500_1500(int i, double pp);

                        double m_2100_2100(int i, double pp);

                        double m_3500_3500(int i, double pp);

                        double m_5000_5000(int i, double pp);

                        double m_6500_6500(int i, double pp);

                        double m_7950_7950(int i, double pp);
                    }
                }

                namespace axialvector {
                    namespace fit {
                        cdouble m_0037_0037(int i, cdouble pp);

                        cdouble m_0200_0200(int i, cdouble pp);

                        cdouble m_0500_0500(int i, cdouble pp);

                        cdouble m_0855_0855(int i, cdouble pp);

                        cdouble m_1500_1500(int i, cdouble pp);

                        cdouble m_2100_2100(int i, cdouble pp);

                        cdouble m_3500_3500(int i, cdouble pp);

                        cdouble m_5000_5000(int i, cdouble pp);

                        cdouble m_6500_6500(int i, cdouble pp);

                        cdouble m_7950_7950(int i, cdouble pp);

                        cdouble m_0200_0037(int i, cdouble pp);

                        cdouble m_0500_0037(int i, cdouble pp);

                        cdouble m_0855_0037(int i, cdouble pp);

                        cdouble m_1500_0037(int i, cdouble pp);

                        cdouble m_2100_0037(int i, cdouble pp);

                        cdouble m_3500_0037(int i, cdouble pp);

                        cdouble m_5000_0037(int i, cdouble pp);

                        cdouble m_6500_0037(int i, cdouble pp);

                        cdouble m_7950_0037(int i, cdouble pp);

                        cdouble m_7950_0200(int i, cdouble pp);

                        cdouble m_7950_0500(int i, cdouble pp);

                        cdouble m_7950_0855(int i, cdouble pp);

                        cdouble m_7950_1500(int i, cdouble pp);

                        cdouble m_7950_2100(int i, cdouble pp);

                        cdouble m_7950_3500(int i, cdouble pp);

                        cdouble m_7950_5000(int i, cdouble pp);

                        cdouble m_7950_6500(int i, cdouble pp);
                    }

                    namespace interpolation {
                        void read();

                        static std::vector <std::vector<double>>
                                cont_0037_0037,
                                cont_0200_0200,
                                cont_0500_0500,
                                cont_0855_0855,
                                cont_1500_1500,
                                cont_2100_2100,
                                cont_3500_3500,
                                cont_5000_5000,
                                cont_6500_6500,
                                cont_7950_7950;

                        double m_0037_0037(int i, double pp);

                        double m_0200_0200(int i, double pp);

                        double m_0500_0500(int i, double pp);

                        double m_0855_0855(int i, double pp);

                        double m_1500_1500(int i, double pp);

                        double m_2100_2100(int i, double pp);

                        double m_3500_3500(int i, double pp);

                        double m_5000_5000(int i, double pp);

                        double m_6500_6500(int i, double pp);

                        double m_7950_7950(int i, double pp);
                    }
                }
            }

            namespace diquark {
                namespace scalar {
                    namespace fit {
                        cdouble m_0037_0037(int i, cdouble pp);

                        cdouble m_0200_0200(int i, cdouble pp);

                        cdouble m_0500_0500(int i, cdouble pp);

                        cdouble m_0855_0855(int i, cdouble pp);

                        cdouble m_1500_1500(int i, cdouble pp);

                        cdouble m_2100_2100(int i, cdouble pp);

                        cdouble m_3500_3500(int i, cdouble pp);

                        cdouble m_5000_5000(int i, cdouble pp);

                        cdouble m_6500_6500(int i, cdouble pp);

                        cdouble m_7950_7950(int i, cdouble pp);

                        cdouble m_0200_0037(int i, cdouble pp);

                        cdouble m_0500_0037(int i, cdouble pp);

                        cdouble m_0855_0037(int i, cdouble pp);

                        cdouble m_1500_0037(int i, cdouble pp);

                        cdouble m_2100_0037(int i, cdouble pp);

                        cdouble m_3500_0037(int i, cdouble pp);

                        cdouble m_5000_0037(int i, cdouble pp);

                        cdouble m_6500_0037(int i, cdouble pp);

                        cdouble m_7950_0037(int i, cdouble pp);

                        cdouble m_7950_0200(int i, cdouble pp);

                        cdouble m_7950_0500(int i, cdouble pp);

                        cdouble m_7950_0855(int i, cdouble pp);

                        cdouble m_7950_1500(int i, cdouble pp);

                        cdouble m_7950_2100(int i, cdouble pp);

                        cdouble m_7950_3500(int i, cdouble pp);

                        cdouble m_7950_5000(int i, cdouble pp);

                        cdouble m_7950_6500(int i, cdouble pp);
                    }

                    namespace interpolation {
                        void read();

                        static std::vector <std::vector<double>>
                                cont_0037_0037,
                                cont_0200_0200,
                                cont_0500_0500,
                                cont_0855_0855,
                                cont_1500_1500,
                                cont_2100_2100,
                                cont_3500_3500,
                                cont_5000_5000,
                                cont_6500_6500,
                                cont_7950_7950;

                        double m_0037_0037(int i, double pp);

                        double m_0200_0200(int i, double pp);

                        double m_0500_0500(int i, double pp);

                        double m_0855_0855(int i, double pp);

                        double m_1500_1500(int i, double pp);

                        double m_2100_2100(int i, double pp);

                        double m_3500_3500(int i, double pp);

                        double m_5000_5000(int i, double pp);

                        double m_6500_6500(int i, double pp);

                        double m_7950_7950(int i, double pp);
                    }
                }

                namespace pseudoscalar {
                    namespace fit {
                        cdouble m_0037_0037(int i, cdouble pp);

                        cdouble m_0200_0200(int i, cdouble pp);

                        cdouble m_0500_0500(int i, cdouble pp);

                        cdouble m_0855_0855(int i, cdouble pp);

                        cdouble m_1500_1500(int i, cdouble pp);

                        cdouble m_2100_2100(int i, cdouble pp);

                        cdouble m_3500_3500(int i, cdouble pp);

                        cdouble m_5000_5000(int i, cdouble pp);

                        cdouble m_6500_6500(int i, cdouble pp);

                        cdouble m_7950_7950(int i, cdouble pp);

                        cdouble m_0200_0037(int i, cdouble pp);

                        cdouble m_0500_0037(int i, cdouble pp);

                        cdouble m_0855_0037(int i, cdouble pp);

                        cdouble m_1500_0037(int i, cdouble pp);

                        cdouble m_2100_0037(int i, cdouble pp);

                        cdouble m_3500_0037(int i, cdouble pp);

                        cdouble m_5000_0037(int i, cdouble pp);

                        cdouble m_6500_0037(int i, cdouble pp);

                        cdouble m_7950_0037(int i, cdouble pp);

                        cdouble m_7950_0200(int i, cdouble pp);

                        cdouble m_7950_0500(int i, cdouble pp);

                        cdouble m_7950_0855(int i, cdouble pp);

                        cdouble m_7950_1500(int i, cdouble pp);

                        cdouble m_7950_2100(int i, cdouble pp);

                        cdouble m_7950_3500(int i, cdouble pp);

                        cdouble m_7950_5000(int i, cdouble pp);

                        cdouble m_7950_6500(int i, cdouble pp);
                    }

                    namespace interpolation {
                        void read();

                        static std::vector <std::vector<double>>
                                cont_0037_0037,
                                cont_0200_0200,
                                cont_0500_0500,
                                cont_0855_0855,
                                cont_1500_1500,
                                cont_2100_2100,
                                cont_3500_3500,
                                cont_5000_5000,
                                cont_6500_6500,
                                cont_7950_7950;

                        double m_0037_0037(int i, double pp);

                        double m_0200_0200(int i, double pp);

                        double m_0500_0500(int i, double pp);

                        double m_0855_0855(int i, double pp);

                        double m_1500_1500(int i, double pp);

                        double m_2100_2100(int i, double pp);

                        double m_3500_3500(int i, double pp);

                        double m_5000_5000(int i, double pp);

                        double m_6500_6500(int i, double pp);

                        double m_7950_7950(int i, double pp);
                    }
                }

                namespace vector {
                    namespace fit {
                        cdouble m_0037_0037(int i, cdouble pp);

                        cdouble m_0200_0200(int i, cdouble pp);

                        cdouble m_0500_0500(int i, cdouble pp);

                        cdouble m_0855_0855(int i, cdouble pp);

                        cdouble m_1500_1500(int i, cdouble pp);

                        cdouble m_2100_2100(int i, cdouble pp);

                        cdouble m_3500_3500(int i, cdouble pp);

                        cdouble m_5000_5000(int i, cdouble pp);

                        cdouble m_6500_6500(int i, cdouble pp);

                        cdouble m_7950_7950(int i, cdouble pp);

                        cdouble m_0200_0037(int i, cdouble pp);

                        cdouble m_0500_0037(int i, cdouble pp);

                        cdouble m_0855_0037(int i, cdouble pp);

                        cdouble m_1500_0037(int i, cdouble pp);

                        cdouble m_2100_0037(int i, cdouble pp);

                        cdouble m_3500_0037(int i, cdouble pp);

                        cdouble m_5000_0037(int i, cdouble pp);

                        cdouble m_6500_0037(int i, cdouble pp);

                        cdouble m_7950_0037(int i, cdouble pp);

                        cdouble m_7950_0200(int i, cdouble pp);

                        cdouble m_7950_0500(int i, cdouble pp);

                        cdouble m_7950_0855(int i, cdouble pp);

                        cdouble m_7950_1500(int i, cdouble pp);

                        cdouble m_7950_2100(int i, cdouble pp);

                        cdouble m_7950_3500(int i, cdouble pp);

                        cdouble m_7950_5000(int i, cdouble pp);

                        cdouble m_7950_6500(int i, cdouble pp);
                    }

                    namespace interpolation {
                        void read();

                        static std::vector <std::vector<double>>
                                cont_0037_0037,
                                cont_0200_0200,
                                cont_0500_0500,
                                cont_0855_0855,
                                cont_1500_1500,
                                cont_2100_2100,
                                cont_3500_3500,
                                cont_5000_5000,
                                cont_6500_6500,
                                cont_7950_7950;

                        double m_0037_0037(int i, double pp);

                        double m_0200_0200(int i, double pp);

                        double m_0500_0500(int i, double pp);

                        double m_0855_0855(int i, double pp);

                        double m_1500_1500(int i, double pp);

                        double m_2100_2100(int i, double pp);

                        double m_3500_3500(int i, double pp);

                        double m_5000_5000(int i, double pp);

                        double m_6500_6500(int i, double pp);

                        double m_7950_7950(int i, double pp);
                    }

                }

                namespace axialvector {
                    namespace fit {
                        cdouble m_0037_0037(int i, cdouble pp);

                        cdouble m_0200_0200(int i, cdouble pp);

                        cdouble m_0500_0500(int i, cdouble pp);

                        cdouble m_0855_0855(int i, cdouble pp);

                        cdouble m_1500_1500(int i, cdouble pp);

                        cdouble m_2100_2100(int i, cdouble pp);

                        cdouble m_3500_3500(int i, cdouble pp);

                        cdouble m_5000_5000(int i, cdouble pp);

                        cdouble m_6500_6500(int i, cdouble pp);

                        cdouble m_7950_7950(int i, cdouble pp);

                        cdouble m_0200_0037(int i, cdouble pp);

                        cdouble m_0500_0037(int i, cdouble pp);

                        cdouble m_0855_0037(int i, cdouble pp);

                        cdouble m_1500_0037(int i, cdouble pp);

                        cdouble m_2100_0037(int i, cdouble pp);

                        cdouble m_3500_0037(int i, cdouble pp);

                        cdouble m_5000_0037(int i, cdouble pp);

                        cdouble m_6500_0037(int i, cdouble pp);

                        cdouble m_7950_0037(int i, cdouble pp);

                        cdouble m_7950_0200(int i, cdouble pp);

                        cdouble m_7950_0500(int i, cdouble pp);

                        cdouble m_7950_0855(int i, cdouble pp);

                        cdouble m_7950_1500(int i, cdouble pp);

                        cdouble m_7950_2100(int i, cdouble pp);

                        cdouble m_7950_3500(int i, cdouble pp);

                        cdouble m_7950_5000(int i, cdouble pp);

                        cdouble m_7950_6500(int i, cdouble pp);
                    }

                    namespace interpolation {
                        void read();

                        static std::vector <std::vector<double>>
                                cont_0037_0037,
                                cont_0200_0200,
                                cont_0500_0500,
                                cont_0855_0855,
                                cont_1500_1500,
                                cont_2100_2100,
                                cont_3500_3500,
                                cont_5000_5000,
                                cont_6500_6500,
                                cont_7950_7950;

                        double m_0037_0037(int i, double pp);

                        double m_0200_0200(int i, double pp);

                        double m_0500_0500(int i, double pp);

                        double m_0855_0855(int i, double pp);

                        double m_1500_1500(int i, double pp);

                        double m_2100_2100(int i, double pp);

                        double m_3500_3500(int i, double pp);

                        double m_5000_5000(int i, double pp);

                        double m_6500_6500(int i, double pp);

                        double m_7950_7950(int i, double pp);
                    }

                }
            }

        }

        namespace propagators {
            namespace meson {
                namespace scalar {
                    cdouble m_0037_0037(cdouble pp);

                    cdouble m_0200_0200(cdouble pp);

                    cdouble m_0500_0500(cdouble pp);

                    cdouble m_0855_0855(cdouble pp);

                    cdouble m_1500_1500(cdouble pp);

                    cdouble m_2100_2100(cdouble pp);

                    cdouble m_3500_3500(cdouble pp);

                    cdouble m_5000_5000(cdouble pp);

                    cdouble m_6500_6500(cdouble pp);

                    cdouble m_7950_7950(cdouble pp);

                    cdouble m_7950_6500(cdouble pp);

                    cdouble m_7950_5000(cdouble pp);

                    cdouble m_7950_3500(cdouble pp);

                    cdouble m_7950_2100(cdouble pp);

                    cdouble m_7950_1500(cdouble pp);

                    cdouble m_7950_0855(cdouble pp);

                    cdouble m_7950_0500(cdouble pp);

                    cdouble m_7950_0200(cdouble pp);

                    cdouble m_7950_0037(cdouble pp);
                }

                namespace pseudoscalar {
                    cdouble m_0037_0037(cdouble pp);

                    cdouble m_0200_0200(cdouble pp);

                    cdouble m_0500_0500(cdouble pp);

                    cdouble m_0855_0855(cdouble pp);

                    cdouble m_1500_1500(cdouble pp);

                    cdouble m_2100_2100(cdouble pp);

                    cdouble m_3500_3500(cdouble pp);

                    cdouble m_5000_5000(cdouble pp);

                    cdouble m_6500_6500(cdouble pp);

                    cdouble m_7950_7950(cdouble pp);

                    cdouble m_7950_6500(cdouble pp);

                    cdouble m_7950_5000(cdouble pp);

                    cdouble m_7950_3500(cdouble pp);

                    cdouble m_7950_2100(cdouble pp);

                    cdouble m_7950_1500(cdouble pp);

                    cdouble m_7950_0855(cdouble pp);

                    cdouble m_7950_0500(cdouble pp);

                    cdouble m_7950_0200(cdouble pp);

                    cdouble m_7950_0037(cdouble pp);
                }

                namespace vector {
                    cdouble m_0037_0037_T(cdouble pp);

                    cdouble m_0200_0200_T(cdouble pp);

                    cdouble m_0500_0500_T(cdouble pp);

                    cdouble m_0855_0855_T(cdouble pp);

                    cdouble m_1500_1500_T(cdouble pp);

                    cdouble m_2100_2100_T(cdouble pp);

                    cdouble m_3500_3500_T(cdouble pp);

                    cdouble m_5000_5000_T(cdouble pp);

                    cdouble m_6500_6500_T(cdouble pp);

                    cdouble m_7950_7950_T(cdouble pp);

                    cdouble m_7950_6500_T(cdouble pp);

                    cdouble m_7950_5000_T(cdouble pp);

                    cdouble m_7950_3500_T(cdouble pp);

                    cdouble m_7950_2100_T(cdouble pp);

                    cdouble m_7950_1500_T(cdouble pp);

                    cdouble m_7950_0855_T(cdouble pp);

                    cdouble m_7950_0500_T(cdouble pp);

                    cdouble m_7950_0200_T(cdouble pp);

                    cdouble m_7950_0037_T(cdouble pp);

                    cdouble m_0037_0037_L(cdouble pp);

                    cdouble m_0200_0200_L(cdouble pp);

                    cdouble m_0500_0500_L(cdouble pp);

                    cdouble m_0855_0855_L(cdouble pp);

                    cdouble m_1500_1500_L(cdouble pp);

                    cdouble m_2100_2100_L(cdouble pp);

                    cdouble m_3500_3500_L(cdouble pp);

                    cdouble m_5000_5000_L(cdouble pp);

                    cdouble m_6500_6500_L(cdouble pp);

                    cdouble m_7950_7950_L(cdouble pp);

                    cdouble m_7950_6500_L(cdouble pp);

                    cdouble m_7950_5000_L(cdouble pp);

                    cdouble m_7950_3500_L(cdouble pp);

                    cdouble m_7950_2100_L(cdouble pp);

                    cdouble m_7950_1500_L(cdouble pp);

                    cdouble m_7950_0855_L(cdouble pp);

                    cdouble m_7950_0500_L(cdouble pp);

                    cdouble m_7950_0200_L(cdouble pp);

                    cdouble m_7950_0037_L(cdouble pp);
                }

                namespace axialvector {
                    cdouble m_0037_0037_T(cdouble pp);

                    cdouble m_0200_0200_T(cdouble pp);

                    cdouble m_0500_0500_T(cdouble pp);

                    cdouble m_0855_0855_T(cdouble pp);

                    cdouble m_1500_1500_T(cdouble pp);

                    cdouble m_2100_2100_T(cdouble pp);

                    cdouble m_3500_3500_T(cdouble pp);

                    cdouble m_5000_5000_T(cdouble pp);

                    cdouble m_6500_6500_T(cdouble pp);

                    cdouble m_7950_7950_T(cdouble pp);

                    cdouble m_7950_6500_T(cdouble pp);

                    cdouble m_7950_5000_T(cdouble pp);

                    cdouble m_7950_3500_T(cdouble pp);

                    cdouble m_7950_2100_T(cdouble pp);

                    cdouble m_7950_1500_T(cdouble pp);

                    cdouble m_7950_0855_T(cdouble pp);

                    cdouble m_7950_0500_T(cdouble pp);

                    cdouble m_7950_0200_T(cdouble pp);

                    cdouble m_7950_0037_T(cdouble pp);

                    cdouble m_0037_0037_L(cdouble pp);

                    cdouble m_0200_0200_L(cdouble pp);

                    cdouble m_0500_0500_L(cdouble pp);

                    cdouble m_0855_0855_L(cdouble pp);

                    cdouble m_1500_1500_L(cdouble pp);

                    cdouble m_2100_2100_L(cdouble pp);

                    cdouble m_3500_3500_L(cdouble pp);

                    cdouble m_5000_5000_L(cdouble pp);

                    cdouble m_6500_6500_L(cdouble pp);

                    cdouble m_7950_7950_L(cdouble pp);

                    cdouble m_7950_6500_L(cdouble pp);

                    cdouble m_7950_5000_L(cdouble pp);

                    cdouble m_7950_3500_L(cdouble pp);

                    cdouble m_7950_2100_L(cdouble pp);

                    cdouble m_7950_1500_L(cdouble pp);

                    cdouble m_7950_0855_L(cdouble pp);

                    cdouble m_7950_0500_L(cdouble pp);

                    cdouble m_7950_0200_L(cdouble pp);

                    cdouble m_7950_0037_L(cdouble pp);
                }
            }

            namespace diquark {
                namespace scalar {
                    cdouble m_0037_0037(cdouble pp);

                    cdouble m_0200_0200(cdouble pp);

                    cdouble m_0500_0500(cdouble pp);

                    cdouble m_0855_0855(cdouble pp);

                    cdouble m_1500_1500(cdouble pp);

                    cdouble m_2100_2100(cdouble pp);

                    cdouble m_3500_3500(cdouble pp);

                    cdouble m_5000_5000(cdouble pp);

                    cdouble m_6500_6500(cdouble pp);

                    cdouble m_7950_7950(cdouble pp);

                    cdouble m_7950_6500(cdouble pp);

                    cdouble m_7950_5000(cdouble pp);

                    cdouble m_7950_3500(cdouble pp);

                    cdouble m_7950_2100(cdouble pp);

                    cdouble m_7950_1500(cdouble pp);

                    cdouble m_7950_0855(cdouble pp);

                    cdouble m_7950_0500(cdouble pp);

                    cdouble m_7950_0200(cdouble pp);

                    cdouble m_7950_0037(cdouble pp);
                }

                namespace pseudoscalar {
                    cdouble m_0037_0037(cdouble pp);

                    cdouble m_0200_0200(cdouble pp);

                    cdouble m_0500_0500(cdouble pp);

                    cdouble m_0855_0855(cdouble pp);

                    cdouble m_1500_1500(cdouble pp);

                    cdouble m_2100_2100(cdouble pp);

                    cdouble m_3500_3500(cdouble pp);

                    cdouble m_5000_5000(cdouble pp);

                    cdouble m_6500_6500(cdouble pp);

                    cdouble m_7950_7950(cdouble pp);

                    cdouble m_7950_6500(cdouble pp);

                    cdouble m_7950_5000(cdouble pp);

                    cdouble m_7950_3500(cdouble pp);

                    cdouble m_7950_2100(cdouble pp);

                    cdouble m_7950_1500(cdouble pp);

                    cdouble m_7950_0855(cdouble pp);

                    cdouble m_7950_0500(cdouble pp);

                    cdouble m_7950_0200(cdouble pp);

                    cdouble m_7950_0037(cdouble pp);
                }

                namespace vector {
                    cdouble m_0037_0037_T(cdouble pp);

                    cdouble m_0200_0200_T(cdouble pp);

                    cdouble m_0500_0500_T(cdouble pp);

                    cdouble m_0855_0855_T(cdouble pp);

                    cdouble m_1500_1500_T(cdouble pp);

                    cdouble m_2100_2100_T(cdouble pp);

                    cdouble m_3500_3500_T(cdouble pp);

                    cdouble m_5000_5000_T(cdouble pp);

                    cdouble m_6500_6500_T(cdouble pp);

                    cdouble m_7950_7950_T(cdouble pp);

                    cdouble m_7950_6500_T(cdouble pp);

                    cdouble m_7950_5000_T(cdouble pp);

                    cdouble m_7950_3500_T(cdouble pp);

                    cdouble m_7950_2100_T(cdouble pp);

                    cdouble m_7950_1500_T(cdouble pp);

                    cdouble m_7950_0855_T(cdouble pp);

                    cdouble m_7950_0500_T(cdouble pp);

                    cdouble m_7950_0200_T(cdouble pp);

                    cdouble m_7950_0037_T(cdouble pp);

                    cdouble m_0037_0037_L(cdouble pp);

                    cdouble m_0200_0200_L(cdouble pp);

                    cdouble m_0500_0500_L(cdouble pp);

                    cdouble m_0855_0855_L(cdouble pp);

                    cdouble m_1500_1500_L(cdouble pp);

                    cdouble m_2100_2100_L(cdouble pp);

                    cdouble m_3500_3500_L(cdouble pp);

                    cdouble m_5000_5000_L(cdouble pp);

                    cdouble m_6500_6500_L(cdouble pp);

                    cdouble m_7950_7950_L(cdouble pp);

                    cdouble m_7950_6500_L(cdouble pp);

                    cdouble m_7950_5000_L(cdouble pp);

                    cdouble m_7950_3500_L(cdouble pp);

                    cdouble m_7950_2100_L(cdouble pp);

                    cdouble m_7950_1500_L(cdouble pp);

                    cdouble m_7950_0855_L(cdouble pp);

                    cdouble m_7950_0500_L(cdouble pp);

                    cdouble m_7950_0200_L(cdouble pp);

                    cdouble m_7950_0037_L(cdouble pp);
                }

                namespace axialvector {
                    cdouble m_0037_0037_T(cdouble pp);

                    cdouble m_0200_0200_T(cdouble pp);

                    cdouble m_0500_0500_T(cdouble pp);

                    cdouble m_0855_0855_T(cdouble pp);

                    cdouble m_1500_1500_T(cdouble pp);

                    cdouble m_2100_2100_T(cdouble pp);

                    cdouble m_3500_3500_T(cdouble pp);

                    cdouble m_5000_5000_T(cdouble pp);

                    cdouble m_6500_6500_T(cdouble pp);

                    cdouble m_7950_7950_T(cdouble pp);

                    cdouble m_7950_6500_T(cdouble pp);

                    cdouble m_7950_5000_T(cdouble pp);

                    cdouble m_7950_3500_T(cdouble pp);

                    cdouble m_7950_2100_T(cdouble pp);

                    cdouble m_7950_1500_T(cdouble pp);

                    cdouble m_7950_0855_T(cdouble pp);

                    cdouble m_7950_0500_T(cdouble pp);

                    cdouble m_7950_0200_T(cdouble pp);

                    cdouble m_7950_0037_T(cdouble pp);

                    cdouble m_0037_0037_L(cdouble pp);

                    cdouble m_0200_0200_L(cdouble pp);

                    cdouble m_0500_0500_L(cdouble pp);

                    cdouble m_0855_0855_L(cdouble pp);

                    cdouble m_1500_1500_L(cdouble pp);

                    cdouble m_2100_2100_L(cdouble pp);

                    cdouble m_3500_3500_L(cdouble pp);

                    cdouble m_5000_5000_L(cdouble pp);

                    cdouble m_6500_6500_L(cdouble pp);

                    cdouble m_7950_7950_L(cdouble pp);

                    cdouble m_7950_6500_L(cdouble pp);

                    cdouble m_7950_5000_L(cdouble pp);

                    cdouble m_7950_3500_L(cdouble pp);

                    cdouble m_7950_2100_L(cdouble pp);

                    cdouble m_7950_1500_L(cdouble pp);

                    cdouble m_7950_0855_L(cdouble pp);

                    cdouble m_7950_0500_L(cdouble pp);

                    cdouble m_7950_0200_L(cdouble pp);

                    cdouble m_7950_0037_L(cdouble pp);
                }
            }

        }

        namespace masses {
            namespace meson {
                namespace scalar {
                    double m_7950_7950();

                    double m_6500_6500();

                    double m_5000_5000();

                    double m_3500_3500();

                    double m_2100_2100();

                    double m_1500_1500();

                    double m_0855_0855();

                    double m_0500_0500();

                    double m_0200_0200();

                    double m_0037_0037();

                    double m_7950_6500();

                    double m_7950_5000();

                    double m_7950_3500();

                    double m_7950_2100();

                    double m_7950_1500();

                    double m_7950_0855();

                    double m_7950_0500();

                    double m_7950_0200();

                    double m_7950_0037();
                }

                namespace pseudoscalar {
                    double m_7950_7950();

                    double m_6500_6500();

                    double m_5000_5000();

                    double m_3500_3500();

                    double m_2100_2100();

                    double m_1500_1500();

                    double m_0855_0855();

                    double m_0500_0500();

                    double m_0200_0200();

                    double m_0037_0037();
                }

                namespace vector {
                    double m_7950_7950();

                    double m_6500_6500();

                    double m_5000_5000();

                    double m_3500_3500();

                    double m_2100_2100();

                    double m_1500_1500();

                    double m_0855_0855();

                    double m_0500_0500();

                    double m_0200_0200();

                    double m_0037_0037();

                    double m_7950_6500();

                    double m_7950_5000();

                    double m_7950_3500();

                    double m_7950_2100();

                    double m_7950_1500();

                    double m_7950_0855();

                    double m_7950_0500();

                    double m_7950_0200();

                    double m_7950_0037();
                }

                namespace axialvector {
                    double m_7950_7950();

                    double m_6500_6500();

                    double m_5000_5000();

                    double m_3500_3500();

                    double m_2100_2100();

                    double m_1500_1500();

                    double m_0855_0855();

                    double m_0500_0500();

                    double m_0200_0200();

                    double m_0037_0037();
                }

            }

            namespace diquark {
                namespace scalar {
                    double m_7950_7950();

                    double m_6500_6500();

                    double m_5000_5000();

                    double m_3500_3500();

                    double m_2100_2100();

                    double m_1500_1500();

                    double m_0855_0855();

                    double m_0500_0500();

                    double m_0200_0200();

                    double m_0037_0037();
                }

                namespace pseudoscalar {
                    double m_7950_7950();

                    double m_6500_6500();

                    double m_5000_5000();

                    double m_3500_3500();

                    double m_2100_2100();

                    double m_1500_1500();

                    double m_0855_0855();

                    double m_0500_0500();

                    double m_0200_0200();

                    double m_0037_0037();
                }

                namespace vector {
                    double m_7950_7950();

                    double m_6500_6500();

                    double m_5000_5000();

                    double m_3500_3500();

                    double m_2100_2100();

                    double m_1500_1500();

                    double m_0855_0855();

                    double m_0500_0500();

                    double m_0200_0200();

                    double m_0037_0037();
                }

                namespace axialvector {
                    double m_7950_7950();

                    double m_6500_6500();

                    double m_5000_5000();

                    double m_3500_3500();

                    double m_2100_2100();

                    double m_1500_1500();

                    double m_0855_0855();

                    double m_0500_0500();

                    double m_0200_0200();

                    double m_0037_0037();
                }

            }

        }
    }
}
