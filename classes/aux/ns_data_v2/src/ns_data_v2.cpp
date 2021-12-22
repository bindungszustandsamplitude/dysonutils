
/*
FILENAME: ns_data_v2.cpp
AUTHOR:   Nico Santowsky
EMAIL:    physics@nsanto.de
DATE:     2021-12-21
LICENSE:  Apache License 2.0
*/

#include "./include/ns_data_v2.hpp"
#include <fstream>

namespace dysonUtils {
    namespace ns_data_v2 {
        namespace amplitudes {
            namespace meson {
                namespace scalar {
                    namespace fit {

                        cdouble m_0037_0037(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 1.075;
                                b = 4.578;
                                c = 0.801;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_0200_0200(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 0.784;
                                b = 4.663;
                                c = 0.682;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_0500_0500(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 0.528;
                                b = 4.662;
                                c = 0.525;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_0855_0855(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 0.373;
                                b = 4.533;
                                c = 0.405;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_1500_1500(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 0.237;
                                b = 4.315;
                                c = 0.280;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_2100_2100(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 0.175;
                                b = 4.166;
                                c = 0.216;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_3500_3500(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 0.110;
                                b = 4.020;
                                c = 0.142;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_5000_5000(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 0.0809;
                                b = 3.854;
                                c = 0.109;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_6500_6500(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 0.0671;
                                b = 3.352;
                                c = 0.0904;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_7950_7950(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 0.0598;
                                b = 2.585;
                                c = 0.0796;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                    }

                    namespace interpolation {

                        void read() {
                            cont_0037_0037.resize(5);
                            cont_0200_0200.resize(5);
                            cont_0500_0500.resize(5);
                            cont_0855_0855.resize(5);
                            cont_1500_1500.resize(5);
                            cont_2100_2100.resize(5);
                            cont_3500_3500.resize(5);
                            cont_5000_5000.resize(5);
                            cont_6500_6500.resize(5);
                            cont_7950_7950.resize(5);

                            double dmy;

                            std::ifstream rd;

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/mesons/scalar/0037_0037.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 5; ++j) {
                                    rd >> dmy;
                                    cont_0037_0037[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/mesons/scalar/0200_0200.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 5; ++j) {
                                    rd >> dmy;
                                    cont_0200_0200[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/mesons/scalar/0500_0500.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 5; ++j) {
                                    rd >> dmy;
                                    cont_0500_0500[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/mesons/scalar/0855_0855.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 5; ++j) {
                                    rd >> dmy;
                                    cont_0855_0855[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/mesons/scalar/1500_1500.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 5; ++j) {
                                    rd >> dmy;
                                    cont_1500_1500[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/mesons/scalar/2100_2100.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 5; ++j) {
                                    rd >> dmy;
                                    cont_2100_2100[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/mesons/scalar/3500_3500.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 5; ++j) {
                                    rd >> dmy;
                                    cont_3500_3500[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/mesons/scalar/5000_5000.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 5; ++j) {
                                    rd >> dmy;
                                    cont_5000_5000[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/mesons/scalar/6500_6500.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 5; ++j) {
                                    rd >> dmy;
                                    cont_6500_6500[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/mesons/scalar/7950_7950.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 5; ++j) {
                                    rd >> dmy;
                                    cont_7950_7950[j].push_back(dmy);
                                }
                            }
                            rd.close();
                        }

                        double m_0037_0037(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_0037_0037[0], cont_0037_0037[i + 1], pp);
                        }

                        double m_0200_0200(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_0200_0200[0], cont_0200_0200[i + 1], pp);
                        }

                        double m_0500_0500(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_0500_0500[0], cont_0500_0500[i + 1], pp);
                        }

                        double m_0855_0855(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_0855_0855[0], cont_0855_0855[i + 1], pp);
                        }

                        double m_1500_1500(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_1500_1500[0], cont_1500_1500[i + 1], pp);
                        }

                        double m_2100_2100(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_2100_2100[0], cont_2100_2100[i + 1], pp);
                        }

                        double m_3500_3500(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_3500_3500[0], cont_3500_3500[i + 1], pp);
                        }

                        double m_5000_5000(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_5000_5000[0], cont_5000_5000[i + 1], pp);
                        }

                        double m_6500_6500(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_6500_6500[0], cont_6500_6500[i + 1], pp);
                        }

                        double m_7950_7950(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_7950_7950[0], cont_7950_7950[i + 1], pp);
                        }

                    }
                }

                namespace pseudoscalar {
                    namespace fit {
                        void rd() {
                            p.push_back(1.000000e-03);
                            v.push_back(1.890000e+01);
                            p.push_back(1.258925e-03);
                            v.push_back(1.889173e+01);
                            p.push_back(1.584893e-03);
                            v.push_back(1.888142e+01);
                            p.push_back(1.995262e-03);
                            v.push_back(1.886862e+01);
                            p.push_back(2.511886e-03);
                            v.push_back(1.885276e+01);
                            p.push_back(3.162278e-03);
                            v.push_back(1.883319e+01);
                            p.push_back(3.981072e-03);
                            v.push_back(1.880916e+01);
                            p.push_back(5.011872e-03);
                            v.push_back(1.877981e+01);
                            p.push_back(6.309573e-03);
                            v.push_back(1.874419e+01);
                            p.push_back(7.943282e-03);
                            v.push_back(1.870127e+01);
                            p.push_back(1.000000e-02);
                            v.push_back(1.865000e+01);
                            p.push_back(1.258925e-02);
                            v.push_back(1.858929e+01);
                            p.push_back(1.584893e-02);
                            v.push_back(1.851805e+01);
                            p.push_back(1.995262e-02);
                            v.push_back(1.843521e+01);
                            p.push_back(2.511886e-02);
                            v.push_back(1.833962e+01);
                            p.push_back(3.162278e-02);
                            v.push_back(1.822988e+01);
                            p.push_back(3.981072e-02);
                            v.push_back(1.810414e+01);
                            p.push_back(5.011872e-02);
                            v.push_back(1.795963e+01);
                            p.push_back(6.309573e-02);
                            v.push_back(1.779215e+01);
                            p.push_back(7.943282e-02);
                            v.push_back(1.759538e+01);
                            p.push_back(1.000000e-01);
                            v.push_back(1.736000e+01);
                            p.push_back(1.258925e-01);
                            v.push_back(1.707269e+01);
                            p.push_back(1.584893e-01);
                            v.push_back(1.671490e+01);
                            p.push_back(1.995262e-01);
                            v.push_back(1.626156e+01);
                            p.push_back(2.511886e-01);
                            v.push_back(1.568020e+01);
                            p.push_back(3.162278e-01);
                            v.push_back(1.493135e+01);
                            p.push_back(3.981072e-01);
                            v.push_back(1.397217e+01);
                            p.push_back(5.011872e-01);
                            v.push_back(1.276625e+01);
                            p.push_back(6.309573e-01);
                            v.push_back(1.130151e+01);
                            p.push_back(7.943282e-01);
                            v.push_back(9.613536e+00);
                            p.push_back(1.000000e+00);
                            v.push_back(7.801000e+00);
                            p.push_back(1.258925e+00);
                            v.push_back(6.013773e+00);
                            p.push_back(1.584893e+00);
                            v.push_back(4.407450e+00);
                            p.push_back(1.995262e+00);
                            v.push_back(3.089106e+00);
                            p.push_back(2.511886e+00);
                            v.push_back(2.090994e+00);
                            p.push_back(3.162278e+00);
                            v.push_back(1.383055e+00);
                            p.push_back(3.981072e+00);
                            v.push_back(9.044772e-01);
                            p.push_back(5.011872e+00);
                            v.push_back(5.910200e-01);
                            p.push_back(6.309573e+00);
                            v.push_back(3.892264e-01);
                            p.push_back(7.943282e+00);
                            v.push_back(2.600054e-01);
                            p.push_back(1.000000e+01);
                            v.push_back(1.769000e-01);
                            p.push_back(1.258925e+01);
                            v.push_back(1.228246e-01);
                            p.push_back(1.584893e+01);
                            v.push_back(8.703875e-02);
                            p.push_back(1.995262e+01);
                            v.push_back(6.287655e-02);
                            p.push_back(2.511886e+01);
                            v.push_back(4.621041e-02);
                            p.push_back(3.162278e+01);
                            v.push_back(3.446967e-02);
                            p.push_back(3.981072e+01);
                            v.push_back(2.603407e-02);
                            p.push_back(5.011872e+01);
                            v.push_back(1.986529e-02);
                            p.push_back(6.309573e+01);
                            v.push_back(1.528475e-02);
                            p.push_back(7.943282e+01);
                            v.push_back(1.183938e-02);
                            p.push_back(1.000000e+02);
                            v.push_back(9.220000e-03);
                            p.push_back(1.258925e+02);
                            v.push_back(7.211113e-03);
                            p.push_back(1.584893e+02);
                            v.push_back(5.659489e-03);
                            p.push_back(1.995262e+02);
                            v.push_back(4.454206e-03);
                            p.push_back(2.511886e+02);
                            v.push_back(3.513678e-03);
                            p.push_back(3.162278e+02);
                            v.push_back(2.777073e-03);
                            p.push_back(3.981072e+02);
                            v.push_back(2.198502e-03);
                            p.push_back(5.011872e+02);
                            v.push_back(1.743011e-03);
                            p.push_back(6.309573e+02);
                            v.push_back(1.383757e-03);
                            p.push_back(7.943282e+02);
                            v.push_back(1.099995e-03);
                        }

                        cdouble m_0037_0037(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 1.799;
                                b = 7.527;
                                c = 1.473;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_0200_0200(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 1.759;
                                b = 8.117;
                                c = 1.471;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_0500_0500(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 1.686;
                                b = 8.917;
                                c = 1.451;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_0855_0855(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 1.568;
                                b = 9.613;
                                c = 1.418;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_1500_1500(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 1.330;
                                b = 10.55;
                                c = 1.349;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_2100_2100(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 1.162;
                                b = 11.17;
                                c = 1.281;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_3500_3500(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 0.943;
                                b = 12.14;
                                c = 1.128;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_5000_5000(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 0.840;
                                b = 12.80;
                                c = 0.988;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_6500_6500(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 0.824;
                                b = 13.282;
                                c = 0.869;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_7950_7950(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 0.23; //0.834865;
                                b = 13.49;//13.6381;
                                c = 0.71; //0.812782;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_7950_6500(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 0.269;//0.215;//0.892981;
                                b = 14.38;//13.74;//13.5915;
                                c = 0.758;//0.741;//0.891734;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_7950_5000(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 0.331;//0.235;//1.11263;
                                b = 15.31;//15.03;//13.7709;
                                c = 0.795;//0.795;//1.09492;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_7950_3500(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 0.424;//0.268;//0.987;
                                b = 16.26;//17.37;//14.331;
                                c = 0.829;//0.856;//1.372;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_7950_2100(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 0.531;//0.321;//1.562;
                                b = 17.13;//20.49;//14.985;
                                c = 0.856;//0.910;//1.695;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_7950_1500(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 0.588;//0.354;//1.935;
                                b = 17.51;//22.10;//15.355;
                                c = 0.867;//0.930;//1.848;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_7950_0855(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 0.639;//0.615;//2.526;
                                b = 17.92;//17.92;//15.795;
                                c = 0.879;//0.882;//2.033;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1./(1.+a*pp)+b*exp(-c*pp);
                            return numerics::interpolation::linear_1d(p, v, real(pp));
                        }

                        cdouble m_7950_0500(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 0.669;//0.428;//2.934;
                                b = 18.14;//25.17;//16.063;
                                c = 0.886;//0.961;//2.140;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_7950_0200(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 0.694;//0.455;//3.339;
                                b = 18.32;//26.18;//16.301;
                                c = 0.892;//0.969;//2.232;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_7950_0037(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 0.719;//0.471;//3.541;
                                b = 18.43;//26.74;//16.438;
                                c = 0.894;//0.973;//2.287;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }
                    }

                    namespace interpolation {

                        void read() {
                            cont_0037_0037.resize(5);
                            cont_0200_0200.resize(5);
                            cont_0500_0500.resize(5);
                            cont_0855_0855.resize(5);
                            cont_1500_1500.resize(5);
                            cont_2100_2100.resize(5);
                            cont_3500_3500.resize(5);
                            cont_5000_5000.resize(5);
                            cont_6500_6500.resize(5);
                            cont_7950_7950.resize(5);

                            double dmy;

                            std::ifstream rd;

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/mesons/pseudoscalar/0037_0037.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 5; ++j) {
                                    rd >> dmy;
                                    cont_0037_0037[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/mesons/pseudoscalar/0200_0200.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 5; ++j) {
                                    rd >> dmy;
                                    cont_0200_0200[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/mesons/pseudoscalar/0500_0500.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 5; ++j) {
                                    rd >> dmy;
                                    cont_0500_0500[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/mesons/pseudoscalar/0855_0855.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 5; ++j) {
                                    rd >> dmy;
                                    cont_0855_0855[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/mesons/pseudoscalar/1500_1500.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 5; ++j) {
                                    rd >> dmy;
                                    cont_1500_1500[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/mesons/pseudoscalar/2100_2100.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 5; ++j) {
                                    rd >> dmy;
                                    cont_2100_2100[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/mesons/pseudoscalar/3500_3500.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 5; ++j) {
                                    rd >> dmy;
                                    cont_3500_3500[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/mesons/pseudoscalar/5000_5000.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 5; ++j) {
                                    rd >> dmy;
                                    cont_5000_5000[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/mesons/pseudoscalar/6500_6500.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 5; ++j) {
                                    rd >> dmy;
                                    cont_6500_6500[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/mesons/pseudoscalar/7950_7950.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 5; ++j) {
                                    rd >> dmy;
                                    cont_7950_7950[j].push_back(dmy);
                                }
                            }
                            rd.close();
                        }

                        double m_0037_0037(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_0037_0037[0], cont_0037_0037[i + 1], pp);
                        }

                        double m_0200_0200(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_0200_0200[0], cont_0200_0200[i + 1], pp);
                        }

                        double m_0500_0500(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_0500_0500[0], cont_0500_0500[i + 1], pp);
                        }

                        double m_0855_0855(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_0855_0855[0], cont_0855_0855[i + 1], pp);
                        }

                        double m_1500_1500(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_1500_1500[0], cont_1500_1500[i + 1], pp);
                        }

                        double m_2100_2100(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_2100_2100[0], cont_2100_2100[i + 1], pp);
                        }

                        double m_3500_3500(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_3500_3500[0], cont_3500_3500[i + 1], pp);
                        }

                        double m_5000_5000(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_5000_5000[0], cont_5000_5000[i + 1], pp);
                        }

                        double m_6500_6500(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_6500_6500[0], cont_6500_6500[i + 1], pp);
                        }

                        double m_7950_7950(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_7950_7950[0], cont_7950_7950[i + 1], pp);
                        }

                    }
                }

                namespace vector {
                    namespace fit {

                        void rd() {
                            p.push_back(1.000000e-03);
                            v.push_back(1.331000e+01);
                            p.push_back(1.258925e-03);
                            v.push_back(1.330801e+01);
                            p.push_back(1.584893e-03);
                            v.push_back(1.330539e+01);
                            p.push_back(1.995262e-03);
                            v.push_back(1.330189e+01);
                            p.push_back(2.511886e-03);
                            v.push_back(1.329720e+01);
                            p.push_back(3.162278e-03);
                            v.push_back(1.329085e+01);
                            p.push_back(3.981072e-03);
                            v.push_back(1.328219e+01);
                            p.push_back(5.011872e-03);
                            v.push_back(1.327032e+01);
                            p.push_back(6.309573e-03);
                            v.push_back(1.325394e+01);
                            p.push_back(7.943282e-03);
                            v.push_back(1.323131e+01);
                            p.push_back(1.000000e-02);
                            v.push_back(1.320000e+01);
                            p.push_back(1.258925e-02);
                            v.push_back(1.315681e+01);
                            p.push_back(1.584893e-02);
                            v.push_back(1.309753e+01);
                            p.push_back(1.995262e-02);
                            v.push_back(1.301685e+01);
                            p.push_back(2.511886e-02);
                            v.push_back(1.290825e+01);
                            p.push_back(3.162278e-02);
                            v.push_back(1.276401e+01);
                            p.push_back(3.981072e-02);
                            v.push_back(1.257539e+01);
                            p.push_back(5.011872e-02);
                            v.push_back(1.233294e+01);
                            p.push_back(6.309573e-02);
                            v.push_back(1.202706e+01);
                            p.push_back(7.943282e-02);
                            v.push_back(1.164864e+01);
                            p.push_back(1.000000e-01);
                            v.push_back(1.119000e+01);
                            p.push_back(1.258925e-01);
                            v.push_back(1.064594e+01);
                            p.push_back(1.584893e-01);
                            v.push_back(1.001482e+01);
                            p.push_back(1.995262e-01);
                            v.push_back(9.299561e+00);
                            p.push_back(2.511886e-01);
                            v.push_back(8.508332e+00);
                            p.push_back(3.162278e-01);
                            v.push_back(7.654739e+00);
                            p.push_back(3.981072e-01);
                            v.push_back(6.757323e+00);
                            p.push_back(5.011872e-01);
                            v.push_back(5.838510e+00);
                            p.push_back(6.309573e-01);
                            v.push_back(4.923250e+00);
                            p.push_back(7.943282e-01);
                            v.push_back(4.037687e+00);
                            p.push_back(1.000000e+00);
                            v.push_back(3.208000e+00);
                            p.push_back(1.258925e+00);
                            v.push_back(2.459049e+00);
                            p.push_back(1.584893e+00);
                            v.push_back(1.812107e+00);
                            p.push_back(1.995262e+00);
                            v.push_back(1.281349e+00);
                            p.push_back(2.511886e+00);
                            v.push_back(8.702516e-01);
                            p.push_back(3.162278e+00);
                            v.push_back(5.702788e-01);
                            p.push_back(3.981072e+00);
                            v.push_back(3.634395e-01);
                            p.push_back(5.011872e+00);
                            v.push_back(2.275883e-01);
                            p.push_back(6.309573e+00);
                            v.push_back(1.416245e-01);
                            p.push_back(7.943282e+00);
                            v.push_back(8.853754e-02);
                            p.push_back(1.000000e+01);
                            v.push_back(5.613000e-02);
                            p.push_back(1.258925e+01);
                            v.push_back(3.634247e-02);
                            p.push_back(1.584893e+01);
                            v.push_back(2.413585e-02);
                            p.push_back(1.995262e+01);
                            v.push_back(1.646710e-02);
                            p.push_back(2.511886e+01);
                            v.push_back(1.153286e-02);
                            p.push_back(3.162278e+01);
                            v.push_back(8.271240e-03);
                            p.push_back(3.981072e+01);
                            v.push_back(6.054627e-03);
                            p.push_back(5.011872e+01);
                            v.push_back(4.507729e-03);
                            p.push_back(6.309573e+01);
                            v.push_back(3.402021e-03);
                            p.push_back(7.943282e+01);
                            v.push_back(2.595124e-03);
                            p.push_back(1.000000e+02);
                            v.push_back(1.996000e-03);
                            p.push_back(1.258925e+02);
                            v.push_back(1.544820e-03);
                            p.push_back(1.584893e+02);
                            v.push_back(1.201183e-03);
                            p.push_back(1.995262e+02);
                            v.push_back(9.370936e-04);
                            p.push_back(2.511886e+02);
                            v.push_back(7.326985e-04);
                            p.push_back(3.162278e+02);
                            v.push_back(5.736240e-04);
                            p.push_back(3.981072e+02);
                            v.push_back(4.492814e-04);
                            p.push_back(5.011872e+02);
                            v.push_back(3.517557e-04);
                            p.push_back(6.309573e+02);
                            v.push_back(2.750583e-04);
                            p.push_back(7.943282e+02);
                            v.push_back(2.146141e-04);
                        }

                        cdouble m_0037_0037(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 3.657;
                                b = 3.123;
                                c = 2.172;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_0200_0200(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 3.778;
                                b = 3.514;
                                c = 2.114;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_0500_0500(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 3.691;
                                b = 4.050;
                                c = 1.998;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_0855_0855(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 3.432;
                                b = 4.447;
                                c = 1.865;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_1500_1500(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 2.836;
                                b = 4.940;
                                c = 1.659;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_2100_2100(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 2.369;
                                b = 5.223;
                                c = 1.504;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_3500_3500(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 1.670;
                                b = 5.668;
                                c = 1.234;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_5000_5000(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 1.333;
                                b = 5.975;
                                c = 1.032;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_6500_6500(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 1.09304;
                                b = 6.19;
                                c = 0.895;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_7950_7950(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 0.729319;
                                b = 6.18178;
                                c = 0.746604;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_7950_6500(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 0.477;//0.803161;//1.0292;
                                b = 7.404;//6.54809; //6.3553;
                                c = 1.005;//0.651618;//0.923338;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_7950_5000(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0., d = 0., e = 0., g = 0.;
                            if (i == 0) {
                                //a               = 0.979;//0.837506;//1.365;
                                //b               = 8.534;//7.80754; //6.790;
                                //c               = 0.850;//0.717401;//1.223;
                                a = 10.3372;
                                b = 0.54008;
                                c = 0.86097;
                                d = 2.39184;
                                e = 3.63155;
                                g = 4.54764;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return (d - exp(-e * pp)) * (1. / (1. + a * pp) + b * exp(-c * pp)) * g;
                        }

                        cdouble m_7950_3500(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0., d = 0., e = 0., g = 0.;
                            if (i == 0) {
                                //a               = 0.307;//0.874457;//1.778;
                                //b               = 10.01;//9.98057; //7.566;
                                //c               = 1.476;//0.889947;//1.666;
                                a = 7.63842;
                                b = 0.70951;
                                c = 0.94948;
                                d = 4.12192;
                                e = 11.4191;
                                g = 2.07054;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return (d - exp(-e * pp)) * (1. / (1. + a * pp) + b * exp(-c * pp)) * g;
                        }

                        cdouble m_7950_2100(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0., d = 0., e = 0., g = 0.;
                            if (i == 0) {
                                //a               = 0.996;//0.864016;//2.342;
                                //b               = 11.41;//12.8703; //8.671;
                                //c               = 0.954;//1.10914; //2.231;
                                a = 9.6816;
                                b = 0.5928;
                                c = 1.0505;
                                d = 3.3901;
                                e = 12.579;
                                g = 3.2228;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return (d - exp(-e * pp)) * (1. / (1. + a * pp) + b * exp(-c * pp)) * g;
                        }

                        cdouble m_7950_1500(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0., d = 0., e = 0., g = 0.;
                            if (i == 0) {
                                //a               = 1.132;//0.840347;//2.745;
                                //b               = 11.82;//14.3651; //9.262;
                                //c               = 1.000;//1.21114; //2.507;
                                a = 15.7307;
                                b = 0.40416;
                                c = 1.03689;
                                d = 2.30877;
                                e = 10.9957;
                                g = 6.99171;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return (d - exp(-e * pp)) * (1. / (1. + a * pp) + b * exp(-c * pp)) * g;
                        }

                        cdouble m_7950_0855(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0., d = 0., e = 0., g = 0.;
                            if (i == 0) {
                                //a               = 0.298;//0.797551;//3.272;
                                //b               = 12.34;//16.1461; //9.974;
                                //c               = 1.783;//1.32344; //2.809;
                                a = 12.5053;
                                b = 0.50129;
                                c = 1.145;
                                d = 2.77654;
                                e = 13.4053;
                                g = 5.00595;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return (d - exp(-e * pp)) * (1. / (1. + a * pp) + b * exp(-c * pp)) * g;
                            //return numerics::interpolation::linear_1d(p,v,real(pp));
                        }

                        cdouble m_7950_0500(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0., d = 0., e = 0., g = 0.;
                            if (i == 0) {
                                //a               = 1.145;//0.764291;//3.678;
                                //b               = 12.71;//17.2114; //10.395;
                                //c               = 0.979;//1.38664; //2.978;
                                a = 8.93786;
                                b = 1.1686;
                                c = 1.34807;
                                d = 3.52374;
                                e = 9.37436;
                                g = 3.01201;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return (d - exp(-e * pp)) * (1. / (1. + a * pp) + b * exp(-c * pp)) * g;
                        }

                        cdouble m_7950_0200(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0., d = 0., e = 0., g = 0.;
                            if (i == 0) {
                                //a               = 1.301;//0.73747;//4.053;
                                //b               = 12.57;//18.1461;//10.778;
                                //c               = 0.960;//1.43898; //3.126;
                                a = 5.30619;
                                b = 2.20329;
                                c = 1.38078;
                                d = 7.31511;
                                e = 8.04702;
                                g = 0.835635;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return (d - exp(-e * pp)) * (1. / (1. + a * pp) + b * exp(-c * pp)) * g;
                        }

                        cdouble m_7950_0037(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0., d = 0., e = 0., g = 0.;
                            if (i == 0) {
                                //a               = 1.215;//0.72061;//4.289;
                                //b               = 13.11;//18.668; //10.991;
                                //c               = 0.990; //1.46742;// 3.205;
                                a = 16.961;
                                b = 0.43693;
                                c = 1.41172;
                                d = 1.78027;
                                e = 9.15873;
                                g = 15.1425;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return (d - exp(-e * pp)) * (1. / (1. + a * pp) + b * exp(-c * pp)) * g;
                        }

                    }

                    namespace interpolation {
                        void read() {
                            cont_0037_0037.resize(9);
                            cont_0200_0200.resize(9);
                            cont_0500_0500.resize(9);
                            cont_0855_0855.resize(9);
                            cont_1500_1500.resize(9);
                            cont_2100_2100.resize(9);
                            cont_3500_3500.resize(9);
                            cont_5000_5000.resize(9);
                            cont_6500_6500.resize(9);
                            cont_7950_7950.resize(9);

                            double dmy;

                            std::ifstream rd;

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/mesons/vector/0037_0037.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 9; ++j) {
                                    rd >> dmy;
                                    cont_0037_0037[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/mesons/vector/0200_0200.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 9; ++j) {
                                    rd >> dmy;
                                    cont_0200_0200[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/mesons/vector/0500_0500.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 9; ++j) {
                                    rd >> dmy;
                                    cont_0500_0500[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/mesons/vector/0855_0855.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 9; ++j) {
                                    rd >> dmy;
                                    cont_0855_0855[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/mesons/vector/1500_1500.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 9; ++j) {
                                    rd >> dmy;
                                    cont_1500_1500[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/mesons/vector/2100_2100.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 9; ++j) {
                                    rd >> dmy;
                                    cont_2100_2100[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/mesons/vector/3500_3500.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 9; ++j) {
                                    rd >> dmy;
                                    cont_3500_3500[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/mesons/vector/5000_5000.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 9; ++j) {
                                    rd >> dmy;
                                    cont_5000_5000[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/mesons/vector/6500_6500.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 9; ++j) {
                                    rd >> dmy;
                                    cont_6500_6500[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/mesons/vector/7950_7950.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 9; ++j) {
                                    rd >> dmy;
                                    cont_7950_7950[j].push_back(dmy);
                                }
                            }
                            rd.close();
                        }

                        double m_0037_0037(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_0037_0037[0], cont_0037_0037[i + 1], pp);
                        }

                        double m_0200_0200(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_0200_0200[0], cont_0200_0200[i + 1], pp);
                        }

                        double m_0500_0500(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_0500_0500[0], cont_0500_0500[i + 1], pp);
                        }

                        double m_0855_0855(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_0855_0855[0], cont_0855_0855[i + 1], pp);
                        }

                        double m_1500_1500(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_1500_1500[0], cont_1500_1500[i + 1], pp);
                        }

                        double m_2100_2100(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_2100_2100[0], cont_2100_2100[i + 1], pp);
                        }

                        double m_3500_3500(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_3500_3500[0], cont_3500_3500[i + 1], pp);
                        }

                        double m_5000_5000(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_5000_5000[0], cont_5000_5000[i + 1], pp);
                        }

                        double m_6500_6500(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_6500_6500[0], cont_6500_6500[i + 1], pp);
                        }

                        double m_7950_7950(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_7950_7950[0], cont_7950_7950[i + 1], pp);
                        }

                    }
                }

                namespace axialvector {
                    namespace fit {
                        cdouble m_0037_0037(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 1.165;
                                b = 1.342;
                                c = 0.770;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_0200_0200(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 1.021;
                                b = 1.464;
                                c = 0.715;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_0500_0500(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 0.802;
                                b = 1.616;
                                c = 0.652;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_0855_0855(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 0.743;
                                b = 1.721;
                                c = 0.559;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_1500_1500(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 0.605;
                                b = 1.813;
                                c = 0.447;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_2100_2100(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 0.562;
                                b = 1.822;
                                c = 0.475;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_3500_3500(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 0.362;
                                b = 1.960;
                                c = 0.331;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_5000_5000(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 0.363;
                                b = 2.349;
                                c = 0.331;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_6500_6500(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 0.302;
                                b = 2.344;
                                c = 0.289;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_7950_7950(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 0.261;
                                b = 2.323;
                                c = 0.260;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                    }

                    namespace interpolation {
                        void read() {
                            cont_0037_0037.resize(9);
                            cont_0200_0200.resize(9);
                            cont_0500_0500.resize(9);
                            cont_0855_0855.resize(9);
                            cont_1500_1500.resize(9);
                            cont_2100_2100.resize(9);
                            cont_3500_3500.resize(9);
                            cont_5000_5000.resize(9);
                            cont_6500_6500.resize(9);
                            cont_7950_7950.resize(9);

                            double dmy;

                            std::ifstream rd;

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/mesons/axialvector/0037_0037.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 9; ++j) {
                                    rd >> dmy;
                                    cont_0037_0037[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/mesons/axialvector/0200_0200.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 9; ++j) {
                                    rd >> dmy;
                                    cont_0200_0200[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/mesons/axialvector/0500_0500.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 9; ++j) {
                                    rd >> dmy;
                                    cont_0500_0500[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/mesons/axialvector/0855_0855.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 9; ++j) {
                                    rd >> dmy;
                                    cont_0855_0855[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/mesons/axialvector/1500_1500.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 9; ++j) {
                                    rd >> dmy;
                                    cont_1500_1500[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/mesons/axialvector/2100_2100.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 9; ++j) {
                                    rd >> dmy;
                                    cont_2100_2100[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/mesons/axialvector/3500_3500.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 9; ++j) {
                                    rd >> dmy;
                                    cont_3500_3500[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/mesons/axialvector/5000_5000.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 9; ++j) {
                                    rd >> dmy;
                                    cont_5000_5000[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/mesons/axialvector/6500_6500.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 9; ++j) {
                                    rd >> dmy;
                                    cont_6500_6500[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/mesons/axialvector/7950_7950.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 9; ++j) {
                                    rd >> dmy;
                                    cont_7950_7950[j].push_back(dmy);
                                }
                            }
                            rd.close();
                        }

                        double m_0037_0037(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_0037_0037[0], cont_0037_0037[i + 1], pp);
                        }

                        double m_0200_0200(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_0200_0200[0], cont_0200_0200[i + 1], pp);
                        }

                        double m_0500_0500(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_0500_0500[0], cont_0500_0500[i + 1], pp);
                        }

                        double m_0855_0855(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_0855_0855[0], cont_0855_0855[i + 1], pp);
                        }

                        double m_1500_1500(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_1500_1500[0], cont_1500_1500[i + 1], pp);
                        }

                        double m_2100_2100(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_2100_2100[0], cont_2100_2100[i + 1], pp);
                        }

                        double m_3500_3500(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_3500_3500[0], cont_3500_3500[i + 1], pp);
                        }

                        double m_5000_5000(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_5000_5000[0], cont_5000_5000[i + 1], pp);
                        }

                        double m_6500_6500(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_6500_6500[0], cont_6500_6500[i + 1], pp);
                        }

                        double m_7950_7950(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_7950_7950[0], cont_7950_7950[i + 1], pp);
                        }

                    }
                }

            }

            namespace diquark {
                namespace scalar {
                    namespace fit {
                        cdouble m_0037_0037(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 2.482;
                                b = 8.376;
                                c = 1.707;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_0200_0200(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 2.570;
                                b = 9.165;
                                c = 1.655;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_0500_0500(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 2.779;
                                b = 10.148;
                                c = 1.557;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_0855_0855(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 2.967;
                                b = 10.770;
                                c = 1.453;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_1500_1500(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 2.673;
                                b = 11.175;
                                c = 1.312;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_2100_2100(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 2.061;
                                b = 11.105;
                                c = 1.217;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_3500_3500(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 1.403;
                                b = 10.177;
                                c = 1.045;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_5000_5000(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 1.141;
                                b = 8.831;
                                c = 0.912;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_6500_6500(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 0.996;
                                b = 7.684;
                                c = 0.815;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_7950_7950(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 0.909;
                                b = 6.664;
                                c = 0.743;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_7950_6500(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 1.5;
                                b = 8.02648;
                                c = 0.822447;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_7950_5000(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 1.5;
                                b = 9.18966;
                                c = 1.17014;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_7950_3500(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 1.5;
                                b = 10.5162;
                                c = 1.32429;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_7950_2100(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 1.1;
                                b = 11.7636;
                                c = 1.44757;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_7950_1500(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 1.2;
                                b = 12.2946;
                                c = 1.49512;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_7950_0855(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 1.2;
                                b = 12.8733;
                                c = 1.54371;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_7950_0500(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 1.2;
                                b = 13.1898;
                                c = 1.5694;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_7950_0200(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 1.1;
                                b = 13.4582;
                                c = 1.59056;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_7950_0037(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 1.1;
                                b = 13.6031;
                                c = 1.60146;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                    }

                    namespace interpolation {
                        void read() {
                            cont_0037_0037.resize(5);
                            cont_0200_0200.resize(5);
                            cont_0500_0500.resize(5);
                            cont_0855_0855.resize(5);
                            cont_1500_1500.resize(5);
                            cont_2100_2100.resize(5);
                            cont_3500_3500.resize(5);
                            cont_5000_5000.resize(5);
                            cont_6500_6500.resize(5);
                            cont_7950_7950.resize(5);

                            double dmy;

                            std::ifstream rd;

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/diquarks/scalar/0037_0037.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 5; ++j) {
                                    rd >> dmy;
                                    cont_0037_0037[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/diquarks/scalar/0200_0200.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 5; ++j) {
                                    rd >> dmy;
                                    cont_0200_0200[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/diquarks/scalar/0500_0500.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 5; ++j) {
                                    rd >> dmy;
                                    cont_0500_0500[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/diquarks/scalar/0855_0855.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 5; ++j) {
                                    rd >> dmy;
                                    cont_0855_0855[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/diquarks/scalar/1500_1500.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 5; ++j) {
                                    rd >> dmy;
                                    cont_1500_1500[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/diquarks/scalar/2100_2100.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 5; ++j) {
                                    rd >> dmy;
                                    cont_2100_2100[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/diquarks/scalar/3500_3500.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 5; ++j) {
                                    rd >> dmy;
                                    cont_3500_3500[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/diquarks/scalar/5000_5000.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 5; ++j) {
                                    rd >> dmy;
                                    cont_5000_5000[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/diquarks/scalar/6500_6500.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 5; ++j) {
                                    rd >> dmy;
                                    cont_6500_6500[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/diquarks/scalar/7950_7950.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 5; ++j) {
                                    rd >> dmy;
                                    cont_7950_7950[j].push_back(dmy);
                                }
                            }
                            rd.close();
                        }

                        double m_0037_0037(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_0037_0037[0], cont_0037_0037[i + 1], pp);
                        }

                        double m_0200_0200(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_0200_0200[0], cont_0200_0200[i + 1], pp);
                        }

                        double m_0500_0500(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_0500_0500[0], cont_0500_0500[i + 1], pp);
                        }

                        double m_0855_0855(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_0855_0855[0], cont_0855_0855[i + 1], pp);
                        }

                        double m_1500_1500(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_1500_1500[0], cont_1500_1500[i + 1], pp);
                        }

                        double m_2100_2100(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_2100_2100[0], cont_2100_2100[i + 1], pp);
                        }

                        double m_3500_3500(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_3500_3500[0], cont_3500_3500[i + 1], pp);
                        }

                        double m_5000_5000(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_5000_5000[0], cont_5000_5000[i + 1], pp);
                        }

                        double m_6500_6500(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_6500_6500[0], cont_6500_6500[i + 1], pp);
                        }

                        double m_7950_7950(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_7950_7950[0], cont_7950_7950[i + 1], pp);
                        }

                    }
                }

                namespace pseudoscalar {
                    namespace fit {
                        cdouble m_0037_0037(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 0.;
                                b = 0.;
                                c = 0.;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_0200_0200(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 0.;
                                b = 0.;
                                c = 0.;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_0500_0500(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 0.;
                                b = 0.;
                                c = 0.;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_0855_0855(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 0.;
                                b = 0.;
                                c = 0.;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_1500_1500(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 0.;
                                b = 0.;
                                c = 0.;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_2100_2100(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 0.;
                                b = 0.;
                                c = 0.;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_3500_3500(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 0.;
                                b = 0.;
                                c = 0.;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_5000_5000(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 0.;
                                b = 0.;
                                c = 0.;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_6500_6500(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 0.;
                                b = 0.;
                                c = 0.;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_7950_7950(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 0.;
                                b = 0.;
                                c = 0.;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                    } // tbd

                    namespace interpolation {
                        void read() {
                            cont_0037_0037.resize(9);
                            cont_0200_0200.resize(9);
                            cont_0500_0500.resize(9);
                            cont_0855_0855.resize(9);
                            cont_1500_1500.resize(9);
                            cont_2100_2100.resize(9);
                            cont_3500_3500.resize(9);
                            cont_5000_5000.resize(9);
                            cont_6500_6500.resize(9);
                            cont_7950_7950.resize(9);

                            double dmy;

                            std::ifstream rd;

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/diquarks/pseudoscalar/0037_0037.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 5; ++j) {
                                    rd >> dmy;
                                    cont_0037_0037[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/diquarks/pseudoscalar/0200_0200.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 5; ++j) {
                                    rd >> dmy;
                                    cont_0200_0200[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/diquarks/pseudoscalar/0500_0500.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 5; ++j) {
                                    rd >> dmy;
                                    cont_0500_0500[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/diquarks/pseudoscalar/0855_0855.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 5; ++j) {
                                    rd >> dmy;
                                    cont_0855_0855[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/diquarks/pseudoscalar/1500_1500.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 5; ++j) {
                                    rd >> dmy;
                                    cont_1500_1500[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/diquarks/pseudoscalar/2100_2100.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 5; ++j) {
                                    rd >> dmy;
                                    cont_2100_2100[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/diquarks/pseudoscalar/3500_3500.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 5; ++j) {
                                    rd >> dmy;
                                    cont_3500_3500[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/diquarks/pseudoscalar/5000_5000.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 5; ++j) {
                                    rd >> dmy;
                                    cont_5000_5000[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/diquarks/pseudoscalar/6500_6500.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 5; ++j) {
                                    rd >> dmy;
                                    cont_6500_6500[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/diquarks/pseudoscalar/7950_7950.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 5; ++j) {
                                    rd >> dmy;
                                    cont_7950_7950[j].push_back(dmy);
                                }
                            }
                            rd.close();
                        }

                        double m_0037_0037(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_0037_0037[0], cont_0037_0037[i + 1], pp);
                        }

                        double m_0200_0200(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_0200_0200[0], cont_0200_0200[i + 1], pp);
                        }

                        double m_0500_0500(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_0500_0500[0], cont_0500_0500[i + 1], pp);
                        }

                        double m_0855_0855(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_0855_0855[0], cont_0855_0855[i + 1], pp);
                        }

                        double m_1500_1500(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_1500_1500[0], cont_1500_1500[i + 1], pp);
                        }

                        double m_2100_2100(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_2100_2100[0], cont_2100_2100[i + 1], pp);
                        }

                        double m_3500_3500(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_3500_3500[0], cont_3500_3500[i + 1], pp);
                        }

                        double m_5000_5000(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_5000_5000[0], cont_5000_5000[i + 1], pp);
                        }

                        double m_6500_6500(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_6500_6500[0], cont_6500_6500[i + 1], pp);
                        }

                        double m_7950_7950(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_7950_7950[0], cont_7950_7950[i + 1], pp);
                        }

                    } // tbd
                }

                namespace vector {
                    namespace fit {
                        cdouble m_0037_0037(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 0.;
                                b = 0.;
                                c = 0.;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_0200_0200(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 0.;
                                b = 0.;
                                c = 0.;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_0500_0500(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 0.;
                                b = 0.;
                                c = 0.;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_0855_0855(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 0.;
                                b = 0.;
                                c = 0.;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_1500_1500(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 0.;
                                b = 0.;
                                c = 0.;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_2100_2100(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 0.;
                                b = 0.;
                                c = 0.;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_3500_3500(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 0.;
                                b = 0.;
                                c = 0.;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_5000_5000(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 0.;
                                b = 0.;
                                c = 0.;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_6500_6500(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 0.;
                                b = 0.;
                                c = 0.;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_7950_7950(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 0.;
                                b = 0.;
                                c = 0.;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                    } // tbd

                    namespace interpolation {
                        void read() {
                            cont_0037_0037.resize(9);
                            cont_0200_0200.resize(9);
                            cont_0500_0500.resize(9);
                            cont_0855_0855.resize(9);
                            cont_1500_1500.resize(9);
                            cont_2100_2100.resize(9);
                            cont_3500_3500.resize(9);
                            cont_5000_5000.resize(9);
                            cont_6500_6500.resize(9);
                            cont_7950_7950.resize(9);

                            double dmy;

                            std::ifstream rd;

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/diquarks/vector/0037_0037.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 9; ++j) {
                                    rd >> dmy;
                                    cont_0037_0037[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/diquarks/vector/0200_0200.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 9; ++j) {
                                    rd >> dmy;
                                    cont_0200_0200[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/diquarks/vector/0500_0500.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 9; ++j) {
                                    rd >> dmy;
                                    cont_0500_0500[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/diquarks/vector/0855_0855.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 9; ++j) {
                                    rd >> dmy;
                                    cont_0855_0855[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/diquarks/vector/1500_1500.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 9; ++j) {
                                    rd >> dmy;
                                    cont_1500_1500[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/diquarks/vector/2100_2100.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 9; ++j) {
                                    rd >> dmy;
                                    cont_2100_2100[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/diquarks/vector/3500_3500.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 9; ++j) {
                                    rd >> dmy;
                                    cont_3500_3500[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/diquarks/vector/5000_5000.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 9; ++j) {
                                    rd >> dmy;
                                    cont_5000_5000[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/diquarks/vector/6500_6500.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 9; ++j) {
                                    rd >> dmy;
                                    cont_6500_6500[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/diquarks/vector/7950_7950.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 9; ++j) {
                                    rd >> dmy;
                                    cont_7950_7950[j].push_back(dmy);
                                }
                            }
                            rd.close();
                        }

                        double m_0037_0037(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_0037_0037[0], cont_0037_0037[i + 1], pp);
                        }

                        double m_0200_0200(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_0200_0200[0], cont_0200_0200[i + 1], pp);
                        }

                        double m_0500_0500(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_0500_0500[0], cont_0500_0500[i + 1], pp);
                        }

                        double m_0855_0855(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_0855_0855[0], cont_0855_0855[i + 1], pp);
                        }

                        double m_1500_1500(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_1500_1500[0], cont_1500_1500[i + 1], pp);
                        }

                        double m_2100_2100(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_2100_2100[0], cont_2100_2100[i + 1], pp);
                        }

                        double m_3500_3500(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_3500_3500[0], cont_3500_3500[i + 1], pp);
                        }

                        double m_5000_5000(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_5000_5000[0], cont_5000_5000[i + 1], pp);
                        }

                        double m_6500_6500(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_6500_6500[0], cont_6500_6500[i + 1], pp);
                        }

                        double m_7950_7950(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_7950_7950[0], cont_7950_7950[i + 1], pp);
                        }

                    } // tbd
                }

                namespace axialvector {
                    namespace fit {
                        cdouble m_0037_0037(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 2.953;
                                b = 3.212;
                                c = 1.784;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_0200_0200(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 2.987;
                                b = 3.578;
                                c = 1.759;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_0500_0500(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 3.039;
                                b = 3.987;
                                c = 1.683;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_0855_0855(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 2.911;
                                b = 4.156;
                                c = 1.594;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_1500_1500(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 2.714;
                                b = 4.072;
                                c = 1.460;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_2100_2100(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 2.449;
                                b = 3.978;
                                c = 1.346;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_3500_3500(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 2.090;
                                b = 3.261;
                                c = 1.171;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_5000_5000(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 1.806;
                                b = 2.667;
                                c = 1.038;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_6500_6500(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 1.504;
                                b = 2.147;
                                c = 0.949;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_7950_7950(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 1.383;
                                b = 1.659;
                                c = 0.879;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_7950_6500(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 1.817;
                                b = 3.335;
                                c = 1.539;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_7950_5000(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 2.265;
                                b = 5.069;
                                c = 2.223;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_7950_3500(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 2.714;
                                b = 6.802;
                                c = 2.906;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_7950_2100(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 3.132;
                                b = 8.421;
                                c = 3.543;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_7950_1500(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 3.312;
                                b = 9.114;
                                c = 3.817;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_7950_0855(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 3.504;
                                b = 9.860;
                                c = 4.110;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_7950_0500(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 3.611;
                                b = 10.270;
                                c = 4.272;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_7950_0200(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 3.700;
                                b = 10.617;
                                c = 4.409;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                        cdouble m_7950_0037(int i, cdouble pp) {
                            double a = 0., b = 0., c = 0.;
                            if (i == 0) {
                                a = 3.749;
                                b = 10.805;
                                c = 4.483;
                            } else {
                                std::cout << "error :: only first amplitude can be evaluated analytically for now."
                                          << std::endl;
                            }

                            return 1. / (1. + a * pp) + b * exp(-c * pp);
                        }

                    }

                    namespace interpolation {
                        void read() {
                            cont_0037_0037.resize(9);
                            cont_0200_0200.resize(9);
                            cont_0500_0500.resize(9);
                            cont_0855_0855.resize(9);
                            cont_1500_1500.resize(9);
                            cont_2100_2100.resize(9);
                            cont_3500_3500.resize(9);
                            cont_5000_5000.resize(9);
                            cont_6500_6500.resize(9);
                            cont_7950_7950.resize(9);

                            double dmy;

                            std::ifstream rd;

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/diquarks/axialvector/0037_0037.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 9; ++j) {
                                    rd >> dmy;
                                    cont_0037_0037[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/diquarks/axialvector/0200_0200.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 9; ++j) {
                                    rd >> dmy;
                                    cont_0200_0200[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/diquarks/axialvector/0500_0500.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 9; ++j) {
                                    rd >> dmy;
                                    cont_0500_0500[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/diquarks/axialvector/0855_0855.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 9; ++j) {
                                    rd >> dmy;
                                    cont_0855_0855[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/diquarks/axialvector/1500_1500.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 9; ++j) {
                                    rd >> dmy;
                                    cont_1500_1500[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/diquarks/axialvector/2100_2100.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 9; ++j) {
                                    rd >> dmy;
                                    cont_2100_2100[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/diquarks/axialvector/3500_3500.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 9; ++j) {
                                    rd >> dmy;
                                    cont_3500_3500[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/diquarks/axialvector/5000_5000.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 9; ++j) {
                                    rd >> dmy;
                                    cont_5000_5000[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/diquarks/axialvector/6500_6500.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 9; ++j) {
                                    rd >> dmy;
                                    cont_6500_6500[j].push_back(dmy);
                                }
                            }
                            rd.close();

                            rd.open("/home/nico/nico_research/programs/classes/bound_states/ns_data_v2/src/data/diquarks/axialvector/7950_7950.txt");
                            for (int i = 0; i < 60; ++i) {
                                for (int j = 0; j < 9; ++j) {
                                    rd >> dmy;
                                    cont_7950_7950[j].push_back(dmy);
                                }
                            }
                            rd.close();
                        }

                        double m_0037_0037(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_0037_0037[0], cont_0037_0037[i + 1], pp);
                        }

                        double m_0200_0200(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_0200_0200[0], cont_0200_0200[i + 1], pp);
                        }

                        double m_0500_0500(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_0500_0500[0], cont_0500_0500[i + 1], pp);
                        }

                        double m_0855_0855(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_0855_0855[0], cont_0855_0855[i + 1], pp);
                        }

                        double m_1500_1500(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_1500_1500[0], cont_1500_1500[i + 1], pp);
                        }

                        double m_2100_2100(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_2100_2100[0], cont_2100_2100[i + 1], pp);
                        }

                        double m_3500_3500(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_3500_3500[0], cont_3500_3500[i + 1], pp);
                        }

                        double m_5000_5000(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_5000_5000[0], cont_5000_5000[i + 1], pp);
                        }

                        double m_6500_6500(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_6500_6500[0], cont_6500_6500[i + 1], pp);
                        }

                        double m_7950_7950(int i, double pp) {
                            return numerics::interpolation::linear_1d(cont_7950_7950[0], cont_7950_7950[i + 1], pp);
                        }

                    }
                }

            }
        }

        namespace propagators {
            namespace meson {
                namespace scalar {
                    cdouble m_7950_7950(cdouble pp) {
                        cdouble mass = 3.143;

                        return 1. / (pp + mass * mass);
                    }

                    cdouble m_6500_6500(cdouble pp) {
                        cdouble mass = 2.774;

                        return 1. / (pp + mass * mass);
                    }

                    cdouble m_5000_5000(cdouble pp) {
                        cdouble mass = 2.377;

                        return 1. / (pp + mass * mass);
                    }

                    cdouble m_3500_3500(cdouble pp) {
                        cdouble mass = 1.957;

                        return 1. / (pp + mass * mass);
                    }

                    cdouble m_2100_2100(cdouble pp) {
                        cdouble mass = 1.529;

                        return 1. / (pp + mass * mass);
                    }

                    cdouble m_1500_1500(cdouble pp) {
                        cdouble mass = 1.325;

                        return 1. / (pp + mass * mass);
                    }

                    cdouble m_0855_0855(cdouble pp) {
                        cdouble mass = 1.081;

                        return 1. / (pp + mass * mass);
                    }

                    cdouble m_0500_0500(cdouble pp) {
                        cdouble mass = 0.926;

                        return 1. / (pp + mass * mass);
                    }

                    cdouble m_0200_0200(cdouble pp) {
                        cdouble mass = 0.771;

                        return 1. / (pp + mass * mass);
                    }

                    cdouble m_0037_0037(cdouble pp) {
                        cdouble mass = 0.661;

                        return 1. / (pp + mass * mass);
                    }

                }

                namespace pseudoscalar {
                    cdouble m_7950_7950(cdouble pp) {
                        cdouble
                                mass = 2.802,
                                uv = 0.0814,
                                a = 1.461,
                                b = 17.8187,
                                c = 0.00148,
                                d = 0.494;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_6500_6500(cdouble pp) {
                        cdouble
                                mass = 2.435,
                                uv = 0.1144,
                                a = 1.291,
                                b = 15.77,
                                c = 0.006168,
                                d = 0.766;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_5000_5000(cdouble pp) {
                        cdouble
                                mass = 2.035,
                                uv = 0.145,
                                a = 0.568,
                                b = 12.687,
                                c = 0.00682,
                                d = 1.311;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_3500_3500(cdouble pp) {
                        cdouble
                                mass = 1.612,
                                uv = 0.195,
                                a = -0.0527,
                                b = 9.530,
                                c = 0.00892,
                                d = 1.9867;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_2100_2100(cdouble pp) {
                        cdouble
                                mass = 1.175,
                                uv = 0.286,
                                a = -0.439,
                                b = 6.494,
                                c = 0.0136,
                                d = 3.412;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_1500_1500(cdouble pp) {
                        cdouble
                                mass = 0.964,
                                uv = 0.357,
                                a = -0.361,
                                b = 5.616,
                                c = 0.000623,
                                d = 0.0966;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_0855_0855(cdouble pp) {
                        cdouble
                                mass = 0.703,
                                uv = 0.489,
                                a = -0.632,
                                b = 3.322,
                                c = 0.0485,
                                d = 7.546;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_0500_0500(cdouble pp) {
                        cdouble
                                mass = 0.528,
                                uv = 0.611,
                                a = 0.560,
                                b = 5.176,
                                c = 0.00105,
                                d = 0.126;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_0200_0200(cdouble pp) {
                        cdouble
                                mass = 0.329,
                                uv = 0.782,
                                a = 0.0894,
                                b = 3.432,
                                c = 0.00190,
                                d = 0.132;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_0037_0037(cdouble pp) {
                        cdouble
                                mass = 0.140,
                                uv = 0.940,
                                a = -0.298,
                                b = 1.994,
                                c = 0.00104,
                                d = 0.258;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_7950_6500(cdouble pp) {
                        cdouble
                                mass = 2.620,
                                uv = 0.0995,
                                a = 1.480,
                                b = 15.012,
                                c = 0.00537,
                                d = 0.500;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_7950_5000(cdouble pp) {
                        cdouble
                                mass = 2.433,
                                uv = 0.1140,
                                a = 1.471,
                                b = 13.689,
                                c = 0.00462,
                                d = 0.634;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_7950_3500(cdouble pp) {
                        cdouble
                                mass = 2.252,
                                uv = 0.1344,
                                a = 1.471,
                                b = 11.324,
                                c = 0.00645,
                                d = 0.689;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_7950_2100(cdouble pp) {
                        cdouble
                                mass = 2.075,
                                uv = 0.149,
                                a = 1.471,
                                b = 9.324,
                                c = 0.00645,
                                d = 0.759;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_7950_1500(cdouble pp) {
                        cdouble
                                mass = 2.001,
                                uv = 0.156,
                                a = 1.471,
                                b = 8.324,
                                c = 0.00645,
                                d = 0.799;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_7950_0855(cdouble pp) {
                        cdouble
                                mass = 1.921,
                                uv = 0.164,
                                a = 1.471,
                                b = 7.700,
                                c = 0.00645,
                                d = 0.689;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_7950_0500(cdouble pp) {
                        cdouble
                                mass = 1.877,
                                uv = 0.168,
                                a = 1.471,
                                b = 7.200,
                                c = 0.00645,
                                d = 0.689;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_7950_0200(cdouble pp) {
                        cdouble
                                mass = 1.840,
                                uv = 0.172,
                                a = 1.471,
                                b = 7.000,
                                c = 0.00645,
                                d = 0.689;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_7950_0037(cdouble pp) {
                        cdouble
                                mass = 1.820,
                                uv = 0.173,
                                a = 1.471,
                                b = 7.000,
                                c = 0.00645,
                                d = 0.689;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }


                }

                namespace vector {
                    cdouble m_7950_7950(cdouble pp) {
                        cdouble
                                mass = 2.991,
                                uv = 0.255,
                                a = 13.29,
                                b = 20.87,
                                c = 0.0105,
                                d = 0.206;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_6500_6500(cdouble pp) {
                        cdouble
                                mass = 2.637,
                                uv = 0.315,
                                a = 11.54,
                                b = 18.89,
                                c = 0.0183,
                                d = 0.183;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_5000_5000(cdouble pp) {
                        cdouble
                                mass = 2.260,
                                uv = 0.408,
                                a = 10.06,
                                b = 16.53,
                                c = 0.0241,
                                d = 0.230;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_3500_3500(cdouble pp) {
                        cdouble
                                mass = 1.865,
                                uv = 0.574,
                                a = 8.540,
                                b = 14.11,
                                c = 0.0397,
                                d = 0.280;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_2100_2100(cdouble pp) {
                        cdouble
                                mass = 1.469,
                                uv = 0.898,
                                a = 6.998,
                                b = 11.65,
                                c = 0.0766,
                                d = 0.287;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_1500_1500(cdouble pp) {
                        cdouble
                                mass = 1.286,
                                uv = 1.161,
                                a = 7.697,
                                b = 12.09,
                                c = 0.0820,
                                d = 0.610;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_0855_0855(cdouble pp) {
                        cdouble
                                mass = 1.070,
                                uv = 1.690,
                                a = 6.783,
                                b = 10.64,
                                c = 0.160,
                                d = 0.607;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_0500_0500(cdouble pp) {
                        cdouble
                                mass = 0.938,
                                uv = 2.213,
                                a = 6.578,
                                b = 10.17,
                                c = 0.213,
                                d = 0.684;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_0200_0200(cdouble pp) {
                        cdouble
                                mass = 0.813,
                                uv = 3.052,
                                a = 6.461,
                                b = 9.774,
                                c = 0.326,
                                d = 0.860;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_0037_0037(cdouble pp) {
                        cdouble
                                mass = 0.775,
                                uv = 3.814,
                                a = 6.440,
                                b = 9.622,
                                c = 0.329,
                                d = 0.914;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_7950_6500(cdouble pp) {
                        cdouble
                                mass = 2.819,
                                uv = 0.285,
                                a = 13.73,
                                b = 21.83,
                                c = 0.0102,
                                d = 0.201;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_7950_5000(cdouble pp) {
                        cdouble
                                mass = 2.654,
                                uv = 0.322,
                                a = 10.81,
                                b = 17.71,
                                c = 0.014,
                                d = 0.238;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_7950_3500(cdouble pp) {
                        cdouble
                                mass = 2.481,
                                uv = 0.356,
                                a = 10.81,
                                b = 17.70,
                                c = 0.014,
                                d = 0.238;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_7950_2100(cdouble pp) {
                        cdouble
                                mass = 2.321,
                                uv = 0.387,
                                a = 10.81,
                                b = 17.71,
                                c = 0.014,
                                d = 0.238;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_7950_1500(cdouble pp) {
                        cdouble
                                mass = 2.252,
                                uv = 0.401,
                                a = 10.81,
                                b = 17.71,
                                c = 0.014,
                                d = 0.238;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_7950_0855(cdouble pp) {
                        cdouble
                                mass = 2.179,
                                uv = 0.415,
                                a = 10.81,
                                b = 17.71,
                                c = 0.014,
                                d = 0.238;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_7950_0500(cdouble pp) {
                        cdouble
                                mass = 2.138,
                                uv = 0.424,
                                a = 10.81,
                                b = 17.71,
                                c = 0.014,
                                d = 0.238;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_7950_200(cdouble pp) {
                        cdouble
                                mass = 2.104,
                                uv = 0.430,
                                a = 10.81,
                                b = 17.71,
                                c = 0.014,
                                d = 0.238;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_7950_0037(cdouble pp) {
                        cdouble
                                mass = 2.085,
                                uv = 0.434,
                                a = 10.81,
                                b = 17.71,
                                c = 0.014,
                                d = 0.238;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_7950_7950_L(cdouble pp) {
                        cdouble
                                uv = 0.255,
                                a = 1.43,
                                b = 20.69,
                                c = 15.28,
                                d = 19.67;

                        return a / (pp + b) - c / (pow(pp + d, 2)) + uv;
                    }

                    cdouble m_6500_6500_L(cdouble pp) {
                        cdouble
                                uv = 0.315,
                                a = 1.404,
                                b = 10.379,
                                c = 16.74,
                                d = 13.18;

                        return a / (pp + b) - c / (pow(pp + d, 2)) + uv;
                    }

                    cdouble m_5000_5000_L(cdouble pp) {
                        cdouble
                                uv = 0.408,
                                a = 1.831,
                                b = 11.04,
                                c = 13.14,
                                d = 11.15;

                        return a / (pp + b) - c / (pow(pp + d, 2)) + uv;
                    }

                    cdouble m_3500_3500_L(cdouble pp) {
                        cdouble
                                uv = 0.574,
                                a = 2.588,
                                b = 8.478,
                                c = 14.79,
                                d = 8.454;

                        return a / (pp + b) - c / (pow(pp + d, 2)) + uv;
                    }

                    cdouble m_2100_2100_L(cdouble pp) {
                        cdouble
                                uv = 0.898,
                                a = 4.025,
                                b = 6.165,
                                c = 17.20,
                                d = 6.021;

                        return a / (pp + b) - c / (pow(pp + d, 2)) + uv;
                    }

                    cdouble m_1500_1500_L(cdouble pp) {
                        cdouble
                                uv = 1.161,
                                a = 4.562,
                                b = 4.355,
                                c = 13.84,
                                d = 2.244;

                        return a / (pp + b) - c / (pow(pp + d, 2)) + uv;
                    }

                    cdouble m_0855_0855_L(cdouble pp) {
                        cdouble
                                uv = 1.690,
                                a = 6.664,
                                b = 3.539,
                                c = 17.66,
                                d = 3.485;

                        return a / (pp + b) - c / (pow(pp + d, 2)) + uv;
                    }

                    cdouble m_0500_0500_L(cdouble pp) {
                        cdouble
                                uv = 2.213,
                                a = 9.222,
                                b = 3.427,
                                c = 23.04,
                                d = 3.255;

                        return a / (pp + b) - c / (pow(pp + d, 2)) + uv;
                    }

                    cdouble m_0200_0200_L(cdouble pp) {
                        cdouble
                                uv = 3.052,
                                a = 10.36,
                                b = 2.002,
                                c = 18.31,
                                d = 2.067;

                        return a / (pp + b) - c / (pow(pp + d, 2)) + uv;
                    }

                    cdouble m_0037_0037_L(cdouble pp) {
                        cdouble
                                uv = 3.815,
                                a = 12.22,
                                b = 1.125,
                                c = 24.18,
                                d = 1.574;

                        return a / (pp + b) - c / (pow(pp + d, 2)) + uv;
                    }

                    cdouble m_7950_6500_L(cdouble pp) {
                        cdouble
                                uv = 0.285,
                                a = 1.375,
                                b = 18.71,
                                c = 14.84,
                                d = 18.11;

                        return a / (pp + b) - c / (pow(pp + d, 2)) + uv;
                    }

                    cdouble m_7950_5000_L(cdouble pp) {
                        cdouble
                                uv = 0.322,
                                a = 1.47,
                                b = 16.20,
                                c = 15.15,
                                d = 15.74;

                        return a / (pp + b) - c / (pow(pp + d, 2)) + uv;
                    }

                    cdouble m_7950_3500_L(cdouble pp) {
                        cdouble
                                uv = 0.356,
                                a = 1.47,
                                b = 14.20,
                                c = 15.15,
                                d = 13.74;

                        return a / (pp + b) - c / (pow(pp + d, 2)) + uv;
                    }

                    cdouble m_7950_2100_L(cdouble pp) {
                        cdouble
                                uv = 0.387,
                                a = 1.47,
                                b = 13.00,
                                c = 15.15,
                                d = 12.30;

                        return a / (pp + b) - c / (pow(pp + d, 2)) + uv;
                    }

                    cdouble m_7950_1500_L(cdouble pp) {
                        cdouble
                                uv = 0.401,
                                a = 1.47,
                                b = 12.00,
                                c = 15.15,
                                d = 11.30;

                        return a / (pp + b) - c / (pow(pp + d, 2)) + uv;
                    }

                    cdouble m_7950_0855_L(cdouble pp) {
                        cdouble
                                uv = 0.415,
                                a = 1.47,
                                b = 10.80,
                                c = 15.15,
                                d = 10.00;

                        return a / (pp + b) - c / (pow(pp + d, 2)) + uv;
                    }

                    cdouble m_7950_0500_L(cdouble pp) {
                        cdouble
                                uv = 0.424,
                                a = 1.47,
                                b = 10.30,
                                c = 15.15,
                                d = 9.60;

                        return a / (pp + b) - c / (pow(pp + d, 2)) + uv;
                    }

                    cdouble m_7950_0200_L(cdouble pp) {
                        cdouble
                                uv = 0.430,
                                a = 1.47,
                                b = 10.00,
                                c = 15.15,
                                d = 9.20;

                        return a / (pp + b) - c / (pow(pp + d, 2)) + uv;
                    }

                    cdouble m_7950_0037_L(cdouble pp) {
                        cdouble
                                uv = 0.434,
                                a = 1.47,
                                b = 9.80,
                                c = 15.15,
                                d = 9.00;

                        return a / (pp + b) - c / (pow(pp + d, 2)) + uv;
                    }


                }

                namespace axialvector {
                    // only bare propagators !

                    cdouble m_7950_7950_T(cdouble pp) {
                        cdouble mass = 3.221;

                        return 1. / (pp + mass * mass);
                    }

                    cdouble m_6500_6500_T(cdouble pp) {
                        cdouble mass = 2.860;

                        return 1. / (pp + mass * mass);
                    }

                    cdouble m_5000_5000_T(cdouble pp) {
                        cdouble mass = 2.474;

                        return 1. / (pp + mass * mass);
                    }

                    cdouble m_3500_3500_T(cdouble pp) {
                        cdouble mass = 2.070;

                        return 1. / (pp + mass * mass);
                    }

                    cdouble m_2100_2100_T(cdouble pp) {
                        cdouble mass = 1.663;

                        return 1. / (pp + mass * mass);
                    }

                    cdouble m_1500_1500_T(cdouble pp) {
                        cdouble mass = 1.474;

                        return 1. / (pp + mass * mass);
                    }

                    cdouble m_0855_0855_T(cdouble pp) {
                        cdouble mass = 1.252;

                        return 1. / (pp + mass * mass);
                    }

                    cdouble m_0500_0500_T(cdouble pp) {
                        cdouble mass = 1.115;

                        return 1. / (pp + mass * mass);
                    }

                    cdouble m_0200_0200_T(cdouble pp) {
                        cdouble mass = 0.983;

                        return 1. / (pp + mass * mass);
                    }

                    cdouble m_0037_0037_T(cdouble pp) {
                        cdouble mass = 0.899;

                        return 1. / (pp + mass * mass);
                    }

                    cdouble m_7950_7950_L(cdouble pp) {
                        return 0.;
                    }

                    cdouble m_6500_6500_L(cdouble pp) {
                        return 0.;
                    }

                    cdouble m_5000_5000_L(cdouble pp) {
                        return 0.;
                    }

                    cdouble m_3500_3500_L(cdouble pp) {
                        return 0.;
                    }

                    cdouble m_2100_2100_L(cdouble pp) {
                        return 0.;
                    }

                    cdouble m_1500_1500_L(cdouble pp) {
                        return 0.;
                    }

                    cdouble m_0855_0855_L(cdouble pp) {
                        return 0.;
                    }

                    cdouble m_0500_0500_L(cdouble pp) {
                        return 0.;
                    }

                    cdouble m_0200_0200_L(cdouble pp) {
                        return 0.;
                    }

                    cdouble m_0037_0037_L(cdouble pp) {
                        return 0.;
                    }
                }
            }

            namespace diquark {
                namespace scalar {
                    cdouble m_7950_7950(cdouble pp) {
                        cdouble
                                mass = 3.389,
                                uv = 0.194,
                                a = 17.34,
                                b = 27.47,
                                c = 0.015,
                                d = 0.198;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_6500_6500(cdouble pp) {
                        cdouble
                                mass = 3.026,
                                uv = 0.207,
                                a = 11.29,
                                b = 19.62,
                                c = 0.0210,
                                d = 0.253;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_5000_5000(cdouble pp) {
                        cdouble
                                mass = 2.628,
                                uv = 0.229,
                                a = 7.561,
                                b = 14.90,
                                c = 0.0258,
                                d = 0.328;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_3500_3500(cdouble pp) {
                        cdouble
                                mass = 2.201,
                                uv = 0.264,
                                a = 4.979,
                                b = 11.56,
                                c = 0.0267,
                                d = 0.494;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_2100_2100(cdouble pp) {
                        cdouble
                                mass = 1.754,
                                uv = 0.336,
                                a = 3.008,
                                b = 8.434,
                                c = 0.0254,
                                d = 0.851;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_1500_1500(cdouble pp) {
                        cdouble
                                mass = 1.537,
                                uv = 0.396,
                                a = 2.423,
                                b = 7.246,
                                c = 0.0208,
                                d = 1.586;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_0855_0855(cdouble pp) {
                        cdouble
                                mass = 1.270,
                                uv = 0.511,
                                a = 1.686,
                                b = 5.911,
                                c = 0.0134,
                                d = 0.0399;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_0500_0500(cdouble pp) {
                        cdouble
                                mass = 1.097,
                                uv = 0.629,
                                a = 1.013,
                                b = 4.448,
                                c = 0.0363,
                                d = 0.122;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_0200_0200(cdouble pp) {
                        cdouble
                                mass = 0.924,
                                uv = 0.818,
                                a = 0.541,
                                b = 3.426,
                                c = 0.106,
                                d = 0.180;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_0037_0037(cdouble pp) {
                        cdouble
                                mass = 0.810,
                                uv = 0.995,
                                a = 0.313,
                                b = 2.837,
                                c = 0.185,
                                d = 0.222;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_7950_6500(cdouble pp) {
                        cdouble
                                mass = 3.227,
                                uv = 0.211,
                                a = 17.23,
                                b = 27.28,
                                c = 0.0154,
                                d = 0.210;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_7950_5000(cdouble pp) {
                        cdouble
                                mass = 3.060,
                                uv = 0.228,
                                a = 17.23,
                                b = 27.28,
                                c = 0.0154,
                                d = 0.210;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_7950_3500(cdouble pp) {
                        cdouble
                                mass = 2.892,
                                uv = 0.244,
                                a = 17.23,
                                b = 27.28,
                                c = 0.0154,
                                d = 0.210;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_7950_2100(cdouble pp) {
                        cdouble
                                mass = 2.736,
                                uv = 0.260,
                                a = 17.23,
                                b = 27.28,
                                c = 0.0154,
                                d = 0.210;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_7950_1500(cdouble pp) {
                        cdouble
                                mass = 2.669,
                                uv = 0.266,
                                a = 17.23,
                                b = 27.28,
                                c = 0.0154,
                                d = 0.210;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_7950_0855(cdouble pp) {
                        cdouble
                                mass = 2.597,
                                uv = 0.274,
                                a = 17.23,
                                b = 27.28,
                                c = 0.0154,
                                d = 0.210;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_7950_0500(cdouble pp) {
                        cdouble
                                mass = 2.558,
                                uv = 0.277,
                                a = 17.23,
                                b = 27.28,
                                c = 0.0154,
                                d = 0.210;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_7950_0200(cdouble pp) {
                        cdouble
                                mass = 2.524,
                                uv = 0.281,
                                a = 17.23,
                                b = 27.28,
                                c = 0.0154,
                                d = 0.210;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_7950_0037(cdouble pp) {
                        cdouble
                                mass = 2.506,
                                uv = 0.283,
                                a = 17.23,
                                b = 27.28,
                                c = 0.0154,
                                d = 0.210;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                }

                namespace pseudoscalar {
                    // tbd
                }

                namespace vector {
                    // tbd
                }

                namespace axialvector {
                    cdouble m_7950_7950_T(cdouble pp) {
                        cdouble
                                mass = 3.430,
                                uv = 0.685,
                                a = 13.51,
                                b = 17.04,
                                c = 0.039,
                                d = 0.158;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_6500_6500_T(cdouble pp) {
                        cdouble
                                mass = 3.076,
                                uv = 0.755,
                                a = 9.444,
                                b = 12.45,
                                c = 0.0654,
                                d = 0.181;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_5000_5000_T(cdouble pp) {
                        cdouble
                                mass = 2.689,
                                uv = 0.894,
                                a = 8.555,
                                b = 11.39,
                                c = 0.0780,
                                d = 0.220;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_3500_3500_T(cdouble pp) {
                        cdouble
                                mass = 2.281,
                                uv = 1.049,
                                a = 6.840,
                                b = 9.407,
                                c = 0.0972,
                                d = 0.288;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_2100_2100_T(cdouble pp) {
                        cdouble
                                mass = 1.861,
                                uv = 1.266,
                                a = 5.361,
                                b = 7.657,
                                c = 0.107,
                                d = 0.413;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_1500_1500_T(cdouble pp) {
                        cdouble
                                mass = 1.658,
                                uv = 1.538,
                                a = 5.158,
                                b = 7.269,
                                c = 0.107,
                                d = 0.552;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_0855_0855_T(cdouble pp) {
                        cdouble
                                mass = 1.416,
                                uv = 1.877,
                                a = 4.426,
                                b = 6.297,
                                c = 0.0862,
                                d = 0.827;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_0500_0500_T(cdouble pp) {
                        cdouble
                                mass = 1.261,
                                uv = 2.245,
                                a = 3.701,
                                b = 5.348,
                                c = 0.0871,
                                d = 0.814;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_0200_0200_T(cdouble pp) {
                        cdouble
                                mass = 1.107,
                                uv = 2.836,
                                a = 5.245,
                                b = 6.797,
                                c = -0.162,
                                d = 0.263;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_0037_0037_T(cdouble pp) {
                        cdouble
                                mass = 1.007,
                                uv = 3.391,
                                a = 3.033,
                                b = 4.421,
                                c = 0.0528,
                                d = 0.0863;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_7950_6500_T(cdouble pp) {
                        cdouble
                                mass = 3.270,
                                uv = 0.698,
                                a = 13.48,
                                b = 16.98,
                                c = 0.0401,
                                d = 0.160;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_7950_5000_T(cdouble pp) {
                        cdouble
                                mass = 3.105,
                                uv = 0.712,
                                a = 13.48,
                                b = 16.98,
                                c = 0.0401,
                                d = 0.160;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_7950_3500_T(cdouble pp) {
                        cdouble
                                mass = 2.940,
                                uv = 0.728,
                                a = 13.48,
                                b = 16.98,
                                c = 0.0401,
                                d = 0.160;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_7950_2100_T(cdouble pp) {
                        cdouble
                                mass = 2.786,
                                uv = 0.742,
                                a = 13.48,
                                b = 16.98,
                                c = 0.0401,
                                d = 0.160;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_7950_1500_T(cdouble pp) {
                        cdouble
                                mass = 2.720,
                                uv = 0.750,
                                a = 13.48,
                                b = 16.98,
                                c = 0.0401,
                                d = 0.160;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_7950_0855_T(cdouble pp) {
                        cdouble
                                mass = 2.649,
                                uv = 0.756,
                                a = 13.48,
                                b = 16.98,
                                c = 0.0401,
                                d = 0.160;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_7950_0500_T(cdouble pp) {
                        cdouble
                                mass = 2.610,
                                uv = 0.760,
                                a = 13.48,
                                b = 16.98,
                                c = 0.0401,
                                d = 0.160;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_7950_0200_T(cdouble pp) {
                        cdouble
                                mass = 2.577,
                                uv = 0.763,
                                a = 13.48,
                                b = 16.98,
                                c = 0.0401,
                                d = 0.160;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_7950_0037_T(cdouble pp) {
                        cdouble
                                mass = 2.559,
                                uv = 0.764,
                                a = 13.48,
                                b = 16.98,
                                c = 0.0401,
                                d = 0.160;

                        return 1. / (pp + mass * mass) + uv * (pp + a) / (pp + b) + c * exp(-d * pp);
                    }

                    cdouble m_7950_7950_L(cdouble pp) {
                        cdouble
                                uv = 0.685,
                                a = 0.714,
                                b = 18.03,
                                c = 14.81,
                                d = 17.00;

                        return a / (pp + b) - c / (pow(pp + d, 2)) + uv;
                    }

                    cdouble m_6500_6500_L(cdouble pp) {
                        cdouble
                                uv = 0.756,
                                a = 1.951,
                                b = 21.48,
                                c = 42.08,
                                d = 20.22;

                        return a / (pp + b) - c / (pow(pp + d, 2)) + uv;
                    }

                    cdouble m_5000_5000_L(cdouble pp) {
                        cdouble
                                uv = 0.894,
                                a = 44.17,
                                b = 222.5,
                                c = 17.07,
                                d = 14.50;

                        return a / (pp + b) - c / (pow(pp + d, 2)) + uv;
                    }

                    cdouble m_3500_3500_L(cdouble pp) {
                        cdouble
                                uv = 1.049,
                                a = 1.720,
                                b = 11.69,
                                c = 21.55,
                                d = 11.04;

                        return a / (pp + b) - c / (pow(pp + d, 2)) + uv;
                    }

                    cdouble m_2100_2100_L(cdouble pp) {
                        cdouble
                                uv = 1.266,
                                a = 1.798,
                                b = 8.101,
                                c = 18.58,
                                d = 8.151;

                        return a / (pp + b) - c / (pow(pp + d, 2)) + uv;
                    }

                    cdouble m_1500_1500_L(cdouble pp) {
                        cdouble
                                uv = 1.539,
                                a = 2.035,
                                b = 7.314,
                                c = 18.11,
                                d = 7.007;

                        return a / (pp + b) - c / (pow(pp + d, 2)) + uv;
                    }

                    cdouble m_0855_0855_L(cdouble pp) {
                        cdouble
                                uv = 1.877,
                                a = 1.953,
                                b = 5.263,
                                c = 13.99,
                                d = 5.217;

                        return a / (pp + b) - c / (pow(pp + d, 2)) + uv;
                    }

                    cdouble m_0500_0500_L(cdouble pp) {
                        cdouble
                                uv = 2.245,
                                a = 2.090,
                                b = 4.547,
                                c = 12.94,
                                d = 4.406;

                        return a / (pp + b) - c / (pow(pp + d, 2)) + uv;
                    }

                    cdouble m_0200_0200_L(cdouble pp) {
                        cdouble
                                uv = 2.836,
                                a = 2.406,
                                b = 3.792,
                                c = 13.31,
                                d = 3.728;

                        return a / (pp + b) - c / (pow(pp + d, 2)) + uv;
                    }

                    cdouble m_0037_0037_L(cdouble pp) {
                        cdouble
                                uv = 3.391,
                                a = 2.692,
                                b = 8.388,
                                c = 4.437,
                                d = 2.449;

                        return a / (pp + b) - c / (pow(pp + d, 2)) + uv;
                    }

                    cdouble m_7950_6500_L(cdouble pp) {
                        cdouble
                                uv = 0.698,
                                a = 0.727,
                                b = 15.95,
                                c = 15.01,
                                d = 15.94;

                        return a / (pp + b) - c / (pow(pp + d, 2)) + uv;
                    }

                    cdouble m_7950_5000_L(cdouble pp) {
                        cdouble
                                uv = 0.712,
                                a = 0.727,
                                b = 13.95,
                                c = 15.01,
                                d = 14.94;

                        return a / (pp + b) - c / (pow(pp + d, 2)) + uv;
                    }

                    cdouble m_7950_3500_L(cdouble pp) {
                        cdouble
                                uv = 0.728,
                                a = 0.727,
                                b = 11.95,
                                c = 15.01,
                                d = 13.94;

                        return a / (pp + b) - c / (pow(pp + d, 2)) + uv;
                    }

                    cdouble m_7950_2100_L(cdouble pp) {
                        cdouble
                                uv = 0.742,
                                a = 0.727,
                                b = 10.55,
                                c = 15.01,
                                d = 13.04;

                        return a / (pp + b) - c / (pow(pp + d, 2)) + uv;
                    }

                    cdouble m_7950_1500_L(cdouble pp) {
                        cdouble
                                uv = 0.750,
                                a = 0.727,
                                b = 10.05,
                                c = 15.01,
                                d = 12.24;

                        return a / (pp + b) - c / (pow(pp + d, 2)) + uv;
                    }

                    cdouble m_7950_0855_L(cdouble pp) {
                        cdouble
                                uv = 0.756,
                                a = 0.727,
                                b = 9.75,
                                c = 15.01,
                                d = 11.84;

                        return a / (pp + b) - c / (pow(pp + d, 2)) + uv;
                    }

                    cdouble m_7950_0500_L(cdouble pp) {
                        cdouble
                                uv = 0.760,
                                a = 0.727,
                                b = 9.45,
                                c = 15.01,
                                d = 11.54;

                        return a / (pp + b) - c / (pow(pp + d, 2)) + uv;
                    }

                    cdouble m_7950_0200_L(cdouble pp) {
                        cdouble
                                uv = 0.763,
                                a = 0.727,
                                b = 9.25,
                                c = 15.01,
                                d = 11.34;

                        return a / (pp + b) - c / (pow(pp + d, 2)) + uv;
                    }

                    cdouble m_7950_0037_L(cdouble pp) {
                        cdouble
                                uv = 0.764,
                                a = 0.727,
                                b = 9.05,
                                c = 15.01,
                                d = 11.14;

                        return a / (pp + b) - c / (pow(pp + d, 2)) + uv;
                    }

                }
            }
        }

        namespace masses {
            namespace meson {
                namespace scalar {
                    double m_7950_7950() {
                        return 3.143;
                    }

                    double m_6500_6500() {
                        return 2.774;
                    }

                    double m_5000_5000() {
                        return 2.377;
                    }

                    double m_3500_3500() {
                        return 1.957;
                    }

                    double m_2100_2100() {
                        return 1.529;
                    }

                    double m_1500_1500() {
                        return 1.325;
                    }

                    double m_0855_0855() {
                        return 1.081;
                    }

                    double m_0500_0500() {
                        return 0.926;
                    }

                    double m_0200_0200() {
                        return 0.771;
                    }

                    double m_0037_0037() {
                        return 0.668;
                    }
                }

                namespace pseudoscalar {
                    double m_7950_7950() {
                        return 2.802;
                    }

                    double m_6500_6500() {
                        return 2.434;
                    }

                    double m_5000_5000() {
                        return 2.035;
                    }

                    double m_3500_3500() {
                        return 1.611;
                    }

                    double m_2100_2100() {
                        return 1.174;
                    }

                    double m_1500_1500() {
                        return 0.964;
                    }

                    double m_0855_0855() {
                        return 0.703;
                    }

                    double m_0500_0500() {
                        return 0.527;
                    }

                    double m_0200_0200() {
                        return 0.329;
                    }

                    double m_0037_0037() {
                        return 0.140;
                    }

                    double m_7950_6500() {
                        return 2.620;
                    }

                    double m_7950_5000() {
                        return 2.433;
                    }

                    double m_7950_3500() {
                        return 2.252;
                    }

                    double m_7950_2100() {
                        return 2.075;
                    }

                    double m_7950_1500() {
                        return 2.001;
                    }

                    double m_7950_0855() {
                        return 1.921;
                    }

                    double m_7950_0500() {
                        return 1.877;
                    }

                    double m_7950_0200() {
                        return 1.840;
                    }

                    double m_7950_0037() {
                        return 1.820;
                    }
                }

                namespace vector {
                    double m_7950_7950() {
                        return 2.991;
                    }

                    double m_6500_6500() {
                        return 2.637;
                    }

                    double m_5000_5000() {
                        return 2.260;
                    }

                    double m_3500_3500() {
                        return 1.865;
                    }

                    double m_2100_2100() {
                        return 1.469;
                    }

                    double m_1500_1500() {
                        return 1.286;
                    }

                    double m_0855_0855() {
                        return 1.070;
                    }

                    double m_0500_0500() {
                        return 0.938;
                    }

                    double m_0200_0200() {
                        return 0.813;
                    }

                    double m_0037_0037() {
                        return 0.735;
                    }

                    double m_7950_6500() {
                        return 2.819;
                    }

                    double m_7950_5000() {
                        return 2.654;
                    }

                    double m_7950_3500() {
                        return 2.481;
                    }

                    double m_7950_2100() {
                        return 2.321;
                    }

                    double m_7950_1500() {
                        return 2.252;
                    }

                    double m_7950_0855() {
                        return 2.179;
                    }

                    double m_7950_0500() {
                        return 2.138;
                    }

                    double m_7950_0200() {
                        return 2.104;
                    }

                    double m_7950_0037() {
                        return 2.085;
                    }
                }

                namespace axialvector {
                    double m_7950_7950() {
                        return 3.511;//3.221;
                    }

                    double m_6500_6500() {
                        return 2.860;
                    }

                    double m_5000_5000() {
                        return 2.474;
                    }

                    double m_3500_3500() {
                        return 2.070;
                    }

                    double m_2100_2100() {
                        return 1.663;
                    }

                    double m_1500_1500() {
                        return 1.474;
                    }

                    double m_0855_0855() {
                        return 1.252;
                    }

                    double m_0500_0500() {
                        return 1.115;
                    }

                    double m_0200_0200() {
                        return 0.983;
                    }

                    double m_0037_0037() {
                        return 0.899;
                    }
                }

            }

            namespace diquark {
                namespace scalar {
                    double m_7950_7950() {
                        return 3.389;
                    }

                    double m_6500_6500() {
                        return 3.025;
                    }

                    double m_5000_5000() {
                        return 2.627;
                    }

                    double m_3500_3500() {
                        return 2.199;
                    }

                    double m_2100_2100() {
                        return 1.754;
                    }

                    double m_1500_1500() {
                        return 1.536;
                    }

                    double m_0855_0855() {
                        return 1.270;
                    }

                    double m_0500_0500() {
                        return 1.098;
                    }

                    double m_0200_0200() {
                        return 0.924;
                    }

                    double m_0037_0037() {
                        return 0.810;
                    }

                    double m_7950_6500() {
                        return 3.227;
                    }

                    double m_7950_5000() {
                        return 3.060;
                    }

                    double m_7950_3500() {
                        return 2.892;
                    }

                    double m_7950_2100() {
                        return 2.736;
                    }

                    double m_7950_1500() {
                        return 2.669;
                    }

                    double m_7950_0855() {
                        return 2.597;
                    }

                    double m_7950_0500() {
                        return 2.558;
                    }

                    double m_7950_0200() {
                        return 2.524;
                    }

                    double m_7950_0037() {
                        return 2.506;
                    }
                }

                namespace pseudoscalar {
                    double m_7950_7950() {
                        return 0.;
                    }

                    double m_6500_6500() {
                        return 0.;
                    }

                    double m_5000_5000() {
                        return 0.;
                    }

                    double m_3500_3500() {
                        return 0.;
                    }

                    double m_2100_2100() {
                        return 0.;
                    }

                    double m_1500_1500() {
                        return 0.;
                    }

                    double m_0855_0855() {
                        return 0.;
                    }

                    double m_0500_0500() {
                        return 0.;
                    }

                    double m_0200_0200() {
                        return 0.;
                    }

                    double m_0037_0037() {
                        return 0.;
                    }
                }

                namespace vector {
                    double m_7950_7950() {
                        return 0.;
                    }

                    double m_6500_6500() {
                        return 0.;
                    }

                    double m_5000_5000() {
                        return 0.;
                    }

                    double m_3500_3500() {
                        return 0.;
                    }

                    double m_2100_2100() {
                        return 0.;
                    }

                    double m_1500_1500() {
                        return 0.;
                    }

                    double m_0855_0855() {
                        return 0.;
                    }

                    double m_0500_0500() {
                        return 0.;
                    }

                    double m_0200_0200() {
                        return 0.;
                    }

                    double m_0037_0037() {
                        return 0.;
                    }
                }

                namespace axialvector {
                    double m_7950_7950() {
                        return 3.430;
                    }

                    double m_6500_6500() {
                        return 3.074;
                    }

                    double m_5000_5000() {
                        return 2.689;
                    }

                    double m_3500_3500() {
                        return 2.278;
                    }

                    double m_2100_2100() {
                        return 1.859;
                    }

                    double m_1500_1500() {
                        return 1.660;
                    }

                    double m_0855_0855() {
                        return 1.415;
                    }

                    double m_0500_0500() {
                        return 1.261;
                    }

                    double m_0200_0200() {
                        return 1.107;
                    }

                    double m_0037_0037() {
                        return 1.008;
                    }

                    double m_7950_6500() {
                        return 3.270;
                    }

                    double m_7950_5000() {
                        return 3.105;
                    }

                    double m_7950_3500() {
                        return 2.940;
                    }

                    double m_7950_2100() {
                        return 2.786;
                    }

                    double m_7950_1500() {
                        return 2.720;
                    }

                    double m_7950_0855() {
                        return 2.649;
                    }

                    double m_7950_0500() {
                        return 2.610;
                    }

                    double m_7950_0200() {
                        return 2.577;
                    }

                    double m_7950_0037() {
                        return 2.559;
                    }
                }

            }

        }
    }
}
