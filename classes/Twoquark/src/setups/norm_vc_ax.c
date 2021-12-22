vec<cdouble> w(1000,0.);
cdouble i_(0.,1.);

    w[1]=P_K;
    w[2]=q_K;
    w[3]=P_q;
    w[4]=pow(K_K,-1);
    w[5]=q_q;
    w[6]=P_P;
    w[7]=K_K;
   w[8]=ssp*svm;
   w[9]=eta - 1.E+0;
   w[10]=w[9]*w[8];
   w[11]=ssm*svp;
   w[12]=eta*w[11];
   w[13]=w[10] - w[12];
   w[14]=w[13]*w[1];
   w[15]=w[8] - w[11];
   w[16]=w[15]*w[2];
   w[17]=w[14] + w[16];
   w[18]=1.2E+1*w[17];
   w[19]=pow(w[2],2);
   w[20]=w[19]*w[4];
   w[21]=w[17]*w[20];
   w[15]=w[15]*w[5];
   w[22]=w[13]*w[3];
   w[23]=w[15] + w[22];
   w[24]=w[23]*w[2];
   w[25]=w[21] + 2.E+0*w[24];
   w[25]=4.E+0*w[25];
   w[26]=w[2]*w[3];
   w[27]=svm*svp;
   w[28]=w[26]*w[27];
   w[29]=w[27]*w[5];
   w[30]=w[29]*w[1];
   w[28]=w[30] - w[28];
   w[30]=1.6E+1*w[28];
   w[8]=w[8] + w[11];
   w[11]=w[8]*w[2];
   w[10]=w[10] + w[12];
   w[12]=w[10]*w[1];
   w[11]=w[11] + w[12];
   w[12]=w[11]*w[2];
   w[31]=w[12]*w[4];
   w[32]=w[10]*w[3];
   w[8]=w[8]*w[5];
   w[32]=w[32] + w[8];
   w[31]=w[31] - w[32];
   w[31]=4.E+0*w[31];
   w[33]=2.E+0*eta;
   w[34]=w[33] - 1.E+0;
   w[34]=w[27]*w[34];
   w[35]=w[5]*w[1];
   w[36]=w[34]*w[35];
   w[9]=w[27]*w[9];
   w[33]=w[9]*w[33];
   w[37]=w[3]*w[1];
   w[38]=w[33]*w[37];
   w[39]=w[36] + w[38];
   w[40]=w[34]*w[3];
   w[41]=w[40] + 2.E+0*w[29];
   w[41]=w[41]*w[2];
   w[41]=w[41] + w[39];
   w[41]=w[41]*w[2];
   w[34]=w[34]*w[1];
   w[42]=w[27]*w[2];
   w[34]=w[42] + w[34];
   w[34]=w[34]*w[2];
   w[9]=w[9]*eta;
   w[42]=pow(w[1],2);
   w[43]=w[42]*w[9];
   w[34]=w[34] + w[43];
   w[43]=2.E+0*w[34];
   w[44]=w[43]*w[20];
   w[41]=w[41] - w[44];
   w[41]=4.E+0*w[41];
   w[44]=w[6]*w[9];
   w[45]=ssp*ssm;
   w[46]=w[45] - w[29];
   w[47]=w[44] + w[46];
   w[47]=w[47]*w[2];
   w[47]=w[47] - w[39];
   w[48]=w[47]*w[4]*w[2];
   w[49]=w[40] - w[46];
   w[50]=w[49]*w[5];
   w[51]=pow(w[3],2);
   w[52]=w[51]*w[33];
   w[53]=w[44]*w[5];
   w[54]=w[52] - w[53];
   w[55]=w[50] + w[54];
   w[48]=w[48] + w[55];
   w[48]=4.E+0*w[48];
   w[16]=w[16]*w[5];
   w[56]=w[13]*w[35];
   w[16]= - w[16] + w[21] - w[56];
   w[16]=8.E+0*w[16];
   w[21]=w[40] + w[44];
   w[57]=3.E+0*w[45];
   w[58]= - w[29] + w[57] - w[21];
   w[58]=w[7]*w[58];
   w[34]=4.E+0*w[34] + w[58];
   w[34]=4.E+0*w[34];
   w[57]=w[57] + w[40];
   w[58]=3.E+0*w[29];
   w[59]= - w[44] + w[57] + w[58];
   w[59]=w[59]*w[2];
   w[59]=w[59] + 2.E+0*w[39];
   w[60]=4.E+0*w[2];
   w[59]=w[59]*w[60];
   w[60]=w[32]*w[7];
   w[12]=w[60] - w[12];
   w[12]=1.6E+1*w[12];
   w[60]=4.E+0*w[28];
   w[61]=w[17]*w[19];
   w[24]=w[24]*w[7];
   w[61]=w[61] - w[24];
   w[61]=4.E+0*w[61];
   w[13]=w[13]*w[26];
   w[62]=w[13] - w[56];
   w[63]=4.E+0*w[62];
   w[40]=w[29] + w[40] + w[45];
   w[64]=w[40]*w[5];
   w[54]=w[54] + w[64];
   w[65]=w[54]*w[7];
   w[40]=w[40] - w[44];
   w[40]=w[40]*w[2];
   w[37]=w[37]*w[9];
   w[37]=w[40] + 4.E+0*w[37];
   w[37]=w[37]*w[2];
   w[40]=w[42]*w[5];
   w[42]=w[33]*w[40];
   w[37]=w[37] - w[42];
   w[65]=w[65] - w[37];
   w[65]=8.E+0*w[65];
   w[37]=w[37]*w[20];
   w[51]=w[51]*w[9];
   w[66]=w[51] + w[64];
   w[67]=w[66]*w[19];
   w[67]=2.E+0*w[67] + w[37];
   w[67]=4.E+0*w[67];
   w[68]=w[10]*w[26];
   w[10]=w[10]*w[35];
   w[68]=w[68] - w[10];
   w[69]=1.6E+1*w[2];
   w[68]=w[68]*w[69];
   w[28]=w[28]*w[20];
   w[69]=4.E+0*w[28];
   w[70]=pow(w[2],3);
   w[23]=w[70]*w[23];
   w[71]=w[4]*pow(w[2],4);
   w[17]=w[71]*w[17];
   w[23]=w[23] - w[17];
   w[23]=4.E+0*w[23];
   w[62]=w[62]*w[20];
   w[72]=4.E+0*w[62];
   w[54]=w[54]*w[19];
   w[54]=w[37] - w[54];
   w[54]=8.E+0*w[54];
   w[73]= - w[2]*w[49];
   w[38]= - w[38] + w[73];
   w[38]=w[2]*w[38];
   w[51]=w[51] + w[50];
   w[51]=w[7]*w[51];
   w[40]=w[9]*w[40];
   w[38]=w[51] + w[40] + w[38];
   w[38]=3.2E+1*w[38];
   w[40]=w[44] + w[49];
   w[40]=w[40]*w[20];
   w[40]=w[40] - w[50] - w[53];
   w[40]=4.E+0*w[40];
   w[8]=w[8]*w[2];
   w[8]=w[8] + w[10];
   w[8]=w[8]*w[2];
   w[10]=w[70]*w[4];
   w[11]=w[10]*w[11];
   w[8]=w[8] - w[11];
   w[8]=4.E+0*w[8];
   w[11]=w[20] - w[5];
   w[11]=w[11]*w[32];
   w[11]=4.E+0*w[11];
   w[26]=w[26]*w[29];
   w[32]=pow(w[5],2);
   w[27]=w[1]*w[32]*w[27];
   w[26]=w[28] + w[26] - w[27];
   w[26]=8.E+0*w[26];
   w[21]=w[58] + w[45] + w[21];
   w[21]=w[2]*w[21];
   w[21]=2.E+0*w[36] + w[21];
   w[21]=w[2]*w[21];
   w[27]= - w[64] - w[53];
   w[27]=w[7]*w[27];
   w[21]=w[27] + w[42] + w[21];
   w[21]=w[19]*w[21];
   w[27]= - w[71]*w[43];
   w[21]=w[27] + w[21];
   w[21]=4.E+0*w[21];
   w[27]=w[46]*w[5];
   w[27]=w[27] + w[53];
   w[27]=w[27]*w[2];
   w[28]=w[39]*w[5];
   w[27]=w[27] - w[28];
   w[27]=w[27]*w[2];
   w[10]=w[47]*w[10];
   w[10]=w[27] - w[10];
   w[10]=4.E+0*w[10];
   w[15]=w[22] + 2.E+0*w[15];
   w[15]=w[15]*w[2];
   w[15]=w[15] + w[56];
   w[15]=w[15]*w[19];
   w[19]=w[24]*w[5];
   w[15]=w[15] - w[19] - w[17];
   w[15]=8.E+0*w[15];
   w[17]= - w[55]*w[20];
   w[19]=w[52] + w[50];
   w[19]=w[5]*w[19];
   w[20]=w[32]*w[44];
   w[17]=w[17] + w[19] - w[20];
   w[17]=4.E+0*w[17];
   w[13]=w[13]*w[5];
   w[14]=w[32]*w[14];
   w[13]= - w[62] + w[13] - w[14];
   w[13]=8.E+0*w[13];
   w[14]=w[53] - w[66];
   w[14]=w[2]*w[14];
   w[19]= - w[3]*w[35]*w[33];
   w[14]=w[19] + w[14];
   w[14]=w[2]*w[14];
   w[9]=pow(w[35],2)*w[9];
   w[9]=w[9] + w[14];
   w[14]=w[52] + w[64];
   w[14]=w[5]*w[14];
   w[14]=w[14] - w[20];
   w[14]=w[7]*w[14];
   w[9]=w[14] + 2.E+0*w[9] + w[37];
   w[9]=1.6E+1*w[9];
   w[14]= - w[4]*w[43];
   w[14]=w[14] - w[57] - w[44] - w[29];
   w[14]=4.E+0*w[14];


K_norm[SI_K_norm(0,0,iq,iz)] = wj * w[14];

if(n_dirac > 1){

K_norm[SI_K_norm(0,1,iq,iz)] = wj * w[18];

K_norm[SI_K_norm(1,0,iq,iz)] = wj * w[18];

K_norm[SI_K_norm(1,1,iq,iz)] = wj * w[34];

if(n_dirac > 2){

K_norm[SI_K_norm(0,2,iq,iz)] = wj *  - w[25];

K_norm[SI_K_norm(1,2,iq,iz)] = wj *  - w[59];

K_norm[SI_K_norm(2,0,iq,iz)] = wj *  - w[25];

K_norm[SI_K_norm(2,1,iq,iz)] = wj *  - w[59];

K_norm[SI_K_norm(2,2,iq,iz)] = wj * w[67];

if(n_dirac > 3){

K_norm[SI_K_norm(0,3,iq,iz)] = wj *  - w[30];

K_norm[SI_K_norm(1,3,iq,iz)] = wj * w[12];

K_norm[SI_K_norm(2,3,iq,iz)] = wj *  - w[68];

K_norm[SI_K_norm(3,0,iq,iz)] = wj *  - w[30];

K_norm[SI_K_norm(3,1,iq,iz)] = wj * w[12];

K_norm[SI_K_norm(3,2,iq,iz)] = wj *  - w[68];

K_norm[SI_K_norm(3,3,iq,iz)] = wj * w[38];

if(n_dirac > 4){

K_norm[SI_K_norm(0,4,iq,iz)] = wj *  - w[31];

K_norm[SI_K_norm(0,5,iq,iz)] = wj * w[41];

K_norm[SI_K_norm(0,6,iq,iz)] = wj *  - w[48];

K_norm[SI_K_norm(0,7,iq,iz)] = wj * w[16];

K_norm[SI_K_norm(1,4,iq,iz)] = wj * w[60];

K_norm[SI_K_norm(1,5,iq,iz)] = wj * w[61];

K_norm[SI_K_norm(1,6,iq,iz)] = wj * w[63];

K_norm[SI_K_norm(1,7,iq,iz)] = wj *  - w[65];

K_norm[SI_K_norm(2,4,iq,iz)] = wj *  - w[69];

K_norm[SI_K_norm(2,5,iq,iz)] = wj * w[23];

K_norm[SI_K_norm(2,6,iq,iz)] = wj *  - w[72];

K_norm[SI_K_norm(2,7,iq,iz)] = wj *  - w[54];

K_norm[SI_K_norm(3,4,iq,iz)] = wj *  0.;

K_norm[SI_K_norm(3,5,iq,iz)] = wj *  0.;

K_norm[SI_K_norm(3,6,iq,iz)] = wj *  0.;

K_norm[SI_K_norm(3,7,iq,iz)] = wj *  0.;

K_norm[SI_K_norm(4,0,iq,iz)] = wj *  - w[31];

K_norm[SI_K_norm(4,1,iq,iz)] = wj * w[60];

K_norm[SI_K_norm(4,2,iq,iz)] = wj *  - w[69];

K_norm[SI_K_norm(4,3,iq,iz)] = wj *  0.;

K_norm[SI_K_norm(4,4,iq,iz)] = wj * w[40];

K_norm[SI_K_norm(4,5,iq,iz)] = wj * w[8];

K_norm[SI_K_norm(4,6,iq,iz)] = wj * w[11];

K_norm[SI_K_norm(4,7,iq,iz)] = wj * w[26];

K_norm[SI_K_norm(5,0,iq,iz)] = wj * w[41];

K_norm[SI_K_norm(5,1,iq,iz)] = wj * w[61];

K_norm[SI_K_norm(5,2,iq,iz)] = wj * w[23];

K_norm[SI_K_norm(5,3,iq,iz)] = wj *  0.;

K_norm[SI_K_norm(5,4,iq,iz)] = wj * w[8];

K_norm[SI_K_norm(5,5,iq,iz)] = wj * w[21];

K_norm[SI_K_norm(5,6,iq,iz)] = wj * w[10];

K_norm[SI_K_norm(5,7,iq,iz)] = wj *  - w[15];

K_norm[SI_K_norm(6,0,iq,iz)] = wj *  - w[48];

K_norm[SI_K_norm(6,1,iq,iz)] = wj * w[63];

K_norm[SI_K_norm(6,2,iq,iz)] = wj *  - w[72];

K_norm[SI_K_norm(6,3,iq,iz)] = wj *  0.;

K_norm[SI_K_norm(6,4,iq,iz)] = wj * w[11];

K_norm[SI_K_norm(6,5,iq,iz)] = wj * w[10];

K_norm[SI_K_norm(6,6,iq,iz)] = wj * w[17];

K_norm[SI_K_norm(6,7,iq,iz)] = wj *  - w[13];

K_norm[SI_K_norm(7,0,iq,iz)] = wj * w[16];

K_norm[SI_K_norm(7,1,iq,iz)] = wj *  - w[65];

K_norm[SI_K_norm(7,2,iq,iz)] = wj *  - w[54];

K_norm[SI_K_norm(7,3,iq,iz)] = wj *  0.;

K_norm[SI_K_norm(7,4,iq,iz)] = wj * w[26];

K_norm[SI_K_norm(7,5,iq,iz)] = wj *  - w[15];

K_norm[SI_K_norm(7,6,iq,iz)] = wj *  - w[13];

K_norm[SI_K_norm(7,7,iq,iz)] = wj * w[9];
}}}}
