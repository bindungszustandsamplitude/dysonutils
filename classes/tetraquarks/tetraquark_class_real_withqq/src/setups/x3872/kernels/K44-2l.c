

p1l = -p_l - Q_l/4. + l_l/4. + Q_p/2. + p_p + Q_Q/16.;
p1r = -q_l - Q_l/4. + l_l/4. + Q_q/2. + q_q + Q_Q/16.;
p2l = -p_l + Q_l/4. + l_l/4. - Q_p/2. + p_p + Q_Q/16.;
p2r = -q_l + Q_l/4. + l_l/4. - Q_q/2. + q_q + Q_Q/16.;

ampl01  = 0.;
ampl10  = 0.;

if(quark_2.getMass() == 0.7950){
if(quark_1.getMass() == 0.7950){
ampl01M = 3.0*0.5
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_7950(0,p1l)*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_7950(0,p1r)
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,p2l)*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,p2r);
ampl10M = 3.0*0.5
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,p1l)*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,p1r)
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_7950(0,p2l)*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_7950(0,p2r);
ampl01D = 6.0*0.5
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_7950(0,p1l)*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_7950(0,p1r)
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_7950(0,p2l)*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_7950(0,p2r);
ampl10D = 6.0*0.5
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_7950(0,p1l)*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_7950(0,p1r)
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_7950(0,p2l)*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_7950(0,p2r);
}
if(quark_1.getMass() == 0.6500){
ampl01M  = 3.0*0.5
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_6500(0,p1l)*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_6500(0,p1r)
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_6500(0,p2l)*ns_data_v2::amplitudes::meson::vector::fit::m_7950_6500(0,p2r);
ampl10M  = 3.0*0.5
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_6500(0,p1l)*ns_data_v2::amplitudes::meson::vector::fit::m_7950_6500(0,p1r)
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_6500(0,p2l)*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_6500(0,p2r);
ampl01D  = 6.0*0.5
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_6500(0,p1l)*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_6500(0,p1r)
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_6500(0,p2l)*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_6500(0,p2r);
ampl10D  = 6.0*0.5
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_6500(0,p1l)*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_6500(0,p1r)
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_6500(0,p2l)*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_6500(0,p2r);
}
if(quark_1.getMass() == 0.5000){
ampl01M  = 3.0*0.5
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_5000(0,p1l)*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_5000(0,p1r)
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_5000(0,p2l)*ns_data_v2::amplitudes::meson::vector::fit::m_7950_5000(0,p2r);
ampl10M  = 3.0*0.5
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_5000(0,p1l)*ns_data_v2::amplitudes::meson::vector::fit::m_7950_5000(0,p1r)
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_5000(0,p2l)*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_5000(0,p2r);
ampl01D  = 6.0*0.5
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_5000(0,p1l)*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_5000(0,p1r)
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_5000(0,p2l)*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_5000(0,p2r);
ampl10D  = 6.0*0.5
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_5000(0,p1l)*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_5000(0,p1r)
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_5000(0,p2l)*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_5000(0,p2r);
}
if(quark_1.getMass() == 0.3500){
ampl01M  = 3.0*0.5
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_3500(0,p1l)*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_3500(0,p1r)
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_3500(0,p2l)*ns_data_v2::amplitudes::meson::vector::fit::m_7950_3500(0,p2r);
ampl10M  = 3.0*0.5
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_3500(0,p1l)*ns_data_v2::amplitudes::meson::vector::fit::m_7950_3500(0,p1r)
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_3500(0,p2l)*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_3500(0,p2r);
ampl01D  = 6.0*0.5
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_3500(0,p1l)*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_3500(0,p1r)
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_3500(0,p2l)*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_3500(0,p2r);
ampl10D  = 6.0*0.5
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_3500(0,p1l)*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_3500(0,p1r)
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_3500(0,p2l)*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_3500(0,p2r);
}
if(quark_1.getMass() == 0.2100){
ampl01M  = 3.0*0.5
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_2100(0,p1l)*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_2100(0,p1r)
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_2100(0,p2l)*ns_data_v2::amplitudes::meson::vector::fit::m_7950_2100(0,p2r);
ampl10M  = 3.0*0.5
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_2100(0,p1l)*ns_data_v2::amplitudes::meson::vector::fit::m_7950_2100(0,p1r)
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_2100(0,p2l)*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_2100(0,p2r);
ampl01D  = 6.0*0.5
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_2100(0,p1l)*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_2100(0,p1r)
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_2100(0,p2l)*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_2100(0,p2r);
ampl10D  = 6.0*0.5
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_2100(0,p1l)*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_2100(0,p1r)
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_2100(0,p2l)*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_2100(0,p2r);
}
if(quark_1.getMass() == 0.1500){
ampl01M  = 3.0*0.5
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_1500(0,p1l)*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_1500(0,p1r)
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_1500(0,p2l)*ns_data_v2::amplitudes::meson::vector::fit::m_7950_1500(0,p2r);
ampl10M  = 3.0*0.5
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_1500(0,p1l)*ns_data_v2::amplitudes::meson::vector::fit::m_7950_1500(0,p1r)
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_1500(0,p2l)*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_1500(0,p2r);
ampl01D  = 6.0*0.5
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_1500(0,p1l)*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_1500(0,p1r)
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_1500(0,p2l)*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_1500(0,p2r);
ampl10D  = 6.0*0.5
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_1500(0,p1l)*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_1500(0,p1r)
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_1500(0,p2l)*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_1500(0,p2r);
}
if(quark_1.getMass() == 0.0855){
ampl01M  = 3.0*0.5
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0855(0,p1l)*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0855(0,p1r)
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_0855(0,p2l)*ns_data_v2::amplitudes::meson::vector::fit::m_7950_0855(0,p2r);
ampl10M  = 3.0*0.5
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_0855(0,p1l)*ns_data_v2::amplitudes::meson::vector::fit::m_7950_0855(0,p1r)
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0855(0,p2l)*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0855(0,p2r);
ampl01D  = 6.0*0.5
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_0855(0,p1l)*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_0855(0,p1r)
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_0855(0,p2l)*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_0855(0,p2r);
ampl10D  = 6.0*0.5
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_0855(0,p1l)*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_0855(0,p1r)
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_0855(0,p2l)*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_0855(0,p2r);
}
if(quark_1.getMass() == 0.0500){
ampl01M  = 3.0*0.5
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0500(0,p1l)*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0500(0,p1r)
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_0500(0,p2l)*ns_data_v2::amplitudes::meson::vector::fit::m_7950_0500(0,p2r);
ampl10M  = 3.0*0.5
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_0500(0,p1l)*ns_data_v2::amplitudes::meson::vector::fit::m_7950_0500(0,p1r)
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0500(0,p2l)*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0500(0,p2r);
ampl01D  = 6.0*0.5
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_0500(0,p1l)*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_0500(0,p1r)
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_0500(0,p2l)*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_0500(0,p2r);
ampl10D  = 6.0*0.5
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_0500(0,p1l)*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_0500(0,p1r)
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_0500(0,p2l)*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_0500(0,p2r);
}
if(quark_1.getMass() == 0.0200){
ampl01M  = 3.0*0.5
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0200(0,p1l)*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0200(0,p1r)
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_0200(0,p2l)*ns_data_v2::amplitudes::meson::vector::fit::m_7950_0200(0,p2r);
ampl10M  = 3.0*0.5
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_0200(0,p1l)*ns_data_v2::amplitudes::meson::vector::fit::m_7950_0200(0,p1r)
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0200(0,p2l)*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0200(0,p2r);
ampl01D  = 6.0*0.5
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_0200(0,p1l)*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_0200(0,p1r)
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_0200(0,p2l)*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_0200(0,p2r);
ampl10D  = 6.0*0.5
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_0200(0,p1l)*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_0200(0,p1r)
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_0200(0,p2l)*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_0200(0,p2r);
}
if(quark_1.getMass() == 0.0037){
ampl01M  = 3.0*0.5
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0037(0,p1l)*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0037(0,p1r)
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_0037(0,p2l)*ns_data_v2::amplitudes::meson::vector::fit::m_7950_0037(0,p2r);
ampl10M  = 3.0*0.5
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_0037(0,p1l)*ns_data_v2::amplitudes::meson::vector::fit::m_7950_0037(0,p1r)
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0037(0,p2l)*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0037(0,p2r);
ampl01D  = 6.0*0.5
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_0037(0,p1l)*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_0037(0,p1r)
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_0037(0,p2l)*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_0037(0,p2r);
ampl10D  = 6.0*0.5
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_0037(0,p1l)*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_0037(0,p1r)
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_0037(0,p2l)*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_0037(0,p2r);
}
}

v.resize(100,0.);




K44[SI_K44(ip,izp,0,iq,izq,0)] += prefactor_2l * wj * 0.;
v.clear();
