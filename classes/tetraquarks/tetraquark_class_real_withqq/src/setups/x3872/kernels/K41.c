
FCtr = 4./3.;

p1 = p_p+q_q/4.+Q_Q/16.-p_q-Q_q/4.+Q_p/2.;
p2 = p_p+q_q/4.+Q_Q/16.-p_q+Q_q/4.-Q_p/2.;

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

v.resize(1000,0.);


    v[1]=1./(-4.E+0*Q_Q*Q_p*p_p+4.E+0*pow(Q_p,3));
    v[2]=Q_Q;
    v[3]=Q_p;
    v[4]=Q_q;
    v[5]=Q_l;
    v[6]=pow(p_p,-1);
    v[7]=p_q;
    v[8]=p_l;
    v[9]=q_l;
    v[10]=l_l;
    v[11]=1./(p_p-2.E+0*p_l+l_l);
    v[12]=p_p;
    v[13]=q_q;
   v[14]=svlp*G;
   v[15]=ssll*v[14]*sslm;
   v[16]=sslp*G;
   v[17]=ssll*svlm*v[16];
   v[14]=v[14]*svll*svlm;
   v[18]=v[14]*v[10];
   v[19]=v[17]+v[15]+2.E+0*v[18];
   v[20]=v[12]*v[11];
   v[21]=v[19]*v[20];
   v[22]=v[11]*v[10];
   v[23]=v[8]*v[11];
   v[22]=-v[22]+4.E+0+2.E+0*v[23];
   v[24]=v[19]*v[22];
   v[21]=v[21]-v[24];
   v[25]=2.E+0*v[21];
   v[26]=2.E+0*v[14];
   v[26]=v[26]*v[23];
   v[27]=v[18]*v[11];
   v[26]=v[26]-v[27]+4.E+0*v[14];
   v[27]=v[14]*v[11];
   v[28]=v[27]*v[12];
   v[28]=v[26]-v[28];
   v[29]=-v[28]*v[9];
   v[30]=-v[28]*v[5];
   v[31]=-v[30]-v[25]+4.E+0*v[29];
   v[31]=v[31]*v[2];
   v[16]=sslm*svll*v[16];
   v[16]=v[16]+v[18];
   v[15]=-v[15]+v[17]+v[16];
   v[17]=v[15]*v[20];
   v[18]=v[15]*v[22];
   v[17]=v[30]+v[17]-v[18];
   v[32]=v[17]*v[5];
   v[31]=v[31]+4.E+0*v[32];
   v[24]=v[24]*v[6];
   v[32]=v[26]*v[6];
   v[27]=v[32]-v[27];
   v[32]=2.E+0*v[9];
   v[33]=v[32]*v[27];
   v[19]=v[19]*v[11];
   v[19]=-v[19]+v[24]-v[33];
   v[24]=2.E+0*v[3];
   v[19]=v[19]*v[24];
   v[33]=v[6]*v[8];
   v[34]=v[18]*v[33];
   v[33]=v[33]*v[26];
   v[14]=v[23]*v[14];
   v[33]=v[33]-v[14];
   v[35]=v[33]*v[5];
   v[15]=v[15]*v[23];
   v[23]=v[34]+v[35]-v[15];
   v[34]=v[33]*v[2];
   v[19]=v[19]+v[34]-4.E+0*v[23];
   v[23]=v[19]*v[3];
   v[22]=v[16]*v[22];
   v[20]=v[16]*v[20];
   v[20]=v[22]-v[20];
   v[30]=-v[20]+v[30];
   v[35]=-v[28]*v[2];
   v[30]=-v[35]+4.E+0*v[30];
   v[36]=4.E+0*v[33];
   v[37]=v[36]*v[3];
   v[37]=v[37]+v[30];
   v[37]=v[37]*v[4];
   v[37]=-v[37]+v[31]-v[23];
   v[37]=v[3]*v[37];
   v[22]=v[22]*v[6];
   v[16]=v[16]*v[11];
   v[16]=v[16]-v[22];
   v[22]=v[27]*v[2];
   v[16]=v[22]+4.E+0*v[16];
   v[22]=v[16]*v[3];
   v[22]=v[22]+4.E+0*v[34];
   v[27]=v[22]*v[3];
   v[30]=v[30]*v[2];
   v[27]=v[27]+v[30];
   v[27]=v[27]*v[7];
   v[27]=v[27]+v[37];
   v[27]=v[27]*v[4];
   v[30]=v[31]*v[2];
   v[31]=-v[2]*v[19];
   v[34]=v[31]*v[3];
   v[38]=v[16]*v[2];
   v[39]=v[7]*v[3];
   v[40]=v[39]*v[38];
   v[34]=v[34]+v[40];
   v[30]=v[30]+v[34];
   v[30]=v[30]*v[7];
   v[27]=v[27]-v[30];
   v[30]=PM12m*v[27];
   v[36]=v[36]*v[4];
   v[19]=v[36]+v[19];
   v[40]=pow(v[3],2);
   v[19]=v[19]*v[40];
   v[41]=v[22]*v[39];
   v[19]=v[19]-v[41];
   v[19]=v[19]*v[4];
   v[34]=v[34]*v[7];
   v[19]=v[19]+v[34];
   v[34]=PM12Lm*v[19];
   v[30]=v[34]+v[30];
   v[34]=v[1]*PM11p;
   v[30]=v[34]*ampl01*v[30];
   v[27]=PM12p*v[27];
   v[19]=PM12Lp*v[19];
   v[19]=v[27]+v[19];
   v[27]=ampl10*PM11m*v[1];
   v[19]=v[19]*v[27];
   v[19]=v[30]+v[19];
   v[30]=v[28]*v[32];
   v[30]=v[30]+v[21];
   v[32]=2.E+0*v[2];
   v[30]=v[30]*v[32];
   v[30]=v[30]+v[23];
   v[30]=v[30]*v[3];
   v[18]=v[18]*v[8];
   v[15]=v[15]*v[12];
   v[26]=v[26]*v[8];
   v[14]=v[14]*v[12];
   v[14]=v[26]-v[14];
   v[26]=v[14]*v[5];
   v[15]=v[26]+v[18]-v[15];
   v[14]=v[14]*v[2];
   v[15]=-v[14]+4.E+0*v[15];
   v[15]=v[15]*v[2];
   v[18]=v[35]+4.E+0*v[20];
   v[18]=v[18]*v[2];
   v[16]=v[16]*v[40];
   v[18]=v[18]+v[16];
   v[18]=v[18]*v[7];
   v[26]=v[40]*v[33];
   v[14]=v[26]-v[14];
   v[26]=4.E+0*v[4];
   v[14]=v[14]*v[26];
   v[14]=-v[14]-v[15]+v[18]-v[30];
   v[15]=-PM12Lm*v[14];
   v[16]=v[16]*v[7];
   v[16]=v[16]+v[37];
   v[18]=PM12m*v[16];
   v[15]=v[15]+v[18];
   v[18]=v[34]*ampl01*v[4];
   v[15]=v[15]*v[18];
   v[16]=PM12p*v[16];
   v[14]=-PM12Lp*v[14];
   v[14]=v[16]+v[14];
   v[16]=v[27]*v[4];
   v[14]=v[14]*v[16];
   v[14]=v[15]+v[14];
   v[15]=v[22]*v[7];
   v[15]=v[15]-v[23];
   v[22]=v[15]*v[7];
   v[23]=v[36]*v[39];
   v[22]=v[23]-v[22];
   v[22]=v[22]*v[4];
   v[23]=v[7]*v[38];
   v[23]=v[31]+v[23];
   v[26]=v[23]*pow(v[7],2);
   v[22]=v[22]+v[26];
   v[26]=PM12Lm*v[22];
   v[25]=v[25]*v[2];
   v[15]=v[25]+v[15];
   v[15]=v[15]*v[7];
   v[17]=v[17]*v[9];
   v[20]=v[20]*v[13];
   v[17]=v[20]+v[17];
   v[20]=v[28]*v[13];
   v[20]=v[20]+v[29];
   v[20]=v[20]*v[2];
   v[17]=-v[20]+4.E+0*v[17];
   v[20]=v[17]*v[3];
   v[21]=v[21]*v[3];
   v[24]=v[7]*v[33]*v[24];
   v[21]=v[24]+v[21];
   v[24]=2.E+0*v[4];
   v[21]=v[21]*v[24];
   v[15]=-v[21]+v[15]+v[20];
   v[15]=v[15]*v[4];
   v[20]=v[23]*v[7];
   v[17]=v[17]*v[2];
   v[17]=v[17]+v[20];
   v[17]=v[17]*v[7];
   v[15]=v[15]-v[17];
   v[17]=PM12m*v[15];
   v[17]=v[26]+v[17];
   v[17]=v[17]*v[18];
   v[15]=PM12p*v[15];
   v[18]=PM12Lp*v[22];
   v[15]=v[15]+v[18];
   v[15]=v[15]*v[16];
   v[15]=v[17]+v[15];


K41[SI_K41(ip,izp,0,iq,izq,0)] += -quark_2.getZ2() * quark_2.getZ2() * prefactor_2l * wj * FCtr * v[15];
K41[SI_K41(ip,izp,0,iq,izq,1)] += -quark_2.getZ2() * quark_2.getZ2() * prefactor_2l * wj * FCtr * v[19];
K41[SI_K41(ip,izp,0,iq,izq,2)] += -quark_2.getZ2() * quark_2.getZ2() * prefactor_2l * wj * FCtr * v[14];
v.clear();
