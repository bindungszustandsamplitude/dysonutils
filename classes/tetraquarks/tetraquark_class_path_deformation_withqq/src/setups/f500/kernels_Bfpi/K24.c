
FCtr = 3.*2.*2.;

FCtr *= a_m * a_m;

p1 = q_q+p_p/4.+Q_Q/16.-p_q-Q_p/4.+Q_q/2.;
p2 = q_q+p_p/4.+Q_Q/16.-p_q+Q_p/4.-Q_q/2.;

ampl  =
meson_21.interpolateComplex(p1)*
meson_22.interpolateComplex(p2);

ampl  = (
quark_1.interpolate_shell("B",p1)*quark_1.interpolate_shell("B",p2))/(0.093*0.093);

v.resize(10000,0.);


    v[1]=Q_Q;
    v[2]=Q_p;
    v[3]=Q_q;
    v[4]=q_q;
    v[5]=p_q;
   v[6]=v[2]*svqmp;
   v[7]=svqm*svqp;
   v[8]=v[6]*v[7];
   v[9]=svqp*ssqm;
   v[10]=svqm*ssqp;
   v[11]=v[9]-v[10];
   v[12]=2.E+0*ssqmp;
   v[12]=-v[11]*v[12];
   v[12]=v[12]-v[8];
   v[12]=v[1]*v[12];
   v[13]=v[4]*svqmp;
   v[14]=v[13]*v[7];
   v[15]=ssqp*ssqm;
   v[16]=v[15]*svqmp;
   v[17]=v[16]-v[14];
   v[9]=v[9]+v[10];
   v[10]=v[9]*ssqmp;
   v[10]=v[17]-v[10];
   v[18]=v[5]*svqmp;
   v[19]=2.E+0*v[18];
   v[20]=v[7]*v[19];
   v[20]=v[20]+v[10];
   v[21]=v[7]*svqmp;
   v[22]=v[1]*v[21];
   v[20]=4.E+0*v[20]+v[22];
   v[20]=v[3]*v[20];
   v[16]=-v[16]-v[14];
   v[16]=v[2]*v[16];
   v[12]=v[20]+4.E+0*v[16]+v[12];
   v[12]=ampl*v[3]*v[12];
   v[10]=v[4]*v[10];
   v[16]=-v[5]*v[17];
   v[10]=v[10]+v[16];
   v[16]=v[7]*v[18];
   v[14]=-v[14]+v[16];
   v[14]=v[1]*v[14];
   v[16]=-ssqmp*v[11];
   v[17]=v[3]*v[21];
   v[8]=v[17]+v[16]-v[8];
   v[16]=2.E+0*v[3];
   v[8]=v[8]*v[16];
   v[8]=v[8]+4.E+0*v[10]+v[14];
   v[8]=ampl*v[8];
   v[10]=-v[9]*v[6];
   v[14]=v[11]*v[19];
   v[16]=v[9]*svqmp;
   v[7]=v[7]*ssqmp;
   v[17]=-v[16]+2.E+0*v[7];
   v[20]=-v[3]*v[17];
   v[10]=v[20]+v[10]+v[14];
   v[10]=v[3]*v[10];
   v[14]=v[4]*v[17];
   v[17]=v[9]*v[18];
   v[14]=v[14]+v[17];
   v[14]=v[1]*v[14];
   v[17]=2.E+0*v[11];
   v[13]=-v[2]*v[13]*v[17];
   v[10]=v[10]+v[13]+v[14];
   v[10]=4.E+0*ampl*v[10];
   v[13]=v[16]-v[7];
   v[13]=v[4]*v[13];
   v[14]=ssqmp*v[15];
   v[13]=v[14]+v[13];
   v[6]=-v[11]*v[6];
   v[9]=-v[9]*v[19];
   v[6]=v[9]+2.E+0*v[13]+v[6];
   v[9]=v[17]*v[3]*svqmp;
   v[7]=v[1]*v[7];
   v[6]=v[9]+2.E+0*v[6]+v[7];
   v[6]=ampl*v[6];


K24[SI_K24(ip,izp,0,iq,izq,0)] += -prefactor_1l * wj * FCtr * v[6];
K24[SI_K24(ip,izp,0,iq,izq,1)] += -prefactor_1l * wj * FCtr * v[12];
K24[SI_K24(ip,izp,0,iq,izq,2)] += -prefactor_1l * wj * FCtr * v[8];
K24[SI_K24(ip,izp,0,iq,izq,3)] += -prefactor_1l * wj * FCtr * v[10];
v.clear();
