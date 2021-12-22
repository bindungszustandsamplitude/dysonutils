sv1 = sv1_q1;
ss1 = ss1_q1;
sv2 = sv2_q2;
ss2 = ss2_q2;
sv3 = sv3_q1;
ss3 = ss3_q1;
sv4 = sv4_q2;
ss4 = ss4_q2;

w.resize(10000,0.);

if(isud_q2){
    if(isud_q1){
        FCtr = 2.*6.;}
    else if(!isud_q1){
        FCtr = 4.*6.;}}

if(!isud_q2){
    if(isud_q1){
        FCtr = 4.*6.;}
    else if(!isud_q1){
        FCtr = 4.*6.;}}

if(quark_2.getMass() == 0.7950){
if(quark_1.getMass() == 0.0037){
ampl = (
ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0037(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_0037(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0037(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_0037(0,std::real(l_l+q_l+0.25*q_q)));
}
else
if(quark_1.getMass() == 0.0200){
ampl = (
ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0200(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_0200(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0200(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_0200(0,std::real(l_l+q_l+0.25*q_q)));
}
else
if(quark_1.getMass() == 0.0500){
ampl = (
ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0500(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_0500(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0500(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_0500(0,std::real(l_l+q_l+0.25*q_q)));
}
else
if(quark_1.getMass() == 0.0855){
ampl = (
ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0855(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_0855(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0855(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_0855(0,std::real(l_l+q_l+0.25*q_q)));
}
else
if(quark_1.getMass() == 0.1500){
ampl = (
ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_1500(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_1500(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_1500(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_1500(0,std::real(l_l+q_l+0.25*q_q)));
}
else
if(quark_1.getMass() == 0.2100){
ampl = (
ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_2100(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_2100(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_2100(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_2100(0,std::real(l_l+q_l+0.25*q_q)));
}
else
if(quark_1.getMass() == 0.3500){
ampl = (
ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_3500(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_3500(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_3500(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_3500(0,std::real(l_l+q_l+0.25*q_q)));
}
else
if(quark_1.getMass() == 0.5000){
ampl = (
ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_5000(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_5000(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_5000(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_5000(0,std::real(l_l+q_l+0.25*q_q)));
}
else
if(quark_1.getMass() == 0.6500){
ampl = (
ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_6500(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_6500(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_6500(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_6500(0,std::real(l_l+q_l+0.25*q_q)));
}
else
if(quark_1.getMass() == 0.7950){
ampl = (
ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_7950(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_7950(0,std::real(l_l+q_l+0.25*q_q)));
}
}



    w[1]=Q_Q;
    w[2]=p_p;
    w[3]=p_q;
    w[4]=p_l;
    w[5]=q_q;
    w[6]=q_l;
    w[7]=l_l;
    w[8]=Q_p;
    w[9]=Q_q;
    w[10]=Q_l;
   w[11]=4.E+0*w[7];
   w[12]=2.E+0*w[4];
   w[13]=w[12]+w[3];
   w[14]=w[7]+w[13];
   w[14]=w[14]*w[11];
   w[15]=w[6]+w[7];
   w[16]=2.5E-1*w[1];
   w[17]=-w[16]+4.E+0*w[15];
   w[18]=w[2]*w[17];
   w[19]=w[16]+w[8];
   w[11]=w[11]+4.E+0*w[4];
   w[20]=w[19]-w[11];
   w[21]=-w[5]*w[20];
   w[22]=w[10]+w[8]+2.E+0*w[3];
   w[22]=w[10]*w[22];
   w[23]=w[11]-w[8];
   w[23]=w[6]*w[23];
   w[24]=-5.E-1*w[3]-w[4]-w[15];
   w[24]=3.E+0*w[24]+3.125E-2*w[1];
   w[24]=w[1]*w[24];
   w[12]=-w[2]-w[12]+5.E-1*w[8]+w[10];
   w[12]=w[9]*w[12];
   w[12]=w[12]+w[21]+w[18]+5.E-1*w[24]+2.E+0*w[23]+w[22]+w[14];
   w[14]=sv3*sv4;
   w[12]=w[12]*w[14];
   w[18]=ss4*ss3;
   w[20]=-w[20]*w[18];
   w[12]=w[20]+w[12];
   w[12]=sv2*w[12];
   w[20]=w[16]-w[8];
   w[21]=2.E+0*w[10];
   w[22]=4.E+0*w[6];
   w[23]=w[21]-w[20]-w[11]-w[22];
   w[23]=ss4*w[23];
   w[24]=w[9]*ss4;
   w[23]=w[23]+w[24];
   w[23]=sv3*w[23];
   w[17]=ss3*w[17];
   w[25]=w[9]*ss3;
   w[17]=w[17]-w[25];
   w[17]=sv4*w[17];
   w[17]=w[17]+w[23];
   w[17]=ss2*w[17];
   w[12]=w[12]+w[17];
   w[12]=sv1*w[12];
   w[11]=w[11]+4.E+0*w[3];
   w[17]=-w[22]-w[21]-w[19]-w[11];
   w[17]=ss3*w[17];
   w[17]=w[17]-w[25];
   w[17]=sv4*w[17];
   w[13]=w[2]+w[15]+w[13];
   w[13]=-w[16]+4.E+0*w[13];
   w[13]=ss4*w[13];
   w[13]=w[13]+w[24];
   w[13]=sv3*w[13];
   w[13]=w[17]+w[13];
   w[13]=sv2*w[13];
   w[11]=4.E+0*w[5]+8.E+0*w[6]+w[11]-w[20];
   w[11]=w[11]*w[14];
   w[11]=4.E+0*w[18]+w[11];
   w[11]=ss2*w[11];
   w[11]=w[13]+w[11];
   w[11]=ss1*w[11];
   w[11]=w[11]+w[12];
   w[11]=PDQ1p*ampl*PDQ2m*w[11];


K13[SI_K13(ip,izp,0,iq,izq,0)] += wj * FCtr * w[11];
