
FCtr = 1.;

p1 = l_l+q_q/4.+Q_Q/16.-q_l-Q_q/4.+Q_l/2.;
p2 = l_l+q_q/4.+Q_Q/16.-q_l+Q_q/4.-Q_l/2.;

ampl01  = 0.;
ampl10  = 0.;

if(quark_2.getMass() == 0.7950){
if(quark_1.getMass() == 0.7950){
ampl01 = 
ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_7950(0,p1)*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_7950(0,p2);
ampl10 = 
ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_7950(0,p1)*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_7950(0,p2);
}
if(quark_1.getMass() == 0.6500){
ampl01  = 
ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_6500(0,p1)*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_6500(0,p2);
ampl10  = 
ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_6500(0,p1)*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_6500(0,p2);
}
if(quark_1.getMass() == 0.5000){
ampl01  = 
ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_5000(0,p1)*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_5000(0,p2);
ampl10  = 
ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_5000(0,p1)*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_5000(0,p2);
}
if(quark_1.getMass() == 0.3500){
ampl01  = 
ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_3500(0,p1)*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_3500(0,p2);
ampl10  = 
ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_3500(0,p1)*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_3500(0,p2);
}
if(quark_1.getMass() == 0.2100){
ampl01  = 
ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_2100(0,p1)*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_2100(0,p2);
ampl10  = 
ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_2100(0,p1)*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_2100(0,p2);
}
if(quark_1.getMass() == 0.1500){
ampl01  = 
ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_1500(0,p1)*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_1500(0,p2);
ampl10  = 
ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_1500(0,p1)*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_1500(0,p2);
}
if(quark_1.getMass() == 0.0855){
ampl01  = 
ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_0855(0,p1)*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_0855(0,p2);
ampl10  = 
ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_0855(0,p1)*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_0855(0,p2);
}
if(quark_1.getMass() == 0.0500){
ampl01  = 
ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_0500(0,p1)*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_0500(0,p2);
ampl10  = 
ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_0500(0,p1)*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_0500(0,p2);
}
if(quark_1.getMass() == 0.0200){
ampl01  = 
ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_0200(0,p1)*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_0200(0,p2);
ampl10  = 
ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_0200(0,p1)*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_0200(0,p2);
}
if(quark_1.getMass() == 0.0037){
ampl01  = 
ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_0037(0,p1)*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_0037(0,p2);
ampl10  = 
ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_0037(0,p1)*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_0037(0,p2);
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
   v[11]=PDQ1m*ampl10;
   v[12]=v[11]*PDQ2p;
   v[13]=PDQ1p*ampl01;
   v[14]=v[13]*PDQ2m;
   v[15]=v[14]+v[12];
   v[15]=sslp*v[15];
   v[11]=v[11]*PDQ2Lp;
   v[13]=v[13]*PDQ2Lm;
   v[11]=v[11]+v[13];
   v[13]=v[11]*sslp;
   v[16]=v[13]-v[15];
   v[17]=svlm*svll;
   v[18]=v[16]*v[17];
   v[19]=v[11]-v[14];
   v[19]=v[19]*svlp;
   v[12]=v[12]*svlp;
   v[19]=v[19]-v[12];
   v[20]=sslm*svll;
   v[21]=v[19]*v[20];
   v[22]=v[21]-v[18];
   v[23]=v[22]*v[2];
   v[24]=v[21]+v[18];
   v[24]=v[24]*v[8];
   v[25]=v[23]+2.E+0*v[24];
   v[25]=v[25]*v[6];
   v[26]=v[17]*v[7];
   v[27]=v[16]*v[26];
   v[28]=ssll*svlm;
   v[29]=v[19]*v[28];
   v[30]=v[29]*v[7];
   v[27]=v[27]-v[30];
   v[27]=v[27]*v[8];
   v[23]=v[23]*v[7];
   v[23]=-v[25]+v[23]+4.E+0*v[27];
   v[23]=v[23]*v[3];
   v[25]=-v[2]*v[23];
   v[27]=v[15]*v[17];
   v[30]=v[14]*svlp;
   v[30]=v[30]+v[12];
   v[31]=v[30]*v[20];
   v[32]=v[27]-v[31];
   v[33]=v[32]*v[1];
   v[34]=v[27]+v[31];
   v[35]=2.E+0*v[9];
   v[36]=v[34]*v[35];
   v[36]=-v[33]+v[36];
   v[36]=v[6]*v[36];
   v[33]=v[7]*v[33];
   v[26]=v[26]*v[15];
   v[37]=v[30]*v[28];
   v[38]=v[7]*v[37];
   v[38]=-v[26]+v[38];
   v[39]=4.E+0*v[9];
   v[38]=v[38]*v[39];
   v[25]=v[25]+v[36]+v[33]+v[38];
   v[33]=v[34]-v[37];
   v[36]=4.E+0*v[10];
   v[33]=v[33]*v[36];
   v[38]=8.E+0*v[7];
   v[39]=v[39]-v[38]-4.E+0*v[5];
   v[31]=v[31]*v[39];
   v[39]=v[1]*svlm;
   v[30]=v[39]*v[30];
   v[40]=4.E+0*sslm;
   v[41]=v[40]*v[15];
   v[42]=v[41]-v[30];
   v[42]=ssll*v[42];
   v[43]=v[2]*v[29];
   v[24]=v[24]-v[43];
   v[44]=2.E+0*v[3];
   v[45]=v[2]*v[24]*v[44];
   v[31]=v[45]+v[33]+v[42]+v[31];
   v[31]=v[5]*v[31];
   v[42]=v[28]-v[20];
   v[42]=v[42]*v[19];
   v[42]=v[42]-v[18];
   v[42]=v[42]*v[36];
   v[16]=v[16]*v[40];
   v[45]=v[19]*v[39];
   v[16]=v[16]+v[45];
   v[16]=v[16]*ssll;
   v[22]=v[22]*v[35];
   v[21]=v[21]*v[38];
   v[16]=v[42]-v[16]-v[22]+v[21];
   v[16]=v[16]*v[3];
   v[21]=4.E+0*v[20];
   v[22]=v[5]*v[3];
   v[19]=v[22]*v[19]*v[21];
   v[16]=v[16]+v[19];
   v[16]=v[16]*v[4];
   v[19]=-v[2]*v[16];
   v[19]=v[19]+2.E+0*v[25]+v[31];
   v[21]=-v[18]+v[29];
   v[21]=v[21]*pow(v[8],2);
   v[25]=v[8]*v[18];
   v[25]=2.E+0*v[25];
   v[29]=v[25]-v[43];
   v[29]=v[2]*v[29];
   v[21]=4.E+0*v[21]+v[29];
   v[21]=v[21]*v[44];
   v[29]=v[13]+v[15];
   v[17]=v[29]*v[17];
   v[29]=v[11]+3.E+0*v[14];
   v[29]=v[29]*svlp;
   v[29]=v[29]+3.E+0*v[12];
   v[20]=v[29]*v[20];
   v[29]=v[20]-v[17];
   v[31]=2.E+0*v[5];
   v[38]=-v[31]+v[35];
   v[29]=v[29]*v[38];
   v[17]=v[20]+v[17];
   v[20]=4.E+0*v[7];
   v[38]=-v[17]*v[20];
   v[13]=v[13]+3.E+0*v[15];
   v[13]=v[13]*v[40];
   v[11]=v[11]+v[14];
   v[11]=v[11]*svlp;
   v[11]=v[11]+v[12];
   v[12]=v[11]*v[39];
   v[12]=v[13]+v[12];
   v[12]=ssll*v[12];
   v[11]=-v[11]*v[28];
   v[11]=v[11]+v[17];
   v[11]=v[11]*v[36];
   v[11]=v[21]+v[11]+v[38]+v[12]+v[29];
   v[11]=v[5]*v[11];
   v[12]=-v[2]*v[18];
   v[12]=v[25]+v[12];
   v[12]=v[4]*v[12]*v[22];
   v[11]=v[11]+4.E+0*v[12];
   v[12]=v[24]*v[22];
   v[12]=-v[23]+v[12];
   v[12]=v[12]*v[31];
   v[13]=-v[5]*v[16];
   v[12]=v[12]+v[13];
   v[12]=v[4]*v[12];
   v[13]=-v[35]+v[20];
   v[13]=v[32]*v[13];
   v[14]=v[41]+v[30];
   v[14]=ssll*v[14];
   v[13]=v[33]+v[14]+v[13];
   v[13]=v[6]*v[13];
   v[14]=-v[6]*v[34];
   v[15]=-v[5]*v[37];
   v[14]=v[15]+2.E+0*v[26]+v[14];
   v[14]=v[14]*v[31];
   v[15]=-v[27]+v[37];
   v[15]=v[15]*pow(v[7],2);
   v[13]=v[14]+8.E+0*v[15]+v[13];
   v[13]=v[5]*v[13];
   v[12]=v[13]+v[12];


K43[SI_K43(ip,izp,0,iq,izq,0)] += prefactor_2l * wj * FCtr * v[12];
K43[SI_K43(ip,izp,0,iq,izq,1)] += prefactor_2l * wj * FCtr * v[19];
v.clear();
