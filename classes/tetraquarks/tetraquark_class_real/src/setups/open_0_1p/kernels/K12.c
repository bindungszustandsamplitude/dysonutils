sv1 = sv1_q1;
ss1 = ss1_q1;
sv2 = sv2_q2;
ss2 = ss2_q2;
sv3 = sv3_q1;
ss3 = ss3_q1;
sv4 = sv4_q2;
ss4 = ss4_q2;

w.resize(10000,0.);

if(isud){FCtr  = 4.*3.;}
if(!isud){FCtr  = 4.*3.;}

ampl  = 0.;
if(quark_1.getMass() == 0.0037){
ampl = 0.5*(
ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0037(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_0037(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_0037(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_0037(0,std::real(l_l+q_l+0.25*q_q))+
ns_data_v2::amplitudes::meson::vector::fit::m_7950_0037(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_0037(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0037(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_0037(0,std::real(l_l+q_l+0.25*q_q))
);
}
else
if(quark_1.getMass() == 0.0200){
ampl = 0.5*(
ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0200(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_0200(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_0200(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_0200(0,std::real(l_l+q_l+0.25*q_q))+
ns_data_v2::amplitudes::meson::vector::fit::m_7950_0200(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_0200(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0200(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_0200(0,std::real(l_l+q_l+0.25*q_q))
);
}
else
if(quark_1.getMass() == 0.0500){
ampl = 0.5*(
ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0500(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_0500(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_0500(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_0500(0,std::real(l_l+q_l+0.25*q_q))+
ns_data_v2::amplitudes::meson::vector::fit::m_7950_0500(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_0500(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0500(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_0500(0,std::real(l_l+q_l+0.25*q_q))
);
}
else
if(quark_1.getMass() == 0.0855){
ampl = 0.5*(
ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0855(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_0855(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_0855(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_0855(0,std::real(l_l+q_l+0.25*q_q))+
ns_data_v2::amplitudes::meson::vector::fit::m_7950_0855(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_0855(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0855(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_0855(0,std::real(l_l+q_l+0.25*q_q))
);
}
else
if(quark_1.getMass() == 0.2100){
ampl = 0.5*(
ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_2100(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_2100(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_2100(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_2100(0,std::real(l_l+q_l+0.25*q_q))+
ns_data_v2::amplitudes::meson::vector::fit::m_7950_2100(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_2100(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_2100(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_2100(0,std::real(l_l+q_l+0.25*q_q))
);
}
else
if(quark_1.getMass() == 0.3500){
ampl = 0.5*(
ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_3500(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_3500(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_3500(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_3500(0,std::real(l_l+q_l+0.25*q_q))+
ns_data_v2::amplitudes::meson::vector::fit::m_7950_3500(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_3500(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_3500(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_3500(0,std::real(l_l+q_l+0.25*q_q))
);
}
else
if(quark_1.getMass() == 0.5000){
ampl = 0.5*(
ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_5000(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_5000(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_5000(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_5000(0,std::real(l_l+q_l+0.25*q_q))+
ns_data_v2::amplitudes::meson::vector::fit::m_7950_5000(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_5000(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_5000(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_5000(0,std::real(l_l+q_l+0.25*q_q))
);
}
else
if(quark_1.getMass() == 0.6500){
ampl = 0.5*(
ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_6500(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_6500(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_6500(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_6500(0,std::real(l_l+q_l+0.25*q_q))+
ns_data_v2::amplitudes::meson::vector::fit::m_7950_6500(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_6500(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_6500(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_6500(0,std::real(l_l+q_l+0.25*q_q))
);
}
else
if(quark_1.getMass() == 0.7950){
ampl = 0.5*(
ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_7950(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+q_l+0.25*q_q))+
ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+q_l+0.25*q_q))
);
}


    w[1]=1./(-Q_Q*Q_p*p_p+pow(Q_p,3));
    w[2]=Q_Q;
    w[3]=Q_p;
    w[4]=Q_q;
    w[5]=p_q;
    w[6]=q_q;
    w[7]=q_l;
    w[8]=p_p;
    w[9]=p_l;
    w[10]=Q_l;
    w[11]=l_l;
    w[12]=1./(Q_Q*pow(p_p,2)-pow(Q_p,2)*p_p);
    w[13]=pow(p_p,-1);
    w[14]=1./(3.E+0*Q_Q*pow(p_p,3)-3.E+0*pow(Q_p,2)*pow(p_p,2));
   w[15]=sv2*sv3;
   w[16]=ampl*i_;
   w[17]=w[15]*w[16]*ss4;
   w[18]=ss3*sv2*sv4;
   w[19]=w[16]*w[18];
   w[20]=w[17]-w[19];
   w[20]=w[20]*sv1;
   w[21]=w[20]*w[11];
   w[22]=w[16]*ss1;
   w[23]=sv4*w[22]*ss3;
   w[22]=w[22]*ss4;
   w[24]=w[22]*sv3;
   w[25]=w[23]-w[24];
   w[26]=w[25]*ss2;
   w[21]=w[21]-w[26];
   w[27]=w[16]*sv3*sv4;
   w[28]=sv1*w[27]*ss2;
   w[27]=w[27]*ss1*sv2;
   w[29]=w[28]-w[27];
   w[30]=w[29]*w[7];
   w[31]=w[21]+w[30];
   w[32]=w[20]+w[29];
   w[33]=w[32]*w[9];
   w[34]=w[31]+w[33];
   w[34]=w[34]*w[6];
   w[35]=w[32]*w[11];
   w[16]=w[16]*sv1;
   w[36]=w[16]*ss4;
   w[37]=w[36]*ss3;
   w[25]=w[25]-w[37];
   w[25]=w[25]*ss2;
   w[22]=sv2*w[22]*ss3;
   w[25]=w[22]+w[25]-w[35];
   w[38]=w[33]-w[25];
   w[39]=2.E+0*w[30];
   w[40]=w[38]+w[39];
   w[40]=w[40]*w[7];
   w[15]=w[36]*w[15];
   w[36]=w[15]-w[27];
   w[41]=w[36]*w[11];
   w[42]=w[24]*ss2;
   w[42]=w[42]-w[22];
   w[41]=w[41]+w[42];
   w[43]=2.E+0*w[27];
   w[44]=w[43]*w[7];
   w[45]=w[27]*w[6];
   w[44]=w[45]+w[44]-w[41];
   w[46]=w[44]*w[5];
   w[47]=w[36]*w[7];
   w[47]=w[47]-w[45];
   w[48]=w[47]*w[8];
   w[34]=-w[40]-w[34]+w[46]-w[48];
   w[40]=-w[29]+3.E+0*w[20];
   w[46]=w[40]*w[7];
   w[49]=w[20]*w[6];
   w[46]=w[46]+w[49];
   w[50]=5.E-1*w[19];
   w[51]=w[50]-w[17];
   w[51]=w[51]*sv1;
   w[52]=5.E-1*w[28];
   w[51]=w[51]-w[52];
   w[53]=w[51]-w[27];
   w[54]=w[53]*w[5];
   w[46]=-w[54]+5.E-1*w[46];
   w[46]=w[46]*w[2];
   w[54]=w[28]+w[27];
   w[55]=w[20]+w[54];
   w[56]=w[55]*w[6];
   w[57]=w[17]+w[19];
   w[57]=w[57]*sv1;
   w[58]=w[57]-w[54];
   w[59]=w[58]*w[7];
   w[60]=w[56]-w[59];
   w[61]=2.E+0*w[3];
   w[60]=w[60]*w[61];
   w[34]=w[60]+w[46]+8.E+0*w[34];
   w[34]=w[34]*w[3];
   w[46]=w[33]*w[5];
   w[60]=w[32]*w[7];
   w[62]=w[60]*w[8];
   w[46]=w[46]-w[62];
   w[62]=2.E+0*w[2];
   w[46]=w[46]*w[62];
   w[34]=w[34]-w[46];
   w[46]=w[57]-w[29];
   w[46]=w[46]*w[7];
   w[63]=w[36]*w[9];
   w[64]=w[27]*w[5];
   w[65]=w[63]-w[64];
   w[41]=-w[46]+w[45]+w[41]+w[65];
   w[41]=w[41]*w[8];
   w[38]=w[38]*w[9];
   w[46]=w[43]*w[5];
   w[66]=w[46]-w[21];
   w[67]=w[66]-w[39];
   w[68]=2.E+0*w[9];
   w[69]=w[68]*w[36];
   w[70]=w[67]-w[69];
   w[70]=w[70]*w[5];
   w[71]=w[30]*w[68];
   w[72]=w[29]*w[9];
   w[73]=w[72]*w[6];
   w[41]=w[41]-w[70]-w[73]+w[38]+w[71];
   w[70]=2.E+0*w[7];
   w[74]=w[70]*w[58];
   w[75]=w[58]*w[9];
   w[76]=2.E+0*w[15];
   w[77]=w[76]*w[5];
   w[78]=w[54]*w[6];
   w[74]=w[74]-2.E+0*w[78]+w[77]-w[75];
   w[74]=w[74]*w[61];
   w[79]=w[40]*w[9];
   w[80]=w[20]*w[5];
   w[79]=w[79]+w[80];
   w[81]=5.E-1*w[79];
   w[82]=w[53]*w[8];
   w[82]=w[82]-w[81];
   w[82]=w[82]*w[2];
   w[41]=-w[74]+w[82]+8.E+0*w[41];
   w[74]=w[54]*w[5];
   w[83]=w[75]-w[74];
   w[84]=2.E+0*w[83];
   w[85]=w[58]*w[8];
   w[86]=w[84]+w[85];
   w[87]=2.E+0*w[4];
   w[88]=w[86]*w[87];
   w[88]=w[88]+w[41];
   w[88]=w[4]*w[88];
   w[88]=w[88]+w[34];
   w[88]=w[4]*w[88];
   w[89]=-w[75]+w[46]-w[39];
   w[89]=w[89]*w[5];
   w[90]=w[43]*w[6];
   w[90]=w[90]-w[59];
   w[91]=w[90]*w[8];
   w[92]=w[29]*w[6];
   w[93]=w[92]*w[68];
   w[89]=w[89]+w[93]-w[91];
   w[59]=w[59]-w[78];
   w[91]=w[58]*w[5];
   w[59]=w[91]+2.E+0*w[59];
   w[59]=w[59]*w[3];
   w[93]=w[86]*w[4];
   w[59]=-w[93]+w[59]+4.E+0*w[89];
   w[59]=w[59]*w[87]*w[10];
   w[88]=w[88]-w[59];
   w[88]=w[1]*w[88];
   w[89]=w[20]+w[28];
   w[94]=3.E+0*w[27];
   w[95]=w[89]-w[94];
   w[95]=w[95]*w[9];
   w[31]=w[31]+w[95];
   w[31]=w[31]*w[6];
   w[90]=w[90]+w[65];
   w[90]=w[90]*w[5];
   w[69]=w[69]-w[25];
   w[96]=w[69]+w[39];
   w[97]=w[96]*w[7];
   w[31]=-w[90]+w[31]+w[97]+w[48];
   w[31]=w[31]*w[8];
   w[90]=w[43]-w[15];
   w[90]=w[90]*w[68];
   w[67]=w[67]+w[90];
   w[67]=w[67]*w[5];
   w[69]=w[69]*w[9];
   w[97]=w[30]*w[9];
   w[67]=w[67]+w[73]-w[69]-4.E+0*w[97];
   w[67]=w[67]*w[5];
   w[98]=pow(w[9],2);
   w[99]=w[98]*w[29];
   w[100]=w[99]*w[6];
   w[31]=2.E+0*w[100]+w[31]+w[67];
   w[67]=w[57]+w[54];
   w[101]=w[67]*w[11];
   w[23]=w[23]+w[37]+w[24];
   w[23]=w[23]*ss2;
   w[22]=w[23]+w[22];
   w[23]=w[101]+w[22];
   w[24]=w[70]*w[57];
   w[37]=4.E+0*w[9];
   w[37]=w[37]*w[15];
   w[37]=w[37]+w[77];
   w[24]=-w[78]+w[23]+w[24]+w[37];
   w[24]=w[24]*w[5];
   w[16]=w[16]*w[18];
   w[18]=w[16]-w[28];
   w[77]=w[18]*w[70];
   w[77]=w[77]-w[56];
   w[101]=w[15]+w[27];
   w[102]=w[101]*w[5];
   w[103]=w[77]+w[102];
   w[103]=w[103]*w[8];
   w[104]=w[75]*w[7];
   w[105]=w[78]*w[9];
   w[104]=w[105]-w[104];
   w[24]=w[24]+w[103]-2.E+0*w[104];
   w[103]=w[20]-w[29];
   w[105]=w[103]*w[7];
   w[106]=w[105]+w[102];
   w[106]=w[106]*w[3];
   w[107]=w[67]*w[2];
   w[108]=1.25E-1*w[107];
   w[109]=w[108]*w[5];
   w[106]=-w[106]-w[109]+2.E+0*w[24];
   w[106]=w[106]*w[3];
   w[106]=w[106]+8.E+0*w[31];
   w[110]=w[49]+w[60];
   w[111]=w[110]*w[8];
   w[112]=w[80]+w[33];
   w[113]=w[112]*w[5];
   w[111]=w[111]-w[113];
   w[114]=5.E-1*w[2];
   w[115]=w[111]*w[114];
   w[23]=w[23]+w[78];
   w[116]=w[70]*w[54];
   w[116]=w[116]+w[23];
   w[117]=2.E+0*w[17];
   w[118]=w[117]+w[19];
   w[118]=w[118]*sv1;
   w[119]=w[118]-w[28];
   w[120]=w[119]*w[68];
   w[120]=w[120]+w[116];
   w[121]=w[120]+w[91];
   w[122]=w[101]*w[8];
   w[123]=w[121]+w[122];
   w[123]=w[123]*w[8];
   w[124]=2.E+0*w[28];
   w[125]=-w[57]+w[124]+w[43];
   w[126]=w[125]*w[9];
   w[127]=w[126]+w[74];
   w[127]=w[127]*w[5];
   w[128]=w[98]*w[58];
   w[127]=w[127]-w[128];
   w[129]=2.E+0*w[127];
   w[123]=w[123]-w[129];
   w[130]=w[108]*w[8];
   w[130]=-w[130]+2.E+0*w[123];
   w[131]=w[103]*w[9];
   w[132]=w[131]+w[122];
   w[133]=w[132]*w[3];
   w[133]=w[133]-w[130];
   w[134]=-w[4]*w[133];
   w[115]=w[134]+w[115]-w[106];
   w[115]=w[12]*w[4]*w[115];
   w[88]=w[88]+w[115];
   w[115]=PM22m*PM21p;
   w[88]=w[88]*w[115];
   w[134]=3.333333333E-1*w[17];
   w[135]=w[134]+w[19];
   w[135]=w[135]*sv1;
   w[136]=3.333333333E-1*w[27];
   w[137]=3.333333333E-1*w[28];
   w[138]=w[136]-w[137];
   w[139]=w[135]-w[138];
   w[139]=w[139]*w[11];
   w[140]=3.333333333E-1*w[22];
   w[141]=1.333333333E+0*w[9];
   w[142]=w[141]*w[101];
   w[139]=w[139]+w[142]+w[140];
   w[142]=w[55]*w[5];
   w[143]=w[139]+6.666666666E-1*w[142];
   w[144]=6.666666666E-1*w[7];
   w[89]=w[89]*w[144];
   w[145]=3.333333333E-1*w[78];
   w[89]=w[89]+w[143]+w[145];
   w[89]=w[89]*w[5];
   w[146]=2.E+0*w[19];
   w[147]=w[146]-w[17];
   w[147]=w[147]*sv1;
   w[148]=w[43]-w[28];
   w[149]=w[147]-w[148];
   w[150]=w[7]*w[9];
   w[151]=w[150]*w[149];
   w[152]=w[6]*w[9];
   w[153]=w[152]*w[148];
   w[151]=w[153]-w[151];
   w[89]=w[89]+6.666666666E-1*w[151];
   w[146]=w[146]+w[17];
   w[146]=w[146]*sv1;
   w[43]=w[146]-w[43]-w[28];
   w[146]=3.333333333E-1*w[7];
   w[151]=w[43]*w[146];
   w[153]=5.E-1*w[78];
   w[151]=3.333333333E-1*w[91]+w[151]-w[153];
   w[151]=w[151]*w[3];
   w[154]=4.166666666E-2*w[107];
   w[155]=w[154]*w[5];
   w[89]=-w[151]-w[155]+2.E+0*w[89];
   w[89]=w[89]*w[3];
   w[151]=w[32]*w[68];
   w[35]=w[35]-w[26];
   w[156]=w[151]+w[35];
   w[156]=w[156]*w[5];
   w[157]=w[151]-w[25];
   w[158]=w[157]*w[9];
   w[156]=w[156]+w[158]+w[73];
   w[156]=w[156]*w[5];
   w[156]=w[156]+w[100];
   w[159]=3.333333333E-1*w[5];
   w[160]=w[159]*w[55];
   w[134]=w[134]-w[19];
   w[134]=w[134]*sv1;
   w[161]=w[136]+w[137];
   w[162]=w[134]+w[161];
   w[163]=w[162]*w[9];
   w[160]=w[160]+w[163];
   w[163]=w[114]*w[5];
   w[160]=w[160]*w[163];
   w[89]=-w[89]-w[160]+2.666666666E+0*w[156];
   w[89]=w[89]*w[13];
   w[156]=w[162]*w[7];
   w[56]=w[156]+3.333333333E-1*w[56];
   w[56]=w[56]*w[114];
   w[156]=w[32]*w[6];
   w[156]=w[156]-w[102];
   w[160]=6.666666666E-1*w[3];
   w[156]=w[156]*w[160];
   w[56]=w[89]+w[56]+w[156];
   w[89]=w[35]+w[30];
   w[156]=w[89]+w[33];
   w[162]=w[156]*w[6];
   w[157]=w[157]+w[30];
   w[164]=w[157]*w[7];
   w[60]=w[60]-w[65];
   w[60]=w[60]*w[5];
   w[60]=w[60]+w[162]+w[164];
   w[162]=w[48]+w[60];
   w[164]=w[148]+w[20];
   w[165]=w[5]*w[9];
   w[164]=w[164]*w[165];
   w[149]=w[149]*w[98];
   w[164]=w[164]-w[149];
   w[43]=w[43]*w[9];
   w[166]=2.E+0*w[74];
   w[43]=w[43]-w[166];
   w[43]=w[43]*w[3];
   w[43]=-w[43]+4.E+0*w[164];
   w[164]=3.333333333E-1*w[13];
   w[43]=w[43]*w[164];
   w[167]=w[58]*w[3];
   w[168]=3.333333333E-1*w[167];
   w[169]=w[168]+w[154];
   w[170]=w[54]*w[4];
   w[170]=1.666666666E-1*w[170];
   w[43]=-w[170]+w[43]-w[169];
   w[171]=3.333333333E-1*w[20];
   w[172]=w[137]+w[27];
   w[173]=w[171]+w[172];
   w[173]=w[173]*w[5];
   w[139]=w[173]+w[139];
   w[173]=w[144]*w[28];
   w[173]=w[145]+w[173]+w[139];
   w[174]=3.333333333E-1*w[122];
   w[175]=-w[174]-w[173];
   w[175]=2.E+0*w[175]-w[43];
   w[175]=w[4]*w[175];
   w[162]=w[175]+2.666666666E+0*w[162]-w[56];
   w[162]=w[4]*w[162];
   w[175]=w[16]-w[27];
   w[176]=w[175]*w[9];
   w[176]=w[176]-w[64];
   w[177]=4.E+0*w[5];
   w[176]=w[176]*w[177];
   w[178]=w[3]*w[5];
   w[179]=w[178]*w[175];
   w[176]=w[176]-w[179];
   w[176]=w[176]*w[13];
   w[179]=w[175]*w[7];
   w[179]=w[179]-w[45];
   w[176]=w[176]-4.E+0*w[179];
   w[179]=-w[4]*w[175];
   w[179]=w[179]-w[176];
   w[180]=3.333333333E-1*w[4];
   w[181]=w[180]*w[10];
   w[179]=w[179]*w[181];
   w[162]=w[162]+w[179];
   w[162]=PM21Lp*w[162];
   w[179]=w[54]+5.E+0*w[57];
   w[182]=3.333333333E-1*w[11];
   w[179]=w[179]*w[182];
   w[183]=w[117]-w[19];
   w[183]=w[183]*sv1;
   w[184]=w[183]+w[54];
   w[185]=6.666666666E-1*w[5];
   w[184]=w[184]*w[185];
   w[67]=w[144]*w[67];
   w[185]=w[76]+w[27];
   w[185]=w[185]*w[141];
   w[67]=w[184]+w[179]+w[185]+w[67]+w[145]+w[22];
   w[67]=2.E+0*w[67];
   w[179]=-w[5]*w[67];
   w[184]=w[3]*w[119]*w[159];
   w[109]=w[184]+w[179]+w[109];
   w[109]=w[3]*w[109];
   w[179]=-w[20]-6.666666666E-1*w[29];
   w[179]=w[179]*w[11];
   w[137]=w[137]-w[27];
   w[184]=w[137]+3.333333333E-1*w[183];
   w[184]=w[184]*w[68];
   w[64]=6.666666666E-1*w[64];
   w[26]=-w[179]+w[184]+6.666666666E-1*w[30]-w[64]-w[26];
   w[26]=w[26]*w[5];
   w[148]=w[148]-w[183];
   w[179]=w[148]*w[9];
   w[179]=w[25]+6.666666666E-1*w[179];
   w[179]=w[179]*w[9];
   w[141]=w[141]*w[30];
   w[26]=w[26]-w[179]+w[141]+3.333333333E-1*w[73];
   w[141]=8.E+0*w[5];
   w[179]=w[26]*w[141];
   w[184]=w[29]+5.E+0*w[20];
   w[185]=3.333333333E-1*w[9];
   w[184]=w[184]*w[185];
   w[184]=w[184]+w[80];
   w[185]=-w[184]*w[163];
   w[109]=w[109]+w[179]+w[185];
   w[109]=w[13]*w[109];
   w[179]=-w[137]+3.333333333E-1*w[57];
   w[179]=w[179]*w[7];
   w[148]=w[148]*w[182];
   w[42]=w[148]-w[42];
   w[148]=w[136]*w[6];
   w[148]=w[179]+w[148]+w[42];
   w[179]=w[148]-w[65];
   w[141]=-w[179]*w[141];
   w[84]=w[13]*w[5]*w[84];
   w[84]=w[91]+w[84];
   w[182]=6.666666666E-1*w[4];
   w[84]=w[84]*w[182];
   w[50]=w[50]-w[117];
   w[50]=w[50]*sv1;
   w[50]=w[50]-w[52];
   w[52]=w[2]*w[50]*w[159];
   w[117]=-w[61]*w[102];
   w[52]=w[84]+w[109]+w[117]+w[141]+w[52];
   w[52]=w[4]*w[52];
   w[84]=w[177]*w[83];
   w[109]=w[178]*w[103];
   w[84]=w[84]+w[109];
   w[84]=w[84]*w[13];
   w[109]=w[177]*w[36];
   w[84]=w[84]+w[109];
   w[84]=w[84]*w[181];
   w[52]=w[52]+w[84];
   w[52]=PM21p*w[52];
   w[52]=w[162]+w[52];
   w[52]=PM22m*w[52];
   w[109]=3.333333333E-1*w[19];
   w[117]=w[109]+w[17];
   w[117]=w[117]*sv1;
   w[138]=w[117]+w[138];
   w[138]=w[138]*w[11];
   w[138]=w[138]+w[140];
   w[140]=w[20]-w[27];
   w[140]=w[140]*w[144];
   w[140]=w[140]-w[138]-w[145];
   w[140]=w[140]*w[5];
   w[141]=w[124]-w[27];
   w[162]=w[141]-w[183];
   w[150]=w[150]*w[162];
   w[152]=w[152]*w[141];
   w[150]=w[152]+w[150];
   w[140]=w[140]-6.666666666E-1*w[150];
   w[118]=-w[27]+w[118]-w[124];
   w[124]=w[118]*w[146];
   w[124]=w[124]-w[153];
   w[124]=w[124]*w[3];
   w[124]=-w[124]+w[155]+2.E+0*w[140];
   w[124]=w[124]*w[3];
   w[140]=w[35]*w[5];
   w[150]=w[25]*w[9];
   w[140]=-w[140]+w[150]-w[73];
   w[140]=w[140]*w[5];
   w[140]=w[140]-w[100];
   w[109]=w[109]-w[17];
   w[109]=w[109]*sv1;
   w[152]=w[109]+w[161];
   w[153]=w[152]*w[9];
   w[155]=w[20]-w[54];
   w[161]=w[155]*w[159];
   w[153]=w[153]-w[161];
   w[153]=w[153]*w[163];
   w[124]=w[124]+w[153]-2.666666666E+0*w[140];
   w[124]=w[124]*w[13];
   w[140]=w[152]*w[7];
   w[152]=w[155]*w[6];
   w[140]=-w[140]+3.333333333E-1*w[152];
   w[140]=w[140]*w[114];
   w[70]=w[70]+w[6];
   w[70]=w[70]*w[103];
   w[70]=w[70]+w[102];
   w[70]=w[70]*w[160];
   w[70]=w[124]+w[70]+w[140];
   w[124]=w[131]+w[89];
   w[140]=w[124]*w[6];
   w[152]=w[105]-w[65];
   w[152]=w[152]*w[5];
   w[153]=w[25]-w[30];
   w[155]=w[153]*w[7];
   w[140]=w[152]+w[155]-w[140];
   w[48]=-w[48]-w[140];
   w[152]=w[159]*w[103];
   w[152]=-w[138]+w[152]+6.666666666E-1*w[131];
   w[144]=w[144]*w[27];
   w[144]=w[145]+w[144]-w[152];
   w[145]=w[174]-w[144];
   w[141]=w[141]-w[20];
   w[141]=w[141]*w[165];
   w[98]=w[162]*w[98];
   w[141]=w[141]+w[98];
   w[118]=w[118]*w[9];
   w[118]=w[118]-w[166];
   w[118]=w[118]*w[3];
   w[118]=w[118]+4.E+0*w[141];
   w[118]=w[118]*w[164];
   w[118]=w[170]+w[118]-w[154];
   w[141]=2.E+0*w[145]-w[118];
   w[141]=w[4]*w[141];
   w[48]=w[141]+2.666666666E+0*w[48]-w[70];
   w[48]=w[4]*w[48];
   w[15]=w[15]-w[28];
   w[141]=w[15]*w[9];
   w[145]=w[28]*w[5];
   w[141]=w[145]-w[141];
   w[141]=w[141]*w[177];
   w[145]=w[178]*w[15];
   w[141]=w[141]-w[145];
   w[141]=w[141]*w[13];
   w[145]=w[15]*w[7];
   w[155]=w[28]*w[6];
   w[145]=w[155]-w[145];
   w[141]=w[141]-4.E+0*w[145];
   w[145]=w[4]*w[15];
   w[145]=w[145]+w[141];
   w[145]=w[145]*w[181];
   w[48]=w[48]+w[145];
   w[145]=PM21p*PM22Lm;
   w[48]=w[48]*w[145];
   w[48]=w[48]+w[52];
   w[52]=w[21]+w[33];
   w[52]=w[52]*w[5];
   w[155]=w[44]-w[65];
   w[155]=w[155]*w[8];
   w[71]=w[71]+w[73];
   w[52]=-w[71]-w[38]+w[155]-w[52];
   w[52]=-w[82]+8.E+0*w[52];
   w[52]=w[52]*w[2];
   w[53]=w[53]*w[2];
   w[44]=-w[53]+8.E+0*w[44];
   w[44]=w[44]*w[3];
   w[53]=w[18]*w[68];
   w[82]=w[53]-w[142];
   w[82]=w[82]*w[62];
   w[44]=w[44]+w[82];
   w[44]=w[44]*w[3];
   w[44]=w[52]-w[44];
   w[52]=-w[3]*w[44];
   w[82]=w[29]*w[5];
   w[85]=-w[85]+2.E+0*w[82];
   w[85]=-w[167]+2.E+0*w[85];
   w[85]=w[85]*w[10];
   w[94]=w[28]+w[94]-w[57];
   w[94]=w[94]*w[8];
   w[155]=w[82]-w[72];
   w[94]=w[94]+2.E+0*w[155];
   w[155]=w[125]*w[3];
   w[94]=w[155]+2.E+0*w[94];
   w[155]=w[4]*w[94];
   w[155]=w[85]+w[155];
   w[161]=4.E+0*w[3];
   w[155]=w[161]*w[155];
   w[162]=w[36]*w[8];
   w[163]=w[162]+w[92];
   w[46]=w[53]-w[46];
   w[25]=-w[46]+w[163]+w[39]-w[25];
   w[39]=w[40]*w[114];
   w[40]=4.E+0*w[167];
   w[25]=-w[39]+w[40]+8.E+0*w[25];
   w[25]=w[25]*w[3];
   w[39]=w[162]+w[83];
   w[53]=4.E+0*w[2];
   w[39]=w[39]*w[53];
   w[25]=w[25]-w[39];
   w[39]=-w[3]*w[25];
   w[39]=w[39]+w[155];
   w[39]=w[10]*w[39];
   w[155]=w[27]*w[8];
   w[46]=-w[21]+w[46]+w[155];
   w[165]=w[16]-w[54];
   w[170]=w[165]*w[161];
   w[178]=w[114]*w[20];
   w[46]=-w[170]+w[178]+8.E+0*w[46];
   w[46]=w[46]*w[3];
   w[86]=w[86]*w[62];
   w[46]=w[46]+w[86];
   w[86]=w[3]*w[46];
   w[170]=w[155]-w[72];
   w[185]=w[54]*w[3];
   w[170]=w[185]+4.E+0*w[170];
   w[186]=w[4]*w[170]*w[161];
   w[86]=w[86]+w[186];
   w[86]=w[4]*w[86];
   w[39]=w[39]+w[52]+w[86];
   w[39]=w[12]*w[39];
   w[52]=1.E+1*w[17]+w[19];
   w[52]=sv1*w[52];
   w[52]=w[52]-w[28];
   w[52]=w[52]*w[68];
   w[17]=9.E+0*w[17]+w[19];
   w[17]=sv1*w[17];
   w[17]=w[17]-w[54];
   w[17]=w[5]*w[17];
   w[19]=5.E+0*w[122];
   w[86]=w[54]*w[7];
   w[17]=w[19]+w[17]+1.E+1*w[86]+w[52]+5.E+0*w[23];
   w[17]=w[8]*w[17];
   w[17]=-w[129]+w[17];
   w[23]=w[8]*w[107];
   w[17]=2.E+0*w[17]-6.25E-1*w[23];
   w[17]=w[2]*w[17];
   w[23]=w[90]+w[66];
   w[23]=w[23]*w[5];
   w[52]=w[65]*w[8];
   w[23]=w[23]-w[69]-w[52]-w[71];
   w[37]=w[37]+w[116]+w[122];
   w[52]=w[101]*w[3];
   w[69]=w[52]+w[108];
   w[37]=-w[69]+2.E+0*w[37];
   w[37]=w[37]*w[3];
   w[37]=w[37]+8.E+0*w[23];
   w[19]=-w[81]-w[19];
   w[19]=w[2]*w[19];
   w[19]=w[19]-w[37];
   w[19]=w[3]*w[19];
   w[17]=w[17]+w[19];
   w[17]=w[3]*w[17];
   w[19]=1.6E+1*w[8];
   w[23]=w[23]*w[19];
   w[71]=2.E+0*w[122]+w[79];
   w[79]=w[2]*w[8];
   w[71]=w[71]*w[79];
   w[23]=w[23]+w[71];
   w[23]=w[23]*w[62];
   w[17]=w[23]+w[17];
   w[17]=w[3]*w[17];
   w[23]=8.E+0*w[8];
   w[71]=w[23]*w[123];
   w[90]=5.E-1*w[107];
   w[116]=pow(w[8],2);
   w[123]=w[90]*w[116];
   w[71]=w[123]-w[71];
   w[123]=w[71]*pow(w[2],2);
   w[17]=w[123]+w[17];
   w[17]=w[14]*w[17];
   w[123]=-w[5]*w[156];
   w[123]=w[123]-w[38]-w[97];
   w[129]=w[101]*w[68];
   w[22]=w[129]+w[142]+w[22];
   w[129]=2.E+0*w[11];
   w[142]=w[7]+w[129];
   w[142]=w[57]*w[142];
   w[142]=w[142]+w[22];
   w[107]=2.5E-1*w[107];
   w[142]=-w[167]+4.E+0*w[142]-w[107];
   w[142]=w[3]*w[142];
   w[112]=w[2]*w[112];
   w[112]=w[142]+1.6E+1*w[123]+w[112];
   w[112]=w[3]*w[112];
   w[53]=-w[127]*w[53];
   w[53]=w[53]+w[112];
   w[53]=w[53]*w[164];
   w[112]=2.E+0*w[121]-w[108];
   w[121]=3.333333333E-1*w[2];
   w[112]=w[112]*w[121];
   w[63]=-w[64]+6.666666666E-1*w[63];
   w[123]=w[148]-w[63];
   w[51]=-w[27]-w[51];
   w[51]=w[51]*w[121];
   w[51]=1.333333333E+0*w[52]+8.E+0*w[123]+w[51];
   w[51]=w[3]*w[51];
   w[51]=w[53]+w[112]+w[51];
   w[51]=w[13]*w[51];
   w[53]=-w[66]+w[95]-w[155];
   w[53]=w[53]*w[8];
   w[66]=w[72]*w[5];
   w[66]=w[66]+w[99];
   w[53]=w[53]+2.E+0*w[66];
   w[95]=w[54]*w[9];
   w[95]=w[95]+w[74];
   w[55]=w[55]*w[8];
   w[55]=w[55]+2.E+0*w[95];
   w[95]=w[55]*w[61];
   w[99]=w[178]*w[8];
   w[95]=-w[95]-w[99]+8.E+0*w[53];
   w[99]=-w[3]*w[95];
   w[55]=w[55]*w[79];
   w[55]=-8.E+0*w[55]+w[99];
   w[55]=w[3]*w[55];
   w[53]=w[53]*w[19];
   w[99]=w[116]*w[2];
   w[112]=-w[20]*w[99];
   w[53]=w[53]+w[112];
   w[53]=w[53]*w[62];
   w[53]=w[53]+w[55];
   w[53]=w[14]*w[53];
   w[55]=w[126]+w[166];
   w[55]=w[3]*w[55];
   w[55]=-4.E+0*w[66]+w[55];
   w[55]=w[13]*w[55];
   w[112]=w[3]*w[165];
   w[55]=w[112]-w[55];
   w[112]=w[171]+w[137];
   w[112]=w[112]*w[9];
   w[21]=w[112]+3.333333333E-1*w[21];
   w[64]=w[64]-w[21];
   w[112]=w[20]*w[2];
   w[55]=8.E+0*w[64]+1.666666666E-1*w[112]-1.333333333E+0*w[55];
   w[55]=w[13]*w[55];
   w[53]=w[55]+2.666666666E+0*w[27]+w[53];
   w[53]=w[4]*w[53];
   w[55]=w[96]+w[91];
   w[64]=-w[92]-w[55];
   w[92]=-w[58]*w[68];
   w[112]=w[5]*w[125];
   w[92]=w[92]+w[112];
   w[92]=w[3]*w[92];
   w[72]=w[82]+w[72];
   w[82]=w[72]*w[177];
   w[82]=w[82]+w[92];
   w[82]=w[13]*w[82];
   w[92]=w[114]*w[32];
   w[40]=4.E+0*w[82]-w[40]+8.E+0*w[64]+w[92];
   w[40]=w[40]*w[164];
   w[18]=w[18]*w[8];
   w[18]=w[75]+w[18]+w[91];
   w[64]=w[103]*w[3];
   w[75]=-w[64]+4.E+0*w[18];
   w[75]=w[75]*w[3];
   w[55]=w[55]+w[163];
   w[55]=w[55]*w[8];
   w[72]=w[72]*w[5];
   w[55]=w[55]-2.E+0*w[72];
   w[75]=w[75]+8.E+0*w[55];
   w[82]=7.E+0*w[20]-9.E+0*w[29];
   w[112]=-w[8]*w[82]*w[114];
   w[112]=w[112]-w[75];
   w[112]=w[3]*w[112];
   w[18]=w[18]*w[79];
   w[18]=1.6E+1*w[18]+w[112];
   w[18]=w[3]*w[18];
   w[55]=w[55]*w[19];
   w[99]=-w[32]*w[99];
   w[55]=w[55]+w[99];
   w[55]=w[55]*w[62];
   w[18]=w[55]+w[18];
   w[18]=w[14]*w[18];
   w[55]=2.666666666E+0*w[36];
   w[18]=w[40]-w[55]+w[18];
   w[18]=w[10]*w[18];
   w[40]=6.666666666E-1*w[2];
   w[99]=w[40]*w[101];
   w[17]=w[39]+w[18]+w[53]+w[51]+w[99]+w[17];
   w[17]=PM21p*w[17];
   w[18]=2.E+0*w[16];
   w[39]=w[18]+w[29];
   w[39]=w[39]*w[146];
   w[51]=w[39]+w[143];
   w[51]=-w[169]+2.E+0*w[51];
   w[51]=w[51]*w[3];
   w[53]=w[151]+w[89];
   w[53]=w[53]*w[5];
   w[53]=w[53]+w[158]+w[97];
   w[112]=5.E-1*w[20];
   w[116]=w[112]-w[54];
   w[116]=w[116]*w[159];
   w[117]=w[172]-w[117];
   w[123]=5.E-1*w[9];
   w[117]=w[117]*w[123];
   w[116]=w[116]-w[117];
   w[116]=w[116]*w[2];
   w[51]=-w[116]-w[51]+2.666666666E+0*w[53];
   w[51]=w[51]*w[3];
   w[53]=-w[28]+5.E+0*w[27];
   w[116]=-w[53]+2.E+0*w[147];
   w[116]=w[116]*w[9];
   w[116]=w[116]-w[74];
   w[116]=w[116]*w[5];
   w[116]=w[116]+2.E+0*w[149];
   w[116]=w[116]*w[40];
   w[51]=w[51]-w[116];
   w[51]=w[51]*w[13];
   w[58]=w[58]*w[2];
   w[116]=w[61]*w[101];
   w[58]=-w[116]-w[58]+8.E+0*w[65];
   w[117]=3.333333333E-1*w[3];
   w[58]=w[58]*w[117];
   w[51]=w[51]+w[58];
   w[39]=w[139]+w[39];
   w[58]=2.E+0*w[39]-w[154];
   w[58]=w[2]*w[58];
   w[58]=w[58]+w[51];
   w[58]=w[13]*w[58];
   w[18]=w[53]-w[18];
   w[18]=w[18]*w[9];
   w[18]=w[18]+w[166];
   w[18]=w[185]+2.E+0*w[18];
   w[18]=w[18]*w[3];
   w[53]=8.E+0*w[66];
   w[18]=w[18]-w[53];
   w[18]=w[18]*w[13];
   w[66]=w[87]*w[54];
   w[66]=w[66]+w[178];
   w[125]=w[61]*w[32];
   w[18]=w[66]-w[18]+w[125];
   w[125]=-8.E+0*w[156]+w[18];
   w[125]=w[13]*w[125];
   w[126]=8.E+0*w[27];
   w[125]=w[126]+w[125];
   w[125]=w[125]*w[180];
   w[127]=-w[172]+6.666666666E-1*w[147];
   w[127]=w[127]*w[5];
   w[134]=w[134]-w[137];
   w[134]=w[134]*w[68];
   w[127]=w[127]-w[134];
   w[127]=w[168]+2.E+0*w[127];
   w[127]=w[127]*w[3];
   w[72]=2.666666666E+0*w[72];
   w[127]=w[127]-w[72];
   w[127]=w[127]*w[13];
   w[134]=1.333333333E+0*w[10];
   w[137]=w[134]*w[175];
   w[127]=w[127]-w[137];
   w[32]=w[32]*w[5];
   w[32]=w[32]+w[157];
   w[137]=-8.E+0*w[32]+w[92];
   w[137]=3.333333333E-1*w[137]+w[127];
   w[137]=w[13]*w[137];
   w[16]=-w[172]+6.666666666E-1*w[16];
   w[139]=w[87]*w[13];
   w[142]=-w[16]*w[139];
   w[137]=w[142]-w[55]+w[137];
   w[137]=w[10]*w[137];
   w[58]=w[137]+w[125]+w[99]+w[58];
   w[58]=PM21Lp*w[58];
   w[17]=w[58]+w[17];
   w[17]=PM22m*w[17];
   w[58]=-w[28]+w[135]-w[136];
   w[58]=w[58]*w[123];
   w[54]=w[112]+w[54];
   w[54]=w[54]*w[159];
   w[54]=w[58]-w[54];
   w[54]=w[54]*w[2];
   w[29]=w[76]-w[29];
   w[29]=w[29]*w[146];
   w[58]=w[29]+w[138];
   w[58]=-w[154]+2.E+0*w[58];
   w[58]=w[58]*w[3];
   w[89]=w[89]*w[5];
   w[89]=-w[89]+w[150]-w[97];
   w[54]=-w[54]+w[58]+2.666666666E+0*w[89];
   w[54]=w[54]*w[3];
   w[58]=2.E+0*w[183];
   w[89]=-w[27]+5.E+0*w[28];
   w[97]=w[89]-w[58];
   w[97]=w[97]*w[9];
   w[97]=w[97]+w[74];
   w[97]=w[97]*w[5];
   w[97]=w[97]+2.E+0*w[98];
   w[40]=w[97]*w[40];
   w[40]=w[54]-w[40];
   w[40]=w[40]*w[13];
   w[52]=-w[52]+4.E+0*w[65];
   w[52]=w[52]*w[160];
   w[40]=w[40]+w[52];
   w[29]=w[29]-w[152];
   w[52]=2.E+0*w[29]-w[154];
   w[52]=w[2]*w[52];
   w[52]=w[52]-w[40];
   w[52]=w[13]*w[52];
   w[54]=w[89]-w[76];
   w[54]=w[54]*w[9];
   w[54]=w[54]+w[166];
   w[54]=-w[185]+2.E+0*w[54];
   w[54]=w[54]*w[3];
   w[53]=w[54]-w[53];
   w[53]=w[53]*w[13];
   w[54]=w[61]*w[103];
   w[53]=w[66]-w[53]+w[54];
   w[54]=-8.E+0*w[124]+w[53];
   w[54]=w[13]*w[54];
   w[54]=-w[126]+w[54];
   w[54]=w[54]*w[180];
   w[65]=w[161]*w[103];
   w[65]=w[65]+w[92];
   w[66]=w[103]*w[5];
   w[66]=w[66]+w[153];
   w[89]=8.E+0*w[66]+w[65];
   w[58]=w[58]-w[27];
   w[58]=-w[28]+3.333333333E-1*w[58];
   w[58]=w[58]*w[5];
   w[97]=w[28]+w[109]-w[136];
   w[97]=w[97]*w[68];
   w[58]=w[58]-w[97];
   w[58]=-w[168]+2.E+0*w[58];
   w[58]=w[58]*w[3];
   w[58]=w[58]-w[72];
   w[58]=w[58]*w[13];
   w[72]=w[134]*w[15];
   w[58]=w[58]-w[72];
   w[72]=3.333333333E-1*w[89]+w[58];
   w[72]=w[13]*w[72];
   w[76]=w[76]-w[27];
   w[28]=-w[28]+3.333333333E-1*w[76];
   w[76]=-w[28]*w[139];
   w[55]=w[76]+w[55]+w[72];
   w[55]=w[10]*w[55];
   w[52]=w[55]+w[54]-w[99]+w[52];
   w[52]=w[52]*w[145];
   w[17]=w[52]+w[17];
   w[52]=w[2]*w[130];
   w[54]=-w[81]-w[122];
   w[54]=w[2]*w[54];
   w[37]=w[54]-w[37];
   w[37]=w[3]*w[37];
   w[54]=-w[4]*w[95];
   w[55]=w[8]*w[92];
   w[55]=w[55]-w[75];
   w[55]=w[10]*w[55];
   w[37]=w[55]+w[54]+w[52]+w[37];
   w[37]=w[12]*w[37];
   w[52]=4.E+0*w[4];
   w[54]=w[94]*w[52];
   w[25]=4.E+0*w[85]+w[54]-w[25];
   w[25]=w[10]*w[25];
   w[52]=w[170]*w[52];
   w[46]=w[52]+w[46];
   w[46]=w[4]*w[46];
   w[25]=w[25]+w[46]-w[44];
   w[25]=w[1]*w[25];
   w[25]=w[25]+w[37];
   w[25]=w[25]*w[115];
   w[29]=w[174]-w[29];
   w[29]=2.E+0*w[29]+w[154];
   w[29]=w[2]*w[29];
   w[37]=w[155]+w[124];
   w[37]=8.E+0*w[37]-w[53];
   w[37]=w[37]*w[180];
   w[44]=-w[162]-w[66];
   w[44]=8.E+0*w[44]-w[65];
   w[28]=w[28]*w[87];
   w[28]=w[28]+3.333333333E-1*w[44]-w[58];
   w[28]=w[10]*w[28];
   w[28]=w[28]+w[37]+w[29]+w[40];
   w[28]=w[28]*w[145];
   w[29]=-w[155]+w[156];
   w[18]=8.E+0*w[29]-w[18];
   w[18]=w[18]*w[180];
   w[29]=w[162]+w[32];
   w[29]=8.E+0*w[29]-w[92];
   w[16]=w[16]*w[87];
   w[16]=w[16]+3.333333333E-1*w[29]-w[127];
   w[16]=w[10]*w[16];
   w[29]=-w[174]-w[39];
   w[29]=2.E+0*w[29]+w[154];
   w[29]=w[2]*w[29];
   w[16]=w[16]+w[18]+w[29]-w[51];
   w[16]=PM21Lp*w[16];
   w[18]=w[119]*w[117];
   w[18]=w[18]-w[67]+w[108];
   w[18]=w[3]*w[18];
   w[29]=-w[184]*w[114];
   w[18]=w[18]+8.E+0*w[26]+w[29];
   w[18]=w[13]*w[18];
   w[26]=w[50]*w[121];
   w[18]=w[18]-w[116]-8.E+0*w[179]+w[26];
   w[18]=w[3]*w[18];
   w[26]=w[13]*w[83]*w[61];
   w[26]=w[167]+w[26];
   w[26]=w[26]*w[182];
   w[29]=4.E+0*w[83]+w[64];
   w[29]=w[13]*w[3]*w[29];
   w[32]=w[36]*w[161];
   w[29]=w[32]+w[29];
   w[29]=w[10]*w[29];
   w[18]=3.333333333E-1*w[29]+w[26]+w[18];
   w[18]=PM21p*w[18];
   w[16]=w[16]+w[18];
   w[16]=PM22m*w[16];
   w[16]=w[28]+w[16];
   w[18]=w[31]*w[19];
   w[19]=-w[111]*w[79];
   w[18]=w[18]+w[19];
   w[18]=w[18]*w[62];
   w[19]=-w[7]*w[82];
   w[19]=w[19]+w[49];
   w[19]=5.E-1*w[19]-4.E+0*w[102];
   w[19]=w[8]*w[19];
   w[19]=-5.E-1*w[113]+w[19];
   w[19]=w[2]*w[19];
   w[19]=w[19]-w[106];
   w[19]=w[3]*w[19];
   w[23]=w[24]*w[23];
   w[24]=-w[8]*w[5]*w[90];
   w[23]=w[23]+w[24];
   w[23]=w[2]*w[23];
   w[19]=w[23]+w[19];
   w[19]=w[3]*w[19];
   w[18]=w[18]+w[19];
   w[18]=w[14]*w[18];
   w[19]=-w[33]-w[35];
   w[19]=w[5]*w[19];
   w[19]=w[19]-w[38]-w[73];
   w[19]=w[5]*w[19];
   w[19]=-w[100]+w[19];
   w[23]=w[57]*w[129];
   w[22]=w[78]+w[86]+w[23]+w[22];
   w[22]=w[5]*w[22];
   w[22]=w[22]+w[104];
   w[23]=w[105]-w[91];
   w[23]=w[3]*w[23];
   w[24]=-w[5]*w[107];
   w[22]=w[23]+4.E+0*w[22]+w[24];
   w[22]=w[3]*w[22];
   w[20]=w[20]*w[68];
   w[20]=w[20]+w[80];
   w[20]=w[2]*w[5]*w[20];
   w[19]=w[22]+1.6E+1*w[19]+w[20];
   w[19]=w[19]*w[164];
   w[20]=-3.333333333E-1*w[30]-w[21];
   w[20]=w[6]*w[20];
   w[21]=w[7]*w[27];
   w[21]=w[45]+1.333333333E+0*w[21]+w[42]-w[63];
   w[21]=w[5]*w[21];
   w[22]=-w[96]*w[146];
   w[20]=w[21]+w[22]+w[20];
   w[21]=-w[5]*w[50];
   w[21]=5.E-1*w[110]+w[21];
   w[21]=w[21]*w[121];
   w[22]=2.E+0*w[102]-w[77];
   w[22]=w[22]*w[160];
   w[19]=w[19]+w[22]+8.E+0*w[20]+w[21];
   w[19]=w[13]*w[19];
   w[20]=w[2]*w[71];
   w[21]=-w[3]*w[133];
   w[22]=w[132]*w[79];
   w[21]=4.E+0*w[22]+w[21];
   w[21]=w[3]*w[21];
   w[20]=w[20]+w[21];
   w[20]=w[14]*w[20];
   w[21]=-w[9]*w[74];
   w[21]=w[128]+w[21];
   w[22]=-w[3]*w[131];
   w[21]=4.E+0*w[21]+w[22];
   w[21]=w[13]*w[21];
   w[21]=w[21]+2.E+0*w[120]-w[69];
   w[21]=w[21]*w[164];
   w[22]=6.666666666E-1*w[101];
   w[20]=w[21]+w[22]+w[20];
   w[20]=w[4]*w[20];
   w[21]=2.666666666E+0*w[47];
   w[18]=w[20]+w[19]-w[21]+w[18];
   w[18]=w[4]*w[18];
   w[19]=w[3]*w[34];
   w[20]=w[3]*w[41];
   w[23]=w[61]*w[93];
   w[20]=w[20]+w[23];
   w[20]=w[4]*w[20];
   w[19]=w[19]+w[20];
   w[19]=w[4]*w[19];
   w[20]=-w[3]*w[59];
   w[19]=w[19]+w[20];
   w[19]=w[12]*w[19];
   w[20]=-w[13]*w[84];
   w[18]=w[19]+w[18]+w[20];
   w[18]=PM21p*w[18];
   w[19]=-2.666666666E+0*w[60]+w[56];
   w[19]=w[13]*w[19];
   w[20]=2.E+0*w[173]+w[43];
   w[20]=w[13]*w[20];
   w[20]=w[22]+w[20];
   w[20]=w[4]*w[20];
   w[19]=w[20]-w[21]+w[19];
   w[19]=w[4]*w[19];
   w[20]=w[13]*w[176];
   w[23]=w[4]*w[13];
   w[24]=w[175]*w[23];
   w[20]=w[20]+w[24];
   w[20]=w[20]*w[181];
   w[19]=w[19]+w[20];
   w[19]=PM21Lp*w[19];
   w[18]=w[19]+w[18];
   w[18]=PM22m*w[18];
   w[19]=2.666666666E+0*w[140]+w[70];
   w[19]=w[13]*w[19];
   w[20]=2.E+0*w[144]+w[118];
   w[20]=w[13]*w[20];
   w[20]=-w[22]+w[20];
   w[20]=w[4]*w[20];
   w[19]=w[20]+w[21]+w[19];
   w[19]=w[4]*w[19];
   w[20]=-w[13]*w[141];
   w[15]=-w[15]*w[23];
   w[15]=w[20]+w[15];
   w[15]=w[15]*w[181];
   w[15]=w[19]+w[15];
   w[15]=w[15]*w[145];
   w[15]=w[15]+w[18];


K12[SI_K12(ip,izp,0,iq,izq,0)] += wj * FCtr * w[15];
K12[SI_K12(ip,izp,0,iq,izq,1)] += wj * FCtr * w[17];
K12[SI_K12(ip,izp,1,iq,izq,0)] += wj * FCtr * w[88];
K12[SI_K12(ip,izp,1,iq,izq,1)] += wj * FCtr * w[25];
K12[SI_K12(ip,izp,2,iq,izq,0)] += wj * FCtr * w[48];
K12[SI_K12(ip,izp,2,iq,izq,1)] += wj * FCtr * w[16];
w.clear();
