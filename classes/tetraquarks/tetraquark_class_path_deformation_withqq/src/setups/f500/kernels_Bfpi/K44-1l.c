
FCtr = 4./3.;

v.resize(1000,0.);


    v[1]=1./(-Q_Q*Q_p*p_p+pow(Q_p,3));
    v[2]=Q_Q;
    v[3]=p_p;
    v[4]=Q_p;
    v[5]=p_q;
    v[6]=Q_q;
    v[7]=1./(p_p-2.E+0*p_q+q_q);
    v[8]=q_q;
    v[9]=1./(-Q_Q*p_p+pow(Q_p,2));
    v[10]=1./(-1.6E+1*Q_Q*p_p+1.6E+1*pow(Q_p,2));
   v[11]=svqp*Gmt;
   v[12]=v[11]*ssqm;
   v[13]=ssqp*Gmt;
   v[14]=svqm*v[13];
   v[15]=v[12]+v[14];
   v[16]=2.E+0*v[15];
   v[17]=v[8]*v[7];
   v[18]=v[15]*v[17];
   v[19]=v[16]+v[18];
   v[20]=v[3]*v[7];
   v[21]=v[15]*v[20];
   v[22]=v[19]-v[21];
   v[12]=v[12]-v[14];
   v[14]=v[6]*v[7];
   v[23]=v[14]*v[12];
   v[24]=v[22]+v[23];
   v[25]=-v[5]*v[24];
   v[17]=v[12]*v[17];
   v[20]=v[12]*v[20];
   v[26]=v[17]+v[20];
   v[27]=5.E-1*v[26];
   v[28]=v[27]-v[12];
   v[29]=v[4]*v[28];
   v[30]=v[20]*v[6];
   v[25]=v[29]-v[30]+v[25];
   v[25]=v[4]*v[25];
   v[29]=v[3]*v[22];
   v[29]=v[29]+v[30];
   v[29]=v[6]*v[29];
   v[28]=-v[3]*v[28];
   v[31]=v[5]*v[20];
   v[28]=v[28]+v[31];
   v[28]=v[2]*v[28];
   v[25]=v[28]+v[29]+v[25];
   v[25]=v[1]*v[25];
   v[19]=v[19]+v[21];
   v[28]=v[23]+v[19];
   v[28]=v[5]*v[28];
   v[29]=v[12]*v[7];
   v[31]=-v[5]*v[29];
   v[31]=v[20]+v[31];
   v[31]=v[4]*v[31];
   v[32]=2.E+0*v[8];
   v[33]=v[32]*v[21];
   v[28]=v[31]+v[28]-v[33]-v[30];
   v[28]=v[2]*v[28];
   v[24]=-v[6]*v[24];
   v[31]=v[7]*v[15]*v[5];
   v[31]=v[31]-v[18];
   v[34]=v[23]-v[31];
   v[35]=-v[4]*v[29];
   v[34]=2.E+0*v[34]+v[35];
   v[34]=v[4]*v[34];
   v[24]=v[24]+v[34];
   v[24]=v[4]*v[24];
   v[24]=v[24]+v[28];
   v[24]=v[9]*v[24];
   v[28]=2.E+0*v[4];
   v[11]=v[11]*svqm;
   v[34]=v[7]*v[11];
   v[35]=v[34]*v[8];
   v[36]=v[28]*v[35];
   v[37]=v[5]*v[6];
   v[38]=2.E+0*v[37];
   v[39]=v[38]*v[34];
   v[40]=v[34]*v[3];
   v[41]=v[40]+v[35];
   v[42]=v[41]*v[6];
   v[36]=-v[36]+v[39]+v[42];
   v[36]=v[36]*v[4];
   v[39]=2.E+0*v[3];
   v[42]=v[39]*v[35];
   v[43]=v[41]*v[5];
   v[42]=v[42]-v[43];
   v[42]=v[42]*v[2];
   v[36]=v[36]+v[42];
   v[42]=pow(v[6],2);
   v[43]=v[40]*v[42];
   v[44]=-2.E+0*v[43]+v[36];
   v[45]=8.E+0*v[10];
   v[44]=v[44]*v[45];
   v[46]=v[18]+v[21];
   v[47]=v[46]-4.E+0*v[15];
   v[48]=v[47]*v[42];
   v[12]=2.E+0*v[12];
   v[27]=v[27]-v[12];
   v[27]=v[27]*v[6];
   v[29]=v[29]*v[37];
   v[49]=v[27]-v[29];
   v[49]=v[2]*v[49];
   v[50]=v[42]*v[5];
   v[51]=v[50]*v[7];
   v[52]=-v[16]*v[51];
   v[48]=v[49]+v[48]+v[52];
   v[13]=ssqm*v[13];
   v[49]=v[13]*v[7];
   v[52]=v[49]+v[35];
   v[53]=2.E+0*v[11];
   v[54]=v[53]-v[52];
   v[54]=v[54]*v[8];
   v[55]=v[52]*v[3];
   v[56]=2.E+0*v[13];
   v[54]=v[54]+v[56]-v[55];
   v[57]=v[3]*v[54];
   v[57]=v[57]+5.E-1*v[43];
   v[57]=v[6]*v[57];
   v[58]=5.E-1*v[40];
   v[59]=v[58]-v[11];
   v[60]=5.E-1*v[35];
   v[61]=v[59]+v[60];
   v[62]=v[4]*v[6];
   v[63]=v[61]*v[62];
   v[63]=v[63]-v[43];
   v[64]=v[42]*v[34];
   v[65]=v[64]*v[5];
   v[66]=-v[65]+v[63];
   v[67]=5.E-1*v[4];
   v[66]=v[66]*v[67];
   v[68]=v[37]*v[40];
   v[69]=v[6]*v[3];
   v[61]=-v[61]*v[69];
   v[61]=v[61]+v[68];
   v[70]=5.E-1*v[2];
   v[61]=v[61]*v[70];
   v[71]=v[55]*v[38];
   v[57]=v[61]+v[66]+v[57]+v[71];
   v[57]=v[2]*v[57];
   v[61]=-v[42]*v[55];
   v[66]=v[53]-v[49];
   v[71]=v[66]-v[40];
   v[72]=v[71]*v[50];
   v[61]=v[61]+v[72];
   v[54]=-v[54]*v[62];
   v[54]=2.E+0*v[61]+v[54];
   v[54]=v[4]*v[54];
   v[61]=pow(v[6],3);
   v[71]=v[71]*v[61];
   v[39]=-v[39]*v[71];
   v[39]=v[57]+v[39]+v[54];
   v[39]=v[1]*v[39];
   v[54]=5.E-1*v[34];
   v[57]=-v[42]*v[54];
   v[57]=2.E+0*v[55]+v[57];
   v[57]=v[6]*v[57];
   v[72]=-v[54]*v[62];
   v[72]=v[64]+v[72];
   v[72]=v[4]*v[72];
   v[38]=v[38]*v[52];
   v[57]=v[72]+v[57]-v[38];
   v[57]=v[4]*v[57];
   v[72]=v[37]*v[34];
   v[73]=v[6]*v[40];
   v[73]=v[73]-v[72];
   v[73]=v[4]*v[73];
   v[73]=v[73]-v[43]+v[65];
   v[73]=v[73]*v[70];
   v[74]=v[49]-v[35];
   v[75]=v[74]*v[3];
   v[76]=-v[42]*v[75];
   v[66]=-v[40]-v[66];
   v[50]=v[66]*v[50];
   v[50]=v[76]+v[50];
   v[50]=v[73]+2.E+0*v[50]+v[57];
   v[50]=v[2]*v[50];
   v[49]=v[42]*v[49];
   v[49]=v[49]+v[65];
   v[57]=-v[52]*v[62];
   v[49]=2.E+0*v[49]+v[57];
   v[49]=v[4]*v[49];
   v[49]=v[71]+v[49];
   v[49]=v[49]*v[28];
   v[49]=v[49]+v[50];
   v[49]=v[9]*v[49];
   v[50]=-v[26]*v[42];
   v[51]=-v[12]*v[51];
   v[57]=v[6]*v[17]*v[28];
   v[50]=v[57]+v[50]+v[51];
   v[50]=v[4]*v[50];
   v[26]=v[26]*v[37];
   v[30]=-v[32]*v[30];
   v[26]=v[30]+v[26];
   v[26]=v[2]*v[26];
   v[30]=v[61]*v[20];
   v[26]=v[26]+2.E+0*v[30]+v[50];
   v[26]=v[26]*v[45];
   v[30]=v[8]*v[47];
   v[23]=-2.E+0*v[18]-v[23];
   v[23]=v[5]*v[23];
   v[23]=v[23]+v[27]+v[30];
   v[27]=v[53]-v[74];
   v[27]=v[27]*v[8];
   v[27]=v[27]-v[56];
   v[30]=v[27]+v[75];
   v[45]=v[30]-v[64];
   v[47]=v[5]*v[45];
   v[47]=v[47]+v[63];
   v[47]=v[4]*v[47];
   v[50]=-1.5E+0*v[35]-v[59];
   v[50]=v[50]*v[69];
   v[51]=v[60]-v[59];
   v[51]=v[5]*v[51]*v[67];
   v[50]=v[51]+5.E-1*v[50]+v[68];
   v[50]=v[2]*v[50];
   v[30]=-v[3]*v[30];
   v[30]=v[30]+v[43];
   v[30]=v[6]*v[30];
   v[30]=v[50]+v[30]+v[47];
   v[30]=v[1]*v[30];
   v[27]=v[75]-v[27]+v[64];
   v[27]=v[5]*v[27];
   v[47]=v[60]+v[11];
   v[40]=1.5E+0*v[40]+v[47];
   v[50]=5.E-1*v[6];
   v[40]=v[40]*v[50];
   v[50]=v[5]*v[34];
   v[50]=-v[35]+v[50];
   v[50]=v[50]*v[67];
   v[40]=v[50]+v[40]-v[72];
   v[40]=v[4]*v[40];
   v[50]=-v[32]*v[75];
   v[47]=-v[58]-v[47];
   v[47]=v[5]*v[47];
   v[51]=v[3]*v[35];
   v[47]=v[51]+v[47];
   v[47]=v[47]*v[70];
   v[27]=v[47]+v[40]+v[27]+v[50]-v[43];
   v[27]=v[2]*v[27];
   v[40]=v[6]*v[45];
   v[45]=-v[5]+v[8];
   v[45]=v[74]*v[45];
   v[45]=v[64]+v[45];
   v[34]=-v[34]*v[62];
   v[34]=2.E+0*v[45]+v[34];
   v[34]=v[4]*v[34];
   v[34]=v[40]+v[34];
   v[34]=v[4]*v[34];
   v[27]=v[34]+v[27];
   v[27]=v[9]*v[27];
   v[34]=v[6]*v[46];
   v[40]=v[37]*v[16]*v[7];
   v[18]=-v[18]*v[28];
   v[18]=v[18]+v[34]+v[40];
   v[18]=v[4]*v[18];
   v[34]=-v[5]*v[46];
   v[34]=v[33]+v[34];
   v[34]=v[2]*v[34];
   v[40]=2.E+0*v[42];
   v[45]=-v[21]*v[40];
   v[18]=v[34]+v[45]+v[18];
   v[34]=4.E+0*v[10];
   v[18]=v[18]*v[34];
   v[45]=2.E+0*v[5];
   v[47]=v[45]-v[3];
   v[47]=v[35]*v[47];
   v[50]=4.E+0*v[11];
   v[35]=v[50]-v[35];
   v[35]=v[8]*v[35];
   v[35]=v[35]+v[47];
   v[35]=v[2]*v[35];
   v[47]=-v[50]+v[41];
   v[47]=v[47]*v[42];
   v[51]=-v[64]*v[45];
   v[35]=v[35]+v[47]+v[51];
   v[35]=2.E+0*v[35];
   v[32]=v[32]*v[20];
   v[47]=v[21]*v[6];
   v[32]=v[32]+v[47];
   v[51]=-v[6]*v[32];
   v[12]=v[12]-v[17];
   v[14]=v[14]*v[15];
   v[15]=v[12]-v[14];
   v[53]=v[15]-v[20];
   v[56]=v[53]*v[37];
   v[51]=v[51]+v[56];
   v[56]=v[12]*v[8];
   v[57]=v[20]*v[8];
   v[56]=v[56]-v[57];
   v[16]=-v[16]+v[46];
   v[16]=v[6]*v[16];
   v[16]=-2.E+0*v[56]+v[16];
   v[16]=v[4]*v[16];
   v[16]=2.E+0*v[51]+v[16];
   v[16]=v[4]*v[16];
   v[46]=v[3]*v[56];
   v[32]=v[5]*v[32];
   v[51]=-v[8]*v[47];
   v[32]=v[32]+v[46]+v[51];
   v[22]=v[4]*v[5]*v[22];
   v[22]=2.E+0*v[32]+v[22];
   v[22]=v[2]*v[22];
   v[12]=v[12]-v[20];
   v[12]=-v[3]*v[12];
   v[12]=v[12]+v[47];
   v[12]=v[12]*v[40];
   v[12]=v[22]+v[12]+v[16];
   v[12]=v[1]*v[12];
   v[16]=v[6]*v[19];
   v[22]=v[14]+2.E+0*v[17];
   v[32]=-v[22]*v[45];
   v[31]=v[31]*v[28];
   v[16]=v[31]+v[32]+4.E+0*v[57]+v[16];
   v[16]=v[4]*v[16];
   v[15]=-v[20]-v[15];
   v[15]=v[15]*v[37];
   v[20]=-v[42]*v[21];
   v[15]=v[20]+v[15];
   v[19]=-v[5]*v[19];
   v[19]=v[33]+v[19];
   v[19]=v[2]*v[19];
   v[15]=v[19]+2.E+0*v[15]+v[16];
   v[15]=v[2]*v[15];
   v[14]=v[17]+v[14];
   v[14]=v[6]*v[14];
   v[14]=v[14]+v[29];
   v[16]=-v[4]*v[22];
   v[14]=2.E+0*v[14]+v[16];
   v[14]=v[4]*v[14];
   v[16]=v[53]*v[42];
   v[14]=v[16]+v[14];
   v[14]=v[14]*v[28];
   v[14]=v[14]+v[15];
   v[14]=v[9]*v[14];
   v[15]=v[52]*v[8];
   v[16]=v[15]+v[55];
   v[17]=-v[16]*v[45];
   v[19]=v[8]*v[55];
   v[17]=v[17]+4.E+0*v[19]+v[43];
   v[17]=2.E+0*v[17]-v[36];
   v[17]=v[2]*v[17];
   v[16]=v[6]*v[16];
   v[15]=-v[28]*v[15];
   v[15]=v[15]+v[16]+v[38];
   v[15]=v[4]*v[15];
   v[16]=-v[55]*v[40];
   v[15]=v[16]+v[15];
   v[15]=4.E+0*v[15]+v[17];
   v[15]=v[15]*v[34];
   v[16]=v[5]*v[54];
   v[11]=v[16]+v[11]-2.5E-1*v[41];
   v[11]=v[2]*v[11];
   v[16]=-v[50]-v[74];
   v[16]=v[8]*v[16];
   v[17]=v[74]*v[45];
   v[11]=v[11]+v[17]-v[75]+4.E+0*v[13]+v[16];


K44[SI_K44(ip,izp,0,iq,izq,0)] += -quark_2.getZ2() * quark_2.getZ2() * prefactor_1l * wj * FCtr * v[11];
K44[SI_K44(ip,izp,0,iq,izq,1)] += -quark_2.getZ2() * quark_2.getZ2() * prefactor_1l * wj * FCtr * v[48];
K44[SI_K44(ip,izp,0,iq,izq,2)] += -quark_2.getZ2() * quark_2.getZ2() * prefactor_1l * wj * FCtr * v[23];
K44[SI_K44(ip,izp,0,iq,izq,3)] += -quark_2.getZ2() * quark_2.getZ2() * prefactor_1l * wj * FCtr * v[35];
K44[SI_K44(ip,izp,1,iq,izq,0)] += -quark_2.getZ2() * quark_2.getZ2() * prefactor_1l * wj * FCtr * v[25];
K44[SI_K44(ip,izp,1,iq,izq,1)] += -quark_2.getZ2() * quark_2.getZ2() * prefactor_1l * wj * FCtr * v[39];
K44[SI_K44(ip,izp,1,iq,izq,2)] += -quark_2.getZ2() * quark_2.getZ2() * prefactor_1l * wj * FCtr * v[30];
K44[SI_K44(ip,izp,1,iq,izq,3)] += -quark_2.getZ2() * quark_2.getZ2() * prefactor_1l * wj * FCtr * v[12];
K44[SI_K44(ip,izp,2,iq,izq,0)] += -quark_2.getZ2() * quark_2.getZ2() * prefactor_1l * wj * FCtr * v[24];
K44[SI_K44(ip,izp,2,iq,izq,1)] += -quark_2.getZ2() * quark_2.getZ2() * prefactor_1l * wj * FCtr * v[49];
K44[SI_K44(ip,izp,2,iq,izq,2)] += -quark_2.getZ2() * quark_2.getZ2() * prefactor_1l * wj * FCtr * v[27];
K44[SI_K44(ip,izp,2,iq,izq,3)] += -quark_2.getZ2() * quark_2.getZ2() * prefactor_1l * wj * FCtr * v[14];
K44[SI_K44(ip,izp,3,iq,izq,0)] += -quark_2.getZ2() * quark_2.getZ2() * prefactor_1l * wj * FCtr * v[44];
K44[SI_K44(ip,izp,3,iq,izq,1)] += -quark_2.getZ2() * quark_2.getZ2() * prefactor_1l * wj * FCtr * v[26];
K44[SI_K44(ip,izp,3,iq,izq,2)] += -quark_2.getZ2() * quark_2.getZ2() * prefactor_1l * wj * FCtr * v[18];
K44[SI_K44(ip,izp,3,iq,izq,3)] += -quark_2.getZ2() * quark_2.getZ2() * prefactor_1l * wj * FCtr * v[15];
v.clear();
