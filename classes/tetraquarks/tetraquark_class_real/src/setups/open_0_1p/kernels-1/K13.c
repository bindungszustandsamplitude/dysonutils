sv1 = sv1_q1;
ss1 = ss1_q1;
sv2 = sv2_q2;
ss2 = ss2_q2;
sv3 = sv3_q2;
ss3 = ss3_q2;
sv4 = sv4_q1;
ss4 = ss4_q1;

w.resize(10000,0.);


if(isud){FCtr  = 4.*6.;}
if(!isud){FCtr  = 4.*6.;}

if(quark_1.getMass() == 0.0037){
ampl01 = 0.5*(
ns_data_v2::amplitudes::meson::vector::fit::m_7950_0037(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_0037(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_0037_0037(0,std::real(l_l+q_l+0.25*q_q))
);
ampl10 = 0.5*(
ns_data_v2::amplitudes::meson::vector::fit::m_7950_0037(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_0037(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_0037_0037(0,std::real(l_l+q_l+0.25*q_q))
);
}
else
if(quark_1.getMass() == 0.0200){
ampl01 = 0.5*(
ns_data_v2::amplitudes::meson::vector::fit::m_7950_0200(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_0200(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_0200_0200(0,std::real(l_l+q_l+0.25*q_q))
);
ampl10 = 0.5*(
ns_data_v2::amplitudes::meson::vector::fit::m_7950_0200(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_0200(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_0200_0200(0,std::real(l_l+q_l+0.25*q_q))
);
}
else
if(quark_1.getMass() == 0.0500){
ampl01 = 0.5*(
ns_data_v2::amplitudes::meson::vector::fit::m_7950_0500(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_0500(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_0500_0500(0,std::real(l_l+q_l+0.25*q_q))
);
ampl10 = 0.5*(
ns_data_v2::amplitudes::meson::vector::fit::m_7950_0500(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_0500(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_0500_0500(0,std::real(l_l+q_l+0.25*q_q))
);
}
else
if(quark_1.getMass() == 0.0855){
ampl01 = 0.5*(
ns_data_v2::amplitudes::meson::vector::fit::m_7950_0855(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_0855(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_0855_0855(0,std::real(l_l+q_l+0.25*q_q))
);
ampl10 = 0.5*(
ns_data_v2::amplitudes::meson::vector::fit::m_7950_0855(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_0855(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_0855_0855(0,std::real(l_l+q_l+0.25*q_q))
);
}
else
if(quark_1.getMass() == 0.1500){
ampl01 = 0.5*(
ns_data_v2::amplitudes::meson::vector::fit::m_7950_1500(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_1500(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_1500_1500(0,std::real(l_l+q_l+0.25*q_q))
);
ampl10 = 0.5*(
ns_data_v2::amplitudes::meson::vector::fit::m_7950_1500(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_1500(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_1500_1500(0,std::real(l_l+q_l+0.25*q_q))
);
}
else
if(quark_1.getMass() == 0.2100){
ampl01 = 0.5*(
ns_data_v2::amplitudes::meson::vector::fit::m_7950_2100(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_2100(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_2100_2100(0,std::real(l_l+q_l+0.25*q_q))
);
ampl10 = 0.5*(
ns_data_v2::amplitudes::meson::vector::fit::m_7950_2100(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_2100(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_2100_2100(0,std::real(l_l+q_l+0.25*q_q))
);
}
else
if(quark_1.getMass() == 0.3500){
ampl01 = 0.5*(
ns_data_v2::amplitudes::meson::vector::fit::m_7950_3500(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_3500(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_3500_3500(0,std::real(l_l+q_l+0.25*q_q))
);
ampl10 = 0.5*(
ns_data_v2::amplitudes::meson::vector::fit::m_7950_3500(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_3500(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_3500_3500(0,std::real(l_l+q_l+0.25*q_q))
);
}
else
if(quark_1.getMass() == 0.5000){
ampl01 = 0.5*(
ns_data_v2::amplitudes::meson::vector::fit::m_7950_5000(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_5000(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_5000_5000(0,std::real(l_l+q_l+0.25*q_q))
);
ampl10 = 0.5*(
ns_data_v2::amplitudes::meson::vector::fit::m_7950_5000(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_5000(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_5000_5000(0,std::real(l_l+q_l+0.25*q_q))
);
}
else
if(quark_1.getMass() == 0.6500){
ampl01 = 0.5*(
ns_data_v2::amplitudes::meson::vector::fit::m_7950_6500(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_6500(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_6500_6500(0,std::real(l_l+q_l+0.25*q_q))
);
ampl10 = 0.5*(
ns_data_v2::amplitudes::meson::vector::fit::m_7950_6500(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_6500(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_6500_6500(0,std::real(l_l+q_l+0.25*q_q))
);
}
else
if(quark_1.getMass() == 0.7950){
ampl01 = 0.5*(
ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_7950(0,std::real(l_l+q_l+0.25*q_q))
);
ampl10 = 0.5*(
ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_7950(0,std::real(l_l+q_l+0.25*q_q))
);
}


    w[1]=1./(-6.E+0*Q_Q*p_p+6.E+0*pow(Q_p,2));
    w[2]=Q_Q;
    w[3]=Q_p;
    w[4]=Q_q;
    w[5]=p_q;
    w[6]=pow(p_p,-1);
    w[7]=p_l;
    w[8]=q_q;
    w[9]=q_l;
    w[10]=p_p;
    w[11]=Q_l;
    w[12]=l_l;
    w[13]=1./(-6.E+0*Q_Q*Q_p*p_p+6.E+0*pow(Q_p,3));
   w[14]=i_*ss4*ss3;
   w[15]=sv2*w[14];
   w[16]=sv3*i_;
   w[17]=w[16]*sv4;
   w[18]=sv2*w[17];
   w[19]=w[18]*w[8];
   w[20]=w[15]+w[19];
   w[21]=ss3*sv4*i_;
   w[16]=w[16]*ss4;
   w[22]=w[21]-w[16];
   w[22]=w[22]*ss2;
   w[23]=w[20]+w[22];
   w[24]=w[23]*ss1;
   w[25]=ss2*sv1;
   w[14]=w[14]*w[25];
   w[17]=w[17]*w[25];
   w[25]=w[17]*w[8];
   w[26]=w[14]+w[25];
   w[27]=sv2*sv1;
   w[28]=w[21]*w[27];
   w[27]=w[16]*w[27];
   w[29]=w[28]-w[27];
   w[18]=w[18]*ss1;
   w[30]=w[17]-w[18];
   w[31]=w[30]-w[29];
   w[32]=w[31]*w[12];
   w[24]=-w[24]+w[26]+w[32];
   w[24]=8.E+0*w[24];
   w[33]=3.E+0*w[28];
   w[34]=3.E+0*w[17];
   w[35]=w[33]-w[34];
   w[36]=w[27]-w[18];
   w[37]=w[35]+w[36];
   w[38]=5.E-1*w[2];
   w[37]=w[37]*w[38];
   w[39]=w[37]+w[24];
   w[40]=w[30]+w[29];
   w[41]=4.E+0*w[11];
   w[42]=w[41]*w[40];
   w[43]=1.6E+1*w[7];
   w[44]=w[43]*w[36];
   w[45]=1.6E+1*w[9];
   w[46]=w[45]*w[30];
   w[47]=-w[42]+w[44]+w[46];
   w[48]=w[47]+w[39];
   w[48]=w[48]*w[9];
   w[21]=w[21]+w[16];
   w[21]=w[21]*ss2;
   w[49]=w[21]+w[20];
   w[50]=w[49]*ss1;
   w[51]=w[28]+w[17];
   w[52]=w[27]+w[18];
   w[53]=w[51]+w[52];
   w[54]=w[53]*w[12];
   w[50]=w[50]+w[54]+w[26];
   w[50]=2.E+0*w[50];
   w[55]=w[28]-w[17];
   w[56]=w[55]+w[36];
   w[57]=w[56]*w[11];
   w[58]=w[53]*w[2];
   w[59]=1.25E-1*w[58];
   w[60]=w[57]-w[59];
   w[61]=w[17]+w[18];
   w[62]=w[61]*w[4];
   w[63]=w[60]-w[62];
   w[64]=w[50]+w[63];
   w[65]=8.E+0*w[9];
   w[66]=w[65]*w[17];
   w[67]=4.E+0*w[7];
   w[68]=w[67]*w[52];
   w[66]=w[64]+w[66]+w[68];
   w[66]=w[66]*w[4];
   w[69]=w[41]*w[29];
   w[70]=w[69]*w[8];
   w[66]=w[66]+w[70];
   w[70]=w[18]*w[8];
   w[71]=w[25]+w[70];
   w[72]=w[71]*w[2];
   w[48]=w[48]-w[72]-w[66];
   w[48]=w[48]*w[4];
   w[72]=w[55]*w[12];
   w[16]=w[16]*ss2;
   w[20]=w[16]-w[20];
   w[73]=w[20]*ss1;
   w[73]=w[73]-w[72];
   w[74]=w[38]*w[55];
   w[73]=w[74]+8.E+0*w[73];
   w[75]=w[29]-w[17];
   w[76]=w[75]-w[18];
   w[77]=2.E+0*w[4];
   w[78]=w[76]*w[77];
   w[79]=w[73]+w[78];
   w[80]=3.E+0*w[18];
   w[81]=w[80]+w[75];
   w[81]=w[81]*w[65];
   w[82]=w[81]-w[79];
   w[83]=w[82]*w[4];
   w[84]=w[41]*w[36];
   w[85]=w[52]*w[2];
   w[86]=w[84]-w[85];
   w[87]=4.E+0*w[9];
   w[88]=w[86]*w[87];
   w[89]=4.E+0*w[4];
   w[90]=w[89]*w[18];
   w[91]=w[90]-w[86];
   w[92]=2.E+0*w[5];
   w[93]=w[91]*w[92];
   w[88]=-w[83]+w[88]-w[93];
   w[88]=w[88]*w[5];
   w[93]=ss1*w[8];
   w[49]=w[49]*w[93];
   w[94]=w[51]+w[27];
   w[94]=w[94]*w[8];
   w[94]=w[94]+w[70];
   w[95]=w[94]*w[12];
   w[26]=w[26]*w[8];
   w[49]=w[26]+w[49]+w[95];
   w[94]=w[94]*w[2];
   w[49]=-1.25E-1*w[94]+2.E+0*w[49];
   w[94]=w[49]*w[2];
   w[23]=w[23]*w[93];
   w[95]=w[75]*w[8];
   w[96]=w[95]+w[70];
   w[97]=w[96]*w[12];
   w[23]=-w[26]+w[23]+w[97];
   w[26]=w[96]*w[38];
   w[23]=-w[26]+8.E+0*w[23];
   w[26]=w[23]*w[11];
   w[97]=2.E+0*w[17];
   w[98]=w[97]+w[29];
   w[98]=w[98]*w[8];
   w[99]=w[98]*w[2];
   w[100]=w[9]*w[2];
   w[101]=w[100]*w[40];
   w[102]=w[25]-w[70];
   w[103]=w[102]*w[41];
   w[99]=w[101]+w[99]-w[103];
   w[99]=w[99]*w[87];
   w[104]=w[27]*w[8];
   w[105]=w[104]+w[70];
   w[106]=w[105]*w[2];
   w[104]=w[104]-w[70];
   w[107]=w[104]*w[41];
   w[106]=w[106]-w[107];
   w[108]=w[87]*w[36];
   w[109]=w[52]*w[4];
   w[108]=w[108]-w[109];
   w[110]=w[108]*w[4];
   w[111]=w[106]+w[110];
   w[112]=2.E+0*w[10];
   w[111]=w[111]*w[112];
   w[106]=w[106]*w[67];
   w[48]=w[48]+w[88]+w[99]+w[111]+w[26]+w[94]+w[106];
   w[48]=w[48]*w[10];
   w[88]=w[50]-w[59];
   w[94]=2.E+0*w[18];
   w[99]=w[94]-w[29];
   w[99]=w[99]*w[4];
   w[106]=w[61]+w[29];
   w[111]=w[106]*w[87];
   w[99]=w[99]+w[111]+w[88];
   w[111]=w[99]*w[5];
   w[113]=w[40]*w[7];
   w[114]=w[113]*w[9];
   w[115]=w[102]*w[7];
   w[115]=w[115]+w[114];
   w[116]=w[56]*w[4];
   w[117]=w[116]*w[7];
   w[115]=-w[117]+4.E+0*w[115];
   w[118]=w[56]*w[9];
   w[119]=3.E+0*w[70];
   w[120]=w[119]-w[95];
   w[121]=-w[118]+5.E-1*w[120];
   w[121]=w[121]*w[3];
   w[111]=-w[121]+w[111]+w[115];
   w[122]=w[6]*w[5];
   w[111]=w[122]*w[111];
   w[123]=w[40]*w[9];
   w[98]=w[98]+w[123];
   w[98]=w[98]*w[87];
   w[71]=w[71]-w[118];
   w[71]=w[71]*w[4];
   w[118]=2.E+0*w[9];
   w[124]=w[118]*w[52];
   w[125]=w[52]*w[5];
   w[126]=w[124]+w[125];
   w[126]=w[126]*w[92];
   w[127]=w[67]+w[112];
   w[105]=w[127]*w[105];
   w[49]=w[111]-w[49]+w[71]-w[98]+w[126]-w[105];
   w[49]=w[49]*w[3];
   w[71]=5.E+0*w[17];
   w[98]=-w[18]+w[71]-w[29];
   w[98]=w[98]*w[118];
   w[105]=w[34]-w[29];
   w[126]=w[105]+5.E+0*w[18];
   w[127]=5.E-1*w[4];
   w[126]=w[126]*w[127];
   w[50]=w[60]+w[68]+w[50]+w[98]-w[126];
   w[50]=w[50]*w[4];
   w[60]=w[36]*w[7];
   w[68]=3.2E+1*w[60];
   w[98]=w[39]+w[68]+w[46];
   w[98]=w[98]*w[9];
   w[126]=w[18]*w[5];
   w[128]=-8.E+0*w[126]+8.E+0*w[60];
   w[82]=w[128]-w[82];
   w[82]=w[82]*w[5];
   w[120]=w[120]*w[38];
   w[129]=2.E+0*w[11];
   w[130]=w[96]*w[129];
   w[120]=w[120]+w[130];
   w[50]=w[50]-w[98]-w[82]+w[120];
   w[50]=w[50]*w[5];
   w[82]=w[104]*w[43];
   w[98]=w[82]-w[23];
   w[98]=w[98]*w[7];
   w[131]=w[38]*w[31];
   w[132]=w[24]-w[131];
   w[133]=w[132]*w[7];
   w[134]=w[89]*w[113];
   w[135]=w[43]*w[9];
   w[136]=w[135]*w[29];
   w[134]=w[134]-w[136];
   w[133]=w[133]+w[134];
   w[136]=w[30]*w[12];
   w[137]=w[22]*ss1;
   w[136]=w[136]-w[137];
   w[138]=8.E+0*w[136];
   w[139]=w[38]*w[30];
   w[139]=w[139]-w[138];
   w[140]=w[139]*w[5];
   w[141]=w[133]-w[140];
   w[141]=w[141]*w[5];
   w[142]=w[29]+w[17];
   w[142]=w[142]*w[8];
   w[142]=w[142]-w[70];
   w[143]=pow(w[7],2);
   w[144]=2.E+0*w[143];
   w[145]=w[144]*w[142];
   w[146]=w[40]*w[4];
   w[147]=w[143]*w[146];
   w[145]=w[145]+w[147];
   w[141]=w[141]+4.E+0*w[145];
   w[141]=w[141]*w[122];
   w[148]=w[29]*w[8];
   w[149]=w[148]*w[7];
   w[114]=w[149]+w[114];
   w[114]=w[117]+4.E+0*w[114];
   w[114]=w[114]*w[4];
   w[108]=w[108]*w[5];
   w[67]=w[67]*w[104];
   w[67]=w[67]-w[108];
   w[67]=w[67]*w[112];
   w[108]=w[135]*w[102];
   w[49]=w[50]+w[49]+w[114]+w[67]+w[98]+w[108]-w[141];
   w[49]=w[49]*w[3];
   w[50]=w[88]*w[2];
   w[67]=w[132]*w[11];
   w[88]=w[50]-w[67];
   w[98]=w[34]+w[18];
   w[108]=w[98]+w[29];
   w[108]=w[108]*w[2];
   w[114]=w[41]*w[31];
   w[108]=w[108]-w[114];
   w[108]=w[108]*w[118];
   w[117]=w[129]*w[40];
   w[135]=w[117]+w[138];
   w[149]=w[38]*w[29];
   w[150]=w[149]+w[135];
   w[150]=w[150]*w[4];
   w[108]=w[108]-w[150]+w[88];
   w[150]=w[108]*w[5];
   w[151]=w[142]*w[2];
   w[152]=w[142]*w[41];
   w[153]=w[151]-w[152];
   w[154]=w[153]*w[7];
   w[155]=w[11]-w[118];
   w[155]=w[4]+2.E+0*w[155];
   w[155]=w[4]*w[113]*w[155];
   w[156]=w[118]*w[40];
   w[157]=w[7]*w[2];
   w[158]=w[156]*w[157];
   w[154]=w[155]-w[158]-w[154];
   w[150]=-w[150]+2.E+0*w[154];
   w[150]=w[150]*w[5];
   w[48]=w[49]+w[48]+w[150];
   w[49]=PDQ2m*w[48];
   w[155]=w[156]+w[142];
   w[158]=w[155]-w[125];
   w[158]=w[158]*w[92];
   w[111]=w[158]+w[111];
   w[111]=w[111]*w[3];
   w[75]=w[80]-w[75];
   w[127]=w[75]*w[127];
   w[57]=w[127]-w[57];
   w[127]=w[118]*w[31];
   w[127]=w[57]-w[127]+4.E+0*w[113];
   w[127]=w[127]*w[4];
   w[158]=w[100]*w[56];
   w[159]=8.E+0*w[142];
   w[160]=w[159]*w[7];
   w[120]=-w[120]+w[127]+w[158]+w[160];
   w[123]=w[123]+w[60];
   w[123]=-w[146]+4.E+0*w[123];
   w[127]=4.E+0*w[126];
   w[158]=w[123]-w[127];
   w[158]=w[158]*w[92];
   w[158]=w[158]-w[120];
   w[158]=w[158]*w[5];
   w[111]=-w[141]+w[111]+w[158];
   w[111]=w[111]*w[3];
   w[141]=w[40]*w[11];
   w[156]=w[141]-w[156];
   w[156]=w[146]+2.E+0*w[156];
   w[156]=w[156]*w[4];
   w[158]=w[40]*w[2];
   w[160]=w[158]*w[118];
   w[153]=w[153]+w[160]-w[156];
   w[160]=w[91]*w[5];
   w[161]=w[153]-w[160];
   w[162]=w[92]*w[10];
   w[161]=w[161]*w[162];
   w[111]=w[111]-w[161]+w[150];
   w[150]=-PDQ2Lm*w[111];
   w[49]=w[150]+w[49];
   w[150]=PDQ1p*ampl01;
   w[161]=w[150]*w[1];
   w[49]=w[49]*w[161];
   w[48]=PDQ2p*w[48];
   w[111]=-PDQ2Lp*w[111];
   w[48]=w[48]+w[111];
   w[111]=PDQ1m*ampl10;
   w[163]=w[111]*w[1];
   w[48]=w[48]*w[163];
   w[48]=w[49]+w[48];
   w[49]=w[39]+w[42];
   w[49]=w[49]*w[11];
   w[164]=w[36]*w[11];
   w[165]=w[164]*w[43];
   w[49]=w[49]+w[165];
   w[166]=w[29]*w[11];
   w[167]=w[105]+w[18];
   w[168]=w[167]*w[2];
   w[166]=-w[168]+8.E+0*w[166];
   w[166]=w[166]*w[118];
   w[168]=w[43]*w[18];
   w[169]=w[168]-w[42];
   w[170]=w[169]-w[138];
   w[98]=w[98]*w[38];
   w[98]=w[98]+w[170];
   w[98]=w[98]*w[4];
   w[98]=w[166]+w[98]-w[49]-w[50];
   w[98]=w[98]*w[4];
   w[166]=w[132]*w[2];
   w[171]=w[65]*w[31];
   w[172]=w[171]*w[2];
   w[166]=w[166]+w[172];
   w[166]=w[166]*w[9];
   w[173]=w[22]*w[93];
   w[174]=w[102]*w[12];
   w[173]=w[173]-w[174];
   w[173]=8.E+0*w[173];
   w[174]=w[102]*w[38];
   w[174]=w[174]+w[173];
   w[175]=w[174]*w[2];
   w[166]=w[166]-w[175];
   w[176]=w[96]*w[2];
   w[177]=w[176]+w[152];
   w[177]=w[177]*w[129];
   w[98]=w[98]-w[177]+w[166];
   w[98]=w[98]*w[4];
   w[177]=w[132]+w[171];
   w[177]=w[177]*w[9];
   w[167]=w[167]*w[118];
   w[64]=w[167]+w[64];
   w[64]=w[64]*w[4];
   w[64]=-w[177]+w[64]+w[174]+w[130];
   w[130]=w[6]*w[4];
   w[167]=w[64]*w[130];
   w[174]=w[36]*w[9];
   w[177]=w[174]-w[70];
   w[109]=-w[109]+4.E+0*w[177];
   w[178]=w[109]*w[77];
   w[179]=w[178]-w[167];
   w[179]=w[179]*w[3];
   w[180]=5.E-1*w[29];
   w[181]=w[180]-w[94];
   w[181]=w[181]*w[2];
   w[135]=w[181]-w[135];
   w[135]=w[135]*w[4];
   w[181]=w[31]*w[2];
   w[182]=w[181]-w[114];
   w[182]=w[182]*w[118];
   w[67]=w[135]+w[182]-w[67];
   w[135]=w[5]*w[4];
   w[182]=w[67]*w[135];
   w[183]=w[56]*w[2];
   w[183]=w[183]-w[42];
   w[183]=w[183]*w[7];
   w[184]=w[65]-w[77];
   w[184]=w[113]*w[184];
   w[183]=w[183]+w[184];
   w[183]=w[183]*w[4];
   w[176]=w[176]-w[152];
   w[184]=2.E+0*w[7];
   w[176]=w[176]*w[184];
   w[176]=w[183]+w[176];
   w[183]=w[176]*w[4];
   w[182]=w[183]+w[182];
   w[182]=w[182]*w[6];
   w[183]=w[41]*w[52];
   w[79]=-w[183]+w[79]+w[171];
   w[185]=w[79]*w[4];
   w[186]=w[177]*w[11];
   w[185]=w[185]+1.6E+1*w[186];
   w[185]=w[185]*w[4];
   w[186]=w[18]*w[4];
   w[187]=w[186]-w[164];
   w[188]=w[187]*w[135];
   w[179]=w[185]+w[182]+w[179]+8.E+0*w[188];
   w[179]=w[179]*w[3];
   w[185]=w[132]*w[157];
   w[188]=w[45]*w[157];
   w[189]=w[188]*w[29];
   w[190]=w[146]*w[157];
   w[185]=-w[189]+w[185]+4.E+0*w[190];
   w[189]=w[185]*w[4];
   w[139]=w[139]*w[135];
   w[191]=w[139]*w[2];
   w[189]=w[191]-w[189];
   w[189]=w[189]*w[5];
   w[191]=w[147]*w[2];
   w[144]=w[144]*w[151];
   w[144]=w[191]+w[144];
   w[151]=w[144]*w[89];
   w[151]=w[189]-w[151];
   w[151]=w[151]*w[6];
   w[84]=-w[85]+w[90]-w[84];
   w[84]=w[84]*w[4];
   w[90]=w[174]*w[2];
   w[174]=w[70]*w[2];
   w[90]=w[90]-w[174];
   w[189]=4.E+0*w[90];
   w[84]=w[84]+w[189];
   w[191]=w[77]*w[10];
   w[84]=w[84]*w[191];
   w[192]=w[18]*w[11];
   w[193]=w[192]*w[77];
   w[194]=w[36]*pow(w[11],2);
   w[195]=w[157]*w[36];
   w[193]=-2.E+0*w[194]+w[193]+w[195];
   w[193]=w[193]*w[4];
   w[194]=w[126]*w[2];
   w[196]=w[194]*w[4];
   w[193]=w[193]-w[196];
   w[197]=8.E+0*w[5];
   w[193]=w[193]*w[197];
   w[84]=w[98]+w[151]-w[179]+w[84]-w[193];
   w[84]=w[84]*w[3];
   w[98]=w[180]-w[61];
   w[98]=w[98]*w[2];
   w[179]=w[98]+w[138];
   w[179]=w[179]*w[2];
   w[193]=w[158]*w[129];
   w[198]=1.6E+1*w[157];
   w[199]=w[198]*w[18];
   w[179]=w[179]+w[193]-w[199];
   w[179]=w[179]*w[4];
   w[193]=pow(w[2],2);
   w[31]=w[193]*w[31];
   w[199]=w[42]*w[2];
   w[31]=w[31]-w[199];
   w[31]=w[31]*w[9];
   w[200]=8.E+0*w[157];
   w[201]=w[200]*w[164];
   w[31]=w[31]-w[201];
   w[31]=w[179]+2.E+0*w[31];
   w[31]=w[31]*w[4];
   w[179]=w[196]*w[11];
   w[31]=w[31]+1.6E+1*w[179];
   w[31]=w[31]*w[5];
   w[179]=w[39]*w[2];
   w[179]=w[199]+w[179]+1.6E+1*w[195];
   w[196]=w[179]*w[7];
   w[201]=w[171]*w[157];
   w[190]=w[196]+w[201]+2.E+0*w[190];
   w[190]=w[190]*w[4];
   w[196]=w[152]*w[2];
   w[96]=w[193]*w[96];
   w[96]=w[196]+w[96];
   w[96]=w[96]*w[184];
   w[96]=w[190]+w[96];
   w[96]=w[96]*w[4];
   w[73]=w[73]*w[2];
   w[78]=w[78]*w[2];
   w[78]=w[73]+w[78]+8.E+0*w[195];
   w[184]=w[85]*w[41];
   w[190]=w[172]+w[78]-w[184];
   w[190]=w[190]*w[4];
   w[193]=w[90]*w[11];
   w[190]=w[190]+1.6E+1*w[193];
   w[190]=w[190]*w[4];
   w[193]=8.E+0*w[194];
   w[196]=pow(w[4],2);
   w[201]=w[193]*w[196];
   w[190]=w[190]-w[201];
   w[190]=w[190]*w[10];
   w[31]=w[84]+w[31]+w[190]+w[96];
   w[84]=PDQ2m*w[13];
   w[96]=-w[31]*w[84];
   w[167]=w[178]+w[167];
   w[167]=w[167]*w[3];
   w[156]=w[156]+w[152];
   w[178]=w[156]*w[4];
   w[190]=w[187]*w[5];
   w[201]=w[190]*w[89];
   w[178]=w[201]+w[178];
   w[167]=2.E+0*w[178]+w[167]-w[182];
   w[167]=w[167]*w[3];
   w[178]=w[146]*w[38];
   w[40]=w[157]*w[40];
   w[182]=4.E+0*w[40];
   w[201]=w[61]*w[2];
   w[202]=w[201]*w[87];
   w[50]=-w[50]-w[182]+w[178]-w[202];
   w[50]=w[50]*w[4];
   w[159]=w[159]*w[157];
   w[50]=-w[50]+w[159]-w[166];
   w[159]=w[50]*w[4];
   w[166]=w[101]+w[195];
   w[178]=w[146]*w[2];
   w[166]=-w[178]+4.E+0*w[166];
   w[178]=w[166]*w[4];
   w[202]=w[194]*w[89];
   w[178]=w[202]-w[178];
   w[178]=w[178]*w[92];
   w[202]=w[85]*w[4];
   w[189]=w[202]-w[189];
   w[191]=w[189]*w[191];
   w[151]=w[167]-w[178]+w[151]+w[191]-w[159];
   w[159]=w[13]*w[3];
   w[167]=w[159]*PDQ2Lm;
   w[178]=w[151]*w[167];
   w[96]=w[178]+w[96];
   w[96]=w[96]*w[150];
   w[178]=PDQ2p*w[13];
   w[31]=-w[31]*w[178];
   w[159]=w[159]*PDQ2Lp;
   w[151]=w[151]*w[159];
   w[31]=w[31]+w[151];
   w[31]=w[31]*w[111];
   w[31]=w[96]+w[31];
   w[96]=w[120]*w[4];
   w[99]=w[99]*w[135];
   w[115]=w[115]*w[4];
   w[99]=w[115]+w[99];
   w[99]=w[99]*w[6];
   w[115]=w[121]*w[130];
   w[99]=w[99]-w[115];
   w[115]=w[155]*w[4];
   w[120]=w[135]*w[52];
   w[115]=w[120]-w[115];
   w[115]=-w[99]+2.E+0*w[115];
   w[115]=w[115]*w[3];
   w[120]=w[133]*w[4];
   w[120]=w[120]-w[139];
   w[120]=w[120]*w[5];
   w[121]=w[145]*w[89];
   w[120]=w[120]+w[121];
   w[120]=w[120]*w[6];
   w[121]=w[123]*w[4];
   w[123]=w[126]*w[89];
   w[121]=w[123]-w[121];
   w[121]=w[121]*w[92];
   w[96]=w[115]+w[121]+w[96]+w[120];
   w[96]=w[96]*w[3];
   w[108]=w[108]*w[135];
   w[115]=w[153]*w[4];
   w[121]=w[91]*w[135];
   w[115]=w[121]-w[115];
   w[115]=w[115]*w[112];
   w[121]=w[154]*w[77];
   w[96]=w[96]-w[115]-w[121]+w[108];
   w[96]=w[96]*w[3];
   w[108]=PDQ2Lm*w[96];
   w[115]=-w[71]+5.E+0*w[28];
   w[121]=3.E+0*w[27];
   w[123]=-w[80]+w[115]+w[121];
   w[123]=w[123]*w[38];
   w[24]=w[123]+w[44]+w[171]+w[24]+w[42];
   w[24]=w[24]*w[9];
   w[123]=w[87]*w[29];
   w[57]=w[123]+w[57];
   w[57]=w[57]*w[4];
   w[123]=-w[29]+1.5E+0*w[17];
   w[123]=w[123]*w[8];
   w[123]=w[123]+2.5E+0*w[70];
   w[123]=w[123]*w[2];
   w[130]=w[43]*w[70];
   w[24]=w[57]-w[130]+w[103]-w[173]+w[24]-w[123];
   w[24]=w[24]*w[4];
   w[57]=w[125]*w[77];
   w[57]=w[57]+w[99];
   w[57]=w[57]*w[3];
   w[79]=w[79]+w[128];
   w[79]=w[79]*w[135];
   w[99]=w[10]*w[4];
   w[99]=8.E+0*w[99];
   w[103]=w[177]*w[99];
   w[24]=w[24]+w[79]-w[57]+w[103]+w[120];
   w[24]=w[24]*w[3];
   w[57]=w[76]*w[2];
   w[76]=1.6E+1*w[136]+w[57]-w[169];
   w[76]=w[76]*w[4];
   w[79]=w[106]*w[2];
   w[79]=w[79]+w[69];
   w[79]=w[79]*w[87];
   w[103]=1.6E+1*w[126];
   w[106]=w[103]*w[11];
   w[76]=w[106]-w[165]-w[88]+w[76]-w[79];
   w[76]=w[76]*w[135];
   w[79]=8.E+0*w[141];
   w[39]=w[79]+w[44]+w[39];
   w[39]=w[39]*w[7];
   w[39]=w[39]+w[134];
   w[39]=w[39]*w[4];
   w[44]=w[102]*w[2];
   w[88]=w[44]-w[152];
   w[88]=w[88]*w[7];
   w[40]=w[40]*w[9];
   w[88]=w[88]+w[40];
   w[39]=-w[39]+4.E+0*w[88];
   w[39]=w[39]*w[4];
   w[88]=8.E+0*w[186];
   w[106]=w[88]-w[86];
   w[106]=w[106]*w[135];
   w[120]=w[196]*w[60];
   w[106]=w[106]-4.E+0*w[120];
   w[106]=w[106]*w[112];
   w[24]=w[24]-w[76]+w[39]+w[106];
   w[24]=w[24]*w[3];
   w[39]=w[170]-w[98];
   w[39]=w[39]*w[4];
   w[76]=w[29]*w[2];
   w[69]=w[76]+w[69];
   w[69]=w[69]*w[87];
   w[39]=-w[49]+w[39]+w[69];
   w[39]=w[39]*w[4];
   w[49]=w[179]+w[172];
   w[49]=w[49]*w[9];
   w[69]=w[180]-w[17];
   w[69]=w[69]*w[8];
   w[69]=w[69]-w[70];
   w[69]=w[69]*w[2];
   w[69]=w[69]-w[173];
   w[69]=w[69]*w[2];
   w[106]=w[142]*w[129];
   w[44]=w[106]-w[44];
   w[44]=w[44]*w[41];
   w[106]=w[198]*w[70];
   w[39]=w[69]+w[39]-w[44]+w[49]-w[106];
   w[39]=w[39]*w[4];
   w[44]=-w[57]+8.E+0*w[192];
   w[44]=w[44]*w[77];
   w[49]=w[86]*w[41];
   w[44]=w[44]-w[49]-w[73]-w[172];
   w[44]=w[44]*w[135];
   w[49]=w[187]*w[4];
   w[49]=w[49]+w[90];
   w[49]=w[49]*w[99];
   w[39]=w[39]-w[44]+w[49];
   w[39]=w[39]*w[10];
   w[24]=w[24]-w[39];
   w[39]=-PDQ2m*w[24];
   w[39]=w[108]+w[39];
   w[39]=w[39]*w[161];
   w[24]=-PDQ2p*w[24];
   w[44]=PDQ2Lp*w[96];
   w[24]=w[24]+w[44];
   w[24]=w[24]*w[163];
   w[24]=w[39]+w[24];
   w[39]=w[27]-w[17]+w[80]-w[33];
   w[44]=w[39]*w[11];
   w[49]=-w[32]+2.E+0*w[137];
   w[17]=w[17]*w[2];
   w[57]=w[87]*w[30];
   w[17]=w[62]+4.E+0*w[49]+w[44]+w[168]+w[17]-w[57];
   w[17]=w[17]*w[77];
   w[44]=-w[35]-w[94]+2.E+0*w[27];
   w[44]=w[44]*w[12];
   w[16]=w[16]-w[15];
   w[16]=-w[19]+3.E+0*w[16];
   w[16]=w[16]*ss1;
   w[16]=w[16]+w[44];
   w[44]=w[35]-w[52];
   w[44]=w[44]*w[77];
   w[27]=w[80]-w[27];
   w[35]=w[27]+w[35];
   w[35]=w[35]*w[65];
   w[55]=w[55]*w[2];
   w[16]=w[44]-w[35]+1.5E+0*w[55]+8.E+0*w[16];
   w[35]=w[32]+w[14];
   w[22]=w[22]+w[15];
   w[44]=w[22]*ss1;
   w[44]=w[44]-w[35];
   w[44]=8.E+0*w[44];
   w[37]=-w[171]+w[42]+w[44]-w[37];
   w[37]=w[7]*w[37];
   w[57]=-w[18]+w[121]-w[51];
   w[57]=w[57]*w[129];
   w[62]=w[65]*w[30];
   w[69]=w[62]+w[138];
   w[73]=w[89]*w[61];
   w[57]=w[57]+w[69]-w[73]+w[98];
   w[57]=w[57]*w[5];
   w[73]=-w[28]+w[34]-w[52];
   w[87]=w[77]*w[7];
   w[73]=w[73]*w[87];
   w[37]=-w[57]+w[37]+w[73];
   w[57]=w[37]*w[6];
   w[15]=w[21]+w[15];
   w[21]=w[15]*ss1;
   w[21]=w[14]+w[21]+w[54];
   w[21]=2.E+0*w[21];
   w[53]=w[118]*w[53];
   w[53]=w[63]+w[53]+w[21];
   w[54]=w[53]*w[6];
   w[63]=2.E+0*w[52];
   w[73]=w[63]+w[54];
   w[73]=w[73]*w[3];
   w[73]=w[73]-w[16]-w[128]+w[57]+w[183];
   w[73]=w[73]*w[3];
   w[14]=w[25]+2.E+0*w[14];
   w[90]=w[19]+2.E+0*w[22];
   w[90]=w[90]*ss1;
   w[32]=-w[90]+w[14]+2.E+0*w[32];
   w[55]=4.E+0*w[32]+w[55]+w[117];
   w[55]=w[55]*w[129];
   w[34]=-w[28]+w[18]+w[121]-w[34];
   w[90]=w[34]*w[2];
   w[96]=w[89]*w[30];
   w[90]=-w[96]+w[90]+w[42];
   w[90]=w[7]*w[90];
   w[96]=w[41]*w[30];
   w[98]=w[96]-w[201];
   w[98]=w[98]*w[5];
   w[90]=w[98]+w[90];
   w[90]=w[90]*w[5];
   w[98]=w[158]*w[143];
   w[98]=w[98]+2.E+0*w[147];
   w[90]=w[90]-2.E+0*w[98];
   w[90]=2.E+0*w[90];
   w[98]=w[90]*w[6];
   w[80]=w[105]-w[80];
   w[41]=w[80]*w[41];
   w[99]=w[41]+w[58];
   w[99]=w[99]*w[118];
   w[21]=w[21]-w[59];
   w[21]=w[21]*w[2];
   w[59]=-8.E+0*w[164]+w[88]-w[85];
   w[59]=w[59]*w[112];
   w[88]=w[68]*w[11];
   w[17]=w[73]+w[17]-w[55]-w[99]+1.6E+1*w[190]-w[88]+w[98]+w[59]-w[21];
   w[17]=w[17]*w[3];
   w[16]=w[16]*w[2];
   w[55]=w[194]-w[195];
   w[16]=w[16]-w[184]-2.4E+1*w[55];
   w[16]=w[16]*w[10];
   w[29]=-w[29]+w[97]-w[94];
   w[55]=w[29]*w[12];
   w[55]=-w[55]+3.E+0*w[137];
   w[59]=w[97]-w[180];
   w[59]=w[59]*w[2];
   w[46]=-w[46]-w[96]+w[59]+8.E+0*w[55];
   w[46]=w[46]*w[2];
   w[55]=w[201]*w[89];
   w[59]=w[27]*w[198];
   w[46]=w[46]+w[59]+w[55]+1.6E+1*w[194];
   w[46]=w[46]*w[5];
   w[22]=w[19]+3.E+0*w[22];
   w[22]=w[22]*ss1;
   w[22]=-w[22]+w[25]+3.E+0*w[35];
   w[25]=w[115]-w[36];
   w[25]=w[25]*w[38];
   w[22]=w[25]+8.E+0*w[22];
   w[22]=w[22]*w[2];
   w[22]=w[22]+w[199]+3.2E+1*w[195];
   w[22]=w[22]*w[7];
   w[25]=-w[61]+2.E+0*w[28];
   w[25]=w[25]*w[89]*w[157];
   w[28]=w[29]*w[188];
   w[16]=w[16]+w[25]+w[28]+w[22]+w[17]-w[46];
   w[17]=-w[16]*w[84];
   w[22]=w[129]*w[56];
   w[25]=w[77]*w[61];
   w[22]=-w[149]-w[69]+w[25]-w[22]+8.E+0*w[113];
   w[22]=w[22]*w[4];
   w[28]=w[114]-w[58];
   w[28]=w[28]*w[118];
   w[29]=w[158]-w[42];
   w[29]=w[29]*w[92];
   w[35]=w[44]+w[131];
   w[35]=w[35]*w[11];
   w[44]=w[91]*w[112];
   w[21]=w[29]-w[28]+w[35]+w[22]+w[182]-w[44]+w[21];
   w[22]=w[63]-w[54];
   w[22]=w[22]*w[3];
   w[28]=w[141]+2.E+0*w[60];
   w[28]=w[146]-w[127]+2.E+0*w[28];
   w[22]=-w[22]+w[57]+2.E+0*w[28];
   w[22]=w[22]*w[3];
   w[22]=w[22]-w[21]+w[98];
   w[29]=w[22]*w[167];
   w[17]=w[29]+w[17];
   w[17]=w[17]*w[150];
   w[16]=-w[16]*w[178];
   w[22]=w[22]*w[159];
   w[16]=w[16]+w[22];
   w[16]=w[16]*w[111];
   w[16]=w[17]+w[16];
   w[17]=w[21]*w[10];
   w[21]=w[112]*w[52];
   w[21]=w[21]-w[53];
   w[21]=w[21]*w[3];
   w[22]=w[28]*w[112];
   w[21]=w[21]-w[22]-w[37];
   w[21]=w[21]*w[3];
   w[17]=w[21]+w[17]-w[90];
   w[21]=PDQ2Lm*w[17];
   w[22]=w[39]*w[129];
   w[28]=-w[62]+8.E+0*w[49];
   w[18]=w[18]*w[7];
   w[18]=-3.2E+1*w[18]-w[22]-w[28]+w[76]-w[25];
   w[18]=w[18]*w[4];
   w[22]=-w[36]+w[71]+w[33];
   w[25]=w[22]*w[2];
   w[25]=w[25]-w[41];
   w[25]=w[25]*w[118];
   w[29]=-w[181]+8.E+0*w[32];
   w[32]=w[29]+w[42];
   w[32]=w[32]*w[11];
   w[33]=w[51]*w[12];
   w[15]=w[19]+2.E+0*w[15];
   w[15]=w[15]*ss1;
   w[14]=w[15]+w[14]+4.E+0*w[33];
   w[14]=-2.5E-1*w[58]+2.E+0*w[14];
   w[15]=w[14]*w[2];
   w[19]=4.E+0*w[10];
   w[33]=w[19]*w[91];
   w[35]=8.E+0*w[7];
   w[37]=w[35]*w[86];
   w[15]=w[18]-w[25]-4.E+0*w[160]-w[33]+w[37]+w[32]-w[15];
   w[15]=w[15]*w[10];
   w[18]=w[22]*w[118];
   w[19]=w[35]+w[19];
   w[19]=w[19]*w[52];
   w[14]=-w[146]+w[19]+4.E+0*w[125]+w[18]+w[14];
   w[14]=w[14]*w[3];
   w[18]=w[34]*w[129];
   w[19]=w[30]*w[2];
   w[22]=w[27]*w[43];
   w[18]=w[19]+w[28]+w[103]+w[18]+w[22];
   w[18]=w[18]*w[5];
   w[19]=w[80]*w[65];
   w[19]=w[19]+w[68]+w[29]+w[79];
   w[19]=w[19]*w[7];
   w[22]=w[39]*w[87];
   w[25]=w[126]-w[60];
   w[27]=1.6E+1*w[10];
   w[25]=w[25]*w[27];
   w[14]=w[25]+w[22]+w[14]+w[18]-w[19];
   w[14]=w[14]*w[3];
   w[14]=w[14]+w[15]-w[90];
   w[15]=-PDQ2m*w[14];
   w[15]=w[21]+w[15];
   w[15]=w[15]*w[161];
   w[14]=-PDQ2p*w[14];
   w[17]=PDQ2Lp*w[17];
   w[14]=w[14]+w[17];
   w[14]=w[14]*w[163];
   w[14]=w[15]+w[14];
   w[15]=w[64]*w[122];
   w[17]=w[118]*w[36];
   w[17]=-w[17]+w[119]+w[95];
   w[17]=w[17]*w[65];
   w[18]=w[72]*w[8];
   w[19]=w[20]*w[93];
   w[18]=w[18]-w[19];
   w[19]=w[74]*w[8];
   w[17]=w[17]-w[19]+8.E+0*w[18];
   w[18]=w[95]-w[70];
   w[19]=w[18]-w[124];
   w[19]=w[19]*w[77];
   w[20]=w[109]*w[92];
   w[19]=w[19]+w[20]-w[15]-w[17];
   w[19]=w[19]*w[3];
   w[21]=w[47]+w[132];
   w[21]=w[21]*w[9];
   w[21]=w[21]-w[66];
   w[21]=w[21]*w[4];
   w[22]=w[67]*w[5];
   w[22]=w[22]+w[176];
   w[22]=w[22]*w[122];
   w[25]=w[164]*w[45];
   w[25]=w[83]-w[25]+8.E+0*w[190];
   w[25]=w[25]*w[5];
   w[27]=w[45]*w[102];
   w[27]=w[27]+w[82];
   w[27]=w[27]*w[11];
   w[28]=w[110]-w[107];
   w[28]=w[28]*w[112];
   w[19]=w[25]+w[27]-w[28]+w[22]-w[26]+w[19]-w[21];
   w[19]=w[19]*w[3];
   w[21]=w[157]*w[52];
   w[25]=w[100]*w[30];
   w[21]=w[21]+w[25];
   w[25]=w[4]*w[75]*w[38];
   w[21]=-w[25]+4.E+0*w[21];
   w[21]=w[21]*w[4];
   w[25]=w[81]*w[2];
   w[25]=-w[25]+w[78]-w[193];
   w[25]=w[25]*w[5];
   w[26]=w[101]+4.E+0*w[195];
   w[26]=w[26]*w[65];
   w[21]=-w[21]+w[175]+w[25]+w[26];
   w[21]=w[21]*w[5];
   w[17]=w[2]*w[17];
   w[18]=w[18]*w[2];
   w[25]=w[85]*w[118];
   w[18]=w[25]-w[18];
   w[18]=w[18]*w[77];
   w[25]=w[200]*w[104];
   w[26]=w[197]*w[174];
   w[17]=w[18]-w[25]+w[26]+w[17];
   w[17]=w[17]*w[10];
   w[18]=w[23]*w[2];
   w[23]=w[198]*w[104];
   w[18]=w[23]-w[18];
   w[18]=w[18]*w[7];
   w[23]=w[140]*w[2];
   w[23]=w[23]-w[185];
   w[23]=w[23]*w[5];
   w[23]=w[23]-4.E+0*w[144];
   w[23]=w[23]*w[122];
   w[25]=w[148]*w[157];
   w[25]=w[25]+w[40];
   w[26]=w[116]*w[157];
   w[25]=w[26]+4.E+0*w[25];
   w[25]=w[25]*w[4];
   w[26]=w[188]*w[102];
   w[17]=w[21]+w[19]-w[18]-w[26]-w[23]+w[17]-w[25];
   w[18]=w[17]*w[84];
   w[15]=w[20]+w[15];
   w[15]=w[15]*w[3];
   w[19]=w[156]+4.E+0*w[190];
   w[19]=w[19]*w[92];
   w[15]=w[19]+w[15]-w[22];
   w[15]=w[15]*w[3];
   w[19]=-w[166]+4.E+0*w[194];
   w[19]=w[19]*w[92];
   w[19]=w[19]+w[50];
   w[19]=w[19]*w[5];
   w[20]=w[189]*w[162];
   w[15]=w[20]+w[23]+w[15]-w[19];
   w[15]=w[15]*w[13];
   w[19]=PDQ2Lm*w[15];
   w[18]=w[19]+w[18];
   w[18]=w[18]*w[150];
   w[17]=w[17]*w[178];
   w[15]=PDQ2Lp*w[15];
   w[15]=w[17]+w[15];
   w[15]=w[15]*w[111];
   w[15]=w[18]+w[15];


K13[SI_K13(ip,izp,0,iq,izq,0)] += wj * FCtr * w[15];
K13[SI_K13(ip,izp,0,iq,izq,1)] += wj * FCtr * w[31];
K13[SI_K13(ip,izp,0,iq,izq,2)] += wj * FCtr * w[16];
K13[SI_K13(ip,izp,1,iq,izq,0)] += wj * FCtr * w[48];
K13[SI_K13(ip,izp,1,iq,izq,1)] += wj * FCtr * w[24];
K13[SI_K13(ip,izp,1,iq,izq,2)] += wj * FCtr * w[14];
