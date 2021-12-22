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
        FCtr = -2.*2.;}
    else if(!isud_q1){
        FCtr = -4.*2.;}}

if(!isud_q2){
    if(isud_q1){
        FCtr = -4.*2.;}
    else if(!isud_q1){
        FCtr = -4.*2.;}}


ampl  =
diquark_1.interpolateComplex(l_l+p_l+0.25*p_p)*
meson_22.interpolateComplex(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q)*
diquark_2.interpolateComplex(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q)*
meson_21.interpolateComplex(l_l+q_l+0.25*q_q);



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
   w[14]=2.5E-1*w[1];
   w[15]=w[14]-w[12];
   w[16]=w[15]+w[8];
   w[16]=-w[5]*w[16];
   w[17]=4.E+0*w[5]+8.E+0*w[6];
   w[11]=-w[11]+8.E+0*w[7];
   w[18]=-2.E+0*w[9]+w[11]+w[17];
   w[18]=w[4]*w[18];
   w[19]=4.E+0*w[6];
   w[20]=w[15]-w[19];
   w[21]=-w[9]-w[20];
   w[22]=w[2]*w[21];
   w[23]=2.E+0*w[10];
   w[24]=w[23]-7.5E-1*w[1]+w[12];
   w[24]=w[24]*w[3];
   w[25]=pow(w[1],2);
   w[26]=w[9]*w[8];
   w[11]=-2.E+0*w[8]+w[11];
   w[11]=w[6]*w[11];
   w[27]=w[10]+w[9]+w[8];
   w[27]=w[10]*w[27];
   w[11]=w[24]+w[22]+w[18]+w[16]+w[27]+w[11]+5.E-1*w[26]+1.5625E-2*w[25]+w[13];
   w[11]=sv1*sv3*w[11];
   w[13]=4.E+0*w[4];
   w[12]=w[14]+w[13]+w[19]+w[12];
   w[14]=w[9]+w[23]+w[8];
   w[16]=-w[12]-w[14];
   w[16]=ss1*w[16];
   w[18]=4.E+0*ss1;
   w[19]=-w[3]*w[18];
   w[16]=w[16]+w[19];
   w[16]=ss3*w[16];
   w[11]=w[11]+w[16];
   w[16]=sv2*PM22m;
   w[11]=w[11]*w[16];
   w[13]=w[15]-w[13];
   w[15]=4.E+0*w[3];
   w[17]=w[15]+w[8]-w[13]+w[17];
   w[19]=sv3*ss1;
   w[17]=w[19]*w[17];
   w[22]=ss3*sv1;
   w[21]=w[21]*w[22];
   w[17]=w[21]+w[17];
   w[21]=ss2*PM22m;
   w[17]=w[17]*w[21];
   w[11]=w[17]+w[11];
   w[11]=sv4*w[11];
   w[12]=-w[12]+w[14];
   w[12]=sv1*sv3*w[12];
   w[14]=ss3*w[18];
   w[12]=w[12]+w[14];
   w[12]=w[12]*w[21];
   w[14]=w[15]+4.E+0*w[2]+8.E+0*w[4]+w[9]-w[20];
   w[14]=w[19]*w[14];
   w[13]=-w[8]-w[13];
   w[13]=w[13]*w[22];
   w[13]=w[13]+w[14];
   w[13]=w[13]*w[16];
   w[12]=w[12]+w[13];
   w[12]=ss4*w[12];
   w[11]=w[12]+w[11];
   w[11]=w[11]*PM21p*ampl;


K32[SI_K32(ip,izp,0,iq,izq,0)] += wj * FCtr * w[11];