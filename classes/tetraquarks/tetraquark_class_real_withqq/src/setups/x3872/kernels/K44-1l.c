FCtr = 4./3.;
v.resize(100,0.);

    v[1]=1./( - 4.E+0*Q_Q*Q_p*p_p + 4.E+0*pow(Q_p,3));
    v[2]=Q_Q;
    v[3]=Q_p;
    v[4]=Q_q;
    v[5]=p_q;
    v[6]=q_q;
   v[7]=v[5]*v[2];
   v[8]=v[4]*v[3];
   v[7]=v[7] - v[8];
   v[7]=4.E+0*v[7];
   v[9]=v[6]*v[7];
   v[10]= - v[5]*pow(v[2],2);
   v[8]=v[2]*v[8];
   v[8]=v[9] + v[10] + v[8];
   v[8]=svqm*svqp*v[8];
   v[7]=ssqm*ssqp*v[7];
   v[7]=v[7] + v[8];
   v[7]=3.E+0*G*v[7]*v[1]*v[4];

K44[SI_K44(ip,izp,0,iq,izq,0)] += -quark_2.getZ2() * quark_2.getZ2() * prefactor_1l * wj * FCtr
* v[7];
