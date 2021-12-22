
FCtr = 6.;

p1 = q_q+p_p/4.+Q_Q/16.-p_q-Q_p/4.+Q_q/2.;
p2 = q_q+p_p/4.+Q_Q/16.-p_q+Q_p/4.-Q_q/2.;

ampl  = 0.;
if(quark_2.getMass() == 0.7950){
if(quark_1.getMass() == 0.7950){
ampl  =
0.5*(
ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_7950(0,p1)*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_7950(0,p2)+
ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_7950(0,p1)*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_7950(0,p2));
}
if(quark_1.getMass() == 0.6500){
ampl  =
0.5*(
ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_6500(0,p1)*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_6500(0,p2)+
ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_6500(0,p1)*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_6500(0,p2));
}
if(quark_1.getMass() == 0.5000){
ampl  =
0.5*(
ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_5000(0,p1)*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_5000(0,p2)+
ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_5000(0,p1)*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_5000(0,p2));
}
if(quark_1.getMass() == 0.3500){
ampl  =
0.5*(
ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_3500(0,p1)*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_3500(0,p2)+
ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_3500(0,p1)*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_3500(0,p2));
}
if(quark_1.getMass() == 0.2100){
ampl  =
0.5*(
ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_2100(0,p1)*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_2100(0,p2)+
ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_2100(0,p1)*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_2100(0,p2));
}
if(quark_1.getMass() == 0.1500){
ampl  =
0.5*(
ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_1500(0,p1)*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_1500(0,p2)+
ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_1500(0,p1)*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_1500(0,p2));
}
if(quark_1.getMass() == 0.0855){
ampl  =
0.5*(
ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_0855(0,p1)*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_0855(0,p2)+
ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_0855(0,p1)*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_0855(0,p2));
}
if(quark_1.getMass() == 0.0500){
ampl  =
0.5*(
ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_0500(0,p1)*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_0500(0,p2)+
ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_0500(0,p1)*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_0500(0,p2));
}
if(quark_1.getMass() == 0.0200){
ampl  =
0.5*(
ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_0200(0,p1)*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_0200(0,p2)+
ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_0200(0,p1)*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_0200(0,p2));
}
if(quark_1.getMass() == 0.0037){
ampl  =
0.5*(
ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_0037(0,p1)*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_0037(0,p2)+
ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_0037(0,p1)*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_0037(0,p2));
}
}

v.resize(10000,0.);


    v[1]=1./(Q_Q*pow(p_p,2)-pow(Q_p,2)*p_p);
    v[2]=pow(Q_Q,-1);
    v[3]=Q_p;
    v[4]=Q_q;
    v[5]=p_p;
    v[6]=q_q;
    v[7]=p_q;
    v[8]=Q_Q;
    v[9]=pow(Q_p,-1);
    v[10]=pow(p_p,-1);
    v[11]=1./(Q_Q*p_p-pow(Q_p,2));
   v[12]=ssqm*ampl;
   v[13]=ssqp*svqmp*v[12];
   v[14]=svqm*ampl;
   v[15]=v[14]*svqmp*svqp;
   v[16]=v[15]*v[6];
   v[13]=v[13]+v[16];
   v[12]=ssqmp*svqp*v[12];
   v[14]=ssqp*v[14]*ssqmp;
   v[17]=v[13]-v[12]+v[14];
   v[18]=4.E+0*v[17];
   v[19]=v[15]*v[8];
   v[20]=4.E+0*v[15];
   v[21]=v[20]*v[4];
   v[22]=v[18]-v[19]+v[21];
   v[23]=v[22]*v[4];
   v[12]=2.E+0*v[16]+v[12]+v[14];
   v[12]=2.E+0*v[12];
   v[14]=v[12]*v[8];
   v[14]=v[23]-v[14];
   v[14]=v[14]*v[4];
   v[23]=v[8]*v[21]*v[7];
   v[14]=v[14]+v[23];
   v[14]=v[14]*v[7];
   v[23]=4.E+0*v[2];
   v[17]=v[17]*v[23];
   v[21]=v[21]*v[2];
   v[17]=v[17]+v[21]-v[15];
   v[17]=v[17]*v[4];
   v[21]=v[7]*v[15];
   v[21]=8.E+0*v[21]+v[17]-v[12];
   v[24]=pow(v[4],2);
   v[21]=v[24]*v[21];
   v[20]=pow(v[4],3)*v[3]*v[20]*v[2];
   v[20]=-v[20]+v[21];
   v[20]=v[20]*v[3];
   v[14]=v[14]-v[20];
   v[20]=v[5]*v[14];
   v[21]=v[17]+v[12];
   v[25]=v[7]*v[4];
   v[21]=v[21]*v[25];
   v[24]=v[24]*v[2];
   v[12]=v[12]*v[24]*v[3];
   v[12]=v[21]-v[12];
   v[21]=v[12]*v[3];
   v[22]=v[22]*v[4]*pow(v[7],2);
   v[21]=v[21]-v[22];
   v[21]=v[21]*v[3];
   v[20]=v[21]+v[20];
   v[20]=v[1]*v[20];
   v[17]=-v[17]+4.E+0*v[16];
   v[17]=v[17]*v[4];
   v[18]=v[18]*v[6];
   v[26]=v[16]*v[8];
   v[17]=v[17]-v[26]+v[18];
   v[17]=v[17]*v[4];
   v[18]=v[9]*v[17];
   v[22]=v[9]*v[22];
   v[12]=-v[22]+v[12];
   v[22]=v[10]*v[12];
   v[24]=v[15]*v[24];
   v[24]=-v[16]+v[24];
   v[26]=4.E+0*v[4];
   v[24]=v[24]*v[26];
   v[18]=v[22]+v[24]+v[18];
   v[18]=3.333333333E-1*v[18];
   v[14]=-v[11]*v[14];
   v[21]=-v[11]*v[21];
   v[12]=-1.333333333E+0*v[12]+v[21];
   v[12]=v[10]*v[12];
   v[19]=-4.E+0*v[13]+v[19];
   v[19]=v[19]*v[25];
   v[17]=-3.333333333E-1*v[17]+v[19];
   v[17]=v[9]*v[17];
   v[19]=v[2]*v[4];
   v[19]=-1.333333333E+0*v[19]-1.E+0;
   v[15]=v[15]*v[19];
   v[13]=v[13]*v[23];
   v[13]=v[13]+v[15];
   v[13]=v[4]*v[13];
   v[13]=1.333333333E+0*v[16]+v[13];
   v[13]=v[4]*v[13];
   v[12]=v[12]+v[14]+v[13]+v[17];
   v[12]=v[10]*v[12];


K34[SI_K34(ip,izp,0,iq,izq,0)] += -prefactor_1l * wj * FCtr * v[12];
K34[SI_K34(ip,izp,1,iq,izq,0)] += -prefactor_1l * wj * FCtr * v[20];
K34[SI_K34(ip,izp,2,iq,izq,0)] += -prefactor_1l * wj * FCtr * v[18];
v.clear();
