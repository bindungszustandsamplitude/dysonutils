
FCtr = 8./3.;

p1 = p_p+q_q/4.+Q_Q/16.-p_q-Q_q/4.+Q_p/2.;
p2 = p_p+q_q/4.+Q_Q/16.-p_q+Q_q/4.-Q_p/2.;

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
   v[14]=PDQ1p*ampl01;
   v[15]=v[14]*v[11];
   v[16]=v[15]*PDQ2Lm;
   v[17]=PDQ1m*ampl10;
   v[18]=v[17]*v[11];
   v[19]=v[18]*PDQ2Lp;
   v[16]=v[16]+v[19];
   v[15]=v[15]*PDQ2m;
   v[18]=v[18]*PDQ2p;
   v[15]=v[15]+v[18];
   v[18]=v[16]-v[15];
   v[19]=v[18]*v[6];
   v[20]=v[19]*v[10];
   v[21]=2.E+0*v[8];
   v[19]=v[21]*v[19];
   v[22]=v[17]*PDQ2Lp;
   v[23]=v[14]*PDQ2Lm;
   v[22]=v[22]+v[23];
   v[17]=v[17]*PDQ2p;
   v[14]=v[14]*PDQ2m;
   v[14]=v[17]+v[14];
   v[17]=v[22]-v[14];
   v[23]=4.E+0*v[6];
   v[23]=v[23]*v[17];
   v[19]=v[20]-v[19]-v[23]+v[18];
   v[20]=v[9]*v[2];
   v[23]=-v[19]*v[20];
   v[24]=-v[19]*v[2];
   v[25]=v[24]*v[10];
   v[23]=v[23]-v[25];
   v[25]=4.E+0*v[3];
   v[23]=v[23]*v[25];
   v[26]=-v[8]*v[19];
   v[27]=v[5]+v[10];
   v[28]=v[26]*v[27];
   v[29]=v[26]*v[2];
   v[28]=-v[29]+4.E+0*v[28];
   v[30]=v[28]*v[2];
   v[23]=v[23]+v[30];
   v[30]=v[3]*v[23];
   v[31]=4.E+0*v[10];
   v[32]=-v[19]*v[31];
   v[32]=v[32]-v[24];
   v[33]=v[32]*v[7];
   v[34]=v[3]*v[2];
   v[35]=-v[34]*v[33];
   v[36]=v[21]-v[10]-v[12];
   v[15]=v[15]*v[36];
   v[14]=4.E+0*v[14]+v[15];
   v[15]=v[14]*v[31];
   v[36]=v[14]*v[5];
   v[37]=v[15]+v[36];
   v[37]=v[37]*v[2];
   v[38]=v[14]*v[10];
   v[39]=v[38]+v[36];
   v[39]=4.E+0*v[39];
   v[40]=v[39]*v[5];
   v[41]=v[40]-v[37];
   v[41]=v[2]*v[41];
   v[42]=4.E+0*v[14];
   v[42]=v[9]*pow(v[2],2)*v[42];
   v[30]=v[35]+v[30]+v[41]+v[42];
   v[30]=v[7]*v[30];
   v[35]=v[9]-v[10];
   v[35]=-v[25]*v[19]*v[35];
   v[28]=v[35]+v[28];
   v[28]=v[28]*v[3];
   v[35]=v[28]+v[40];
   v[40]=v[20]*v[14];
   v[37]=-4.E+0*v[40]+v[37]-v[35];
   v[37]=v[3]*v[37];
   v[41]=v[32]*v[3];
   v[41]=-v[41]+4.E+0*v[29];
   v[42]=-v[3]*v[41];
   v[43]=v[14]*v[2];
   v[39]=v[39]-v[43];
   v[44]=-v[2]*v[39];
   v[42]=v[44]+v[42];
   v[42]=v[7]*v[42];
   v[25]=v[25]*v[26];
   v[25]=v[25]+v[39];
   v[44]=v[4]*v[3];
   v[45]=v[25]*v[44];
   v[37]=v[45]+v[37]+v[42];
   v[37]=v[4]*v[37];
   v[30]=v[30]+v[37];
   v[37]=svll*svlm*svlp;
   v[30]=v[30]*v[37];
   v[42]=v[26]*v[34];
   v[34]=-v[34]*v[19];
   v[45]=-v[7]*v[34];
   v[46]=v[2]*v[36];
   v[42]=v[45]+v[46]+v[42];
   v[42]=v[7]*v[42];
   v[45]=v[26]*v[3];
   v[46]=v[45]+v[36];
   v[46]=v[46]*v[3];
   v[47]=v[44]*v[14];
   v[46]=v[46]-v[47];
   v[48]=pow(v[3],2);
   v[49]=-v[48]*v[19];
   v[50]=-v[43]+v[49];
   v[50]=v[7]*v[50];
   v[50]=v[50]-v[46];
   v[50]=v[4]*v[50];
   v[42]=v[42]+v[50];
   v[50]=sslm*svll;
   v[50]=4.E+0*v[50];
   v[42]=sslp*v[42]*v[50];
   v[30]=v[42]+v[30];
   v[30]=G*v[30];
   v[42]=2.E+0*v[2];
   v[51]=v[26]*v[42];
   v[52]=v[51]+v[34];
   v[53]=-v[3]*v[52];
   v[54]=2.E+0*v[36];
   v[55]=-v[54]-v[43];
   v[55]=v[2]*v[55];
   v[53]=v[55]+v[53];
   v[53]=v[7]*v[53];
   v[26]=2.E+0*v[26];
   v[19]=-v[19]*v[3];
   v[55]=v[26]+v[19];
   v[55]=v[55]*v[3];
   v[56]=v[55]+v[54];
   v[57]=v[43]+v[56];
   v[57]=v[57]*v[44];
   v[53]=v[53]+v[57];
   v[57]=svlp*sslm;
   v[53]=v[53]*v[57];
   v[34]=v[51]-v[34];
   v[51]=v[3]*v[34];
   v[58]=v[54]-v[43];
   v[58]=v[2]*v[58];
   v[51]=v[58]+v[51];
   v[51]=v[7]*v[51];
   v[26]=v[26]-v[19];
   v[26]=v[26]*v[3];
   v[54]=v[26]+v[54];
   v[58]=v[43]-v[54];
   v[58]=v[58]*v[44];
   v[51]=v[51]+v[58];
   v[51]=svlm*sslp*v[51];
   v[51]=v[53]+v[51];
   v[53]=ssll*G;
   v[53]=2.E+0*v[53];
   v[51]=v[51]*v[53];
   v[30]=v[30]+v[51];
   v[30]=v[1]*v[30];
   v[21]=-v[12]+v[21]-v[10];
   v[18]=-v[18]*v[21];
   v[17]=-4.E+0*v[17]+v[18];
   v[18]=v[17]*v[31];
   v[18]=v[18]+v[36];
   v[18]=v[2]*v[18];
   v[36]=4.E+0*v[20];
   v[36]=-v[17]*v[36];
   v[18]=v[36]+v[18]-v[35];
   v[18]=v[3]*v[18];
   v[32]=v[32]*v[48];
   v[16]=v[16]*v[21];
   v[16]=4.E+0*v[22]+v[16];
   v[21]=v[16]*v[2];
   v[22]=-v[31]+v[2];
   v[22]=v[22]*v[21];
   v[22]=v[22]+v[32];
   v[22]=v[7]*v[22];
   v[25]=v[3]*v[25];
   v[16]=v[8]*v[16];
   v[32]=v[16]*v[2];
   v[25]=-4.E+0*v[32]+v[25];
   v[25]=v[4]*v[25];
   v[27]=v[16]*v[27];
   v[27]=4.E+0*v[27]-v[32];
   v[27]=v[2]*v[27];
   v[18]=v[25]+v[22]+v[27]+v[18];
   v[22]=v[37]*v[4];
   v[18]=v[18]*v[22];
   v[21]=-v[21]+v[49];
   v[21]=v[7]*v[21];
   v[21]=v[21]+v[32]-v[46];
   v[25]=sslp*v[4];
   v[27]=v[50]*v[25];
   v[21]=v[21]*v[27];
   v[18]=v[21]+v[18];
   v[18]=G*v[18];
   v[17]=v[17]*v[2];
   v[21]=v[17]+v[56];
   v[21]=v[3]*v[21];
   v[16]=v[16]*v[42];
   v[21]=-v[16]+v[21];
   v[32]=v[57]*v[4];
   v[21]=v[21]*v[32];
   v[17]=v[17]-v[54];
   v[17]=v[3]*v[17];
   v[16]=v[16]+v[17];
   v[17]=v[25]*svlm;
   v[16]=v[16]*v[17];
   v[16]=v[21]+v[16];
   v[16]=v[16]*v[53];
   v[16]=v[18]+v[16];
   v[16]=v[1]*v[16];
   v[18]=-v[2]*v[33];
   v[18]=v[18]+v[23];
   v[18]=v[7]*v[18];
   v[21]=v[39]*v[20];
   v[18]=v[21]+v[18];
   v[18]=v[7]*v[18];
   v[21]=-v[7]*v[41];
   v[23]=-v[31]*v[43];
   v[21]=v[21]+v[23]-v[28];
   v[21]=v[7]*v[21];
   v[23]=v[7]*v[45];
   v[25]=v[3]*v[38];
   v[23]=v[25]+v[23];
   v[23]=v[4]*v[23];
   v[25]=v[3]*v[9];
   v[28]=-v[39]*v[25];
   v[21]=4.E+0*v[23]+v[28]+v[21];
   v[21]=v[4]*v[21];
   v[15]=v[15]-v[43];
   v[23]=-v[7]*v[2];
   v[23]=v[23]+v[44];
   v[15]=v[13]*v[15]*v[23];
   v[15]=v[15]+v[18]+v[21];
   v[15]=v[15]*v[22];
   v[18]=-v[7]*v[24];
   v[18]=v[29]+v[18];
   v[18]=v[7]*v[18];
   v[18]=v[40]+v[18];
   v[18]=v[7]*v[18];
   v[19]=v[7]*v[19];
   v[19]=-v[45]+v[19];
   v[19]=v[7]*v[19];
   v[21]=-v[14]*v[25];
   v[19]=v[21]+v[19];
   v[19]=v[4]*v[19];
   v[21]=-v[7]*v[43];
   v[21]=v[21]+v[47];
   v[21]=v[13]*v[21];
   v[18]=v[21]+v[18]+v[19];
   v[18]=v[18]*v[27];
   v[15]=v[18]+v[15];
   v[15]=G*v[15];
   v[18]=-v[7]*v[52];
   v[14]=2.E+0*v[14];
   v[19]=v[14]*v[20];
   v[18]=-v[19]+v[18];
   v[18]=v[7]*v[18];
   v[20]=-v[43]+v[55];
   v[20]=v[7]*v[20];
   v[14]=v[25]*v[14];
   v[20]=v[47]+v[14]+v[20];
   v[20]=v[4]*v[20];
   v[18]=v[18]+v[20];
   v[18]=v[18]*v[32];
   v[20]=v[7]*v[34];
   v[19]=v[19]+v[20];
   v[19]=v[7]*v[19];
   v[20]=-v[43]-v[26];
   v[20]=v[7]*v[20];
   v[14]=v[47]-v[14]+v[20];
   v[14]=v[4]*v[14];
   v[14]=v[19]+v[14];
   v[14]=v[14]*v[17];
   v[14]=v[18]+v[14];
   v[14]=v[14]*v[53];
   v[14]=v[15]+v[14];
   v[14]=v[1]*v[14];


K43[SI_K43(ip,izp,0,iq,izq,0)] += -quark_2.getZ2() * quark_2.getZ2() * prefactor_2l * wj * FCtr * v[14];
K43[SI_K43(ip,izp,0,iq,izq,1)] += -quark_2.getZ2() * quark_2.getZ2() * prefactor_2l * wj * FCtr * v[30];
v.clear();
