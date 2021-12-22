sv1 = sv1_q1;
ss1 = ss1_q1;
sv2 = sv2_q1;
ss2 = ss2_q1;
sv3 = sv3_q2;
ss3 = ss3_q2;
sv4 = sv4_q2;
ss4 = ss4_q2;

w.resize(10000,0.);

if(isud_q2){
    if(isud_q1){
        FCtr = 2.*3.;}
    else if(!isud_q1){
        FCtr = 4.*3.;}}

if(!isud_q2){
    if(isud_q1){
        FCtr = 4.*3.;}
    else if(!isud_q1){
        FCtr = 4.*3.;}}

if(quark_2.getMass() == 0.7950){
if(quark_1.getMass() == 0.0037){
ampl = 
(ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_0037_0037(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0037(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0037(0,std::real(l_l+q_l+0.25*q_q)));}
else
if(quark_1.getMass() == 0.0200){
ampl = 
(ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_0200_0200(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0200(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0200(0,std::real(l_l+q_l+0.25*q_q)));}
else
if(quark_1.getMass() == 0.0500){
ampl = 
(ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_0500_0500(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0500(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0500(0,std::real(l_l+q_l+0.25*q_q)));}
else
if(quark_1.getMass() == 0.0855){
ampl = 
(ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_0855_0855(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0855(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0855(0,std::real(l_l+q_l+0.25*q_q)));}
else
if(quark_1.getMass() == 0.1500){
ampl = 
(ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_1500_1500(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_1500(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_1500(0,std::real(l_l+q_l+0.25*q_q)));}
else
if(quark_1.getMass() == 0.2100){
ampl = 
(ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_2100_2100(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_2100(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_2100(0,std::real(l_l+q_l+0.25*q_q)));}
else
if(quark_1.getMass() == 0.3500){
ampl = 
(ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_3500_3500(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_3500(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_3500(0,std::real(l_l+q_l+0.25*q_q)));}
else
if(quark_1.getMass() == 0.5000){
ampl = 
(ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_5000_5000(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_5000(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_5000(0,std::real(l_l+q_l+0.25*q_q)));}
else
if(quark_1.getMass() == 0.6500){
ampl = 
(ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_6500_6500(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_6500(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_6500(0,std::real(l_l+q_l+0.25*q_q)));}
else
if(quark_1.getMass() == 0.7950){
ampl = 
(ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_7950(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_7950(0,std::real(l_l+q_l+0.25*q_q)));}
}

if(quark_2.getMass() == 0.0037){
if(quark_1.getMass() == 0.0037){
ampl = 
(ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_0037_0037(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_0037_0037(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_0037_0037(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_0037_0037(0,std::real(l_l+q_l+0.25*q_q)));}
}


    w[1]=Q_Q;
    w[2]=p_p;
    w[3]=p_q;
    w[4]=p_l;
    w[5]=q_q;
    w[6]=q_l;
    w[7]=l_l;
    w[8]=Q_p;
    w[9]=Q_q;
    w[10]=Q_l;
   w[11]=1.5E+0*w[1];
   w[12]=4.E+0*w[7];
   w[13]=-w[11]+w[12];
   w[13]=w[7]*w[13];
   w[11]=-w[11]+8.E+0*w[7];
   w[14]=8.E+0*w[4];
   w[15]=w[14]+w[11];
   w[15]=w[6]*w[15];
   w[16]=2.5E-1*w[1];
   w[17]=w[16]-w[12];
   w[18]=4.E+0*w[4];
   w[19]=w[17]-w[18];
   w[20]=-w[5]*w[19];
   w[21]=2.E+0*w[10];
   w[22]=w[12]-7.5E-1*w[1]+w[21];
   w[22]=w[3]*w[22];
   w[23]=4.E+0*w[6];
   w[24]=w[23]-w[9];
   w[25]=w[24]-w[17];
   w[26]=w[2]*w[25];
   w[27]=pow(w[1],2);
   w[28]=w[9]+w[10];
   w[28]=w[10]*w[28];
   w[11]=-2.E+0*w[9]+w[11];
   w[11]=w[4]*w[11];
   w[29]=-w[5]-2.E+0*w[6]+5.E-1*w[9]+w[10];
   w[29]=w[8]*w[29];
   w[11]=w[29]+w[26]+w[22]+w[20]+w[15]+w[11]+w[13]+1.5625E-2*w[27]+w[28];
   w[13]=sv3*ampl;
   w[15]=w[13]*sv4;
   w[11]=w[11]*w[15];
   w[20]=-w[19]-w[8];
   w[22]=ss3*ampl*ss4;
   w[20]=w[20]*w[22];
   w[11]=w[20]+w[11];
   w[11]=sv2*w[11];
   w[12]=w[16]+w[18]+w[12];
   w[16]=w[8]+w[21]-w[24]-w[12];
   w[13]=w[13]*ss4;
   w[16]=w[16]*w[13];
   w[18]=ss3*sv4*ampl;
   w[20]=w[25]*w[18];
   w[16]=w[20]+w[16];
   w[16]=ss2*w[16];
   w[11]=w[11]+w[16];
   w[11]=sv1*w[11];
   w[16]=w[23]+w[9];
   w[20]=4.E+0*w[3];
   w[23]=w[20]+w[8];
   w[12]=-w[23]-w[21]-w[12]-w[16];
   w[12]=w[12]*w[18];
   w[14]=4.E+0*w[2]+w[14]-w[17]+w[20]+w[16];
   w[13]=w[14]*w[13];
   w[12]=w[12]+w[13];
   w[12]=sv2*w[12];
   w[13]=4.E+0*w[5]+8.E+0*w[6]-w[19]+w[23];
   w[13]=w[13]*w[15];
   w[13]=4.E+0*w[22]+w[13];
   w[13]=ss2*w[13];
   w[12]=w[12]+w[13];
   w[12]=ss1*w[12];
   w[11]=w[11]+w[12];
   w[11]=PM11p*PM12m*w[11];


K21[SI_K21(ip,izp,0,iq,izq,0)] += wj * FCtr * w[11];
