svp = sv_qp;
ssp = ss_qp;
svm = sv_qm;
ssm = ss_qm;
svl = sv_l;
ssl = ss_l;

FCtr = 0.;

p1 = q_q+p_p/4.+Q_Q/16.-p_q-Q_p/4.+Q_q/2.;
p2 = q_q+p_p/4.+Q_Q/16.-p_q+Q_p/4.-Q_q/2.;

ampl  = 0.;
if(quark_2.getMass() == 0.7950){
if(quark_1.getMass() == 0.7950){
ampl  = (
ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,p1)*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,p2));
}
if(quark_1.getMass() == 0.6500){
ampl  = (
ns_data_v2::amplitudes::meson::vector::fit::m_6500_6500(0,p1)*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,p2));
}
if(quark_1.getMass() == 0.5000){
ampl  = (
ns_data_v2::amplitudes::meson::vector::fit::m_5000_5000(0,p1)*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,p2));
}
if(quark_1.getMass() == 0.3500){
ampl  = (
ns_data_v2::amplitudes::meson::vector::fit::m_3500_3500(0,p1)*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,p2));
}
if(quark_1.getMass() == 0.2100){
ampl  = (
ns_data_v2::amplitudes::meson::vector::fit::m_2100_2100(0,p1)*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,p2));
}
if(quark_1.getMass() == 0.1500){
ampl  = (
ns_data_v2::amplitudes::meson::vector::fit::m_1500_1500(0,p1)*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,p2));
}
if(quark_1.getMass() == 0.0855){
ampl  = (
ns_data_v2::amplitudes::meson::vector::fit::m_0855_0855(0,p1)*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,p2));
}
if(quark_1.getMass() == 0.0500){
ampl  = (
ns_data_v2::amplitudes::meson::vector::fit::m_0500_0500(0,p1)*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,p2));
}
if(quark_1.getMass() == 0.0200){
ampl  = (
ns_data_v2::amplitudes::meson::vector::fit::m_0200_0200(0,p1)*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,p2));
}
if(quark_1.getMass() == 0.0037){
ampl  = (
ns_data_v2::amplitudes::meson::vector::fit::m_0037_0037(0,p1)*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,p2));
}
}

v.resize(10000,0.);


    v[1]=1./(-6.E+0*Q_Q*p_p+6.E+0*pow(Q_p,2));
    v[2]=Q_Q;
    v[3]=Q_p;
    v[4]=p_p;
    v[5]=p_q;
    v[6]=Q_q;
    v[7]=q_q;
    v[8]=1./(-6.E+0*Q_Q*Q_p*p_p+6.E+0*pow(Q_p,3));
   v[9]=svl*ssm*ssp;
   v[10]=svm*ssp*ssl;
   v[11]=svm*svp*svl;
   v[12]=v[7]*v[11];
   v[13]=ssl*svp*ssm;
   v[14]=v[10]-v[9]+v[12]+v[13];
   v[15]=v[2]*v[11];
   v[16]=-v[15]+1.2E+1*v[14];
   v[17]=8.E+0*v[5];
   v[18]=v[17]*v[11];
   v[19]=-v[18]+v[16];
   v[20]=v[5]*v[19];
   v[10]=v[10]-v[13];
   v[13]=v[3]-v[6];
   v[11]=v[11]*v[13];
   v[11]=-3.E+0*v[10]+v[11];
   v[13]=2.E+0*v[3];
   v[11]=v[11]*v[13];
   v[11]=v[20]+v[11];
   v[11]=v[3]*v[11]*i_;
   v[14]=-4.E+0*v[14]+v[15];
   v[14]=3.E+0*v[14]+v[18];
   v[14]=v[6]*v[14];
   v[10]=v[2]*v[10];
   v[13]=-v[15]*v[13];
   v[10]=v[13]+6.E+0*v[10]+v[14];
   v[13]=v[4]*i_;
   v[10]=v[10]*v[13];
   v[10]=v[11]+v[10];
   v[11]=2.E+0*ampl;
   v[10]=v[11]*v[1]*v[10];
   v[14]=-v[2]*v[16];
   v[16]=v[15]*v[17];
   v[14]=v[14]+v[16];
   v[14]=v[5]*v[14];
   v[16]=v[6]*v[19];
   v[9]=-v[12]+3.E+0*v[9];
   v[9]=v[15]+4.E+0*v[9];
   v[12]=v[3]*v[9];
   v[12]=v[16]+v[12];
   v[12]=v[3]*v[12];
   v[12]=v[14]+v[12];
   v[12]=v[12]*i_;
   v[9]=-v[2]*v[9]*v[13];
   v[9]=v[12]+v[9];
   v[9]=v[11]*v[8]*v[9];


K24[SI_K24(ip,izp,0,iq,izq,0)] += -prefactor_1l * wj * FCtr * v[9];
K24[SI_K24(ip,izp,1,iq,izq,0)] += -prefactor_1l * wj * FCtr * v[10];
v.clear();
