
FCtr = 4./3.;

p1 = l_l+q_q/4.+Q_Q/16.-q_l-Q_q/4.+Q_l/2.;
p2 = l_l+q_q/4.+Q_Q/16.-q_l+Q_q/4.-Q_l/2.;

ampl  =
meson_11.interpolateComplex(p1)*
meson_12.interpolateComplex(p2);

ampl  =
quark_1.interpolate_shell("B",p1)*quark_1.interpolate_shell("B",p2)/(0.093*0.093);

v.resize(10000,0.);


    v[1]=1./(-Q_Q*Q_p*p_p+pow(Q_p,3));
    v[2]=Q_Q;
    v[3]=Q_p;
    v[4]=p_q;
    v[5]=p_l;
    v[6]=Q_q;
    v[7]=p_p;
    v[8]=Q_l;
    v[9]=l_l;
    v[10]=q_l;
    v[11]=1./(p_p-2.E+0*p_l+l_l);
    v[12]=1./(-Q_Q*p_p+pow(Q_p,2));
    v[13]=1./(-1.6E+1*Q_Q*p_p+1.6E+1*pow(Q_p,2));
   v[14]=v[9]*v[11];
   v[15]=v[14]+2.E+0;
   v[15]=v[15]*v[9];
   v[16]=4.E+0*v[10];
   v[15]=v[15]-v[16];
   v[17]=v[11]*v[10];
   v[18]=2.E+0*v[17];
   v[19]=v[18]-v[14];
   v[20]=v[19]*v[7];
   v[21]=v[15]+v[20];
   v[22]=-v[5]*v[21];
   v[23]=v[7]*v[11];
   v[24]=5.E-1*v[23];
   v[25]=v[24]-1.E+0;
   v[26]=5.E-1*v[14];
   v[27]=-v[26]+v[17]+v[25];
   v[27]=v[5]*v[27];
   v[28]=v[26]+v[24];
   v[29]=v[28]-1.E+0;
   v[30]=-v[4]*v[29];
   v[27]=v[27]+v[30];
   v[30]=5.E-1*v[2];
   v[27]=v[27]*v[30];
   v[31]=v[5]*v[11];
   v[32]=v[31]+v[23];
   v[33]=v[32]*v[8];
   v[32]=-v[6]*v[32];
   v[32]=v[32]+v[33];
   v[32]=v[8]*v[32];
   v[34]=v[14]-2.E+0;
   v[34]=v[34]*v[9];
   v[35]=v[14]*v[7];
   v[36]=v[34]+v[35];
   v[37]=v[4]*v[36];
   v[38]=v[29]*v[3];
   v[39]=v[8]-v[6];
   v[40]=-v[39]*v[38];
   v[22]=v[40]+v[32]+v[27]+v[22]+v[37];
   v[22]=v[3]*v[22];
   v[27]=v[7]*v[21];
   v[25]=1.5E+0*v[14]-v[17]+v[25];
   v[32]=5.E-1*v[7];
   v[25]=v[25]*v[32];
   v[32]=v[23]*v[5];
   v[37]=v[4]*v[24];
   v[25]=v[37]+v[25]-v[32];
   v[25]=v[2]*v[25];
   v[37]=2.E+0*v[7];
   v[40]=v[37]*v[14];
   v[41]=-v[4]*v[40];
   v[42]=v[23]*v[8];
   v[43]=v[6]*v[23];
   v[43]=v[43]-v[42];
   v[43]=v[8]*v[43];
   v[25]=v[43]+v[25]+v[27]+v[41];
   v[25]=v[8]*v[25];
   v[27]=-v[7]*v[36];
   v[41]=v[5]*v[40];
   v[29]=v[29]*v[7];
   v[29]=v[29]-v[32];
   v[43]=-v[29]*v[30];
   v[27]=v[43]+v[27]+v[41];
   v[27]=v[6]*v[27];
   v[22]=v[22]+v[27]+v[25];
   v[25]=svlp*svlm;
   v[22]=v[22]*v[25];
   v[27]=v[23]-v[14];
   v[41]=v[17]-1.E+0;
   v[43]=2.E+0*v[41];
   v[44]=v[43]+v[27];
   v[45]=-v[5]*v[44];
   v[46]=v[23]+v[14];
   v[47]=v[46]-2.E+0;
   v[48]=v[4]*v[47];
   v[45]=v[45]+v[48];
   v[45]=v[3]*v[45];
   v[48]=-v[7]*v[47];
   v[32]=v[48]+2.E+0*v[32];
   v[32]=v[6]*v[32];
   v[48]=v[7]*v[44];
   v[49]=2.E+0*v[23];
   v[50]=-v[4]*v[49];
   v[48]=v[48]+v[50];
   v[48]=v[8]*v[48];
   v[32]=v[45]+v[32]+v[48];
   v[45]=sslm*sslp;
   v[32]=v[32]*v[45];
   v[22]=v[22]+v[32];
   v[32]=svll*PM12m;
   v[22]=v[32]*v[22];
   v[33]=v[38]-v[33];
   v[38]=v[27]-2.E+0;
   v[48]=v[38]*v[5];
   v[50]=v[48]-v[33];
   v[50]=v[3]*v[50];
   v[29]=v[29]*v[2];
   v[51]=v[38]*v[7];
   v[52]=-v[51]-v[42];
   v[52]=v[8]*v[52];
   v[50]=v[50]+v[29]+v[52];
   v[52]=sslp*svlm;
   v[50]=v[50]*v[52];
   v[33]=v[48]+v[33];
   v[33]=v[3]*v[33];
   v[42]=-v[51]+v[42];
   v[42]=v[8]*v[42];
   v[29]=v[33]-v[29]+v[42];
   v[33]=sslm*svlp;
   v[29]=v[29]*v[33];
   v[29]=v[50]+v[29];
   v[42]=PM12m*ssll;
   v[29]=v[42]*v[29];
   v[22]=v[29]+v[22];
   v[29]=ampl*PM11p*Gmt;
   v[22]=v[29]*v[1]*v[22];
   v[17]=v[17]-v[14];
   v[48]=v[17]*v[7];
   v[50]=v[28]-v[41];
   v[50]=v[5]*v[50];
   v[51]=v[26]-1.E+0;
   v[24]=-v[24]+v[51];
   v[24]=v[4]*v[24];
   v[24]=v[24]+v[48]+v[50];
   v[24]=v[24]*v[30];
   v[15]=-v[20]+v[15];
   v[15]=v[5]*v[15];
   v[20]=v[17]*v[37];
   v[37]=v[9]*v[20];
   v[34]=-v[34]+v[35];
   v[34]=v[4]*v[34];
   v[15]=v[24]+v[34]+v[37]+v[15];
   v[15]=v[2]*v[15];
   v[24]=1.5E+0*v[23];
   v[26]=-v[24]-v[26]+v[41];
   v[34]=5.E-1*v[11];
   v[34]=-v[4]*v[34];
   v[26]=v[34]+5.E-1*v[26]+v[31];
   v[26]=v[2]*v[26];
   v[34]=v[6]*v[11];
   v[37]=v[8]*v[11];
   v[34]=v[34]-v[37];
   v[41]=-v[8]*v[34];
   v[50]=v[14]*v[4];
   v[21]=v[41]+v[26]+2.E+0*v[50]-v[21];
   v[21]=v[8]*v[21];
   v[26]=-v[9]*v[17];
   v[19]=v[5]*v[19];
   v[19]=-v[50]+v[26]+v[19];
   v[26]=v[4]*v[11];
   v[41]=v[31]+v[17]-v[26];
   v[53]=-v[41]*v[30];
   v[54]=2.E+0*v[8];
   v[55]=-v[3]+v[54];
   v[34]=v[34]*v[55];
   v[19]=2.E+0*v[19]+v[53]+v[34];
   v[19]=v[3]*v[19];
   v[24]=-v[31]+v[24]-v[51];
   v[24]=v[24]*v[30];
   v[30]=2.E+0*v[14];
   v[34]=v[30]*v[5];
   v[24]=v[24]-v[34]+v[36];
   v[24]=v[6]*v[24];
   v[19]=v[19]+v[24]+v[21];
   v[19]=v[3]*v[19];
   v[21]=v[31]-v[23];
   v[24]=v[21]*v[2];
   v[36]=v[24]*v[8];
   v[51]=v[6]*v[24];
   v[51]=v[51]-v[36];
   v[51]=v[8]*v[51];
   v[15]=v[19]+v[15]+v[51];
   v[15]=v[15]*v[25];
   v[19]=v[43]-v[46];
   v[19]=v[5]*v[19];
   v[43]=2.E+0+v[27];
   v[43]=v[4]*v[43];
   v[19]=v[43]-v[20]+v[19];
   v[19]=v[2]*v[19];
   v[41]=v[3]*v[41];
   v[43]=2.E+0*v[31];
   v[47]=-v[43]+v[47];
   v[47]=v[6]*v[47];
   v[51]=2.E+0*v[11];
   v[51]=v[51]*v[4];
   v[44]=v[51]-v[44];
   v[44]=v[8]*v[44];
   v[41]=2.E+0*v[41]+v[47]+v[44];
   v[41]=v[3]*v[41];
   v[19]=v[19]+v[41];
   v[19]=v[19]*v[45];
   v[15]=v[15]+v[19];
   v[15]=v[15]*v[32];
   v[19]=v[37]+v[38];
   v[19]=v[8]*v[19];
   v[41]=v[31]-v[14];
   v[44]=-v[37]-v[41];
   v[47]=v[3]*v[11];
   v[44]=2.E+0*v[44]+v[47];
   v[44]=v[3]*v[44];
   v[19]=v[44]+v[24]+v[19];
   v[19]=v[3]*v[19];
   v[44]=v[46]+2.E+0;
   v[44]=v[44]*v[5];
   v[44]=v[44]-v[40];
   v[44]=v[44]*v[2];
   v[19]=v[19]+v[44]-v[36];
   v[19]=v[19]*v[52];
   v[38]=-v[37]+v[38];
   v[38]=v[8]*v[38];
   v[37]=v[37]-v[41];
   v[37]=2.E+0*v[37]-v[47];
   v[37]=v[3]*v[37];
   v[24]=v[37]-v[24]+v[38];
   v[24]=v[3]*v[24];
   v[24]=v[24]+v[44]+v[36];
   v[24]=v[24]*v[33];
   v[19]=v[19]+v[24];
   v[19]=v[19]*v[42];
   v[15]=v[19]+v[15];
   v[15]=v[12]*v[15]*v[29];
   v[19]=v[27]*v[4];
   v[18]=v[18]-v[46];
   v[24]=v[18]*v[5];
   v[19]=v[19]+v[24]-v[20];
   v[19]=v[19]*v[2];
   v[18]=-v[43]+v[51]+v[18];
   v[18]=v[18]*v[8];
   v[20]=v[27]*v[6];
   v[24]=2.E+0*v[17];
   v[27]=v[24]*v[3];
   v[18]=v[18]+v[20]-v[27];
   v[20]=v[31]*v[10];
   v[20]=v[20]-v[50];
   v[20]=4.E+0*v[20];
   v[27]=v[20]+v[18];
   v[27]=v[3]*v[27];
   v[36]=v[46]*v[5];
   v[36]=v[36]-v[40];
   v[37]=v[36]*v[6];
   v[37]=2.E+0*v[37];
   v[23]=v[26]-v[23];
   v[23]=v[23]*v[8];
   v[21]=v[21]*v[6];
   v[21]=v[23]-v[21];
   v[23]=v[46]*v[4];
   v[26]=v[49]*v[10];
   v[23]=v[23]-v[26];
   v[26]=v[23]-v[21];
   v[26]=v[26]*v[54];
   v[26]=v[27]+v[26]-v[19]-v[37];
   v[26]=v[26]*v[52];
   v[18]=-v[20]+v[18];
   v[18]=v[3]*v[18];
   v[20]=-v[23]-v[21];
   v[20]=v[20]*v[54];
   v[18]=v[18]+v[20]-v[19]+v[37];
   v[18]=v[18]*v[33];
   v[18]=v[26]+v[18];
   v[18]=v[32]*v[18];
   v[19]=-v[2]*v[36];
   v[20]=v[43]+v[46];
   v[20]=v[8]*v[20];
   v[21]=-v[3]*v[30];
   v[20]=v[20]+v[21];
   v[20]=v[3]*v[20];
   v[21]=-pow(v[8],2)*v[49];
   v[19]=v[20]+v[19]+v[21];
   v[19]=v[19]*v[42]*v[25];
   v[18]=2.E+0*v[19]+v[18];
   v[18]=4.E+0*v[29]*v[13]*v[18];
   v[17]=v[17]+4.E+0;
   v[17]=v[17]*v[9];
   v[19]=v[24]*v[5];
   v[16]=v[17]-v[19]+v[48]-v[16];
   v[17]=-v[31]+v[28]-2.E+0;
   v[17]=-v[17]*v[39];
   v[19]=-v[17]+v[16];
   v[19]=v[19]*v[52];
   v[16]=v[17]+v[16];
   v[16]=v[16]*v[33];
   v[16]=v[19]+v[16];
   v[16]=v[16]*v[32];
   v[17]=5.E-1*v[31]+1.E+0-2.5E-1*v[46];
   v[17]=v[2]*v[17];
   v[14]=-4.E+0+v[14];
   v[14]=v[9]*v[14];
   v[14]=v[17]-v[34]+v[14]+v[35];
   v[14]=v[14]*v[25];
   v[17]=v[43]+4.E+0-v[46];
   v[17]=v[17]*v[45];
   v[14]=v[14]+v[17];
   v[14]=v[14]*v[42];
   v[14]=v[14]+v[16];
   v[14]=v[14]*v[29];


K41[SI_K41(ip,izp,0,iq,izq,0)] += - quark_2.getZ2() * quark_2.getZ2() * prefactor_2l * wj * FCtr * v[14];
K41[SI_K41(ip,izp,1,iq,izq,0)] += - quark_2.getZ2() * quark_2.getZ2() * prefactor_2l * wj * FCtr * v[22];
K41[SI_K41(ip,izp,2,iq,izq,0)] += - quark_2.getZ2() * quark_2.getZ2() * prefactor_2l * wj * FCtr * v[15];
K41[SI_K41(ip,izp,3,iq,izq,0)] += - quark_2.getZ2() * quark_2.getZ2() * prefactor_2l * wj * FCtr * v[18];
v.clear();