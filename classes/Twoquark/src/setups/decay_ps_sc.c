vec<cdouble> w(1000,0.);
cdouble i_(0.,1.);

    w[1]=P_P;
    w[2]=P_q;
    w[3]=q_q;
   w[4]=svm*svp;
   w[5]=w[4]*w[1];
   w[6]=eta - 1.E+0;
   w[6]=eta*w[6]*w[5];
   w[7]=ssm*ssp;
   w[6]=w[6] + w[7];
   w[7]=w[1]*w[6];
   w[8]= - 1.E+0 + 2.E+0*eta;
   w[5]=w[8]*w[5];
   w[8]=w[4]*w[2];
   w[9]=w[5] + 2.E+0*w[8];
   w[9]=w[2]*w[9];
   w[10]=w[3]*w[1];
   w[4]= - w[4]*w[10];
   w[4]=w[4] + w[7] + w[9];
   w[7]=4.E+0*i_;
   w[4]=w[4]*w[7];
   w[9]=pow(w[2],2);
   w[6]=w[6]*w[9];
   w[5]=w[5] + w[8];
   w[5]=w[3]*w[2]*w[5];
   w[5]=w[6] + w[5];
   w[5]=w[5]*w[7];
   w[6]=w[9] - w[10];
   w[8]=ssm*svp;
   w[9]=svm*ssp;
   w[10]=w[8] + w[9];
   w[6]=8.E+0*i_*w[10]*w[6];
   w[8]=w[8] - w[9];
   w[10]= - eta*w[8];
   w[9]= - w[9] + w[10];
   w[9]=w[1]*w[9];
   w[8]= - w[2]*w[8];
   w[8]=w[9] + w[8];
   w[7]=w[8]*w[7];

K_lep[SI_amplitude(0,iq,izq)] = jacobians * weights * w[7];

if(n_dirac > 1)
{
    K_lep[SI_amplitude(1,iq,izq)] = jacobians * weights * w[4];

if(n_dirac > 2)
{
    K_lep[SI_amplitude(2,iq,izq)] = jacobians * weights * w[5];

if(n_dirac > 3)
{
    K_lep[SI_amplitude(3,iq,izq)] = jacobians * weights * w[6];

}}}

