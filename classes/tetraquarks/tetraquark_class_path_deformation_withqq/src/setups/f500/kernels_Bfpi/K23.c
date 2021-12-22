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
        FCtr = 2.*6.;}
    else if(!isud_q1){
        FCtr = 4.*6.;}}

if(!isud_q2){
    if(isud_q1){
        FCtr = 4.*6.;}
    else if(!isud_q1){
        FCtr = 4.*6.;}}

FCtr *= a_m * a_m * a_d * a_d;

ampl  =
meson_21.interpolateComplex(l_l+p_l+0.25*p_p)*
diquark_2.interpolateComplex(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q)*
meson_22.interpolateComplex(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q)*
diquark_1.interpolateComplex(l_l+q_l+0.25*q_q);

ampl = ns_data::ps_0037_0037(0,std::real(l_l+p_l+0.25*p_p))*ns_data::sc_0037_0037(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))*ns_data::ps_0037_0037(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))*ns_data::sc_0037_0037(0,std::real(l_l+q_l+0.25*q_q));



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
   w[12]=w[4]+w[7];
   w[13]=w[12]*w[11];
   w[14]=pow(w[7],2);
   w[15]=2.E+0*w[4];
   w[16]=w[7]*w[15];
   w[13]=w[13]+w[14]+w[16];
   w[14]=w[6]+w[7];
   w[16]=2.5E-1*w[1];
   w[17]=-w[16]-w[9]+4.E+0*w[14];
   w[18]=w[2]*w[17];
   w[19]=w[16]+w[8];
   w[20]=-w[19]+4.E+0*w[12];
   w[21]=w[5]*w[20];
   w[22]=w[12]+w[6];
   w[23]=-3.E+0*w[22]+3.125E-2*w[1];
   w[23]=w[1]*w[23];
   w[24]=-w[9]*w[15];
   w[25]=w[9]+w[10];
   w[25]=w[10]*w[25];
   w[26]=w[10]-w[11]+5.E-1*w[9];
   w[26]=w[8]*w[26];
   w[27]=2.E+0*w[10];
   w[28]=w[27]+4.E+0*w[7]-7.5E-1*w[1];
   w[28]=w[3]*w[28];
   w[13]=w[28]+w[21]+w[18]+w[26]+w[25]+w[24]+4.E+0*w[13]+5.E-1*w[23];
   w[18]=sv2*sv1;
   w[13]=w[13]*w[18];
   w[11]=w[5]+w[11]+w[12];
   w[12]=4.E+0*w[3];
   w[21]=w[12]-w[16];
   w[11]=w[8]+w[21]+4.E+0*w[11];
   w[23]=ss2*ss1;
   w[11]=w[11]*w[23];
   w[11]=w[11]+w[13];
   w[11]=sv4*w[11];
   w[13]=w[27]+w[9];
   w[22]=4.E+0*w[22];
   w[16]=-w[22]-w[16]+w[8]+w[13];
   w[24]=ss2*sv1;
   w[16]=w[16]*w[24];
   w[14]=w[2]+w[15]+w[14];
   w[14]=w[9]+w[21]+4.E+0*w[14];
   w[15]=sv2*ss1;
   w[14]=w[14]*w[15];
   w[14]=w[16]+w[14];
   w[14]=ss4*w[14];
   w[11]=w[11]+w[14];
   w[11]=sv3*w[11];
   w[12]=-w[12]-w[22]-w[19]-w[13];
   w[12]=w[12]*w[15];
   w[13]=w[17]*w[24];
   w[12]=w[13]+w[12];
   w[12]=sv4*w[12];
   w[13]=w[20]*w[18];
   w[13]=4.E+0*w[23]+w[13];
   w[13]=ss4*w[13];
   w[12]=w[12]+w[13];
   w[12]=ss3*w[12];
   w[11]=w[12]+w[11];
   w[11]=PDQ2m*PDQ1p*ampl*w[11];


K23[SI_K23(ip,izp,0,iq,izq,0)] += -prefactor_2l * wj * FCtr * w[11];
