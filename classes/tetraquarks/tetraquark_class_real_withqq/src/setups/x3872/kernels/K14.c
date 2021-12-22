
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
   v[12]=svqmp*ssqp*ssqm;
   v[13]=svqm*svqp*svqmp;
   v[14]=v[6]*v[13];
   v[12]=v[12]+v[14];
   v[15]=svqm*ssqmp*ssqp;
   v[16]=ssqm*svqp*ssqmp;
   v[17]=-v[15]+v[16]-v[12];
   v[18]=v[4]*v[13];
   v[19]=v[18]-v[17];
   v[20]=pow(v[4],2);
   v[21]=v[19]*v[20];
   v[22]=v[18]*v[8];
   v[23]=v[22]*v[7];
   v[21]=v[23]+v[21];
   v[15]=v[16]+v[15]+2.E+0*v[14];
   v[15]=2.E+0*v[15];
   v[16]=v[15]+v[18];
   v[23]=v[16]*v[8]*v[4];
   v[21]=-v[23]+4.E+0*v[21];
   v[21]=v[21]*v[7];
   v[16]=v[16]*v[20];
   v[23]=pow(v[4],3);
   v[24]=4.E+0*v[2];
   v[25]=v[23]*v[24];
   v[26]=v[19]*v[25];
   v[25]=v[25]*v[3];
   v[27]=v[20]*v[7];
   v[25]=-v[25]+8.E+0*v[27];
   v[25]=v[25]*v[13];
   v[16]=v[25]-v[16]+v[26];
   v[25]=-v[3]*v[16];
   v[25]=v[21]+v[25];
   v[25]=v[5]*v[25];
   v[27]=v[15]-v[18];
   v[27]=v[27]*v[4];
   v[24]=v[24]*v[20];
   v[28]=v[24]*v[19];
   v[27]=v[27]+v[28];
   v[27]=v[27]*v[7];
   v[15]=v[15]*v[3]*v[20]*v[2];
   v[15]=v[27]-v[15];
   v[20]=v[15]*v[3];
   v[27]=4.E+0*v[4];
   v[19]=v[27]*v[19];
   v[19]=v[19]-v[22];
   v[19]=v[19]*pow(v[7],2);
   v[20]=v[20]-v[19];
   v[28]=v[3]*v[20];
   v[25]=v[28]+v[25];
   v[25]=ampl*v[1]*v[25];
   v[15]=v[15]*v[10];
   v[28]=4.E+0*v[6];
   v[17]=v[17]*v[28];
   v[28]=v[18]+4.E+0*v[14];
   v[28]=v[28]*v[4];
   v[17]=v[28]-v[17];
   v[17]=v[17]*v[4];
   v[28]=v[22]*v[6];
   v[17]=v[17]-v[28]-v[26];
   v[19]=v[10]*v[19];
   v[26]=-v[19]+v[17];
   v[26]=v[9]*v[26];
   v[13]=v[2]*v[23]*v[13];
   v[23]=-v[6]*v[18];
   v[13]=v[23]+v[13];
   v[13]=v[26]+4.E+0*v[13]+v[15];
   v[13]=3.333333333E-1*ampl*v[13];
   v[20]=-v[10]*v[20];
   v[16]=v[20]+v[16];
   v[16]=v[3]*v[16];
   v[16]=-v[21]+v[16];
   v[16]=v[11]*v[16];
   v[20]=-v[12]*v[27];
   v[20]=v[20]+v[22];
   v[20]=v[7]*v[20];
   v[17]=1.333333333E+0*v[19]-3.333333333E-1*v[17]+v[20];
   v[17]=v[9]*v[17];
   v[12]=-3.333333333E-1*v[18]+v[12];
   v[12]=v[12]*v[24];
   v[14]=1.333333333E+0*v[14]-v[18];
   v[14]=v[4]*v[14];
   v[12]=v[17]+v[16]-1.333333333E+0*v[15]+v[14]+v[12];
   v[12]=ampl*v[10]*v[12];


K14[SI_K14(ip,izp,0,iq,izq,0)] += -prefactor_1l * wj * FCtr * v[12];
K14[SI_K14(ip,izp,1,iq,izq,0)] += -prefactor_1l * wj * FCtr * v[25];
K14[SI_K14(ip,izp,2,iq,izq,0)] += -prefactor_1l * wj * FCtr * v[13];
v.clear();
