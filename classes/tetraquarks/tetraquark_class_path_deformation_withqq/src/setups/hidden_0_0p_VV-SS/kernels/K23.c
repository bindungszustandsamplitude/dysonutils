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
        FCtr = -2.*6.;}
    else if(!isud_q1){
        FCtr = -4.*6.;}}

if(!isud_q2){
    if(isud_q1){
        FCtr = -4.*6.;}
    else if(!isud_q1){
        FCtr = -4.*6.;}}

  ampl =
  meson_21.interpolateComplex(l_l+p_l+0.25*p_p)*
  diquark_2.interpolateComplex(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q)*
  meson_22.interpolateComplex(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q)*
  diquark_1.interpolateComplex(l_l+q_l+0.25*q_q);


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
   w[12]=PDQ2m*PDQ1p;
   w[13]=w[12]*sv1;
   w[14]=sv3*sv4;
   w[15]=w[13]*w[14]*sv2;
   w[16]=w[15]*w[10];
   w[12]=w[12]*ss1;
   w[17]=sv2*w[12];
   w[18]=ss4*sv3;
   w[19]=w[17]*w[18];
   w[20]=w[16]+w[19];
   w[21]=w[15]*w[11];
   w[22]=w[12]*ss2;
   w[14]=w[14]*w[22];
   w[23]=w[21]+w[14];
   w[24]=w[13]*ss2;
   w[18]=w[24]*w[18];
   w[25]=w[18]-w[23];
   w[12]=w[12]*sv4;
   w[13]=w[13]*ss4;
   w[26]=w[12]-w[13];
   w[27]=w[26]*sv2;
   w[24]=w[24]*sv4;
   w[27]=w[27]-w[24];
   w[27]=w[27]*ss3;
   w[28]=2.E+0*w[15];
   w[29]=w[28]*w[9];
   w[30]=w[28]*w[7];
   w[27]=w[30]-w[27]-w[25]+w[20]+w[29];
   w[27]=w[27]*w[10];
   w[31]=2.E+0*w[14];
   w[32]=w[31]-w[18];
   w[17]=w[17]*sv4;
   w[33]=w[24]-w[17];
   w[33]=w[33]*ss3;
   w[34]=w[33]+w[32]+w[19];
   w[35]=w[34]*w[9];
   w[36]=w[14]*w[11];
   w[22]=ss4*ss3*w[22];
   w[22]=w[27]+w[22]+w[36]+w[35];
   w[27]=w[15]*w[9];
   w[35]=w[27]+w[19];
   w[36]=2.E+0*w[7];
   w[35]=w[35]*w[36];
   w[35]=w[35]+w[22];
   w[35]=4.E+0*w[35];
   w[37]=w[18]+w[14];
   w[38]=w[37]+w[21];
   w[12]=w[12]+w[13];
   w[13]=w[12]*sv2;
   w[39]=w[13]+w[24];
   w[39]=w[39]*ss3;
   w[39]=w[39]+w[19]+w[38];
   w[40]=w[16]+w[27];
   w[41]=w[15]*w[2];
   w[42]=w[15]*w[7];
   w[43]=w[42]+3.125E-2*w[41];
   w[39]=-w[43]+5.E-1*w[39]+3.E+0*w[40];
   w[44]=w[15]*w[6];
   w[45]=w[39]-w[44];
   w[46]=5.E-1*w[2];
   w[45]=w[45]*w[46];
   w[45]=w[45]-w[35];
   w[47]=w[24]*ss3;
   w[47]=w[47]-w[19];
   w[48]=w[15]*w[8];
   w[49]=-w[48]-w[42]-w[47];
   w[15]=w[15]*w[4];
   w[49]=2.E+0*w[49]-w[15];
   w[49]=w[4]*w[49];
   w[50]=w[15]+w[48];
   w[51]=w[20]+w[27];
   w[52]=2.E+0*w[51];
   w[53]=w[50]-w[52];
   w[54]=1.25E-1*w[41];
   w[55]=-w[54]-w[53];
   w[55]=w[3]*w[55];
   w[56]=w[30]+w[47];
   w[56]=2.E+0*w[56];
   w[57]=w[56]+w[48];
   w[57]=w[57]*w[8];
   w[58]=w[28]*w[6];
   w[59]=w[58]*w[8];
   w[49]=w[55]+w[49]-w[59]-w[57]-w[45];
   w[49]=w[3]*w[49];
   w[55]=w[24]+w[17];
   w[55]=w[55]*ss3;
   w[60]=w[55]+w[30];
   w[61]=4.E+0*w[27];
   w[62]=w[19]-w[32]+w[61]+w[60];
   w[63]=w[62]*w[7];
   w[16]=w[16]+w[14];
   w[64]=2.E+0*w[6];
   w[65]=w[64]*w[16];
   w[66]=w[30]*w[10];
   w[63]=-w[66]+w[65]-w[63];
   w[63]=w[63]*w[4];
   w[34]=w[34]+w[30];
   w[65]=w[28]*w[10];
   w[67]=w[34]+w[65];
   w[67]=w[67]*w[6]*w[8];
   w[68]=ss3*sv2;
   w[26]=w[26]*w[68];
   w[25]=w[26]+w[25];
   w[26]=w[25]*w[8];
   w[69]=w[26]*w[36];
   w[63]=w[63]+w[67]-w[69];
   w[63]=4.E+0*w[63];
   w[67]=w[19]-w[18];
   w[33]=w[33]-w[67];
   w[70]=w[33]+w[30];
   w[71]=w[7]*w[70];
   w[72]=w[30]*w[8];
   w[71]=w[71]+w[72];
   w[73]=2.5E+0*w[48]+w[70];
   w[73]=w[6]*w[73];
   w[74]=5.E+0*w[42]+3.E+0*w[44];
   w[75]=5.E-1*w[4];
   w[74]=w[74]*w[75];
   w[71]=w[74]+2.E+0*w[71]+w[73];
   w[71]=w[2]*w[71];
   w[49]=w[49]-w[63]+w[71];
   w[49]=w[3]*w[49];
   w[71]=w[16]*w[6];
   w[17]=w[17]*ss3;
   w[73]=w[17]+w[29];
   w[32]=w[73]-w[32];
   w[74]=w[32]*w[7];
   w[71]=w[71]-w[74];
   w[71]=w[71]*w[6];
   w[76]=pow(w[7],2);
   w[77]=w[76]*w[25];
   w[71]=w[71]-w[77];
   w[77]=5.E-1*w[44];
   w[78]=w[77]+w[30];
   w[78]=w[78]*w[6];
   w[76]=w[76]*w[28];
   w[76]=w[78]+w[76];
   w[76]=w[76]*w[2];
   w[71]=w[76]-8.E+0*w[71];
   w[76]=w[71]*w[2];
   w[49]=-w[76]+w[49];
   w[49]=w[3]*w[49];
   w[78]=3.E+0*w[42];
   w[47]=w[58]+w[78]+w[47];
   w[79]=5.E-1*w[15];
   w[47]=2.E+0*w[47]+w[79];
   w[47]=w[4]*w[47];
   w[56]=w[56]-w[48];
   w[56]=w[56]*w[8];
   w[80]=w[48]*w[6];
   w[45]=w[47]+6.E+0*w[80]+w[56]+w[45];
   w[45]=w[2]*w[45];
   w[12]=w[12]*w[68];
   w[12]=w[12]+w[21];
   w[21]=w[12]-w[37];
   w[47]=w[21]-w[48];
   w[41]=2.5E-1*w[41];
   w[68]=-w[41]+4.E+0*w[20];
   w[81]=w[44]+w[30];
   w[82]=1.25E+0*w[15]-6.E+0*w[27]+w[81]-w[68]-w[47];
   w[82]=w[2]*w[82];
   w[83]=w[17]-w[14];
   w[84]=w[83]-w[20];
   w[85]=w[84]-w[42];
   w[85]=2.E+0*w[85];
   w[86]=-w[85]-w[50];
   w[86]=w[4]*w[86];
   w[87]=w[26]+w[80];
   w[87]=2.E+0*w[87];
   w[86]=-w[87]+w[86];
   w[53]=w[41]+2.E+0*w[53];
   w[88]=-w[3]*w[53];
   w[82]=w[88]+2.E+0*w[86]+w[82];
   w[82]=w[3]*w[82];
   w[16]=w[16]+w[42];
   w[86]=w[16]*w[4];
   w[32]=w[32]*w[8];
   w[32]=w[32]+w[80];
   w[86]=w[86]-w[32];
   w[86]=w[86]*w[4];
   w[88]=w[25]*pow(w[8],2);
   w[86]=w[86]-w[88];
   w[86]=8.E+0*w[86];
   w[45]=w[82]+w[86]+w[45];
   w[45]=w[3]*w[45];
   w[62]=w[62]+w[65];
   w[62]=w[62]*w[8];
   w[59]=w[62]+w[59];
   w[59]=w[59]*w[6];
   w[34]=w[34]*w[7];
   w[16]=w[16]*w[64];
   w[16]=w[66]+w[16]+w[34];
   w[16]=w[16]*w[4];
   w[16]=-w[59]+w[16]-w[69];
   w[16]=4.E+0*w[16];
   w[34]=w[58]+6.E+0*w[42];
   w[59]=5.E-1*w[48];
   w[62]=-w[59]-w[33]-w[34];
   w[62]=w[6]*w[62];
   w[66]=w[44]+w[42];
   w[66]=w[66]*w[75];
   w[82]=-w[70]*w[36];
   w[62]=-w[66]+w[82]+w[62];
   w[62]=w[2]*w[62];
   w[62]=-w[16]+w[62];
   w[62]=w[2]*w[62];
   w[82]=w[81]+2.5E-1*w[15];
   w[88]=2.E+0*w[19];
   w[89]=-w[82]-w[54]+w[88]+w[65];
   w[61]=w[61]+w[21]+w[89];
   w[61]=w[2]*w[61];
   w[85]=w[85]-w[48];
   w[85]=w[4]*w[85];
   w[85]=w[87]+w[85];
   w[61]=2.E+0*w[85]+w[61];
   w[61]=w[2]*w[61];
   w[85]=w[3]*w[2];
   w[53]=w[53]*w[85];
   w[53]=w[61]+w[53];
   w[53]=w[5]*w[53];
   w[45]=w[53]+w[62]+w[45];
   w[45]=w[5]*w[45];
   w[45]=w[49]+w[45];
   w[49]=w[1]*ampl;
   w[45]=w[45]*w[49];
   w[53]=w[39]*w[46];
   w[35]=w[35]-w[53];
   w[51]=4.E+0*w[51];
   w[53]=w[51]+w[48];
   w[53]=w[53]*w[64];
   w[52]=w[52]+w[48];
   w[54]=w[54]-w[52];
   w[54]=w[3]*w[54];
   w[61]=w[4]*w[30];
   w[53]=w[54]+w[61]+w[53]+w[56]+w[35];
   w[53]=w[3]*w[53];
   w[54]=w[19]+w[18];
   w[56]=w[54]-w[60];
   w[60]=w[7]*w[56];
   w[60]=w[60]+w[72];
   w[54]=w[54]-w[55];
   w[34]=1.5E+0*w[48]+w[54]-w[34];
   w[34]=w[6]*w[34];
   w[44]=w[78]+w[44];
   w[44]=w[44]*w[75];
   w[34]=w[44]+2.E+0*w[60]+w[34];
   w[34]=w[2]*w[34];
   w[16]=w[53]-w[16]+w[34];
   w[16]=w[3]*w[16];
   w[16]=-w[76]+w[16];
   w[16]=w[3]*w[16];
   w[34]=-w[56]*w[36];
   w[44]=w[59]-w[56];
   w[44]=w[6]*w[44];
   w[34]=w[66]+w[34]+w[44];
   w[34]=w[2]*w[34];
   w[34]=-w[63]+w[34];
   w[34]=w[2]*w[34];
   w[44]=-w[51]+w[48];
   w[44]=w[44]*w[64];
   w[53]=w[58]-w[48];
   w[55]=w[42]+w[53];
   w[55]=2.E+0*w[55]-w[79];
   w[55]=w[4]*w[55];
   w[35]=w[55]+w[44]-w[57]-w[35];
   w[35]=w[2]*w[35];
   w[44]=w[29]+w[68]-w[82]-w[47];
   w[44]=w[2]*w[44];
   w[14]=-w[14]+w[73]+w[20];
   w[20]=w[14]+w[42];
   w[20]=2.E+0*w[20];
   w[47]=-w[20]-w[48];
   w[47]=w[4]*w[47];
   w[55]=w[26]-w[80];
   w[55]=2.E+0*w[55];
   w[47]=-w[55]+w[47];
   w[52]=-w[41]+2.E+0*w[52];
   w[57]=w[3]*w[52];
   w[44]=w[57]+2.E+0*w[47]+w[44];
   w[44]=w[3]*w[44];
   w[35]=w[44]+w[86]+w[35];
   w[35]=w[3]*w[35];
   w[44]=w[21]-w[89];
   w[44]=w[2]*w[44];
   w[20]=w[20]-w[50];
   w[20]=w[4]*w[20];
   w[20]=w[55]+w[20];
   w[20]=2.E+0*w[20]+w[44];
   w[20]=w[2]*w[20];
   w[44]=-w[52]*w[85];
   w[20]=w[20]+w[44];
   w[20]=w[5]*w[20];
   w[20]=w[20]+w[34]+w[35];
   w[20]=w[5]*w[20];
   w[16]=w[16]+w[20];
   w[16]=w[16]*w[49];
   w[20]=w[88]+w[29];
   w[34]=w[20]+w[25];
   w[34]=w[34]*w[7];
   w[34]=w[34]+w[22];
   w[35]=w[39]-w[77];
   w[35]=w[35]*w[46];
   w[34]=-w[35]+4.E+0*w[34];
   w[35]=-w[15]+w[51]-w[41];
   w[39]=w[35]*w[5];
   w[14]=2.E+0*w[14];
   w[41]=w[14]-w[48];
   w[41]=w[41]*w[64];
   w[44]=w[56]-w[53];
   w[44]=w[4]*w[44];
   w[17]=w[17]-w[18];
   w[18]=2.E+0*w[17];
   w[47]=w[18]-w[48];
   w[47]=w[47]*w[8];
   w[41]=w[39]+w[44]+w[41]-w[47]+w[34];
   w[44]=pow(w[2],2);
   w[41]=w[44]*w[41];
   w[50]=w[79]+w[48];
   w[21]=w[29]+w[50]+w[21];
   w[51]=w[21]*w[2];
   w[27]=w[83]+w[27];
   w[52]=-2.E+0*w[27]+w[48];
   w[52]=2.E+0*w[52]+w[15];
   w[52]=w[4]*w[52];
   w[52]=-4.E+0*w[26]+w[52];
   w[52]=2.E+0*w[52]-w[51];
   w[52]=w[2]*w[52];
   w[53]=-w[35]*w[85];
   w[52]=w[52]+w[53];
   w[52]=w[3]*w[52];
   w[41]=w[52]+w[41];
   w[41]=w[5]*w[41];
   w[30]=w[58]+w[30];
   w[52]=w[50]-w[54]-w[30];
   w[52]=w[4]*w[52];
   w[14]=-w[14]-w[48];
   w[14]=w[14]*w[64];
   w[53]=w[18]+w[48];
   w[53]=w[8]*w[53];
   w[14]=w[52]+w[14]+w[53]-w[34];
   w[14]=w[2]*w[14];
   w[27]=w[4]*w[27];
   w[26]=w[26]+w[27];
   w[26]=8.E+0*w[26]+w[51];
   w[26]=w[3]*w[26];
   w[14]=w[26]-w[86]+w[14];
   w[14]=w[3]*w[14];
   w[26]=w[42]+w[65]+w[31];
   w[26]=w[26]*w[6];
   w[26]=w[26]-w[74];
   w[26]=w[26]*w[4];
   w[27]=w[32]*w[6];
   w[26]=w[26]-w[27]-w[69];
   w[27]=w[81]*w[4];
   w[31]=-w[48]+w[81];
   w[31]=w[6]*w[31];
   w[31]=-w[72]+w[31];
   w[31]=2.E+0*w[31]-w[27];
   w[31]=w[2]*w[31];
   w[31]=8.E+0*w[26]+w[31];
   w[31]=w[2]*w[31];
   w[14]=w[31]+w[14];
   w[14]=w[3]*w[14];
   w[31]=w[71]*w[44];
   w[14]=w[41]+w[31]+w[14];
   w[14]=w[14]*w[49];
   w[20]=w[20]-w[25];
   w[20]=w[20]*w[7];
   w[20]=w[20]+w[22];
   w[20]=4.E+0*w[20];
   w[22]=3.E+0*w[48];
   w[25]=w[15]+w[22]+w[33]-w[30];
   w[25]=w[4]*w[25];
   w[30]=w[24]-3.E+0*w[13];
   w[30]=ss3*w[30];
   w[19]=w[30]+w[19]-3.E+0*w[38];
   w[30]=w[43]+w[77];
   w[19]=5.E-1*w[19]-w[30]-5.E+0*w[40];
   w[19]=w[19]*w[46];
   w[21]=w[3]*w[21];
   w[18]=-w[18]+w[22];
   w[18]=w[8]*w[18];
   w[22]=2.E+0*w[84];
   w[31]=w[22]-w[48];
   w[31]=w[31]*w[64];
   w[18]=w[21]+w[19]+w[25]+w[31]-w[20]+w[18];
   w[18]=w[3]*w[18];
   w[19]=w[81]-w[17];
   w[19]=w[6]*w[19];
   w[21]=-w[17]*w[36];
   w[19]=w[21]+w[19];
   w[19]=w[2]*w[19];
   w[19]=4.E+0*w[26]+w[19];
   w[18]=2.E+0*w[19]+w[18];
   w[18]=w[3]*w[18];
   w[13]=-w[24]+w[13];
   w[13]=ss3*w[13];
   w[13]=w[13]-w[67]+w[23];
   w[13]=5.E-1*w[13]+w[30]+w[40];
   w[13]=w[13]*w[46];
   w[19]=-w[58]-w[50]-w[70];
   w[19]=w[4]*w[19];
   w[21]=-w[22]-w[48];
   w[21]=w[21]*w[64];
   w[13]=w[39]+w[13]+w[19]+w[21]+w[20]+w[47];
   w[13]=w[2]*w[13];
   w[19]=-w[3]*w[35];
   w[20]=w[8]*w[28];
   w[15]=w[20]+w[15];
   w[15]=w[4]*w[15];
   w[15]=w[19]+2.E+0*w[15]-w[51];
   w[15]=w[3]*w[15];
   w[13]=w[15]-w[86]+w[13];
   w[13]=w[5]*w[13];
   w[13]=w[18]+w[13];
   w[13]=w[5]*w[13];
   w[15]=w[7]*w[17];
   w[18]=-w[8]*w[42];
   w[15]=w[15]+w[18];
   w[17]=-w[48]+w[17];
   w[17]=w[6]*w[17];
   w[15]=2.E+0*w[15]+w[17];
   w[12]=w[37]+w[12];
   w[12]=w[65]+5.E-1*w[12]+w[29];
   w[12]=w[3]*w[12];
   w[12]=w[12]+2.E+0*w[15]-w[27];
   w[12]=w[3]*w[12];
   w[12]=w[12]+w[71];
   w[12]=w[12]*pow(w[3],2);
   w[12]=w[12]+w[13];
   w[12]=w[12]*w[49];

K23[SI_K23(ip,izp,0,iq,izq,0)] += prefactor_2l * wj * FCtr * w[12];
K23[SI_K23(ip,izp,1,iq,izq,0)] += prefactor_2l * wj * FCtr * w[45];
K23[SI_K23(ip,izp,2,iq,izq,0)] += prefactor_2l * wj * FCtr * w[16];
K23[SI_K23(ip,izp,3,iq,izq,0)] += prefactor_2l * wj * FCtr * w[14];
