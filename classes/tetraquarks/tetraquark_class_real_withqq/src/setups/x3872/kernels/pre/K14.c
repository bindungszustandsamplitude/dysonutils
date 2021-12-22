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
ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_7950(0,p1)*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,p2)+
ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,p1)*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_7950(0,p2));
}
if(quark_1.getMass() == 0.6500){
ampl  =
0.5*(
ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_6500(0,p1)*ns_data_v2::amplitudes::meson::vector::fit::m_7950_6500(0,p2)+
ns_data_v2::amplitudes::meson::vector::fit::m_7950_6500(0,p1)*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_6500(0,p2));
}
if(quark_1.getMass() == 0.5000){
ampl  =
0.5*(
ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_5000(0,p1)*ns_data_v2::amplitudes::meson::vector::fit::m_7950_5000(0,p2)+
ns_data_v2::amplitudes::meson::vector::fit::m_7950_5000(0,p1)*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_5000(0,p2));
}
if(quark_1.getMass() == 0.3500){
ampl  =
0.5*(
ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_3500(0,p1)*ns_data_v2::amplitudes::meson::vector::fit::m_7950_3500(0,p2)+
ns_data_v2::amplitudes::meson::vector::fit::m_7950_3500(0,p1)*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_3500(0,p2));
}
if(quark_1.getMass() == 0.2100){
ampl  =
0.5*(
ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_2100(0,p1)*ns_data_v2::amplitudes::meson::vector::fit::m_7950_2100(0,p2)+
ns_data_v2::amplitudes::meson::vector::fit::m_7950_2100(0,p1)*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_2100(0,p2));
}
if(quark_1.getMass() == 0.1500){
ampl  =
0.5*(
ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_1500(0,p1)*ns_data_v2::amplitudes::meson::vector::fit::m_7950_1500(0,p2)+
ns_data_v2::amplitudes::meson::vector::fit::m_7950_1500(0,p1)*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_1500(0,p2));
}
if(quark_1.getMass() == 0.0855){
ampl  =
0.5*(
ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0855(0,p1)*ns_data_v2::amplitudes::meson::vector::fit::m_7950_0855(0,p2)+
ns_data_v2::amplitudes::meson::vector::fit::m_7950_0855(0,p1)*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0855(0,p2));
}
if(quark_1.getMass() == 0.0500){
ampl  =
0.5*(
ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0500(0,p1)*ns_data_v2::amplitudes::meson::vector::fit::m_7950_0500(0,p2)+
ns_data_v2::amplitudes::meson::vector::fit::m_7950_0500(0,p1)*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0500(0,p2));
}
if(quark_1.getMass() == 0.0200){
ampl  =
0.5*(
ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0200(0,p1)*ns_data_v2::amplitudes::meson::vector::fit::m_7950_0200(0,p2)+
ns_data_v2::amplitudes::meson::vector::fit::m_7950_0200(0,p1)*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0200(0,p2));
}
if(quark_1.getMass() == 0.0037){
ampl  =
0.5*(
ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0037(0,p1)*ns_data_v2::amplitudes::meson::vector::fit::m_7950_0037(0,p2)+
ns_data_v2::amplitudes::meson::vector::fit::m_7950_0037(0,p1)*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0037(0,p2));
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
   v[11]=svp*svl;
   v[12]=v[11]*ssm;
   v[13]=svl*ssp*svm;
   v[14]=v[12]-v[13];
   v[15]=v[14]*v[5];
   v[16]=ssl*svp*svm;
   v[17]=v[16]*v[3];
   v[15]=v[15]+v[17];
   v[15]=v[15]*v[2];
   v[18]=v[16]-v[13];
   v[19]=v[18]*v[5]*v[6];
   v[15]=v[15]-4.E+0*v[19];
   v[19]=v[12]+v[13];
   v[20]=2.E+0*v[5];
   v[21]=v[20]-v[6];
   v[21]=v[21]*v[19];
   v[22]=v[14]*v[3];
   v[21]=v[21]+v[22];
   v[22]=v[3]*v[21];
   v[23]=v[19]*v[6];
   v[24]=v[14]*v[2];
   v[23]=v[24]+2.E+0*v[23];
   v[24]=-v[4]*v[23];
   v[22]=v[24]+v[22]+v[15];
   v[22]=v[4]*v[22];
   v[24]=v[13]*v[20];
   v[17]=v[24]-v[17];
   v[25]=v[17]*v[3];
   v[26]=pow(v[5],2);
   v[26]=4.E+0*v[26];
   v[26]=v[26]*v[18];
   v[25]=v[25]+v[26];
   v[27]=v[3]*v[25];
   v[22]=v[27]+v[22];
   v[27]=2.E+0*ampl;
   v[22]=v[1]*v[22]*v[27];
   v[18]=v[18]*v[9];
   v[28]=-ssp*ssl;
   v[11]=-v[9]*v[11];
   v[11]=v[28]+v[11];
   v[11]=ssm*v[11];
   v[11]=3.333333333E-1*v[18]+v[11];
   v[12]=3.333333333E-1*v[13]-v[12];
   v[12]=v[6]*v[12];
   v[19]=v[19]*v[20];
   v[11]=v[19]+2.E+0*v[11]+v[12];
   v[12]=v[16]*v[2];
   v[12]=3.333333333E-1*v[12];
   v[11]=2.E+0*v[11]-v[12];
   v[11]=v[7]*v[11];
   v[16]=v[26]*v[7];
   v[16]=v[16]+v[17];
   v[16]=v[16]*v[8];
   v[11]=6.666666666E-1*v[16]+2.E+0*v[14]+v[11];
   v[11]=ampl*v[11];
   v[14]=v[6]*v[13];
   v[14]=2.E+0*v[18]+v[14];
   v[14]=3.333333333E-1*v[14]-v[24];
   v[12]=2.E+0*v[14]-v[12];
   v[12]=v[7]*v[12];
   v[12]=-1.333333333E+0*v[16]+2.E+0*v[13]+v[12];
   v[12]=v[8]*v[12];
   v[13]=-v[8]*v[25];
   v[13]=v[13]-v[21];
   v[13]=v[3]*v[13];
   v[13]=v[13]-v[15];
   v[13]=v[8]*v[13];
   v[13]=v[13]+v[23];
   v[13]=v[10]*v[13];
   v[12]=v[12]+v[13];
   v[12]=v[12]*v[27];


K14[SI_K14(ip,izp,0,iq,izq,0)] += -prefactor_1l * wj * FCtr * v[12];
K14[SI_K14(ip,izp,1,iq,izq,0)] += -prefactor_1l * wj * FCtr * v[22];
K14[SI_K14(ip,izp,2,iq,izq,0)] += -prefactor_1l * wj * FCtr * v[11];
v.clear();
