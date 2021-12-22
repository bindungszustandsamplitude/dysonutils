
FCtr = 1.;

p1 = l_l+q_q/4.+Q_Q/16.-q_l-Q_q/4.+Q_l/2.;
p2 = l_l+q_q/4.+Q_Q/16.-q_l+Q_q/4.-Q_l/2.;

ampl01  = 0.;
ampl10  = 0.;

if(quark_2.getMass() == 0.7950){
if(quark_1.getMass() == 0.7950){
ampl01 = 
ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_7950(0,p1)*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,p2);
ampl10 = 
ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,p1)*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_7950(0,p2);
}
if(quark_1.getMass() == 0.6500){
ampl01  = 
ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_6500(0,p1)*ns_data_v2::amplitudes::meson::vector::fit::m_7950_6500(0,p2);
ampl10  = 
ns_data_v2::amplitudes::meson::vector::fit::m_7950_6500(0,p1)*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_6500(0,p2);
}
if(quark_1.getMass() == 0.5000){
ampl01  = 
ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_5000(0,p1)*ns_data_v2::amplitudes::meson::vector::fit::m_7950_5000(0,p2);
ampl10  = 
ns_data_v2::amplitudes::meson::vector::fit::m_7950_5000(0,p1)*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_5000(0,p2);
}
if(quark_1.getMass() == 0.3500){
ampl01  = 
ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_3500(0,p1)*ns_data_v2::amplitudes::meson::vector::fit::m_7950_3500(0,p2);
ampl10  = 
ns_data_v2::amplitudes::meson::vector::fit::m_7950_3500(0,p1)*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_3500(0,p2);
}
if(quark_1.getMass() == 0.2100){
ampl01  = 
ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_2100(0,p1)*ns_data_v2::amplitudes::meson::vector::fit::m_7950_2100(0,p2);
ampl10  = 
ns_data_v2::amplitudes::meson::vector::fit::m_7950_2100(0,p1)*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_2100(0,p2);
}
if(quark_1.getMass() == 0.1500){
ampl01  = 
ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_1500(0,p1)*ns_data_v2::amplitudes::meson::vector::fit::m_7950_1500(0,p2);
ampl10  = 
ns_data_v2::amplitudes::meson::vector::fit::m_7950_1500(0,p1)*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_1500(0,p2);
}
if(quark_1.getMass() == 0.0855){
ampl01  = 
ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0855(0,p1)*ns_data_v2::amplitudes::meson::vector::fit::m_7950_0855(0,p2);
ampl10  = 
ns_data_v2::amplitudes::meson::vector::fit::m_7950_0855(0,p1)*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0855(0,p2);
}
if(quark_1.getMass() == 0.0500){
ampl01  = 
ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0500(0,p1)*ns_data_v2::amplitudes::meson::vector::fit::m_7950_0500(0,p2);
ampl10  = 
ns_data_v2::amplitudes::meson::vector::fit::m_7950_0500(0,p1)*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0500(0,p2);
}
if(quark_1.getMass() == 0.0200){
ampl01  = 
ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0200(0,p1)*ns_data_v2::amplitudes::meson::vector::fit::m_7950_0200(0,p2);
ampl10  = 
ns_data_v2::amplitudes::meson::vector::fit::m_7950_0200(0,p1)*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0200(0,p2);
}
if(quark_1.getMass() == 0.0037){
ampl01  = 
ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0037(0,p1)*ns_data_v2::amplitudes::meson::vector::fit::m_7950_0037(0,p2);
ampl10  = 
ns_data_v2::amplitudes::meson::vector::fit::m_7950_0037(0,p1)*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0037(0,p2);
}
}

ampl01 *=
ns_data_v2::amplitudes::meson::axialvector::interpolation::m_7950_7950(0,p_p)*ns_data_v2::amplitudes::meson::axialvector::interpolation::m_7950_7950(0,l_l)/(Q_Q+std::pow(ns_data_v2::masses::meson::axialvector::m_7950_7950(),2.));
ampl10 *=
ns_data_v2::amplitudes::meson::axialvector::interpolation::m_7950_7950(0,p_p)*ns_data_v2::amplitudes::meson::axialvector::interpolation::m_7950_7950(0,l_l)/(Q_Q+std::pow(ns_data_v2::masses::meson::axialvector::m_7950_7950(),2.));

v.resize(10000,0.);


    v[1]=Q_Q;
    v[2]=Q_p;
    v[3]=pow(p_p,-1);
    v[4]=p_q;
    v[5]=Q_q;
    v[6]=q_q;
    v[7]=q_l;
    v[8]=p_l;
    v[9]=Q_l;
    v[10]=l_l;
   v[11]=ampl10*PM11m;
   v[12]=v[11]*PM12p;
   v[13]=ampl01*PM11p;
   v[14]=v[13]*PM12m;
   v[12]=v[12]+v[14];
   v[14]=sslm*ssll;
   v[15]=v[14]*v[12];
   v[11]=v[11]*PM12Lp;
   v[13]=v[13]*PM12Lm;
   v[11]=v[11]+v[13];
   v[13]=v[14]*v[11];
   v[14]=v[13]-v[15];
   v[14]=v[14]*v[3];
   v[16]=svll*v[11];
   v[17]=svll*v[12];
   v[18]=v[16]-v[17];
   v[19]=svlm*v[3];
   v[20]=v[19]*v[10];
   v[21]=v[20]*v[18];
   v[14]=v[14]+v[21];
   v[14]=v[14]*sslp;
   v[21]=svlp*svll*sslm;
   v[22]=v[21]*v[12];
   v[21]=v[21]*v[11];
   v[23]=v[21]-v[22];
   v[23]=v[23]*v[3];
   v[24]=v[23]*v[10];
   v[11]=ssll*svlp*v[11];
   v[12]=v[12]*ssll*svlp;
   v[25]=v[11]-v[12];
   v[20]=v[25]*v[20];
   v[14]=v[14]+v[24]-v[20];
   v[18]=v[18]*v[19];
   v[20]=sslp*v[18];
   v[24]=v[20]-v[23];
   v[26]=v[24]*v[9];
   v[27]=v[23]*v[7];
   v[14]=-v[26]-4.E+0*v[27]+2.E+0*v[14];
   v[14]=v[14]*v[4];
   v[19]=v[25]*v[19];
   v[25]=v[19]*v[8];
   v[26]=v[20]*v[8];
   v[25]=v[25]-v[26];
   v[27]=2.E+0*v[7];
   v[25]=v[25]*v[27];
   v[28]=v[23]*v[8];
   v[28]=v[28]+v[26];
   v[29]=v[28]*v[6];
   v[25]=v[25]+v[29];
   v[29]=v[7]-v[6];
   v[24]=v[2]*v[29]*v[24];
   v[14]=v[24]+v[14]+2.E+0*v[25];
   v[24]=v[2]*v[14];
   v[23]=v[23]*v[4];
   v[25]=v[2]*v[19];
   v[23]=v[25]-v[28]+2.E+0*v[23];
   v[28]=-v[2]*v[23];
   v[29]=svlm*v[10];
   v[30]=v[29]*v[17];
   v[30]=v[30]+v[15];
   v[30]=v[30]*sslp;
   v[31]=-v[27]+v[9]+v[10];
   v[31]=v[22]*v[31];
   v[32]=v[12]*svlm;
   v[33]=-v[10]*v[32];
   v[31]=v[30]+v[33]+v[31];
   v[33]=2.E+0*v[5];
   v[34]=-v[22]*v[33];
   v[28]=v[34]+2.E+0*v[31]+v[28];
   v[28]=v[5]*v[28];
   v[31]=sslp*svlm;
   v[34]=v[17]*v[31];
   v[35]=v[32]-v[34];
   v[35]=v[35]*v[27];
   v[36]=v[34]+v[22];
   v[36]=v[36]*v[6];
   v[37]=v[36]+v[35];
   v[37]=v[9]*v[37];
   v[24]=v[28]+2.E+0*v[37]+v[24];
   v[28]=v[34]-v[22];
   v[37]=v[28]*v[6];
   v[38]=v[7]*v[28];
   v[38]=-v[37]+v[38];
   v[39]=v[4]*v[25];
   v[40]=v[32]*v[5];
   v[38]=-v[40]+2.E+0*v[38]+v[39];
   v[38]=v[1]*v[38];
   v[24]=2.E+0*v[24]+v[38];
   v[16]=v[16]+v[17];
   v[17]=v[16]*v[29];
   v[38]=pow(v[8],2);
   v[38]=2.E+0*v[38];
   v[18]=-v[38]*v[18];
   v[13]=v[18]+v[17]+v[13]+3.E+0*v[15];
   v[13]=sslp*v[13];
   v[15]=v[21]+3.E+0*v[22];
   v[17]=v[10]*v[15];
   v[11]=v[11]+v[12];
   v[12]=-v[11]*v[29];
   v[18]=v[19]*v[38];
   v[12]=v[13]+v[18]+v[17]+v[12];
   v[13]=v[16]*v[31];
   v[16]=v[15]-v[13];
   v[17]=-v[5]+v[9];
   v[16]=v[16]*v[17];
   v[13]=-v[13]-v[15];
   v[13]=v[13]*v[27];
   v[15]=-v[4]*v[20];
   v[15]=v[26]+v[15];
   v[15]=2.E+0*v[15]-v[25];
   v[15]=v[2]*v[15];
   v[17]=v[4]*v[26];
   v[12]=v[15]+4.E+0*v[17]+v[13]+2.E+0*v[12]+v[16];
   v[12]=v[12]*v[33];
   v[13]=v[1]*v[5];
   v[11]=svlm*v[11]*v[13];
   v[11]=v[12]+v[11];
   v[12]=v[4]*v[14];
   v[14]=-v[4]*v[23];
   v[15]=v[34]*v[27];
   v[14]=-v[40]-v[36]+v[15]+v[14];
   v[14]=v[5]*v[14];
   v[15]=v[22]-v[32];
   v[15]=v[10]*v[15];
   v[15]=v[30]+v[15];
   v[16]=-v[9]*v[28];
   v[15]=2.E+0*v[15]+v[16];
   v[15]=v[6]*v[15];
   v[16]=v[37]+v[35];
   v[16]=v[16]*v[27];
   v[12]=v[14]+v[15]+v[16]+v[12];
   v[12]=v[12]*v[33];
   v[14]=pow(v[4],2)*v[19];
   v[15]=v[6]*v[32];
   v[14]=v[15]+v[14];
   v[13]=v[14]*v[13];
   v[12]=v[12]+v[13];


K41[SI_K41(ip,izp,0,iq,izq,0)] += prefactor_2l * wj * FCtr * v[12];
K41[SI_K41(ip,izp,0,iq,izq,1)] += prefactor_2l * wj * FCtr * v[24];
K41[SI_K41(ip,izp,0,iq,izq,2)] += prefactor_2l * wj * FCtr * v[11];
v.clear();
