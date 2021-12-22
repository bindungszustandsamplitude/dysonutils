sv1 = sv1_q1;
ss1 = ss1_q1;
sv2 = sv2_q2;
ss2 = ss2_q2;
sv3 = sv3_q2;
ss3 = ss3_q2;
sv4 = sv4_q1;
ss4 = ss4_q1;

w.resize(10000,0.);

if(isud_q2){
    if(isud_q1){
        FCtr = 2.*2.;}
    else if(!isud_q1){
        FCtr = 4.*2.;}}

if(!isud_q2){
    if(isud_q1){
        FCtr = 4.*2.;}
    else if(!isud_q1){
        FCtr = 4.*2.;}}

FCtr *= a_d * a_d * a_m * a_m;

ampl  =
diquark_1.interpolateComplex(l_l+p_l+0.25*p_p)*
meson_22.interpolateComplex(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q)*
diquark_2.interpolateComplex(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q)*
meson_21.interpolateComplex(l_l+q_l+0.25*q_q);

ampl = ns_data::sc_0037_0037(0,std::real(l_l+p_l+0.25*p_p))*ns_data::ps_0037_0037(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))*ns_data::sc_0037_0037(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))*ns_data::ps_0037_0037(0,std::real(l_l+q_l+0.25*q_q));



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
   w[11]=2.E+0*w[6];
   w[12]=w[11]+w[7];
   w[13]=4.E+0*w[7];
   w[14]=w[12]*w[13];
   w[15]=w[7]+w[6];
   w[16]=4.E+0*w[15];
   w[17]=w[16]-w[9];
   w[18]=2.5E-1*w[1];
   w[19]=w[18]-w[17];
   w[20]=-w[2]*w[19];
   w[21]=4.E+0*w[4];
   w[22]=w[21]-w[18];
   w[13]=w[22]+w[13]-w[8];
   w[23]=w[5]*w[13];
   w[24]=pow(w[10],2);
   w[25]=w[9]*w[10];
   w[15]=-3.E+0*w[15]+3.125E-2*w[1];
   w[15]=w[1]*w[15];
   w[17]=2.E+0*w[17]-1.5E+0*w[1];
   w[17]=w[4]*w[17];
   w[26]=5.E-1*w[9]+w[10]-w[11];
   w[26]=w[8]*w[26];
   w[27]=2.E+0*w[7];
   w[28]=w[10]+w[27];
   w[28]=2.E+0*w[28]-7.5E-1*w[1];
   w[28]=w[3]*w[28];
   w[14]=w[23]+w[28]+w[26]+w[17]+w[20]+5.E-1*w[15]+w[25]+w[24]+w[14];
   w[14]=sv4*sv2*w[14];
   w[11]=w[27]+w[11];
   w[15]=w[10]-w[11];
   w[17]=w[18]-w[9];
   w[15]=2.E+0*w[15]-w[17]-w[21]+w[8];
   w[15]=w[15]*ss2*ss4;
   w[14]=w[14]+w[15];
   w[14]=sv3*w[14];
   w[15]=ss3*sv2;
   w[13]=ss4*w[13]*w[15];
   w[20]=ss2*ss3;
   w[19]=-sv4*w[19]*w[20];
   w[13]=w[14]+w[13]+w[19];
   w[13]=sv1*w[13];
   w[11]=-w[10]-w[11];
   w[14]=4.E+0*w[3];
   w[19]=w[14]+w[8];
   w[11]=-w[21]+2.E+0*w[11]-w[19]-w[18]-w[9];
   w[11]=sv4*w[11]*w[15];
   w[14]=w[14]+8.E+0*w[4]+4.E+0*w[2]+w[16]-w[17];
   w[14]=sv2*ss4*w[14];
   w[12]=w[12]+w[5];
   w[12]=w[22]+4.E+0*w[12]+w[19];
   w[12]=w[12]*ss2*sv4;
   w[12]=w[14]+w[12];
   w[12]=sv3*w[12];
   w[14]=ss4*w[20];
   w[11]=w[12]+w[11]+4.E+0*w[14];
   w[11]=ss1*w[11];
   w[11]=w[13]+w[11];
   w[11]=PM21p*PM22m*ampl*w[11];


K32[SI_K32(ip,izp,0,iq,izq,0)] += -prefactor_2l * wj * FCtr * w[11];
