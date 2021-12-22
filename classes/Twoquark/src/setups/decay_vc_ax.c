vec<cdouble> w(1000,0.);
cdouble i_(0.,1.);

    w[1]=P_P;
    w[2]=P_q;
    w[3]=pow(P_P,-1);
    w[4]=q_q;
   w[5]=ssm*svp;
   w[6]=svm*ssp;
   w[7]=w[5] - w[6];
   w[8]=w[7]*eta;
   w[8]=w[8] + w[6];
   w[9]=w[8]*w[1];
   w[10]=w[7]*w[2];
   w[9]=w[9] + w[10];
   w[11]=1.2E+1*i_*w[9];
   w[12]=w[2]*w[3];
   w[13]= - w[7]*w[12];
   w[8]= - 3.E+0*w[8] + w[13];
   w[13]=pow(w[2],2);
   w[8]=w[8]*w[13];
   w[10]=w[4]*w[10];
   w[8]=w[8] - 2.E+0*w[10];
   w[10]=4.E+0*i_;
   w[8]=w[8]*w[10];
   w[14]=svm*svp;
   w[15]=w[13]*w[14];
   w[16]=w[14]*w[4];
   w[17]=w[1]*w[16];
   w[17]= - w[15] + w[17];
   w[17]=1.6E+1*i_*w[17];
   w[5]=w[5] + w[6];
   w[18]=w[13]*w[3];
   w[18]=w[18] - w[4];
   w[5]=w[10]*w[5]*w[18];
   w[18]=w[14]*eta;
   w[19]= - w[14] + 2.E+0*w[18];
   w[20]=2.E+0*w[14];
   w[21]=w[20]*w[12];
   w[22]=w[21] + w[19];
   w[22]=w[22]*pow(w[2],3);
   w[20]= - w[13]*w[20];
   w[23]= - w[1]*w[2]*w[19];
   w[20]=w[20] + w[23];
   w[20]=w[4]*w[20];
   w[20]=w[22] + w[20];
   w[20]=w[20]*w[10];
   w[14]=w[18] - w[14];
   w[14]=w[14]*eta;
   w[18]=w[1]*w[14];
   w[22]=ssm*ssp;
   w[18]=w[18] + w[22];
   w[15]= - w[3]*w[15];
   w[15]=w[16] + w[15] - w[18];
   w[15]=w[4]*w[15];
   w[22]=w[3]*w[22];
   w[14]=w[14] + w[22];
   w[14]=w[14]*w[13];
   w[14]=w[14] + w[15];
   w[14]=w[14]*w[10];
   w[9]= - w[4]*w[9];
   w[12]=w[12] + eta;
   w[7]=w[7]*w[12];
   w[6]=w[6] + w[7];
   w[6]=w[6]*w[13];
   w[6]=w[6] + w[9];
   w[6]=8.E+0*i_*w[6];
   w[7]=3.E+0*w[19] + w[21];
   w[7]=w[2]*w[7];
   w[7]=w[16] + w[7] + 3.E+0*w[18];
   w[7]=w[7]*w[10];


K_lep[SI_amplitude(0,iq,izq)] = jacobians * weights * w[7];

if(n_dirac > 1){
K_lep[SI_amplitude(1,iq,izq)] = jacobians * weights * w[11];
if(n_dirac > 2){
K_lep[SI_amplitude(2,iq,izq)] = jacobians * weights * w[8];
if(n_dirac > 3){
K_lep[SI_amplitude(3,iq,izq)] = jacobians * weights * w[17];
if(n_dirac > 4){
K_lep[SI_amplitude(4,iq,izq)] = jacobians * weights * w[5];

K_lep[SI_amplitude(5,iq,izq)] = jacobians * weights * w[20];

K_lep[SI_amplitude(6,iq,izq)] = jacobians * weights * w[14];

K_lep[SI_amplitude(7,iq,izq)] = jacobians * weights * w[6];
}}}}
