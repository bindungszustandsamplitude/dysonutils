
if(isud_q1){
  if(isud_q2){
    FCtr = -2.*2.*2.;
  } else {
    FCtr = -2.*sqrt(8.)*1.;
  }
}
if(!isud_q1){
  if(isud_q2){
    FCtr = -2.*sqrt(8.)*1.;
  } else {
    FCtr = -2.*4.*1.;
  }
}

FCtr *= a_d * a_d;

p1 = q_q+p_p/4.+Q_Q/16.-p_q-Q_p/4.+Q_q/2.;
p2 = q_q+p_p/4.+Q_Q/16.-p_q+Q_p/4.-Q_q/2.;

ampl  =
diquark_1.interpolateComplex(p1)*
diquark_2.interpolateComplex(p2);

v.resize(10000,0.);


    v[1]=Q_Q;
    v[2]=Q_p;
    v[3]=Q_q;
    v[4]=q_q;
    v[5]=p_q;
   v[6]=svqp*ssqm;
   v[7]=svqm*ssqp;
   v[8]=v[6]+v[7];
   v[9]=v[8]*ssqmp;
   v[10]=ssqp*ssqm;
   v[11]=v[10]*svqmp;
   v[9]=v[9]-v[11];
   v[12]=v[5]*svqmp;
   v[13]=svqm*svqp;
   v[14]=v[12]*v[13];
   v[15]=v[13]*v[4]*svqmp;
   v[16]=2.E+0*v[14]-v[15]-v[9];
   v[16]=v[3]*v[16];
   v[11]=-v[11]-v[15];
   v[11]=v[2]*v[11];
   v[11]=v[11]+v[16];
   v[16]=v[3]*svqmp;
   v[17]=v[2]*svqmp;
   v[16]=v[16]-v[17];
   v[18]=v[13]*v[16];
   v[6]=v[6]-v[7];
   v[7]=2.E+0*ssqmp;
   v[7]=-v[6]*v[7];
   v[7]=v[7]+v[18];
   v[7]=v[1]*v[7];
   v[7]=4.E+0*v[11]+v[7];
   v[7]=ampl*v[3]*v[7];
   v[11]=v[14]-v[15];
   v[9]=v[11]-v[9];
   v[9]=v[4]*v[9];
   v[14]=-v[12]*v[10];
   v[9]=v[14]+v[9];
   v[14]=-ssqmp*v[6];
   v[14]=v[14]+v[18];
   v[14]=v[3]*v[14];
   v[9]=2.E+0*v[9]+v[14];
   v[11]=v[1]*v[11];
   v[9]=2.E+0*v[9]+v[11];
   v[9]=ampl*v[9];
   v[11]=2.E+0*v[6];
   v[14]=v[12]*v[11];
   v[15]=-v[8]*v[17];
   v[18]=v[8]*svqmp;
   v[13]=v[13]*ssqmp;
   v[19]=-v[18]+2.E+0*v[13];
   v[20]=-v[3]*v[19];
   v[14]=v[20]+v[14]+v[15];
   v[14]=v[3]*v[14];
   v[8]=v[8]*v[12];
   v[12]=v[4]*v[19];
   v[12]=v[8]+v[12];
   v[12]=v[1]*v[12];
   v[11]=-v[4]*v[17]*v[11];
   v[11]=v[12]+v[11]+v[14];
   v[11]=4.E+0*ampl*v[11];
   v[6]=v[6]*v[16];
   v[12]=-v[13]+v[18];
   v[12]=v[4]*v[12];
   v[10]=ssqmp*v[10];
   v[8]=v[12]+v[10]-v[8];
   v[6]=2.E+0*v[8]+v[6];
   v[8]=v[1]*v[13];
   v[6]=2.E+0*v[6]+v[8];
   v[6]=ampl*v[6];


K34[SI_K34(ip,izp,0,iq,izq,0)] += -prefactor_1l * wj * FCtr * v[6];
K34[SI_K34(ip,izp,0,iq,izq,1)] += -prefactor_1l * wj * FCtr * v[7];
K34[SI_K34(ip,izp,0,iq,izq,2)] += -prefactor_1l * wj * FCtr * v[9];
K34[SI_K34(ip,izp,0,iq,izq,3)] += -prefactor_1l * wj * FCtr * v[11];
v.clear();
