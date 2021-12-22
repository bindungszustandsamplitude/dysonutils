sv1 = sv1_q1;
ss1 = ss1_q1;
sv2 = sv2_q2;
ss2 = ss2_q2;
sv3 = sv3_q1;
ss3 = ss3_q1;
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

ampl  =
meson_11.interpolateComplex(l_l+p_l+0.25*p_p)*
meson_22.interpolateComplex(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q)*
meson_12.interpolateComplex(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q)*
meson_21.interpolateComplex(l_l+q_l+0.25*q_q);



    w[1]=1./(-2.E+0*Q_Q*pow(Q_p,2)*p_p+pow(Q_Q,2)*pow(p_p,2)+pow(Q_p,4));
    w[2]=Q_Q;
    w[3]=Q_p;
    w[4]=Q_q;
    w[5]=p_p;
    w[6]=p_q;
    w[7]=p_l;
    w[8]=Q_l;
    w[9]=q_l;
    w[10]=l_l;
    w[11]=q_q;
   w[12]=sv2*sv1;
   w[13]=sv4*sv3;
   w[14]=w[12]*w[13];
   w[15]=w[14]*w[9];
   w[16]=w[14]*w[10];
   w[17]=w[15]+w[16];
   w[18]=ss3*sv4*sv2;
   w[19]=w[13]*ss2;
   w[20]=w[18]+w[19];
   w[20]=w[20]*ss1;
   w[21]=w[14]*w[11];
   w[20]=w[20]+w[21];
   w[22]=ss1*sv3*sv2;
   w[23]=ss2*sv3*sv1;
   w[24]=w[22]+w[23];
   w[12]=w[12]*ss3;
   w[25]=w[24]+w[12];
   w[25]=w[25]*ss4;
   w[26]=ss3*ss2;
   w[27]=w[26]*sv4*sv1;
   w[25]=w[25]+w[20]+w[27];
   w[28]=w[14]*w[2];
   w[29]=w[14]*w[7];
   w[30]=w[29]+3.125E-2*w[28];
   w[25]=-w[30]+5.E-1*w[25]+3.E+0*w[17];
   w[31]=w[14]*w[6];
   w[32]=w[25]-w[31];
   w[33]=5.E-1*w[2];
   w[32]=w[32]*w[33];
   w[34]=w[18]-w[19];
   w[34]=w[34]*ss1;
   w[35]=w[34]-w[21];
   w[36]=2.E+0*w[14];
   w[37]=w[36]*w[9];
   w[38]=w[35]-w[37];
   w[39]=w[22]-w[23];
   w[40]=w[39]+w[12];
   w[40]=w[40]*ss4;
   w[40]=w[40]+w[16]-w[38]+w[27];
   w[40]=w[40]*w[10];
   w[13]=2.E+0*w[13];
   w[13]=w[13]*ss2;
   w[13]=w[13]-w[18];
   w[13]=w[13]*ss1;
   w[41]=w[39]*ss4;
   w[42]=w[13]+w[41]+w[27];
   w[43]=w[42]*w[9];
   w[26]=ss1*w[26]*ss4;
   w[19]=w[19]*ss1;
   w[44]=w[19]*w[11];
   w[26]=w[40]+w[26]+w[44]+w[43];
   w[26]=4.E+0*w[26];
   w[40]=w[22]*ss4;
   w[43]=w[40]+w[16];
   w[44]=w[43]+w[15];
   w[45]=2.E+0*w[44];
   w[46]=w[14]*w[8];
   w[47]=w[45]-w[46];
   w[48]=4.E+0*w[7];
   w[49]=w[47]*w[48];
   w[32]=w[32]-w[49]-w[26];
   w[40]=w[40]-w[27];
   w[49]=-w[29]-w[46]+w[40];
   w[14]=w[14]*w[4];
   w[49]=2.E+0*w[49]-w[14];
   w[49]=w[4]*w[49];
   w[50]=2.E+0*w[40];
   w[51]=w[50]-w[46];
   w[51]=w[51]*w[8];
   w[47]=w[47]-w[14];
   w[52]=1.25E-1*w[28];
   w[53]=-w[52]+w[47];
   w[53]=w[3]*w[53];
   w[54]=w[36]*w[6];
   w[55]=w[54]*w[8];
   w[49]=w[53]+w[49]-w[55]+w[51]-w[32];
   w[49]=w[3]*w[49];
   w[53]=w[36]*w[10];
   w[56]=w[53]+4.E+0*w[15];
   w[24]=w[24]*ss4;
   w[57]=-w[13]+w[56]+w[24];
   w[58]=w[36]*w[7];
   w[59]=w[58]+w[27];
   w[60]=w[57]+w[59];
   w[60]=w[60]*w[7];
   w[19]=w[19]+w[16];
   w[61]=2.E+0*w[6];
   w[62]=w[61]*w[19];
   w[60]=w[60]-w[62];
   w[60]=w[60]*w[4];
   w[42]=w[42]+w[53];
   w[62]=w[42]*w[8];
   w[63]=w[58]*w[8];
   w[62]=w[62]+w[63];
   w[62]=w[62]*w[6];
   w[64]=w[12]-w[23];
   w[65]=w[64]*ss4;
   w[66]=w[65]-w[35];
   w[67]=w[66]*w[8];
   w[68]=2.E+0*w[7];
   w[69]=w[67]*w[68];
   w[60]=w[60]-w[62]-w[69];
   w[60]=4.E+0*w[60];
   w[18]=w[18]*ss1;
   w[41]=w[41]+w[18];
   w[62]=w[41]-w[59];
   w[70]=w[36]*w[8];
   w[71]=w[70]-w[62];
   w[71]=w[71]*w[68];
   w[72]=2.5E+0*w[46]-w[62];
   w[72]=w[6]*w[72];
   w[73]=5.E+0*w[29]+3.E+0*w[31];
   w[74]=5.E-1*w[4];
   w[73]=w[73]*w[74];
   w[71]=w[73]+w[71]+w[72];
   w[71]=w[2]*w[71];
   w[49]=w[49]+w[60]+w[71];
   w[49]=w[3]*w[49];
   w[71]=w[23]*ss4;
   w[13]=-w[13]+w[71]+w[37];
   w[72]=w[13]*w[7];
   w[73]=w[19]*w[6];
   w[73]=w[73]-w[72];
   w[73]=w[73]*w[6];
   w[75]=pow(w[7],2);
   w[76]=w[75]*w[66];
   w[73]=w[73]+w[76];
   w[76]=5.E-1*w[31];
   w[77]=w[76]+w[58];
   w[77]=w[77]*w[6];
   w[36]=w[75]*w[36];
   w[36]=w[77]+w[36];
   w[36]=w[36]*w[2];
   w[36]=w[36]-8.E+0*w[73];
   w[73]=w[36]*w[2];
   w[49]=-w[73]+w[49];
   w[49]=w[3]*w[49];
   w[75]=w[34]+w[21];
   w[77]=w[75]-w[46];
   w[28]=2.5E-1*w[28];
   w[16]=-w[28]+4.E+0*w[16];
   w[78]=w[31]+w[58];
   w[79]=4.E+0*w[22];
   w[80]=-w[79]-w[64];
   w[80]=ss4*w[80];
   w[80]=1.25E+0*w[14]-6.E+0*w[15]+w[80]+w[78]-w[16]-w[77];
   w[80]=w[2]*w[80];
   w[81]=w[43]-w[34];
   w[81]=2.E+0*w[81];
   w[82]=w[81]+w[58];
   w[83]=w[14]+w[46];
   w[84]=-w[83]+w[82];
   w[84]=w[4]*w[84];
   w[85]=w[46]*w[6];
   w[86]=w[67]-w[85];
   w[86]=2.E+0*w[86];
   w[84]=w[86]+w[84];
   w[47]=-w[28]+2.E+0*w[47];
   w[87]=w[3]*w[47];
   w[80]=w[87]+2.E+0*w[84]+w[80];
   w[80]=w[3]*w[80];
   w[84]=3.E+0*w[29];
   w[40]=w[54]+w[84]-w[40];
   w[87]=5.E-1*w[14];
   w[40]=2.E+0*w[40]+w[87];
   w[40]=w[4]*w[40];
   w[50]=w[50]+w[46];
   w[50]=w[50]*w[8];
   w[32]=w[40]+6.E+0*w[85]-w[50]+w[32];
   w[32]=w[2]*w[32];
   w[40]=w[19]+w[29];
   w[88]=w[40]*w[4];
   w[13]=w[13]*w[8];
   w[13]=w[13]+w[85];
   w[88]=w[88]-w[13];
   w[88]=w[88]*w[4];
   w[66]=w[66]*pow(w[8],2);
   w[66]=w[88]+w[66];
   w[66]=8.E+0*w[66];
   w[32]=w[80]+w[66]+w[32];
   w[32]=w[3]*w[32];
   w[42]=w[42]+w[58];
   w[42]=w[42]*w[7];
   w[40]=w[40]*w[61];
   w[40]=w[42]+w[40];
   w[40]=w[40]*w[4];
   w[42]=w[57]+w[27];
   w[42]=w[42]*w[8];
   w[42]=w[42]+w[55]+w[63];
   w[42]=w[42]*w[6];
   w[40]=w[69]+w[40]-w[42];
   w[40]=4.E+0*w[40];
   w[42]=w[54]+6.E+0*w[29];
   w[41]=w[41]-w[27];
   w[55]=5.E-1*w[46];
   w[57]=-w[55]-w[42]+w[41];
   w[57]=w[6]*w[57];
   w[80]=w[31]+w[29];
   w[80]=w[80]*w[74];
   w[88]=w[62]*w[68];
   w[57]=-w[80]+w[88]+w[57];
   w[57]=w[2]*w[57];
   w[57]=-w[40]+w[57];
   w[57]=w[2]*w[57];
   w[88]=w[78]+2.5E-1*w[14];
   w[89]=w[88]+w[52];
   w[90]=2.E+0*w[22];
   w[91]=w[90]+w[64];
   w[91]=w[91]*ss4;
   w[56]=w[91]+w[75]+w[56]-w[89];
   w[56]=w[2]*w[56];
   w[82]=-w[46]-w[82];
   w[82]=w[4]*w[82];
   w[82]=-w[86]+w[82];
   w[56]=2.E+0*w[82]+w[56];
   w[56]=w[2]*w[56];
   w[82]=w[3]*w[2];
   w[47]=-w[47]*w[82];
   w[47]=w[56]+w[47];
   w[47]=w[5]*w[47];
   w[32]=w[47]+w[57]+w[32];
   w[32]=w[5]*w[32];
   w[32]=w[49]+w[32];
   w[47]=PM21p*w[1]*ampl*PM22m;
   w[32]=w[32]*w[47];
   w[49]=w[25]*w[33];
   w[45]=w[45]+w[46];
   w[56]=w[45]*w[48];
   w[49]=w[26]+w[56]-w[49];
   w[44]=4.E+0*w[44];
   w[56]=w[44]+w[46];
   w[56]=w[56]*w[61];
   w[52]=w[52]-w[45];
   w[52]=w[3]*w[52];
   w[57]=w[4]*w[58];
   w[50]=w[52]+w[57]+w[56]-w[50]+w[49];
   w[50]=w[3]*w[50];
   w[24]=w[24]-w[18];
   w[52]=w[24]-w[27];
   w[42]=1.5E+0*w[46]-w[42]+w[52];
   w[42]=w[6]*w[42];
   w[24]=w[24]-w[59];
   w[56]=w[70]+w[24];
   w[56]=w[56]*w[68];
   w[31]=w[84]+w[31];
   w[31]=w[31]*w[74];
   w[31]=w[31]+w[56]+w[42];
   w[31]=w[2]*w[31];
   w[31]=w[50]-w[40]+w[31];
   w[31]=w[3]*w[31];
   w[31]=-w[73]+w[31];
   w[31]=w[3]*w[31];
   w[40]=-w[44]+w[46];
   w[40]=w[40]*w[61];
   w[42]=w[54]-w[46];
   w[50]=w[29]+w[42];
   w[50]=2.E+0*w[50]-w[87];
   w[50]=w[4]*w[50];
   w[40]=w[50]+w[40]+w[51]-w[49];
   w[40]=w[2]*w[40];
   w[49]=w[79]-w[64];
   w[49]=ss4*w[49];
   w[16]=w[37]+w[49]+w[16]-w[88]-w[77];
   w[16]=w[2]*w[16];
   w[49]=w[67]+w[85];
   w[49]=2.E+0*w[49];
   w[50]=w[37]+w[34];
   w[43]=w[50]+w[43];
   w[43]=2.E+0*w[43];
   w[51]=w[43]+w[58];
   w[56]=-w[46]-w[51];
   w[56]=w[4]*w[56];
   w[56]=w[49]+w[56];
   w[45]=-w[28]+2.E+0*w[45];
   w[57]=w[3]*w[45];
   w[16]=w[57]+2.E+0*w[56]+w[16];
   w[16]=w[3]*w[16];
   w[16]=w[16]+w[66]+w[40];
   w[16]=w[3]*w[16];
   w[40]=-w[24]*w[68];
   w[55]=w[55]-w[24];
   w[55]=w[6]*w[55];
   w[40]=w[80]+w[40]+w[55];
   w[40]=w[2]*w[40];
   w[40]=w[60]+w[40];
   w[40]=w[2]*w[40];
   w[55]=w[90]-w[64];
   w[55]=w[55]*ss4;
   w[56]=-w[53]-w[55]+w[75]+w[89];
   w[56]=w[2]*w[56];
   w[51]=-w[83]+w[51];
   w[51]=w[4]*w[51];
   w[49]=-w[49]+w[51];
   w[49]=2.E+0*w[49]+w[56];
   w[49]=w[2]*w[49];
   w[45]=-w[45]*w[82];
   w[45]=w[49]+w[45];
   w[45]=w[5]*w[45];
   w[16]=w[45]+w[40]+w[16];
   w[16]=w[5]*w[16];
   w[16]=w[31]+w[16];
   w[16]=w[16]*w[47];
   w[25]=w[25]-w[76];
   w[25]=w[25]*w[33];
   w[31]=w[53]+w[37];
   w[35]=w[35]+w[55]+w[31];
   w[35]=w[35]*w[48];
   w[25]=-w[35]+w[25]-w[26];
   w[28]=-w[14]+w[44]-w[28];
   w[35]=w[28]*w[5];
   w[24]=w[24]-w[42];
   w[24]=w[4]*w[24];
   w[18]=w[18]-w[71];
   w[37]=2.E+0*w[18];
   w[40]=w[37]-w[46];
   w[40]=w[40]*w[8];
   w[42]=w[43]-w[46];
   w[42]=w[42]*w[61];
   w[24]=w[35]+w[24]+w[42]-w[40]-w[25];
   w[42]=pow(w[2],2);
   w[24]=w[42]*w[24];
   w[44]=w[87]+w[46];
   w[21]=w[21]+w[65]+w[44]+w[50];
   w[45]=w[21]*w[2];
   w[15]=w[34]+w[15];
   w[34]=-2.E+0*w[15]+w[46];
   w[34]=2.E+0*w[34]+w[14];
   w[34]=w[4]*w[34];
   w[34]=4.E+0*w[67]+w[34];
   w[34]=2.E+0*w[34]-w[45];
   w[34]=w[2]*w[34];
   w[49]=-w[28]*w[82];
   w[34]=w[34]+w[49];
   w[34]=w[3]*w[34];
   w[24]=w[34]+w[24];
   w[24]=w[5]*w[24];
   w[34]=w[54]+w[58];
   w[49]=w[44]-w[52]-w[34];
   w[49]=w[4]*w[49];
   w[50]=w[37]+w[46];
   w[50]=w[8]*w[50];
   w[43]=w[43]+w[46];
   w[43]=-w[43]*w[61];
   w[25]=w[49]+w[43]+w[50]+w[25];
   w[25]=w[2]*w[25];
   w[15]=w[4]*w[15];
   w[15]=-w[67]+w[15];
   w[15]=8.E+0*w[15]+w[45];
   w[15]=w[3]*w[15];
   w[15]=w[15]-w[66]+w[25];
   w[15]=w[3]*w[15];
   w[19]=w[29]+2.E+0*w[19];
   w[19]=w[19]*w[6];
   w[19]=w[19]-w[72];
   w[19]=w[19]*w[4];
   w[13]=w[13]*w[6];
   w[13]=w[19]-w[13]+w[69];
   w[19]=w[78]*w[4];
   w[25]=-w[46]+w[78];
   w[25]=w[6]*w[25];
   w[25]=-w[63]+w[25];
   w[25]=2.E+0*w[25]-w[19];
   w[25]=w[2]*w[25];
   w[25]=8.E+0*w[13]+w[25];
   w[25]=w[2]*w[25];
   w[15]=w[25]+w[15];
   w[15]=w[3]*w[15];
   w[25]=w[36]*w[42];
   w[15]=w[24]+w[25]+w[15];
   w[15]=w[15]*w[47];
   w[24]=w[53]+w[91]-w[38];
   w[24]=w[24]*w[48];
   w[24]=w[24]+w[26];
   w[25]=3.E+0*w[46];
   w[26]=w[14]+w[25]-w[41]-w[34];
   w[26]=w[4]*w[26];
   w[29]=w[30]+w[76];
   w[23]=w[12]+w[23];
   w[22]=-3.E+0*w[23]+w[22];
   w[22]=ss4*w[22];
   w[22]=w[22]+w[27]-3.E+0*w[20];
   w[22]=5.E-1*w[22]-w[29]-5.E+0*w[17];
   w[22]=w[22]*w[33];
   w[21]=w[3]*w[21];
   w[25]=-w[37]+w[25];
   w[25]=w[8]*w[25];
   w[30]=w[81]+w[46];
   w[30]=-w[30]*w[61];
   w[21]=w[21]+w[22]+w[26]+w[30]+w[25]-w[24];
   w[21]=w[3]*w[21];
   w[22]=-w[18]+w[78];
   w[22]=w[6]*w[22];
   w[25]=-w[18]*w[68];
   w[22]=w[25]+w[22];
   w[22]=w[2]*w[22];
   w[13]=4.E+0*w[13]+w[22];
   w[13]=2.E+0*w[13]+w[21];
   w[13]=w[3]*w[13];
   w[12]=w[12]-w[39];
   w[12]=ss4*w[12];
   w[12]=w[12]-w[27]+w[20];
   w[12]=5.E-1*w[12]+w[29]+w[17];
   w[12]=w[12]*w[33];
   w[17]=-w[54]-w[44]+w[62];
   w[17]=w[4]*w[17];
   w[21]=w[81]-w[46];
   w[21]=w[21]*w[61];
   w[12]=w[35]+w[12]+w[17]+w[21]+w[40]+w[24];
   w[12]=w[2]*w[12];
   w[17]=-w[3]*w[28];
   w[14]=w[70]+w[14];
   w[14]=w[4]*w[14];
   w[14]=w[17]+2.E+0*w[14]-w[45];
   w[14]=w[3]*w[14];
   w[12]=w[14]-w[66]+w[12];
   w[12]=w[5]*w[12];
   w[12]=w[13]+w[12];
   w[12]=w[5]*w[12];
   w[13]=ss4*w[23];
   w[13]=w[13]+w[20];
   w[13]=5.E-1*w[13]+w[31];
   w[13]=w[3]*w[13];
   w[14]=w[18]-w[46];
   w[17]=w[68]+w[6];
   w[14]=w[14]*w[17];
   w[13]=w[13]+2.E+0*w[14]-w[19];
   w[13]=w[3]*w[13];
   w[13]=w[13]+w[36];
   w[13]=w[13]*pow(w[3],2);
   w[12]=w[13]+w[12];
   w[12]=w[12]*w[47];


K12[SI_K12(ip,izp,0,iq,izq,0)] += wj * FCtr * w[12];
K12[SI_K12(ip,izp,1,iq,izq,0)] += wj * FCtr * w[32];
K12[SI_K12(ip,izp,2,iq,izq,0)] += wj * FCtr * w[16];
K12[SI_K12(ip,izp,3,iq,izq,0)] += wj * FCtr * w[15];
w.clear();
