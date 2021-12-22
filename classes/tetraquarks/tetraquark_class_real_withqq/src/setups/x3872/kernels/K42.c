
FCtr = 0.;

p1 = p_p+q_q/4.+Q_Q/16.-p_q-Q_q/4.+Q_p/2.;
p2 = p_p+q_q/4.+Q_Q/16.-p_q+Q_q/4.-Q_p/2.;


ampl  = 0.;

if(quark_2.getMass() == 0.7950){
if(quark_1.getMass() == 0.7950){
ampl =
ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,p1)*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,p2);
}
if(quark_1.getMass() == 0.6500){
ampl  =
ns_data_v2::amplitudes::meson::vector::fit::m_6500_6500(0,p1)*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,p2);
}
if(quark_1.getMass() == 0.5000){
ampl  =
ns_data_v2::amplitudes::meson::vector::fit::m_5000_5000(0,p1)*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,p2);
}
if(quark_1.getMass() == 0.3500){
ampl  =
ns_data_v2::amplitudes::meson::vector::fit::m_3500_3500(0,p1)*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,p2);
}
if(quark_1.getMass() == 0.2100){
ampl  =
ns_data_v2::amplitudes::meson::vector::fit::m_2100_2100(0,p1)*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,p2);
}
if(quark_1.getMass() == 0.1500){
ampl  =
ns_data_v2::amplitudes::meson::vector::fit::m_1500_1500(0,p1)*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,p2);
}
if(quark_1.getMass() == 0.0855){
ampl  =
ns_data_v2::amplitudes::meson::vector::fit::m_0855_0855(0,p1)*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,p2);
}
if(quark_1.getMass() == 0.0500){
ampl  =
ns_data_v2::amplitudes::meson::vector::fit::m_0500_0500(0,p1)*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,p2);
}
if(quark_1.getMass() == 0.0200){
ampl  =
ns_data_v2::amplitudes::meson::vector::fit::m_0200_0200(0,p1)*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,p2);
}
if(quark_1.getMass() == 0.0037){
ampl  =
ns_data_v2::amplitudes::meson::vector::fit::m_0037_0037(0,p1)*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,p2);
}
}

v.resize(100,0.);




K42[SI_K42(ip,izp,0,iq,izq,0)] += prefactor_2l * wj * FCtr * 0.;
K42[SI_K42(ip,izp,0,iq,izq,1)] += prefactor_2l * wj * FCtr * 0.;
v.clear();
