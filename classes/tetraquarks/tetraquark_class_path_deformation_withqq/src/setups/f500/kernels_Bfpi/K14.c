
FCtr = 3.*2.*2.;

FCtr *= a_m * a_m;

p1 = q_q+p_p/4.+Q_Q/16.-p_q-Q_p/4.+Q_q/2.;
p2 = q_q+p_p/4.+Q_Q/16.-p_q+Q_p/4.-Q_q/2.;

ampl  =
meson_11.interpolateComplex(p1)*
meson_12.interpolateComplex(p2);

ampl  = (
quark_1.interpolate_shell("B",p1)*quark_1.interpolate_shell("B",p2))/(0.093*0.093);

v.resize(10000,0.);


    v[1]=Q_Q;
    v[2]=Q_p;
    v[3]=Q_q;
    v[4]=q_q;
    v[5]=p_q;
   v[6]=pow(v[3],2);
   v[7]=svqm*ampl;
   v[8]=v[7]*svqp;
   v[9]=svqmp*v[8];
   v[10]=v[6]*v[9];
   v[11]=v[2]*v[3];
   v[12]=v[11]*v[9];
   v[13]=-v[10]-v[12];
   v[13]=v[4]*v[13];
   v[7]=v[7]*ssqp;
   v[14]=ssqm*ampl;
   v[15]=svqp*v[14];
   v[16]=v[7]+v[15];
   v[17]=v[16]*ssqmp;
   v[14]=ssqp*v[14];
   v[18]=v[14]*svqmp;
   v[17]=v[17]-v[18];
   v[19]=-v[17]*v[6];
   v[20]=2.E+0*v[5];
   v[10]=v[20]*v[10];
   v[21]=-v[11]*v[18];
   v[10]=v[13]+v[21]+v[19]+v[10];
   v[7]=v[7]-v[15];
   v[13]=v[7]*ssqmp;
   v[15]=v[9]*v[3];
   v[19]=2.E+0*v[13]+v[15];
   v[19]=v[3]*v[19];
   v[19]=v[19]-v[12];
   v[19]=v[1]*v[19];
   v[10]=4.E+0*v[10]+v[19];
   v[19]=v[4]-v[5];
   v[9]=v[9]*v[19];
   v[17]=-v[9]-v[17];
   v[19]=2.E+0*v[4];
   v[17]=v[17]*v[19];
   v[13]=v[13]+v[15];
   v[13]=v[3]*v[13];
   v[15]=-v[18]*v[20];
   v[12]=v[17]-v[12]+v[13]+v[15];
   v[9]=-v[1]*v[9];
   v[9]=2.E+0*v[12]+v[9];
   v[12]=v[5]*svqmp;
   v[13]=v[12]*v[16];
   v[15]=v[16]*svqmp;
   v[8]=ssqmp*v[8];
   v[16]=-v[15]+2.E+0*v[8];
   v[17]=v[4]*v[16];
   v[17]=v[13]+v[17];
   v[17]=v[1]*v[17];
   v[6]=-v[16]*v[6];
   v[16]=v[7]*v[3];
   v[12]=v[12]*v[16];
   v[11]=-v[11]*v[15];
   v[7]=v[7]*v[2];
   v[18]=2.E+0*svqmp;
   v[18]=v[4]*v[18]*v[7];
   v[6]=v[17]+v[18]+v[11]+v[6]-2.E+0*v[12];
   v[6]=4.E+0*v[6];
   v[7]=v[7]-v[16];
   v[7]=svqmp*v[7];
   v[11]=ssqmp*v[14];
   v[11]=v[13]-v[11];
   v[12]=-v[8]+v[15];
   v[12]=v[12]*v[19];
   v[7]=v[12]+v[7]-2.E+0*v[11];
   v[8]=v[1]*v[8];
   v[7]=2.E+0*v[7]+v[8];


K14[SI_K14(ip,izp,0,iq,izq,0)] += -prefactor_1l * wj * FCtr * v[7];
K14[SI_K14(ip,izp,0,iq,izq,1)] += -prefactor_1l * wj * FCtr * v[10];
K14[SI_K14(ip,izp,0,iq,izq,2)] += -prefactor_1l * wj * FCtr * v[9];
K14[SI_K14(ip,izp,0,iq,izq,3)] += -prefactor_1l * wj * FCtr * v[6];
v.clear();
