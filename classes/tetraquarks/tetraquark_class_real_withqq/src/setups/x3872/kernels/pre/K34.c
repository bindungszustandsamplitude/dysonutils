svp = sv_qp;
ssp = ss_qp;
svm = sv_qm;
ssm = ss_qm;
svl = sv_l;
ssl = ss_l;

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
    v[2]=Q_Q;
    v[3]=Q_p;
    v[4]=p_p;
    v[5]=p_q;
    v[6]=Q_q;
    v[7]=pow(Q_p,-1);
    v[8]=pow(p_p,-1);
    v[9]=q_q;
    v[10]=1./(Q_Q*p_p-pow(Q_p,2));
   v[11]=2.E+0*v[6];
   v[12]=pow(v[4],2);
   v[13]=v[11]*v[12];
   v[14]=2.E+0*v[5];
   v[15]=v[3]+v[14];
   v[15]=v[4]*v[15];
   v[16]=v[6]*v[4];
   v[15]=-v[16]+v[15];
   v[15]=v[3]*v[15];
   v[12]=v[12]*v[2];
   v[17]=v[2]*v[4];
   v[18]=v[5]*v[17];
   v[15]=v[15]+v[18]-v[12]-v[13];
   v[18]=svp*svl;
   v[19]=v[18]*ssm;
   v[15]=v[15]*v[19];
   v[20]=4.E+0*v[16];
   v[21]=-v[17]+v[20];
   v[21]=v[5]*v[21];
   v[22]=v[3]-v[14];
   v[23]=v[14]-v[4];
   v[22]=v[23]*v[22];
   v[16]=-v[16]+v[22];
   v[16]=v[3]*v[16];
   v[12]=v[16]+v[21]+v[12]-v[13];
   v[13]=ssp*svl;
   v[12]=v[12]*v[13];
   v[16]=pow(v[3],2);
   v[21]=pow(v[5],2);
   v[16]=-v[16]+4.E+0*v[21];
   v[17]=v[17]+v[16];
   v[17]=v[3]*v[17];
   v[20]=-v[5]*v[20];
   v[17]=v[20]+v[17];
   v[20]=ssl*svp;
   v[17]=v[17]*v[20];
   v[12]=v[12]+v[17];
   v[12]=svm*v[12];
   v[12]=v[15]+v[12];
   v[15]=2.E+0*ampl;
   v[12]=v[1]*v[12]*v[15];
   v[17]=2.E+0*v[9];
   v[22]=v[17]-v[6];
   v[22]=3.333333333E-1*v[22];
   v[23]=v[21]*v[8];
   v[24]=-1.333333333E+0*v[23]-v[22]+v[14];
   v[24]=v[7]*v[24];
   v[25]=v[8]*v[5];
   v[24]=v[24]-1.E+0+6.666666666E-1*v[25];
   v[24]=v[24]*v[13];
   v[26]=-v[2]+4.E+0*v[9];
   v[27]=8.E+0*v[23]+v[26];
   v[27]=v[7]*v[27];
   v[28]=2.E+0*v[8];
   v[29]=v[28]*v[3];
   v[27]=-v[29]+v[27];
   v[27]=v[27]*v[20];
   v[24]=2.E+0*v[24]+3.333333333E-1*v[27];
   v[24]=svm*v[24];
   v[27]=v[14]-v[6];
   v[17]=-v[17]+v[27];
   v[30]=v[7]*ssm;
   v[17]=v[17]*v[30];
   v[17]=ssm+v[17];
   v[17]=v[17]*v[18];
   v[18]=ssl*ssp*v[30];
   v[17]=v[17]-2.E+0*v[18];
   v[17]=2.E+0*v[17]+v[24];
   v[17]=ampl*v[17];
   v[14]=2.666666666E+0*v[23]-v[22]-v[14];
   v[14]=v[7]*v[14];
   v[14]=v[14]+1.E+0-1.333333333E+0*v[25];
   v[14]=v[28]*v[14];
   v[18]=-v[3]*v[5];
   v[18]=2.E+0*v[21]+v[18];
   v[18]=v[18]*v[29];
   v[21]=4.E+0*v[6];
   v[22]=v[2]-v[21];
   v[22]=v[5]*v[22];
   v[24]=v[3]-v[27];
   v[24]=v[3]*v[24];
   v[18]=v[18]+v[22]+v[24];
   v[18]=v[8]*v[18];
   v[18]=v[18]-v[2]+v[11];
   v[18]=v[10]*v[18];
   v[14]=v[18]+v[14];
   v[13]=v[14]*v[13];
   v[14]=-v[8]*v[16];
   v[14]=v[14]-v[2];
   v[14]=v[3]*v[14];
   v[16]=v[5]*v[21];
   v[14]=v[16]+v[14];
   v[14]=v[10]*v[14];
   v[16]=-1.6E+1*v[23]+v[26];
   v[16]=v[7]*v[16];
   v[14]=3.333333333E-1*v[16]+v[14];
   v[14]=v[8]*v[14];
   v[16]=v[3]*pow(v[8],2);
   v[14]=1.333333333E+0*v[16]+v[14];
   v[14]=v[14]*v[20];
   v[13]=v[13]+v[14];
   v[13]=svm*v[13];
   v[14]=-v[5]*v[2];
   v[16]=-v[3]-v[27];
   v[16]=v[3]*v[16];
   v[14]=v[14]+v[16];
   v[14]=v[8]*v[14];
   v[11]=v[14]+v[2]+v[11];
   v[11]=v[10]*v[11]*v[19];
   v[11]=v[11]+v[13];
   v[11]=v[11]*v[15];


K34[SI_K34(ip,izp,0,iq,izq,0)] += -prefactor_1l * wj * FCtr * v[11];
K34[SI_K34(ip,izp,1,iq,izq,0)] += -prefactor_1l * wj * FCtr * v[12];
K34[SI_K34(ip,izp,2,iq,izq,0)] += -prefactor_1l * wj * FCtr * v[17];
v.clear();
