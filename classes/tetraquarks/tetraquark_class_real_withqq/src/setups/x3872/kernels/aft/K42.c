
FCtr = 0.;

p1 = l_l+q_q/4.+Q_Q/16.-q_l-Q_q/4.+Q_l/2.;
p2 = l_l+q_q/4.+Q_Q/16.-q_l+Q_q/4.-Q_l/2.;


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

ampl *=
ns_data_v2::amplitudes::meson::axialvector::interpolation::m_7950_7950(0,p_p)*ns_data_v2::amplitudes::meson::axialvector::interpolation::m_7950_7950(0,l_l)/(Q_Q+std::pow(ns_data_v2::masses::meson::axialvector::m_7950_7950(),2.));

v.resize(10000,0.);


    v[1]=Q_Q;
    v[2]=Q_p;
    v[3]=pow(p_p,-1);
    v[4]=p_q;
    v[5]=p_l;
    v[6]=Q_q;
    v[7]=Q_l;
    v[8]=q_l;
    v[9]=l_l;
    v[10]=q_q;
   v[11]=PM21p*i_;
   v[12]=v[11]*PM22Lm;
   v[13]=PM21Lp*PM22m*i_;
   v[14]=v[12]+v[13];
   v[15]=v[11]*PM22m;
   v[16]=v[14]+v[15];
   v[17]=v[9]*svll;
   v[18]=v[16]*v[17];
   v[12]=v[12]-v[13];
   v[13]=svll*v[3];
   v[19]=v[13]*v[2];
   v[20]=v[12]*v[19];
   v[21]=2.E+0*v[5];
   v[22]=v[21]*v[20];
   v[22]=v[18]+v[22];
   v[23]=2.E+0*PM22m;
   v[11]=v[23]*v[11];
   v[11]=v[14]-v[11];
   v[23]=v[13]*v[5];
   v[24]=2.E+0*v[23];
   v[25]=v[11]*v[24];
   v[26]=v[25]-3.E+0*v[20];
   v[26]=v[4]*v[26];
   v[27]=v[7]*svll;
   v[28]=v[27]*v[12];
   v[29]=v[8]*svll;
   v[30]=2.E+0*v[29];
   v[31]=-v[14]*v[30];
   v[22]=-v[28]+v[31]+2.E+0*v[22]+v[26];
   v[22]=v[7]*v[22];
   v[26]=v[25]+v[20];
   v[31]=-v[9]+v[8];
   v[31]=v[2]*v[26]*v[31];
   v[22]=v[22]+v[31];
   v[31]=v[12]*v[17];
   v[32]=3.E+0*v[12];
   v[33]=v[13]*pow(v[5],2);
   v[32]=v[32]*v[33];
   v[31]=v[31]-v[32];
   v[32]=v[19]*v[5];
   v[34]=v[32]*v[11];
   v[31]=v[34]+2.E+0*v[31];
   v[34]=v[11]*v[19];
   v[35]=v[12]*v[23];
   v[35]=-v[34]+6.E+0*v[35];
   v[36]=v[4]*v[35];
   v[30]=v[30]*v[12];
   v[37]=-v[16]*v[27];
   v[36]=v[37]-v[30]+v[36]+v[31];
   v[36]=v[1]*v[36];
   v[33]=v[33]*v[11];
   v[17]=v[17]*v[15];
   v[17]=v[17]+v[33];
   v[33]=-v[5]*v[20];
   v[28]=v[28]-2.E+0*v[17]+v[33];
   v[33]=v[1]*svll*v[16];
   v[28]=2.E+0*v[28]+v[33];
   v[28]=v[6]*v[28];
   v[22]=v[28]+2.E+0*v[22]+v[36];
   v[22]=svlp*v[22];
   v[28]=v[2]*v[3];
   v[21]=v[21]*v[3];
   v[33]=v[28]-v[21];
   v[33]=v[33]*v[11];
   v[36]=v[2]*v[33];
   v[37]=2.E+0*v[7];
   v[38]=-v[1]+v[37];
   v[38]=v[16]*v[38];
   v[36]=v[36]+v[38];
   v[38]=2.E+0*sslp;
   v[39]=v[38]*ssll;
   v[36]=v[36]*v[39];
   v[22]=v[36]+v[22];
   v[22]=svlm*v[22];
   v[19]=-v[4]*v[19];
   v[19]=v[32]+v[19];
   v[19]=v[11]*v[19];
   v[32]=v[6]*svll;
   v[27]=v[32]-v[27];
   v[32]=v[16]*v[27];
   v[19]=v[32]+v[19];
   v[19]=v[19]*v[38];
   v[21]=v[28]+v[21];
   v[21]=v[21]*v[11];
   v[28]=-v[2]*v[21];
   v[32]=v[1]+v[37];
   v[32]=v[16]*v[32];
   v[28]=v[28]+v[32];
   v[32]=svlp*ssll;
   v[28]=v[28]*v[32];
   v[19]=v[19]+v[28];
   v[28]=2.E+0*sslm;
   v[19]=v[19]*v[28];
   v[19]=v[19]+v[22];
   v[22]=2.E+0*ampl;
   v[19]=v[19]*v[22];
   v[27]=v[14]*v[27];
   v[12]=v[24]*v[12];
   v[24]=v[12]-v[34];
   v[36]=2.E+0*v[4];
   v[24]=v[24]*v[36];
   v[24]=v[24]+v[27]+v[31];
   v[24]=v[6]*v[24];
   v[20]=v[25]-v[20];
   v[20]=v[4]*v[20];
   v[14]=v[14]*v[29];
   v[14]=-v[14]+v[18]+v[20];
   v[18]=v[2]*v[35];
   v[14]=v[18]+4.E+0*v[14];
   v[14]=v[8]*v[14];
   v[18]=v[11]*pow(v[2],2)*v[13];
   v[17]=-4.E+0*v[17]+v[18];
   v[17]=v[10]*v[17];
   v[18]=-v[36]*v[9]*v[26];
   v[12]=v[12]+v[34];
   v[12]=v[4]*v[12];
   v[12]=v[12]-v[30];
   v[12]=v[7]*v[12];
   v[20]=v[10]*svll;
   v[20]=v[20]-v[29];
   v[15]=v[1]*v[15]*v[20];
   v[12]=v[24]+v[15]+v[12]+v[17]+v[18]+v[14];
   v[12]=svlp*v[12];
   v[14]=v[4]*v[33];
   v[15]=2.E+0*v[8];
   v[17]=-v[6]+v[15];
   v[17]=v[16]*v[17];
   v[14]=v[14]+v[17];
   v[14]=v[14]*v[39];
   v[12]=v[14]+v[12];
   v[12]=svlm*v[12];
   v[14]=v[16]*v[20];
   v[13]=-v[4]*v[13];
   v[13]=v[23]+v[13];
   v[11]=v[4]*v[11]*v[13];
   v[11]=v[11]+v[14];
   v[11]=v[11]*v[38];
   v[13]=-v[4]*v[21];
   v[14]=v[6]+v[15];
   v[14]=v[16]*v[14];
   v[13]=v[13]+v[14];
   v[13]=v[13]*v[32];
   v[11]=v[11]+v[13];
   v[11]=v[28]*v[11];
   v[11]=v[11]+v[12];
   v[11]=v[22]*v[6]*v[11];


K42[SI_K42(ip,izp,0,iq,izq,0)] += prefactor_2l * wj * FCtr * v[11];
K42[SI_K42(ip,izp,0,iq,izq,1)] += prefactor_2l * wj * FCtr * v[19];
v.clear();
