sv1 = sv1_q1;
ss1 = ss1_q1;
sv2 = sv2_q1;
ss2 = ss2_q1;
sv3 = sv3_q2;
ss3 = ss3_q2;
sv4 = sv4_q2;
ss4 = ss4_q2;

w.resize(10000,0.);

if(isud){FCtr  = 4.*3.;}
if(!isud){FCtr  = 4.*3.;}

if(quark_1.getMass() == 0.0037){
ampl01 = 0.5*(ns_data::vc_0037_0037(0,std::real(l_l+p_l+0.25*p_p))*ns_data::vc_7950_0037(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))*ns_data::vc_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))*ns_data::ps_7950_0037(0,std::real(l_l+q_l+0.25*q_q))
);
ampl10 = 0.5*(ns_data::vc_0037_0037(0,std::real(l_l+p_l+0.25*p_p))*ns_data::ps_7950_0037(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))*ns_data::vc_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))*ns_data::vc_7950_0037(0,std::real(l_l+q_l+0.25*q_q))
);
}
else
if(quark_1.getMass() == 0.0200){
ampl01 = 0.5*(ns_data::vc_0200_0200(0,std::real(l_l+p_l+0.25*p_p))*ns_data::vc_7950_0200(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))*ns_data::vc_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))*ns_data::ps_7950_0200(0,std::real(l_l+q_l+0.25*q_q))
);
ampl10 = 0.5*(ns_data::vc_0200_0200(0,std::real(l_l+p_l+0.25*p_p))*ns_data::ps_7950_0200(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))*ns_data::vc_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))*ns_data::vc_7950_0200(0,std::real(l_l+q_l+0.25*q_q))
);
}
else
if(quark_1.getMass() == 0.0500){
ampl01 = 0.5*(ns_data::vc_0500_0500(0,std::real(l_l+p_l+0.25*p_p))*ns_data::vc_7950_0500(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))*ns_data::vc_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))*ns_data::ps_7950_0500(0,std::real(l_l+q_l+0.25*q_q))
);
ampl10 = 0.5*(ns_data::vc_0500_0500(0,std::real(l_l+p_l+0.25*p_p))*ns_data::ps_7950_0500(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))*ns_data::vc_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))*ns_data::vc_7950_0500(0,std::real(l_l+q_l+0.25*q_q))
);
}
else
if(quark_1.getMass() == 0.0855){
ampl01 = 0.5*(ns_data::vc_0855_0855(0,std::real(l_l+p_l+0.25*p_p))*ns_data::vc_7950_0855(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))*ns_data::vc_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))*ns_data::ps_7950_0855(0,std::real(l_l+q_l+0.25*q_q))
);
ampl10 = 0.5*(ns_data::vc_0855_0855(0,std::real(l_l+p_l+0.25*p_p))*ns_data::ps_7950_0855(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))*ns_data::vc_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))*ns_data::vc_7950_0855(0,std::real(l_l+q_l+0.25*q_q))
);
}
else
if(quark_1.getMass() == 0.1500){
ampl01 = 0.5*(ns_data::vc_1500_1500(0,std::real(l_l+p_l+0.25*p_p))*ns_data::vc_7950_1500(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))*ns_data::vc_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))*ns_data::ps_7950_1500(0,std::real(l_l+q_l+0.25*q_q))
);
ampl10 = 0.5*(ns_data::vc_1500_1500(0,std::real(l_l+p_l+0.25*p_p))*ns_data::ps_7950_1500(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))*ns_data::vc_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))*ns_data::vc_7950_1500(0,std::real(l_l+q_l+0.25*q_q))
);
}
else
if(quark_1.getMass() == 0.2100){
ampl01 = 0.5*(ns_data::vc_2100_2100(0,std::real(l_l+p_l+0.25*p_p))*ns_data::vc_7950_2100(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))*ns_data::vc_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))*ns_data::ps_7950_2100(0,std::real(l_l+q_l+0.25*q_q))
);
ampl10 = 0.5*(ns_data::vc_2100_2100(0,std::real(l_l+p_l+0.25*p_p))*ns_data::ps_7950_2100(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))*ns_data::vc_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))*ns_data::vc_7950_2100(0,std::real(l_l+q_l+0.25*q_q))
);
}
else
if(quark_1.getMass() == 0.3500){
ampl01 = 0.5*(ns_data::vc_3500_3500(0,std::real(l_l+p_l+0.25*p_p))*ns_data::vc_7950_3500(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))*ns_data::vc_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))*ns_data::ps_7950_3500(0,std::real(l_l+q_l+0.25*q_q))
);
ampl10 = 0.5*(ns_data::vc_3500_3500(0,std::real(l_l+p_l+0.25*p_p))*ns_data::ps_7950_3500(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))*ns_data::vc_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))*ns_data::vc_7950_3500(0,std::real(l_l+q_l+0.25*q_q))
);
}
else
if(quark_1.getMass() == 0.5000){
ampl01 = 0.5*(ns_data::vc_5000_5000(0,std::real(l_l+p_l+0.25*p_p))*ns_data::vc_7950_5000(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))*ns_data::vc_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))*ns_data::ps_7950_5000(0,std::real(l_l+q_l+0.25*q_q))
);
ampl10 = 0.5*(ns_data::vc_5000_5000(0,std::real(l_l+p_l+0.25*p_p))*ns_data::ps_7950_5000(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))*ns_data::vc_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))*ns_data::vc_7950_5000(0,std::real(l_l+q_l+0.25*q_q))
);
}
else
if(quark_1.getMass() == 0.6500){
ampl01 = 0.5*(ns_data::vc_6500_6500(0,std::real(l_l+p_l+0.25*p_p))*ns_data::vc_7950_6500(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))*ns_data::vc_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))*ns_data::ps_7950_6500(0,std::real(l_l+q_l+0.25*q_q))
);
ampl10 = 0.5*(ns_data::vc_6500_6500(0,std::real(l_l+p_l+0.25*p_p))*ns_data::ps_7950_6500(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))*ns_data::vc_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))*ns_data::vc_7950_6500(0,std::real(l_l+q_l+0.25*q_q))
);
}
else
if(quark_1.getMass() == 0.7950){
ampl01 = 0.5*(ns_data::vc_7950_7950(0,std::real(l_l+p_l+0.25*p_p))*ns_data::vc_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))*ns_data::vc_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))*ns_data::ps_7950_7950(0,std::real(l_l+q_l+0.25*q_q))
);
ampl10 = 0.5*(ns_data::vc_7950_7950(0,std::real(l_l+p_l+0.25*p_p))*ns_data::ps_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))*ns_data::vc_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))*ns_data::vc_7950_7950(0,std::real(l_l+q_l+0.25*q_q))
);
}


    w[1]=1./(-6.E+0*Q_Q*p_p+6.E+0*pow(Q_p,2));
    w[2]=Q_Q;
    w[3]=Q_p;
    w[4]=Q_q;
    w[5]=pow(p_p,-1);
    w[6]=p_q;
    w[7]=p_l;
    w[8]=q_q;
    w[9]=q_l;
    w[10]=Q_l;
    w[11]=p_p;
    w[12]=l_l;
    w[13]=1./(-6.E+0*Q_Q*Q_p*p_p+6.E+0*pow(Q_p,3));
   w[14]=ss3*sv4*i_;
   w[15]=sv1*sv2;
   w[16]=w[14]*w[15];
   w[17]=sv3*i_;
   w[18]=w[17]*ss4;
   w[15]=w[18]*w[15];
   w[19]=w[16]-w[15];
   w[20]=w[17]*ss1;
   w[21]=w[20]*sv2*sv4;
   w[22]=w[19]-w[21];
   w[17]=w[17]*sv1*sv4;
   w[23]=w[17]*ss2;
   w[24]=w[22]-w[23];
   w[25]=w[24]*w[11];
   w[26]=w[23]-w[21];
   w[27]=w[26]+w[19];
   w[28]=w[27]*w[7];
   w[29]=w[25]+w[28];
   w[30]=3.E+0*w[23];
   w[31]=w[30]-w[19];
   w[32]=w[31]+5.E+0*w[21];
   w[33]=5.E-1*w[3];
   w[32]=w[32]*w[33];
   w[32]=w[32]-2.E+0*w[29];
   w[32]=w[32]*w[6];
   w[34]=w[14]+w[18];
   w[34]=w[34]*ss1;
   w[35]=i_*ss3*ss4;
   w[36]=sv1*w[35];
   w[17]=w[17]*w[12];
   w[37]=w[36]+w[17];
   w[38]=w[34]+w[37];
   w[39]=w[38]*ss2;
   w[40]=w[15]+w[21];
   w[41]=w[40]+w[16];
   w[42]=w[41]*w[12];
   w[35]=ss1*sv2*w[35];
   w[42]=w[42]+w[35];
   w[39]=w[39]+w[42];
   w[43]=w[40]*w[11];
   w[44]=w[39]+w[43];
   w[45]=2.E+0*w[7];
   w[46]=w[45]*w[40];
   w[46]=w[46]+w[44];
   w[47]=4.E+0*w[9];
   w[48]=w[47]*w[23];
   w[48]=w[48]+w[46];
   w[49]=2.E+0*w[11];
   w[50]=w[48]*w[49];
   w[51]=w[15]-w[21];
   w[52]=w[51]+w[16];
   w[53]=w[52]-w[23];
   w[54]=w[7]*w[53]*w[3];
   w[55]=w[53]*w[10];
   w[56]=w[55]*w[11];
   w[57]=w[23]+w[41];
   w[58]=1.25E-1*w[2];
   w[59]=w[57]*w[58];
   w[60]=w[59]*w[11];
   w[61]=w[23]+w[21];
   w[62]=w[61]*w[4];
   w[63]=w[62]*w[11];
   w[64]=w[61]*w[8];
   w[65]=w[64]*w[49];
   w[32]=w[32]-w[54]-w[63]+w[56]+w[50]-w[60]+w[65];
   w[32]=w[32]*w[4];
   w[50]=w[19]+w[21];
   w[54]=5.E+0*w[23];
   w[63]=w[54]-w[50];
   w[63]=w[63]*w[9];
   w[66]=w[22]*w[5];
   w[67]=w[23]*w[5];
   w[68]=w[66]+w[67];
   w[69]=w[68]*w[7];
   w[70]=w[69]-w[40];
   w[71]=w[70]*w[45];
   w[63]=w[63]-w[71]+w[44];
   w[52]=w[52]*w[5];
   w[52]=w[52]-w[67];
   w[71]=w[52]*w[7];
   w[72]=w[71]*w[3];
   w[72]=w[72]-w[55];
   w[73]=2.E+0*w[8];
   w[74]=w[73]*w[61];
   w[74]=w[74]-w[59];
   w[63]=-w[72]+w[74]+2.E+0*w[63];
   w[63]=w[63]*w[3];
   w[75]=w[68]*w[45];
   w[76]=w[75]+w[24];
   w[77]=2.E+0*w[21];
   w[78]=w[77]-w[19];
   w[78]=w[78]*w[3]*w[5];
   w[79]=-w[78]+2.E+0*w[76];
   w[79]=w[79]*w[3];
   w[80]=w[27]*w[10];
   w[14]=w[14]-w[18];
   w[14]=w[14]*ss1;
   w[18]=w[14]-w[17];
   w[81]=w[18]*ss2;
   w[82]=w[21]*w[12];
   w[81]=w[82]+w[81];
   w[82]=w[21]*w[11];
   w[83]=w[81]+w[82];
   w[84]=-w[80]+4.E+0*w[83];
   w[85]=5.E-1*w[2];
   w[86]=w[85]*w[19];
   w[84]=w[79]-w[86]+2.E+0*w[84];
   w[84]=w[84]*w[6];
   w[87]=w[19]-w[23];
   w[88]=3.E+0*w[21];
   w[89]=w[87]+w[88];
   w[89]=w[89]*w[9];
   w[20]=w[20]*ss4;
   w[20]=w[20]+w[17];
   w[20]=w[20]*ss2;
   w[20]=w[20]-w[35];
   w[90]=w[16]*w[12];
   w[91]=-w[90]+w[20];
   w[89]=w[89]-w[91];
   w[92]=w[89]*w[11];
   w[93]=w[28]*w[9];
   w[92]=w[92]+w[93];
   w[94]=w[28]*w[10];
   w[95]=w[49]*w[21];
   w[96]=w[95]*w[8];
   w[92]=w[96]-w[94]+2.E+0*w[92];
   w[97]=w[16]-w[23];
   w[98]=w[97]*w[11];
   w[99]=w[98]*w[85];
   w[63]=-w[99]-w[63]+w[84]+4.E+0*w[92];
   w[63]=w[63]*w[6];
   w[37]=w[37]-w[14];
   w[84]=w[37]*ss2;
   w[92]=w[50]*w[12];
   w[100]=w[92]+w[35];
   w[84]=w[84]-w[100];
   w[101]=2.E+0*w[9];
   w[102]=w[101]*w[26];
   w[103]=w[102]+w[84];
   w[104]=w[103]*w[9];
   w[105]=w[45]*w[51];
   w[106]=w[105]*w[9];
   w[107]=w[51]*w[11];
   w[108]=w[107]*w[9];
   w[106]=w[106]+w[108];
   w[109]=w[104]+w[106];
   w[110]=w[109]*w[49];
   w[111]=w[10]*w[11];
   w[112]=w[111]*w[19];
   w[113]=w[102]*w[11];
   w[112]=w[113]-w[112];
   w[112]=w[112]*w[8];
   w[113]=w[27]*w[11];
   w[114]=w[113]*w[9];
   w[115]=w[114]*w[10];
   w[110]=w[112]+w[110]-w[115];
   w[112]=w[8]*w[7];
   w[116]=w[112]*w[19];
   w[116]=w[116]+w[93];
   w[117]=w[53]*w[9];
   w[118]=w[117]-w[64];
   w[118]=w[118]*w[3];
   w[116]=-w[118]+4.E+0*w[116];
   w[116]=w[116]*w[3];
   w[118]=3.E+0*w[16];
   w[119]=w[118]-w[30];
   w[120]=w[119]+w[51];
   w[121]=w[120]*w[11];
   w[122]=5.E-1*w[9];
   w[123]=w[122]*w[121];
   w[124]=w[64]*w[11];
   w[124]=w[124]-w[123];
   w[124]=w[124]*w[2];
   w[32]=w[63]+w[32]+w[124]-w[116]-4.E+0*w[110];
   w[32]=w[32]*w[4];
   w[63]=pow(w[7],2);
   w[110]=w[63]*w[68];
   w[116]=w[26]*w[9];
   w[124]=w[110]+w[116];
   w[125]=w[26]-w[19];
   w[126]=w[125]*w[10];
   w[124]=w[126]+4.E+0*w[124];
   w[124]=w[124]*w[8];
   w[127]=4.E+0*w[7];
   w[128]=w[127]*w[51];
   w[129]=w[128]*w[9];
   w[104]=w[108]+w[129]+w[104];
   w[104]=w[124]+4.E+0*w[104];
   w[124]=w[88]-w[19];
   w[124]=w[124]*w[5];
   w[124]=w[124]+w[67];
   w[130]=5.E-1*w[8];
   w[124]=w[124]*w[130];
   w[131]=w[52]*w[9];
   w[124]=w[124]-w[131];
   w[124]=w[124]*w[3];
   w[131]=w[69]*w[9];
   w[132]=w[21]*w[5];
   w[133]=w[132]-w[67];
   w[134]=w[112]*w[133];
   w[135]=w[134]-w[131];
   w[136]=w[40]*w[9];
   w[136]=w[136]-w[135];
   w[136]=-w[124]+4.E+0*w[136];
   w[136]=w[136]*w[3];
   w[87]=w[87]-w[88];
   w[137]=w[87]*w[8];
   w[138]=w[120]*w[9];
   w[137]=w[137]+w[138];
   w[137]=w[137]*w[85];
   w[104]=-2.E+0*w[104]+w[136]-w[137];
   w[104]=w[104]*w[3];
   w[136]=w[30]+w[50];
   w[136]=w[136]*w[9];
   w[137]=w[136]+w[44];
   w[138]=5.E-1*w[10];
   w[139]=w[138]*w[125];
   w[140]=w[74]+w[139];
   w[137]=w[140]+2.E+0*w[137];
   w[137]=w[137]*w[2];
   w[100]=w[100]*w[5];
   w[141]=ss2*w[5];
   w[37]=w[37]*w[141];
   w[37]=w[100]-w[37];
   w[100]=w[101]*w[19];
   w[142]=w[100]*w[5];
   w[142]=w[142]+w[37];
   w[143]=-w[51]+w[142];
   w[143]=w[143]*w[7];
   w[144]=w[133]*w[7];
   w[145]=w[144]+w[21];
   w[146]=w[145]*w[8];
   w[146]=w[89]+w[146]+w[143];
   w[147]=w[50]*w[5];
   w[148]=w[147]-w[67];
   w[149]=w[148]*w[7];
   w[150]=w[149]+w[97];
   w[150]=w[150]*w[85];
   w[146]=-w[150]+8.E+0*w[146];
   w[42]=w[42]*w[5];
   w[38]=w[38]*w[141];
   w[38]=w[42]+w[38];
   w[42]=w[38]+w[40];
   w[147]=w[147]+w[67];
   w[147]=w[147]*w[101];
   w[151]=w[132]+w[67];
   w[152]=w[151]*w[8];
   w[147]=w[147]+w[152];
   w[152]=w[147]+w[42];
   w[153]=w[41]*w[5];
   w[154]=w[153]+w[67];
   w[58]=w[154]*w[58];
   w[152]=-w[58]+2.E+0*w[152];
   w[152]=w[152]*w[3];
   w[155]=w[152]+w[146];
   w[155]=w[155]*w[3];
   w[156]=w[125]*w[9];
   w[157]=w[84]+w[156];
   w[158]=w[157]+w[107];
   w[158]=w[158]*w[10];
   w[159]=w[8]*w[10];
   w[160]=w[159]*w[26];
   w[158]=w[158]+w[160];
   w[161]=w[133]*w[85];
   w[18]=w[18]*w[141];
   w[132]=w[132]*w[12];
   w[18]=w[132]+w[18];
   w[132]=w[18]+w[21];
   w[141]=-w[161]+8.E+0*w[132];
   w[162]=w[6]*w[3];
   w[163]=w[141]*w[162];
   w[137]=w[155]+w[163]-w[137]+8.E+0*w[158];
   w[137]=w[137]*w[6];
   w[155]=w[43]*w[9];
   w[158]=w[155]+w[93];
   w[163]=w[28]*w[8];
   w[158]=w[163]+2.E+0*w[158];
   w[158]=w[158]*w[2];
   w[163]=w[159]*w[28];
   w[164]=w[101]*w[10];
   w[165]=w[164]*w[107];
   w[163]=w[163]+w[165];
   w[158]=w[158]-4.E+0*w[163];
   w[104]=w[104]+w[137]-2.E+0*w[158];
   w[104]=w[104]*w[6];
   w[137]=2.E+0*w[23];
   w[158]=w[137]+w[19];
   w[158]=w[158]*w[101];
   w[46]=w[158]+w[46];
   w[158]=w[46]+w[64];
   w[158]=w[158]*w[8];
   w[163]=pow(w[9],2);
   w[166]=w[163]*w[27];
   w[158]=w[158]+2.E+0*w[166];
   w[167]=w[59]*w[8];
   w[158]=-w[167]+2.E+0*w[158];
   w[158]=w[158]*w[3];
   w[103]=w[103]+w[105];
   w[167]=w[103]*w[7];
   w[168]=w[107]*w[7];
   w[169]=w[112]*w[26];
   w[170]=w[169]+w[167]+w[168];
   w[171]=8.E+0*w[8];
   w[170]=w[170]*w[171];
   w[172]=w[125]*w[85];
   w[173]=w[172]*w[112];
   w[158]=w[158]-w[170]+w[173];
   w[158]=w[158]*w[3];
   w[170]=w[139]*w[11];
   w[60]=w[170]-w[60];
   w[46]=w[46]*w[49];
   w[46]=w[65]+w[46]+w[60];
   w[46]=w[46]*w[8];
   w[170]=w[163]*w[113];
   w[46]=w[46]+4.E+0*w[170];
   w[46]=w[46]*w[2];
   w[103]=w[103]+w[107];
   w[170]=w[103]*w[111];
   w[173]=w[160]*w[11];
   w[170]=w[173]+w[170];
   w[170]=w[170]*w[171];
   w[32]=-w[32]+w[104]-w[158]+w[46]-w[170];
   w[46]=PM12m*w[4];
   w[104]=w[32]*w[46];
   w[158]=w[27]*w[9];
   w[170]=w[131]+w[158];
   w[170]=2.E+0*w[170];
   w[173]=w[133]*w[45];
   w[174]=w[173]-w[27];
   w[174]=w[174]*w[8];
   w[174]=w[174]-w[170];
   w[174]=w[124]+2.E+0*w[174];
   w[174]=w[174]*w[3];
   w[130]=w[130]*w[87];
   w[117]=w[130]+w[117];
   w[117]=w[117]*w[2];
   w[130]=w[69]+w[27];
   w[175]=w[127]*w[130];
   w[175]=w[175]+w[126];
   w[175]=w[175]*w[73];
   w[117]=w[174]+w[117]+w[175];
   w[117]=w[117]*w[3];
   w[174]=w[113]+w[28];
   w[175]=w[174]*w[8];
   w[114]=w[114]+w[93];
   w[114]=2.E+0*w[114];
   w[175]=w[175]+w[114];
   w[175]=w[175]*w[2];
   w[176]=4.E+0*w[159];
   w[177]=w[176]*w[174];
   w[175]=w[175]-w[177];
   w[117]=w[117]+2.E+0*w[175];
   w[175]=PM12Lm*w[117];
   w[38]=w[38]-w[40];
   w[147]=w[147]+w[38];
   w[147]=-w[58]+2.E+0*w[147];
   w[147]=w[147]*w[3];
   w[142]=w[51]+w[142];
   w[142]=w[142]*w[7];
   w[142]=w[142]+w[134]+w[158];
   w[149]=w[149]*w[85];
   w[142]=-w[149]+8.E+0*w[142];
   w[147]=w[147]+w[142];
   w[147]=w[147]*w[3];
   w[39]=w[39]-w[43];
   w[136]=w[136]+w[39];
   w[136]=w[140]+2.E+0*w[136];
   w[136]=w[136]*w[2];
   w[177]=w[157]-w[107];
   w[178]=w[177]*w[10];
   w[179]=w[178]+w[160];
   w[136]=w[147]-w[136]+8.E+0*w[179];
   w[147]=-PM12Lm*w[136];
   w[18]=w[18]-w[21];
   w[161]=-w[161]+8.E+0*w[18];
   w[179]=PM12Lm*w[3];
   w[180]=w[179]*w[6];
   w[181]=-w[161]*w[180];
   w[147]=w[147]+w[181];
   w[147]=w[6]*w[147];
   w[147]=w[175]+w[147];
   w[147]=w[6]*w[147];
   w[175]=w[130]*w[45];
   w[181]=w[175]-w[156];
   w[181]=w[72]+2.E+0*w[181];
   w[181]=w[181]*w[3];
   w[182]=w[174]*w[10];
   w[114]=w[182]-w[114];
   w[114]=w[181]-4.E+0*w[114];
   w[181]=PM12Lm*w[114];
   w[75]=w[75]+w[27];
   w[78]=-w[78]+2.E+0*w[75];
   w[78]=w[78]*w[3];
   w[81]=w[81]-w[82];
   w[183]=-w[80]+4.E+0*w[81];
   w[78]=-w[86]+w[78]+2.E+0*w[183];
   w[183]=w[6]*PM12Lm;
   w[184]=w[78]*w[183];
   w[181]=w[181]+w[184];
   w[181]=w[6]*w[181];
   w[33]=w[33]*w[87];
   w[184]=w[33]+2.E+0*w[174];
   w[184]=w[184]*w[4];
   w[185]=-w[183]*w[184];
   w[181]=w[181]+w[185];
   w[181]=w[4]*w[181];
   w[147]=w[147]+w[181];
   w[147]=w[4]*w[147];
   w[104]=w[147]+w[104];
   w[147]=ampl01*PM11p;
   w[104]=w[104]*w[147];
   w[181]=PM12p*w[4];
   w[32]=w[32]*w[181];
   w[185]=-w[161]*w[162];
   w[185]=w[185]-w[136];
   w[185]=w[6]*w[185];
   w[185]=w[185]+w[117];
   w[185]=w[6]*w[185];
   w[114]=w[114]-w[184];
   w[184]=w[6]*w[78];
   w[184]=w[184]+w[114];
   w[186]=w[4]*w[6];
   w[184]=w[184]*w[186];
   w[184]=w[185]+w[184];
   w[185]=PM12Lp*w[4];
   w[184]=w[184]*w[185];
   w[32]=w[32]+w[184];
   w[184]=ampl10*PM11m;
   w[32]=w[32]*w[184];
   w[32]=w[104]+w[32];
   w[32]=w[1]*w[32];
   w[104]=3.E+0*w[67];
   w[66]=w[104]-w[66];
   w[66]=w[66]*w[9];
   w[187]=w[66]+w[42];
   w[52]=w[52]*w[10];
   w[52]=w[52]-w[58];
   w[58]=w[151]*w[73];
   w[58]=w[58]+w[52];
   w[187]=w[58]+2.E+0*w[187];
   w[187]=w[187]*w[3];
   w[91]=w[91]+w[156];
   w[188]=w[91]+w[131];
   w[189]=w[69]+w[40];
   w[189]=w[189]*w[10];
   w[190]=w[73]*w[21];
   w[189]=w[189]+w[190];
   w[188]=-w[189]+2.E+0*w[188];
   w[191]=5.E-1*w[97];
   w[192]=w[191]+w[71];
   w[192]=w[192]*w[2];
   w[188]=w[192]-w[187]+4.E+0*w[188];
   w[188]=w[188]*w[3];
   w[192]=w[44]+2.E+0*w[110];
   w[22]=w[30]-w[22];
   w[22]=w[22]*w[9];
   w[22]=w[22]+w[192];
   w[193]=w[120]*w[138];
   w[22]=w[193]+w[74]+2.E+0*w[22];
   w[22]=w[22]*w[2];
   w[100]=w[100]-w[84];
   w[193]=w[105]-w[100];
   w[194]=w[193]+w[107];
   w[195]=w[80]+2.E+0*w[194];
   w[195]=w[195]*w[10];
   w[196]=w[26]*w[10];
   w[197]=w[196]*w[73];
   w[195]=w[195]+w[197];
   w[22]=4.E+0*w[195]+w[188]+w[22];
   w[22]=w[22]*w[3];
   w[188]=w[51]*w[7];
   w[195]=w[188]+w[91];
   w[195]=w[195]*w[11];
   w[198]=w[157]+w[105];
   w[198]=w[198]*w[7];
   w[195]=w[195]+w[198];
   w[198]=w[43]-w[28];
   w[198]=w[198]*w[10];
   w[199]=w[26]*w[7];
   w[200]=w[199]-w[82];
   w[201]=w[200]*w[73];
   w[198]=w[198]-w[201];
   w[195]=-w[198]+2.E+0*w[195];
   w[201]=w[120]*w[7];
   w[201]=w[201]+w[98];
   w[201]=w[201]*w[85];
   w[195]=w[201]+4.E+0*w[195];
   w[195]=w[195]*w[2];
   w[201]=w[24]-w[69];
   w[202]=w[151]*w[3];
   w[201]=w[202]+2.E+0*w[201];
   w[201]=w[201]*w[3];
   w[203]=w[45]*w[21];
   w[203]=w[203]+w[83];
   w[204]=-w[80]+2.E+0*w[203];
   w[205]=w[30]+w[21];
   w[205]=w[205]*w[85];
   w[201]=-w[201]+w[205]+4.E+0*w[204];
   w[201]=w[201]*w[3];
   w[204]=2.E+0*w[2];
   w[29]=w[29]*w[204];
   w[29]=w[201]+w[29];
   w[29]=w[29]*w[4];
   w[201]=-w[80]+4.E+0*w[203];
   w[205]=5.E-1*w[19];
   w[206]=w[205]-w[61];
   w[207]=w[206]*w[2];
   w[201]=-w[207]+2.E+0*w[201];
   w[201]=w[201]*w[2];
   w[68]=w[68]*w[10];
   w[208]=-w[68]+4.E+0*w[132];
   w[209]=w[205]-w[77];
   w[209]=w[209]*w[2]*w[5];
   w[208]=w[209]+2.E+0*w[208];
   w[208]=w[208]*w[3];
   w[210]=w[69]*w[2];
   w[211]=4.E+0*w[10];
   w[212]=w[211]*w[21];
   w[210]=w[210]+w[212];
   w[210]=w[208]+4.E+0*w[210];
   w[210]=w[210]*w[3];
   w[201]=w[201]+w[210];
   w[201]=w[201]*w[6];
   w[22]=-w[201]-w[22]+w[195]+w[29];
   w[22]=w[22]*w[4];
   w[29]=w[133]*w[9];
   w[132]=w[29]+w[132];
   w[132]=4.E+0*w[132];
   w[195]=w[148]*w[10];
   w[201]=w[132]+w[195];
   w[201]=w[201]*w[8];
   w[210]=w[148]*w[9];
   w[37]=w[210]+w[37];
   w[212]=w[37]-w[51];
   w[213]=w[212]*w[47];
   w[201]=w[201]+w[213];
   w[213]=w[133]*w[8];
   w[210]=w[213]+w[210];
   w[210]=w[210]*w[85];
   w[201]=-w[210]+2.E+0*w[201];
   w[201]=w[201]*w[3];
   w[213]=w[77]+w[69];
   w[213]=w[213]*w[159];
   w[164]=w[164]*w[51];
   w[213]=w[213]-w[164];
   w[112]=w[112]*w[2];
   w[214]=w[112]*w[148];
   w[213]=-w[214]+4.E+0*w[213];
   w[213]=w[201]+2.E+0*w[213];
   w[213]=w[213]*w[3];
   w[215]=w[110]+w[83];
   w[216]=w[215]-w[116];
   w[216]=-w[126]+4.E+0*w[216];
   w[216]=w[216]*w[8];
   w[217]=w[157]*w[9];
   w[218]=w[217]+w[108];
   w[216]=w[216]-4.E+0*w[218];
   w[218]=w[26]*w[8];
   w[219]=w[218]+w[156];
   w[219]=w[219]*w[85];
   w[216]=w[219]+2.E+0*w[216];
   w[216]=w[216]*w[2];
   w[220]=pow(w[10],2);
   w[221]=w[220]*w[171];
   w[222]=w[221]*w[27];
   w[213]=-w[222]+w[213]-w[216];
   w[213]=w[213]*w[3];
   w[134]=w[143]+w[134];
   w[134]=-w[149]+8.E+0*w[134];
   w[134]=w[134]*w[2];
   w[149]=w[212]*w[10];
   w[216]=w[159]*w[133];
   w[149]=w[149]+w[216];
   w[222]=w[101]+w[138];
   w[148]=w[2]*w[148]*w[222];
   w[149]=-w[148]+8.E+0*w[149];
   w[149]=w[149]*w[3];
   w[220]=1.6E+1*w[220];
   w[222]=w[220]*w[51];
   w[134]=w[134]+w[222]-w[149];
   w[134]=w[134]*w[3];
   w[222]=w[158]+w[105];
   w[222]=w[222]*w[211];
   w[223]=w[156]*w[2];
   w[222]=w[222]-w[223];
   w[222]=w[222]*w[204];
   w[223]=w[141]*w[3];
   w[224]=w[223]*w[2];
   w[225]=w[21]*w[2];
   w[226]=w[225]*w[10];
   w[224]=w[224]+1.6E+1*w[226];
   w[224]=w[224]*w[6];
   w[134]=w[134]+w[224]-w[222];
   w[134]=w[134]*w[6];
   w[222]=w[95]-w[28];
   w[222]=w[222]*w[159];
   w[165]=w[222]-w[165];
   w[112]=w[112]*w[125];
   w[112]=w[112]+4.E+0*w[165];
   w[112]=w[112]*w[204];
   w[22]=w[22]+w[213]+w[134]-w[112];
   w[112]=-PM12m*w[22];
   w[29]=w[29]+w[18];
   w[29]=4.E+0*w[29];
   w[134]=w[29]+w[195];
   w[134]=w[134]*w[8];
   w[37]=w[37]+w[51];
   w[165]=w[37]*w[47];
   w[134]=w[134]+w[165];
   w[134]=-w[210]+2.E+0*w[134];
   w[134]=w[134]*w[3];
   w[165]=w[176]*w[130];
   w[165]=w[165]-w[214];
   w[134]=w[134]+2.E+0*w[165];
   w[134]=w[134]*w[3];
   w[165]=w[130]*w[7];
   w[81]=w[81]-w[116];
   w[165]=w[165]+w[81];
   w[195]=w[165]*w[8];
   w[108]=w[108]+w[195]-w[217];
   w[108]=w[219]+8.E+0*w[108];
   w[108]=w[108]*w[2];
   w[108]=w[134]-w[108];
   w[134]=w[108]*w[179];
   w[66]=w[66]+w[38];
   w[58]=w[58]+2.E+0*w[66];
   w[58]=w[58]*w[3];
   w[66]=w[130]*w[10];
   w[170]=w[66]-w[170];
   w[195]=w[71]*w[2];
   w[58]=w[58]-w[195]+4.E+0*w[170];
   w[58]=w[58]*w[3];
   w[170]=w[101]*w[61];
   w[170]=w[64]+w[170]+w[175]+w[39];
   w[170]=-w[59]+2.E+0*w[170];
   w[170]=w[170]*w[2];
   w[58]=w[58]-w[170];
   w[170]=-w[202]+2.E+0*w[130];
   w[170]=w[170]*w[3];
   w[195]=w[85]*w[27];
   w[170]=w[170]+w[195];
   w[170]=w[170]*w[4];
   w[195]=w[58]+w[170];
   w[210]=w[179]*w[195];
   w[18]=-w[68]+4.E+0*w[18];
   w[18]=w[209]+2.E+0*w[18];
   w[18]=w[18]*w[3];
   w[68]=w[75]*w[204];
   w[18]=w[18]+w[68];
   w[68]=-w[18]*w[180];
   w[68]=w[68]+w[210];
   w[68]=w[4]*w[68];
   w[75]=w[37]*w[10];
   w[75]=w[75]+w[216];
   w[75]=-w[148]+8.E+0*w[75];
   w[75]=w[75]*w[3];
   w[142]=w[142]*w[2];
   w[75]=w[75]-w[142];
   w[142]=-w[75]*w[179];
   w[148]=w[161]*w[2];
   w[209]=w[180]*w[148];
   w[142]=w[142]+w[209];
   w[142]=w[6]*w[142];
   w[68]=w[112]+w[68]+w[134]+w[142];
   w[112]=w[147]*w[13];
   w[68]=w[68]*w[112];
   w[22]=-PM12p*w[22];
   w[134]=w[3]*w[108];
   w[142]=w[3]*w[195];
   w[209]=-w[18]*w[162];
   w[142]=w[209]+w[142];
   w[142]=w[4]*w[142];
   w[209]=-w[3]*w[75];
   w[210]=w[162]*w[148];
   w[209]=w[209]+w[210];
   w[209]=w[6]*w[209];
   w[134]=w[142]+w[134]+w[209];
   w[134]=PM12Lp*w[134];
   w[22]=w[22]+w[134];
   w[22]=w[184]*w[13]*w[22];
   w[22]=w[68]+w[22];
   w[68]=w[21]*w[7];
   w[68]=w[68]+w[83];
   w[68]=-w[80]+4.E+0*w[68];
   w[134]=w[24]*w[2];
   w[68]=-w[134]+w[79]+4.E+0*w[68];
   w[68]=w[68]*w[3];
   w[79]=w[25]*w[2];
   w[82]=w[82]*w[10];
   w[79]=-w[79]+8.E+0*w[82];
   w[68]=w[68]+2.E+0*w[79];
   w[68]=w[68]*w[6];
   w[79]=w[19]*w[9];
   w[79]=w[79]+w[110];
   w[72]=w[72]+4.E+0*w[79];
   w[72]=w[72]*w[3];
   w[79]=w[193]*w[7];
   w[82]=w[94]+w[169];
   w[79]=w[79]+w[82]+w[168];
   w[94]=w[85]*w[7];
   w[110]=w[120]*w[94];
   w[72]=w[72]-w[110]-8.E+0*w[79];
   w[72]=w[72]*w[3];
   w[33]=w[33]+4.E+0*w[28];
   w[33]=w[33]*w[3];
   w[79]=w[203]*w[49];
   w[120]=w[113]*w[10];
   w[79]=w[79]-w[120];
   w[134]=w[207]*w[11];
   w[33]=-w[134]+w[33]+4.E+0*w[79];
   w[33]=w[33]*w[4];
   w[79]=w[194]*w[49];
   w[79]=w[79]+w[120];
   w[79]=w[79]*w[10];
   w[134]=w[160]*w[49];
   w[79]=w[79]+w[134];
   w[121]=w[121]*w[138];
   w[138]=w[19]*w[11];
   w[47]=w[138]*w[47];
   w[47]=w[121]-w[47];
   w[47]=w[47]*w[2];
   w[33]=w[68]+w[72]-w[33]+w[47]+4.E+0*w[79];
   w[33]=w[33]*w[4];
   w[47]=w[77]-w[69];
   w[47]=w[47]*w[7];
   w[47]=w[47]+w[83]-w[116];
   w[47]=-w[196]+2.E+0*w[47];
   w[47]=w[47]*w[8];
   w[68]=w[106]+w[217];
   w[72]=w[158]*w[10];
   w[47]=w[47]-w[72]-2.E+0*w[68];
   w[79]=-w[19]+1.5E+0*w[23]+2.5E+0*w[21];
   w[79]=w[79]*w[8];
   w[83]=-w[54]+5.E+0*w[16];
   w[106]=3.E+0*w[15];
   w[121]=-w[88]+w[83]+w[106];
   w[121]=w[121]*w[122];
   w[79]=w[79]-w[121];
   w[79]=w[79]*w[2];
   w[121]=w[124]+4.E+0*w[135];
   w[121]=w[121]*w[3];
   w[47]=w[79]-w[121]+4.E+0*w[47];
   w[47]=w[47]*w[3];
   w[79]=w[169]+w[93];
   w[79]=w[79]*w[2];
   w[121]=w[176]*w[28];
   w[79]=w[79]-w[121];
   w[47]=w[47]-4.E+0*w[79];
   w[47]=w[47]*w[3];
   w[79]=w[143]-w[91];
   w[121]=w[40]*w[10];
   w[73]=w[145]*w[73];
   w[73]=2.E+0*w[79]+w[121]+w[73];
   w[73]=w[152]-w[150]+4.E+0*w[73];
   w[73]=w[73]*w[3];
   w[50]=w[50]+w[23];
   w[50]=w[50]*w[101];
   w[44]=w[50]+w[44];
   w[44]=w[140]+2.E+0*w[44];
   w[44]=w[44]*w[2];
   w[50]=-w[105]+w[107]-w[100];
   w[50]=w[50]*w[10];
   w[50]=w[50]+w[160];
   w[44]=8.E+0*w[50]+w[73]-w[44];
   w[44]=w[44]*w[3];
   w[50]=w[91]*w[49];
   w[43]=w[43]*w[10];
   w[43]=w[96]+w[43]-w[50];
   w[43]=-w[99]+4.E+0*w[43];
   w[43]=w[43]*w[2];
   w[50]=w[21]*w[10];
   w[50]=w[223]+1.6E+1*w[50];
   w[50]=w[50]*w[162];
   w[73]=w[220]*w[107];
   w[43]=w[44]-w[43]+w[50]+w[73];
   w[43]=w[43]*w[6];
   w[44]=w[68]*w[49];
   w[50]=w[203]-w[116];
   w[50]=w[50]*w[49];
   w[68]=w[196]*w[11];
   w[50]=w[50]-w[68];
   w[50]=w[50]*w[8];
   w[44]=w[50]-w[44]-w[115];
   w[50]=w[11]*w[206]*w[8];
   w[50]=w[50]+w[123];
   w[50]=w[50]*w[2];
   w[44]=-w[50]+4.E+0*w[44];
   w[44]=w[44]*w[2];
   w[50]=w[221]*w[113];
   w[33]=-w[44]-w[50]+w[47]+w[43]-w[33];
   w[43]=PM12m*w[33];
   w[44]=w[117]*w[179];
   w[47]=-w[136]*w[179];
   w[50]=w[161]*pow(w[3],2);
   w[68]=-w[183]*w[50];
   w[47]=w[47]+w[68];
   w[47]=w[6]*w[47];
   w[68]=w[179]*w[114];
   w[73]=w[78]*w[180];
   w[68]=w[73]+w[68];
   w[68]=w[4]*w[68];
   w[43]=w[43]+w[68]+w[44]+w[47];
   w[43]=w[43]*w[147];
   w[33]=PM12p*w[33];
   w[44]=w[3]*w[117];
   w[47]=-w[3]*w[136];
   w[50]=-w[6]*w[50];
   w[47]=w[47]+w[50];
   w[47]=w[6]*w[47];
   w[50]=w[3]*w[114];
   w[68]=w[78]*w[162];
   w[50]=w[68]+w[50];
   w[50]=w[4]*w[50];
   w[44]=w[50]+w[44]+w[47];
   w[44]=PM12Lp*w[44];
   w[33]=w[33]+w[44];
   w[33]=w[33]*w[184];
   w[33]=w[43]+w[33];
   w[33]=w[1]*w[33];
   w[43]=w[77]+w[19];
   w[44]=w[43]*w[12];
   w[47]=2.E+0*w[17];
   w[50]=-w[47]+3.E+0*w[14];
   w[50]=w[50]*ss2;
   w[68]=w[88]-w[15];
   w[73]=w[68]*w[45];
   w[78]=w[88]*w[11];
   w[44]=w[50]-w[102]+w[78]+w[44]+w[73];
   w[44]=-w[196]+2.E+0*w[44];
   w[50]=w[137]-w[205];
   w[50]=w[50]*w[2];
   w[44]=w[50]+4.E+0*w[44];
   w[44]=w[44]*w[2];
   w[50]=w[106]-w[16];
   w[78]=-w[21]+w[50];
   w[79]=w[78]*w[5];
   w[79]=w[79]-w[67];
   w[79]=w[79]*w[10];
   w[91]=w[79]-w[132];
   w[96]=w[205]-w[21];
   w[96]=w[96]*w[5];
   w[67]=w[96]-w[67];
   w[67]=w[67]*w[2];
   w[91]=w[67]+2.E+0*w[91];
   w[91]=w[91]*w[3];
   w[96]=2.E+0*w[51];
   w[99]=w[96]-w[69];
   w[99]=w[99]*w[211];
   w[50]=w[21]+w[50];
   w[100]=w[50]*w[5];
   w[100]=w[100]-w[104];
   w[105]=w[2]*w[7];
   w[106]=w[100]*w[105];
   w[99]=w[99]-w[106];
   w[91]=w[91]+2.E+0*w[99];
   w[91]=w[91]*w[3];
   w[99]=w[151]*w[2];
   w[106]=w[211]*w[133];
   w[99]=w[99]+w[106];
   w[106]=w[99]*w[3];
   w[106]=w[106]+8.E+0*w[225];
   w[114]=2.E+0*w[6];
   w[106]=w[106]*w[114];
   w[44]=w[44]+w[91]+w[106];
   w[44]=w[44]*w[6];
   w[91]=w[212]*w[7];
   w[68]=w[68]+w[119];
   w[68]=w[68]*w[9];
   w[106]=-w[118]-w[77]+2.E+0*w[15];
   w[106]=w[106]*w[12];
   w[20]=w[68]-w[106]-3.E+0*w[20];
   w[68]=w[91]+w[20];
   w[68]=w[189]+2.E+0*w[68];
   w[91]=w[154]*w[9];
   w[42]=w[91]+w[42];
   w[42]=w[52]+2.E+0*w[42];
   w[42]=w[42]*w[3];
   w[106]=w[118]+w[51];
   w[106]=w[106]*w[5];
   w[106]=w[106]-w[104];
   w[115]=w[106]*w[7];
   w[115]=w[115]+3.E+0*w[97];
   w[115]=w[115]*w[85];
   w[42]=4.E+0*w[68]+w[42]-w[115];
   w[42]=w[42]*w[3];
   w[68]=w[57]*w[9];
   w[115]=w[97]*w[10];
   w[115]=w[115]+w[192]+w[68];
   w[115]=-w[59]+2.E+0*w[115];
   w[115]=w[115]*w[2];
   w[31]=w[31]-w[88];
   w[31]=w[31]*w[9];
   w[31]=w[31]+w[128]+2.E+0*w[84];
   w[117]=w[49]*w[51];
   w[121]=w[31]+w[117];
   w[80]=w[80]+2.E+0*w[121];
   w[80]=w[80]*w[10];
   w[80]=w[80]+w[197];
   w[42]=w[42]-w[115]-4.E+0*w[80];
   w[42]=w[42]*w[3];
   w[14]=-w[17]+2.E+0*w[14];
   w[14]=w[14]*ss2;
   w[14]=w[14]+w[92]+w[95]-w[116];
   w[17]=-w[69]+4.E+0*w[21];
   w[17]=w[17]*w[7];
   w[17]=w[17]+w[14];
   w[15]=w[23]-w[15]+w[118]-w[88];
   w[80]=w[15]*w[10];
   w[88]=w[23]*w[2];
   w[17]=w[88]-w[80]+4.E+0*w[17];
   w[80]=w[104]-w[153];
   w[80]=w[80]*w[7];
   w[88]=w[119]-w[40];
   w[92]=w[80]-w[88];
   w[92]=-w[202]+2.E+0*w[92];
   w[92]=w[92]*w[3];
   w[17]=w[92]+2.E+0*w[17];
   w[17]=w[17]*w[3];
   w[16]=-w[61]+2.E+0*w[16];
   w[16]=w[16]*w[45];
   w[88]=w[88]*w[11];
   w[16]=w[16]+w[88];
   w[16]=w[16]*w[204];
   w[77]=w[144]+w[77];
   w[77]=w[202]+2.E+0*w[77];
   w[77]=w[77]*w[3];
   w[88]=w[61]*w[2];
   w[77]=w[77]-w[88];
   w[92]=4.E+0*w[6];
   w[77]=w[77]*w[92];
   w[104]=w[62]*w[3];
   w[115]=2.E+0*w[104];
   w[16]=w[17]+w[77]+w[16]+w[115];
   w[16]=w[16]*w[4];
   w[17]=w[43]-w[137];
   w[17]=w[17]*w[101];
   w[17]=-w[17]+w[128]+3.E+0*w[84];
   w[17]=w[17]*w[7];
   w[20]=-w[20]+3.E+0*w[188];
   w[20]=w[20]*w[11];
   w[17]=w[17]+w[20];
   w[17]=-w[198]+2.E+0*w[17];
   w[20]=w[83]-w[51];
   w[20]=w[20]*w[7];
   w[20]=w[20]+3.E+0*w[98];
   w[20]=w[20]*w[85];
   w[17]=w[20]+4.E+0*w[17];
   w[17]=w[17]*w[2];
   w[16]=w[16]-w[44]+w[17]+w[42];
   w[17]=-w[16]*w[46];
   w[20]=w[91]+w[38];
   w[20]=w[52]+2.E+0*w[20];
   w[20]=w[20]*w[3];
   w[37]=w[37]*w[45];
   w[37]=w[37]+w[66];
   w[38]=w[106]*w[94];
   w[20]=w[20]-w[38]+4.E+0*w[37];
   w[20]=w[20]*w[3];
   w[37]=w[68]+w[39];
   w[38]=w[37]+w[175];
   w[38]=w[139]-w[59]+2.E+0*w[38];
   w[38]=w[38]*w[2];
   w[20]=w[20]-w[38]+8.E+0*w[178];
   w[38]=w[20]*w[179];
   w[39]=w[100]*w[7];
   w[39]=w[39]-w[27];
   w[39]=w[39]*w[2];
   w[42]=w[211]*w[130];
   w[39]=w[39]+w[42];
   w[29]=w[79]-w[29];
   w[29]=w[67]+2.E+0*w[29];
   w[29]=w[29]*w[3];
   w[29]=-w[29]+2.E+0*w[39];
   w[39]=w[29]*w[179];
   w[42]=2.E+0*w[99];
   w[43]=-w[180]*w[42];
   w[39]=w[39]+w[43];
   w[39]=w[6]*w[39];
   w[43]=w[80]+w[27];
   w[43]=-w[202]+2.E+0*w[43];
   w[43]=w[43]*w[3];
   w[44]=-w[55]+4.E+0*w[165];
   w[43]=-w[43]-w[86]+2.E+0*w[44];
   w[44]=-2.E+0*w[62]-w[43];
   w[44]=w[179]*w[44];
   w[52]=w[173]+w[202];
   w[52]=4.E+0*w[52];
   w[66]=w[180]*w[52];
   w[44]=w[66]+w[44];
   w[44]=w[4]*w[44];
   w[38]=w[44]+w[38]+w[39];
   w[38]=w[4]*w[38];
   w[17]=w[38]+w[17];
   w[17]=w[17]*w[112];
   w[38]=w[13]*w[181];
   w[16]=-w[16]*w[38];
   w[20]=w[3]*w[20];
   w[29]=w[3]*w[29];
   w[39]=-w[162]*w[42];
   w[29]=w[29]+w[39];
   w[29]=w[6]*w[29];
   w[39]=-w[3]*w[43];
   w[42]=w[162]*w[52];
   w[39]=-w[115]+w[39]+w[42];
   w[39]=w[4]*w[39];
   w[20]=w[39]+w[20]+w[29];
   w[29]=w[185]*w[13];
   w[20]=w[20]*w[29];
   w[16]=w[16]+w[20];
   w[16]=w[16]*w[184];
   w[16]=w[17]+w[16];
   w[17]=w[127]*w[21];
   w[17]=w[17]+w[14];
   w[17]=w[17]*w[11];
   w[20]=w[63]*w[27];
   w[17]=w[17]-w[20];
   w[39]=w[15]*w[111];
   w[17]=-w[39]+4.E+0*w[17];
   w[15]=w[15]*w[45];
   w[39]=w[27]*w[3];
   w[15]=w[39]+w[15];
   w[15]=w[15]*w[3];
   w[39]=w[199]-w[95];
   w[42]=8.E+0*w[6];
   w[39]=w[39]*w[42];
   w[42]=w[138]*w[2];
   w[43]=w[62]*w[49];
   w[15]=w[15]-w[39]-w[42]+w[43]+2.E+0*w[17];
   w[15]=w[15]*w[4];
   w[14]=w[73]+w[14];
   w[17]=w[50]-w[30];
   w[39]=w[17]*w[10];
   w[14]=w[39]+4.E+0*w[14];
   w[39]=w[40]*w[3];
   w[42]=w[26]*w[2];
   w[14]=w[42]+4.E+0*w[39]+2.E+0*w[14];
   w[14]=w[14]*w[3];
   w[17]=w[17]*w[7];
   w[39]=w[49]*w[40];
   w[42]=w[17]+w[39];
   w[42]=w[42]*w[2];
   w[44]=w[117]-w[28];
   w[44]=w[44]*w[211];
   w[42]=w[42]-w[44];
   w[44]=w[211]*w[26];
   w[44]=w[44]-w[88];
   w[50]=w[21]*w[3];
   w[50]=-w[44]+8.E+0*w[50];
   w[50]=w[50]*w[114];
   w[14]=w[14]+w[50]-2.E+0*w[42];
   w[14]=w[14]*w[6];
   w[42]=-w[51]+w[54]+w[118];
   w[42]=w[42]*w[9];
   w[34]=w[36]+w[47]+w[34];
   w[34]=w[34]*ss2;
   w[34]=w[34]+w[35]+2.E+0*w[90];
   w[35]=w[127]*w[40];
   w[34]=w[42]+w[35]+w[39]+2.E+0*w[34];
   w[35]=w[34]+w[64];
   w[36]=w[57]*w[2];
   w[36]=2.5E-1*w[36];
   w[35]=-w[36]+2.E+0*w[35];
   w[35]=w[35]*w[3];
   w[31]=w[31]*w[7];
   w[39]=w[107]*w[45];
   w[31]=w[82]+w[39]+w[31];
   w[39]=w[105]*w[125];
   w[31]=-w[39]-w[35]+8.E+0*w[31];
   w[31]=w[31]*w[3];
   w[34]=w[34]*w[11];
   w[35]=2.E+0*w[20];
   w[34]=w[34]-w[35];
   w[36]=w[36]-w[126];
   w[36]=w[36]*w[11];
   w[34]=w[65]-w[36]+2.E+0*w[34];
   w[34]=w[34]*w[2];
   w[36]=w[121]*w[49];
   w[36]=w[36]+w[120];
   w[36]=w[36]*w[10];
   w[36]=w[36]+w[134];
   w[14]=w[15]-w[14]+w[31]+w[34]-4.E+0*w[36];
   w[15]=w[14]*w[46];
   w[31]=w[157]*w[7];
   w[31]=w[31]-w[168];
   w[31]=-w[182]+2.E+0*w[31];
   w[34]=2.E+0*w[37]+w[55]-w[59];
   w[34]=w[34]*w[3];
   w[31]=-w[34]+w[110]+4.E+0*w[31];
   w[31]=w[31]*w[3];
   w[27]=w[45]*w[27];
   w[27]=w[27]+w[37];
   w[27]=w[27]*w[11];
   w[27]=w[27]+w[35];
   w[27]=2.E+0*w[27]+w[60];
   w[27]=w[27]*w[2];
   w[34]=w[177]*w[111];
   w[27]=-8.E+0*w[34]+w[31]+w[27];
   w[31]=PM12Lm*w[27];
   w[17]=w[17]-w[113];
   w[17]=w[17]*w[2];
   w[34]=w[174]*w[211];
   w[17]=w[17]+w[34];
   w[23]=w[78]-w[23];
   w[23]=w[23]*w[10];
   w[23]=w[23]-4.E+0*w[81];
   w[23]=w[207]+2.E+0*w[23];
   w[23]=w[23]*w[3];
   w[17]=w[23]-2.E+0*w[17];
   w[23]=PM12Lm*w[17];
   w[34]=w[44]*w[183];
   w[23]=w[23]-2.E+0*w[34];
   w[23]=w[6]*w[23];
   w[30]=w[30]-w[41];
   w[30]=w[30]*w[7];
   w[30]=w[30]+w[113];
   w[34]=w[61]*w[3];
   w[30]=-w[34]+2.E+0*w[30];
   w[30]=w[30]*w[3];
   w[28]=w[81]+w[28];
   w[28]=w[28]*w[11];
   w[20]=w[28]+w[20];
   w[20]=-w[56]+4.E+0*w[20];
   w[28]=w[86]*w[11];
   w[20]=w[43]-w[28]-w[30]+2.E+0*w[20];
   w[28]=PM12Lm*w[20];
   w[26]=w[45]*w[26];
   w[26]=w[26]-w[34];
   w[30]=w[26]*w[183];
   w[28]=4.E+0*w[30]+w[28];
   w[28]=w[4]*w[28];
   w[23]=w[28]+w[31]+w[23];
   w[23]=w[4]*w[23];
   w[15]=w[23]+w[15];
   w[15]=w[15]*w[147];
   w[14]=w[14]*w[181];
   w[23]=-w[44]*w[114];
   w[17]=w[23]+w[17];
   w[17]=w[6]*w[17];
   w[23]=w[26]*w[92];
   w[20]=w[23]+w[20];
   w[20]=w[4]*w[20];
   w[17]=w[20]+w[17]+w[27];
   w[17]=w[17]*w[185];
   w[14]=w[14]+w[17];
   w[14]=w[14]*w[184];
   w[14]=w[15]+w[14];
   w[14]=w[1]*w[14];
   w[15]=w[89]+w[131];
   w[17]=w[69]*w[10];
   w[15]=-2.E+0*w[15]+w[17]-w[190];
   w[17]=w[191]-w[71];
   w[17]=w[17]*w[2];
   w[15]=w[17]+w[187]+4.E+0*w[15];
   w[15]=w[15]*w[3];
   w[17]=w[76]*w[204];
   w[17]=w[17]+w[208];
   w[17]=w[17]*w[6];
   w[20]=w[70]*w[7];
   w[20]=w[20]-w[116];
   w[23]=4.E+0*w[2];
   w[20]=w[20]*w[23];
   w[15]=w[15]-w[17]-w[20];
   w[15]=w[15]*w[6];
   w[17]=2.E+0*w[48]+w[74]+w[55];
   w[17]=w[17]*w[3];
   w[20]=w[24]+w[69];
   w[20]=-w[202]+2.E+0*w[20];
   w[20]=w[20]*w[3];
   w[23]=w[87]*w[85];
   w[20]=w[20]+w[23];
   w[20]=w[20]*w[6];
   w[23]=w[105]*w[53];
   w[17]=w[20]-w[17]+w[23]+w[104];
   w[17]=w[17]*w[4];
   w[20]=w[19]*w[10];
   w[20]=w[20]-w[102];
   w[20]=w[20]*w[8];
   w[20]=w[20]+w[72]-2.E+0*w[109];
   w[23]=w[24]*w[8];
   w[24]=w[101]*w[40];
   w[23]=w[24]-w[23];
   w[24]=2.E+0*w[3];
   w[23]=w[23]*w[24];
   w[24]=w[156]*w[85];
   w[20]=-w[23]+w[24]+4.E+0*w[20];
   w[20]=w[20]*w[3];
   w[19]=w[45]*w[19];
   w[19]=w[19]+w[25];
   w[19]=w[19]*w[8];
   w[23]=w[155]-w[93];
   w[19]=w[19]-2.E+0*w[23];
   w[19]=w[19]*w[204];
   w[15]=-w[17]-w[15]+w[20]-w[19];
   w[15]=w[15]*w[4];
   w[17]=w[159]*w[69];
   w[17]=w[17]+w[164];
   w[17]=-w[214]+4.E+0*w[17];
   w[17]=w[201]+2.E+0*w[17];
   w[17]=w[17]*w[3];
   w[19]=w[6]*w[141];
   w[19]=w[19]+w[146];
   w[19]=w[2]*w[19];
   w[19]=-w[149]+w[19];
   w[19]=w[19]*w[6];
   w[20]=w[215]*w[8];
   w[20]=w[166]+w[20]+w[129];
   w[23]=w[218]*w[85];
   w[20]=w[23]+8.E+0*w[20];
   w[20]=w[20]*w[2];
   w[17]=w[17]-w[20]+w[19];
   w[17]=w[17]*w[6];
   w[19]=w[21]*w[8];
   w[19]=w[19]+w[89];
   w[19]=w[19]*w[8];
   w[20]=w[96]*w[163];
   w[19]=w[19]-w[20];
   w[20]=w[85]*w[8];
   w[21]=w[20]*w[97];
   w[19]=-w[21]+8.E+0*w[19];
   w[19]=w[19]*w[3];
   w[21]=w[103]*w[10];
   w[21]=w[21]+w[160];
   w[21]=w[21]*w[171];
   w[23]=w[172]*w[159];
   w[19]=w[19]-w[21]+w[23];
   w[19]=w[19]*w[3];
   w[21]=w[188]-w[89];
   w[21]=w[21]*w[11];
   w[23]=w[200]*w[8];
   w[21]=w[21]+w[23]+w[167];
   w[21]=w[21]*w[8];
   w[23]=w[117]*w[163];
   w[21]=w[21]+w[23];
   w[23]=w[125]*w[7];
   w[23]=w[23]-w[98];
   w[20]=w[23]*w[20];
   w[20]=-w[20]+8.E+0*w[21];
   w[20]=w[20]*w[2];
   w[15]=-w[15]+w[20]+w[17]+w[19];
   w[17]=-w[15]*w[46];
   w[19]=PM12Lm*w[108];
   w[20]=-PM12Lm*w[75];
   w[21]=w[183]*w[148];
   w[20]=w[20]+w[21];
   w[20]=w[6]*w[20];
   w[19]=w[19]+w[20];
   w[19]=w[6]*w[19];
   w[20]=PM12Lm*w[58];
   w[21]=-w[18]*w[183];
   w[20]=w[20]+w[21];
   w[20]=w[6]*w[20];
   w[21]=w[183]*w[170];
   w[20]=w[20]+w[21];
   w[20]=w[4]*w[20];
   w[19]=w[19]+w[20];
   w[19]=w[4]*w[19];
   w[17]=w[19]+w[17];
   w[17]=w[17]*w[112];
   w[15]=-w[15]*w[38];
   w[19]=w[6]*w[148];
   w[19]=w[19]-w[75];
   w[19]=w[6]*w[19];
   w[19]=w[19]+w[108];
   w[19]=w[6]*w[19];
   w[18]=-w[6]*w[18];
   w[18]=w[18]+w[195];
   w[18]=w[18]*w[186];
   w[18]=w[19]+w[18];
   w[18]=w[18]*w[29];
   w[15]=w[15]+w[18];
   w[15]=w[15]*w[184];
   w[15]=w[17]+w[15];


K21[SI_K21(ip,izp,0,iq,izq,0)] += -prefactor_2l * wj * FCtr * w[15];
K21[SI_K21(ip,izp,0,iq,izq,1)] += -prefactor_2l * wj * FCtr * w[22];
K21[SI_K21(ip,izp,0,iq,izq,2)] += -prefactor_2l * wj * FCtr * w[16];
K21[SI_K21(ip,izp,1,iq,izq,0)] += -prefactor_2l * wj * FCtr * w[32];
K21[SI_K21(ip,izp,1,iq,izq,1)] += -prefactor_2l * wj * FCtr * w[33];
K21[SI_K21(ip,izp,1,iq,izq,2)] += -prefactor_2l * wj * FCtr * w[14];
