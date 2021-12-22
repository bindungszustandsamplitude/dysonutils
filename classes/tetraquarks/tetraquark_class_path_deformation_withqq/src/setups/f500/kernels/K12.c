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
        FCtr = 2.*3.;}
    else if(!isud_q1){
        FCtr = 4.*3.;}}

if(!isud_q2){
    if(isud_q1){
        FCtr = 4.*3.;}
    else if(!isud_q1){
        FCtr = 4.*3.;}}

FCtr *= a_m * a_m * a_m * a_m;

ampl  =
meson_11.interpolateComplex(l_l+p_l+0.25*p_p)*
meson_22.interpolateComplex(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q)*
meson_12.interpolateComplex(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q)*
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
   w[11]=8.E+0*w[6];
   w[12]=-w[11]+1.5E+0*w[1];
   w[13]=8.E+0*w[4];
   w[14]=4.E+0*w[7];
   w[15]=w[14]+w[13]-w[12];
   w[15]=w[7]*w[15];
   w[16]=2.5E-1*w[1];
   w[17]=w[16]-w[14];
   w[18]=4.E+0*w[6];
   w[19]=w[17]-w[18];
   w[20]=-w[2]*w[19];
   w[21]=2.E+0*w[10];
   w[22]=w[14]-7.5E-1*w[1]+w[21];
   w[22]=w[3]*w[22];
   w[23]=4.E+0*w[4];
   w[24]=w[23]-w[8];
   w[25]=w[24]-w[17];
   w[26]=w[5]*w[25];
   w[27]=-3.E+0*w[6]+3.125E-2*w[1];
   w[27]=w[1]*w[27];
   w[28]=w[8]*w[6];
   w[12]=-w[4]*w[12];
   w[29]=w[8]+w[10];
   w[29]=w[10]*w[29];
   w[30]=-w[2]+w[10]+5.E-1*w[8]-2.E+0*w[4];
   w[30]=w[9]*w[30];
   w[12]=w[26]+w[30]+w[22]+w[20]+w[15]+w[29]+w[12]+5.E-1*w[27]-2.E+0*w[28];
   w[15]=sv4*sv3;
   w[12]=w[12]*w[15];
   w[20]=ss4*ss3;
   w[22]=w[25]*w[20];
   w[12]=w[22]+w[12];
   w[12]=sv1*w[12];
   w[14]=w[16]+w[18]+w[14];
   w[16]=w[23]+w[8];
   w[18]=4.E+0*w[3];
   w[22]=w[18]+w[9];
   w[23]=-w[22]-w[21]-w[14]-w[16];
   w[25]=sv4*ss3;
   w[23]=w[23]*w[25];
   w[13]=4.E+0*w[2]+w[13]-w[19]+w[22];
   w[22]=sv3*ss4;
   w[13]=w[13]*w[22];
   w[13]=w[13]+w[23];
   w[13]=ss1*w[13];
   w[12]=w[12]+w[13];
   w[12]=sv2*w[12];
   w[11]=4.E+0*w[5]+w[11]-w[17]+w[18]+w[16];
   w[11]=w[11]*w[15];
   w[11]=4.E+0*w[20]+w[11];
   w[11]=ss1*ss2*w[11];
   w[13]=w[9]+w[21]-w[24]-w[14];
   w[13]=w[13]*w[22];
   w[14]=-w[19]-w[9];
   w[14]=w[14]*w[25];
   w[13]=w[13]+w[14];
   w[13]=sv1*ss2*w[13];
   w[11]=w[12]+w[13]+w[11];
   w[11]=PM22m*PM21p*ampl*w[11];


K12[SI_K12(ip,izp,0,iq,izq,0)] += -prefactor_2l * wj * FCtr * w[11];
w.clear();