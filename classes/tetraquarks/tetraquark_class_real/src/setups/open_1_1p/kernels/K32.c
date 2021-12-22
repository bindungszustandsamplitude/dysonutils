sv1 = sv1_q1;
ss1 = ss1_q1;
sv2 = sv2_q1;
ss2 = ss2_q1;
sv3 = sv3_q2;
ss3 = ss3_q2;
sv4 = sv4_q2;
ss4 = ss4_q2;

w.resize(10000,0.);

if(isud){FCtr  = 4.*2.;}
if(!isud){FCtr  = 4.*2.;}

if(quark_1.getMass() == 0.0037){
ampl = (
ns_data_v2::amplitudes::diquark::axialvector::fit::m_0037_0037(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_0037(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_0037(0,std::real(l_l+q_l+0.25*q_q)));
}
else
if(quark_1.getMass() == 0.0200){
ampl = (
ns_data_v2::amplitudes::diquark::axialvector::fit::m_0200_0200(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_0200(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_0200(0,std::real(l_l+q_l+0.25*q_q)));
}
else
if(quark_1.getMass() == 0.0500){
ampl = (
ns_data_v2::amplitudes::diquark::axialvector::fit::m_0500_0500(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_0500(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_0500(0,std::real(l_l+q_l+0.25*q_q)));
}
else
if(quark_1.getMass() == 0.0855){
ampl = (
ns_data_v2::amplitudes::diquark::axialvector::fit::m_0855_0855(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_0855(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_0855(0,std::real(l_l+q_l+0.25*q_q)));
}
else
if(quark_1.getMass() == 0.1500){
ampl = (
ns_data_v2::amplitudes::diquark::axialvector::fit::m_1500_1500(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_1500(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_1500(0,std::real(l_l+q_l+0.25*q_q)));
}
else
if(quark_1.getMass() == 0.2100){
ampl = (
ns_data_v2::amplitudes::diquark::axialvector::fit::m_2100_2100(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_2100(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_2100(0,std::real(l_l+q_l+0.25*q_q)));
}
else
if(quark_1.getMass() == 0.3500){
ampl = (
ns_data_v2::amplitudes::diquark::axialvector::fit::m_3500_3500(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_3500(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_3500(0,std::real(l_l+q_l+0.25*q_q)));
}
else
if(quark_1.getMass() == 0.5000){
ampl = (
ns_data_v2::amplitudes::diquark::axialvector::fit::m_5000_5000(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_5000(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_5000(0,std::real(l_l+q_l+0.25*q_q)));
}
else
if(quark_1.getMass() == 0.6500){
ampl = (
ns_data_v2::amplitudes::diquark::axialvector::fit::m_6500_6500(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_6500(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_6500(0,std::real(l_l+q_l+0.25*q_q)));
}
else
if(quark_1.getMass() == 0.7950){
ampl = (
ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_7950(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+q_l+0.25*q_q)));
}


    w[1]=1./(-6.E+0*Q_Q*p_p+6.E+0*pow(Q_p,2));
    w[2]=Q_Q;
    w[3]=Q_p;
    w[4]=Q_q;
    w[5]=Q_l;
    w[6]=p_q;
    w[7]=pow(p_p,-1);
    w[8]=p_l;
    w[9]=p_p;
    w[10]=q_q;
    w[11]=q_l;
    w[12]=l_l;
    w[13]=1./(-6.E+0*Q_Q*Q_p*p_p+6.E+0*pow(Q_p,3));
   w[14]=sv3*ampl;
   w[15]=sv4*w[14]*ss2;
   w[16]=2.E+0*ss1;
   w[17]=w[15]*w[16];
   w[18]=w[14]*sv1;
   w[19]=w[18]*sv4*sv2;
   w[20]=w[19]*w[12];
   w[21]=w[17]+w[20];
   w[22]=2.E+0*w[21];
   w[16]=w[16]*sv2;
   w[23]=w[16]*w[14];
   w[18]=w[18]*ss2;
   w[24]=w[23]-w[18];
   w[24]=w[24]*ss4;
   w[25]=w[22]+w[24];
   w[26]=sv4*ampl;
   w[16]=w[16]*w[26];
   w[27]=w[26]*ss2*sv1;
   w[28]=w[27]-w[16];
   w[29]=w[28]*ss3;
   w[30]=w[25]+3.E+0*w[29];
   w[30]=w[30]*w[11];
   w[31]=2.E+0*ampl;
   w[31]=ss1*w[31]*ss2;
   w[32]=sv1*sv2*ampl;
   w[33]=w[32]*w[12];
   w[31]=w[31]+w[33];
   w[31]=w[31]*ss4;
   w[33]=w[28]*w[12];
   w[31]=w[31]+w[33];
   w[31]=w[31]*ss3;
   w[33]=2.E+0*w[31];
   w[34]=w[22]*w[10];
   w[35]=w[33]+w[30]+w[34];
   w[36]=sv2*ss1;
   w[14]=w[14]*w[36];
   w[37]=4.E+0*w[14];
   w[38]=w[37]-w[18];
   w[38]=w[38]*ss4;
   w[15]=w[15]*ss1;
   w[39]=w[15]+w[20];
   w[40]=2.E+0*w[39];
   w[38]=w[38]+w[40];
   w[32]=w[32]*ss4;
   w[41]=w[32]-w[16];
   w[41]=w[41]*ss3;
   w[42]=w[38]+w[41];
   w[43]=w[19]*w[11];
   w[44]=3.E+0*w[43];
   w[45]=w[19]*w[10];
   w[46]=w[44]+w[45];
   w[47]=w[46]+2.E+0*w[42];
   w[48]=2.E+0*w[8];
   w[49]=-w[47]*w[48];
   w[49]=w[49]-w[35];
   w[26]=w[26]*w[36];
   w[36]=4.E+0*w[26];
   w[50]=w[32]-w[27];
   w[51]=w[36]+w[50];
   w[51]=ss3*w[51];
   w[52]=2.E+0*w[43];
   w[53]=w[52]+w[45];
   w[54]=w[18]*ss4;
   w[55]=w[54]+w[20];
   w[51]=w[51]+w[53]+w[55];
   w[56]=w[19]*w[5];
   w[51]=2.E+0*w[51]+w[56];
   w[51]=w[5]*w[51];
   w[37]=w[37]*ss4;
   w[57]=3.E+0*w[20];
   w[58]=w[57]+w[43];
   w[59]=w[26]*ss3;
   w[60]=4.E+0*w[59];
   w[37]=-w[60]+4.E+0*w[15]+w[37]+w[58];
   w[61]=3.E+0*w[56];
   w[62]=w[61]+4.E+0*w[37];
   w[63]=2.E+0*w[6];
   w[64]=-w[62]*w[63];
   w[49]=w[64]+4.E+0*w[49]+w[51];
   w[49]=w[6]*w[49];
   w[24]=w[24]+w[21];
   w[51]=2.E+0*w[24];
   w[64]=w[51]*w[11];
   w[65]=w[25]-w[29];
   w[66]=w[65]*w[10];
   w[67]=w[45]+w[43];
   w[68]=w[67]*w[5];
   w[64]=-w[68]+w[64]+w[66];
   w[66]=-w[8]*w[64];
   w[69]=4.E+0*w[66];
   w[70]=w[50]*ss3;
   w[71]=w[70]-w[55];
   w[72]=w[71]-w[53];
   w[72]=w[72]*w[48];
   w[73]=w[19]*w[8];
   w[74]=w[73]*w[4];
   w[75]=w[56]*w[8];
   w[76]=w[74]+w[75];
   w[72]=w[72]-w[76];
   w[18]=w[23]+w[18];
   w[18]=w[18]*ss4;
   w[77]=w[18]+w[52];
   w[78]=2.E+0*w[20];
   w[79]=w[78]+w[77];
   w[27]=w[27]+w[16];
   w[80]=w[27]*ss3;
   w[81]=3.E+0*w[73];
   w[82]=w[81]+w[80]+w[79];
   w[82]=2.E+0*w[82]+w[56];
   w[82]=w[6]*w[82];
   w[82]=w[82]-w[72];
   w[82]=w[4]*w[82];
   w[49]=w[82]+w[69]+w[49];
   w[82]=2.E+0*w[4];
   w[49]=w[49]*w[82];
   w[83]=w[18]+2.5E-1*w[56];
   w[84]=w[57]+w[17];
   w[85]=w[83]+w[84];
   w[86]=8.E+0*w[73];
   w[87]=w[19]*w[6];
   w[88]=4.E+0*w[87];
   w[89]=w[86]+w[88];
   w[90]=w[27]+w[32];
   w[90]=w[90]*ss3;
   w[91]=w[90]+w[67]+w[89]-w[85];
   w[91]=w[6]*w[91];
   w[92]=w[46]*w[8];
   w[92]=w[92]+2.5E-1*w[74];
   w[91]=w[91]+w[92];
   w[91]=w[4]*w[91];
   w[93]=w[2]*w[4];
   w[94]=w[93]*w[87];
   w[95]=6.25E-2*w[94];
   w[91]=w[91]+w[95];
   w[91]=w[2]*w[91];
   w[96]=4.E+0*w[20];
   w[97]=w[96]+w[80];
   w[98]=w[97]+w[77];
   w[98]=w[98]*w[10];
   w[99]=w[71]*w[11];
   w[98]=w[98]-2.E+0*w[99];
   w[99]=w[56]*w[11];
   w[99]=w[99]+w[98];
   w[100]=w[87]+w[43];
   w[100]=w[100]*w[4];
   w[100]=w[100]+w[99];
   w[101]=w[32]+w[16];
   w[101]=w[101]*ss3;
   w[102]=w[101]-w[54];
   w[103]=w[102]-w[21];
   w[103]=w[67]+2.E+0*w[103];
   w[104]=w[103]-w[56];
   w[105]=w[104]*w[63];
   w[105]=w[105]-w[100];
   w[105]=w[105]*w[82];
   w[106]=2.5E-1*w[93];
   w[107]=w[106]*w[43];
   w[105]=w[105]-w[107];
   w[105]=w[3]*w[105];
   w[49]=w[105]+w[49]+w[91];
   w[49]=w[3]*w[49];
   w[91]=4.E+0*w[8];
   w[105]=w[91]*w[67];
   w[98]=w[105]+w[98];
   w[98]=-w[68]+2.E+0*w[98];
   w[105]=w[43]-w[73];
   w[108]=w[17]-w[102]-w[105];
   w[109]=w[87]-w[56];
   w[108]=2.E+0*w[108]+w[109];
   w[108]=w[108]*w[63];
   w[110]=6.E+0*w[73];
   w[85]=w[110]+w[90]+w[46]+w[85];
   w[111]=-w[88]-w[85];
   w[111]=w[4]*w[111];
   w[108]=w[111]+w[108]+w[98];
   w[108]=w[4]*w[108];
   w[111]=w[19]*w[4];
   w[112]=w[43]+2.5E-1*w[111];
   w[112]=w[112]*w[106];
   w[108]=w[108]+w[112];
   w[108]=w[2]*w[108];
   w[113]=w[42]+w[53];
   w[114]=w[113]*w[48];
   w[114]=w[114]+w[35];
   w[115]=2.E+0*w[19];
   w[116]=w[115]*w[6];
   w[117]=w[116]-w[56];
   w[118]=-w[18]+w[117]+3.E+0*w[80];
   w[86]=w[118]+w[86];
   w[86]=w[86]*w[4];
   w[36]=w[36]-w[50];
   w[36]=w[36]*ss3;
   w[119]=w[36]-w[55];
   w[120]=2.E+0*w[73];
   w[121]=w[45]+w[119]+w[120];
   w[121]=-w[56]+2.E+0*w[121];
   w[121]=w[121]*w[5];
   w[114]=w[121]+w[86]-4.E+0*w[114];
   w[121]=w[73]+2.E+0*w[37];
   w[121]=w[56]+2.E+0*w[121];
   w[121]=w[121]*w[63];
   w[121]=w[121]-w[114];
   w[121]=w[121]*w[4];
   w[64]=w[64]*w[5];
   w[122]=w[42]+w[43];
   w[123]=w[122]*w[5];
   w[124]=w[56]*w[6];
   w[123]=-w[124]+2.E+0*w[123];
   w[123]=w[123]*w[6];
   w[123]=w[123]+w[64];
   w[121]=w[121]+4.E+0*w[123];
   w[121]=w[121]*w[82];
   w[123]=w[73]*w[10];
   w[125]=w[123]-w[68];
   w[125]=2.E+0*w[125];
   w[23]=w[23]*ss4;
   w[126]=w[23]+w[20];
   w[127]=w[44]+2.E+0*w[126];
   w[127]=2.E+0*w[127];
   w[128]=-w[127]-w[56];
   w[128]=w[6]*w[128];
   w[128]=w[125]+w[128];
   w[129]=w[45]-w[73];
   w[130]=w[129]-w[40];
   w[131]=w[102]-w[56];
   w[132]=w[130]+w[131];
   w[133]=w[87]-w[132];
   w[133]=2.E+0*w[133]+w[111];
   w[133]=w[4]*w[133];
   w[128]=2.E+0*w[128]+w[133];
   w[128]=w[128]*w[82];
   w[133]=w[53]*w[3];
   w[134]=w[133]*w[82];
   w[134]=w[134]-w[94];
   w[128]=w[128]-w[134];
   w[128]=w[3]*w[128];
   w[127]=w[127]-w[56];
   w[135]=3.E+0*w[111];
   w[136]=-w[135]+2.E+0*w[127];
   w[136]=w[136]*w[4];
   w[137]=w[56]*w[10];
   w[136]=w[136]-4.E+0*w[137];
   w[136]=w[136]*w[82];
   w[137]=-w[111]+2.E+0*w[53];
   w[137]=w[137]*w[93];
   w[136]=w[136]+w[137];
   w[137]=w[136]*w[9];
   w[108]=w[137]+w[128]+w[121]+w[108];
   w[108]=w[9]*w[108];
   w[128]=3.E+0*w[25]+w[120]+w[29];
   w[128]=w[128]*w[8];
   w[138]=w[22]+w[73];
   w[138]=-w[56]+2.E+0*w[138];
   w[138]=w[138]*w[6];
   w[139]=w[48]*w[56];
   w[128]=w[128]+w[138]-w[139];
   w[128]=w[128]*w[6];
   w[51]=w[51]-w[56];
   w[140]=pow(w[8],2);
   w[141]=-w[140]*w[51];
   w[140]=w[140]*w[19];
   w[142]=w[73]*w[6];
   w[143]=w[142]+w[140];
   w[143]=w[143]*w[4];
   w[141]=w[141]+w[143];
   w[128]=w[128]-w[141];
   w[128]=w[128]*w[4];
   w[144]=w[65]-w[120];
   w[145]=w[144]-w[56];
   w[145]=w[145]*w[5];
   w[146]=w[63]*w[56];
   w[145]=w[145]-w[146];
   w[145]=w[145]*w[6];
   w[147]=w[24]*w[48];
   w[147]=w[147]-w[75];
   w[147]=w[147]*w[5];
   w[145]=w[145]+w[147];
   w[145]=w[145]*w[6];
   w[128]=w[128]+w[145];
   w[148]=8.E+0*w[4];
   w[128]=w[128]*w[148];
   w[149]=4.E+0*w[43];
   w[97]=w[18]+w[97]+w[149];
   w[150]=w[97]+w[110];
   w[151]=w[88]-w[56];
   w[150]=w[151]+2.E+0*w[150];
   w[150]=w[150]*w[6];
   w[152]=w[120]-w[45];
   w[153]=w[152]-w[71];
   w[153]=w[153]*w[91];
   w[150]=w[150]+w[153]-w[75];
   w[150]=w[150]*w[6];
   w[153]=3.E+0*w[140];
   w[154]=5.E+0*w[73];
   w[155]=-w[154]-w[116];
   w[155]=w[6]*w[155];
   w[155]=-w[153]+w[155];
   w[155]=w[4]*w[155];
   w[155]=w[150]+w[155];
   w[155]=w[4]*w[155];
   w[106]=w[106]*w[142];
   w[155]=w[155]+w[106];
   w[155]=w[2]*w[155];
   w[49]=w[108]+w[49]+w[128]+w[155];
   w[49]=PM22m*w[49];
   w[108]=w[25]+w[29];
   w[155]=w[108]*w[11];
   w[24]=w[12]*w[24];
   w[156]=w[21]*w[10];
   w[157]=w[156]+w[24];
   w[158]=w[31]+w[155]+w[157];
   w[38]=w[38]-w[41];
   w[41]=w[38]-w[45];
   w[159]=w[41]*w[8];
   w[160]=w[159]-w[158];
   w[16]=w[16]*ss3;
   w[161]=w[23]+w[16]+w[84];
   w[162]=w[161]+w[52];
   w[163]=-w[56]+2.E+0*w[162];
   w[164]=w[163]*w[63];
   w[165]=w[16]-w[54];
   w[166]=w[165]-w[120];
   w[166]=-w[56]+2.E+0*w[166];
   w[166]=w[166]*w[5];
   w[160]=w[166]+w[164]+4.E+0*w[160];
   w[164]=w[6]*w[160];
   w[96]=3.E+0*w[18]+w[96]+w[149];
   w[166]=4.E+0*w[73];
   w[167]=-w[80]+w[166]+w[116];
   w[168]=-2.E+0*w[56]-w[167]-w[96];
   w[168]=w[6]*w[168];
   w[169]=w[55]+w[43];
   w[170]=w[169]*w[48];
   w[170]=w[170]+w[75];
   w[170]=2.E+0*w[170];
   w[168]=-w[74]-w[170]+w[168];
   w[168]=w[4]*w[168];
   w[164]=w[164]+w[168];
   w[168]=4.E+0*w[4];
   w[164]=w[164]*w[168];
   w[171]=w[57]+w[15];
   w[171]=w[18]+2.E+0*w[171];
   w[152]=w[152]+w[87];
   w[172]=w[152]-w[90];
   w[173]=6.E+0*w[43];
   w[174]=w[172]-w[173];
   w[175]=-w[174]+w[171];
   w[176]=w[6]*w[175];
   w[176]=w[176]-w[74];
   w[176]=w[4]*w[176];
   w[176]=w[176]-w[95];
   w[176]=w[2]*w[176];
   w[177]=w[84]+w[77];
   w[178]=w[56]+2.E+0*w[177];
   w[179]=w[178]*w[4];
   w[180]=w[78]+w[15];
   w[180]=2.E+0*w[180];
   w[101]=w[180]+w[101]+w[54];
   w[149]=w[149]+w[45];
   w[181]=w[101]+w[149];
   w[182]=4.E+0*w[181];
   w[183]=w[6]*w[182];
   w[183]=w[183]+w[179];
   w[183]=w[4]*w[183];
   w[19]=w[19]*w[2];
   w[184]=1.25E-1*w[19];
   w[185]=pow(w[4],2);
   w[186]=-w[185]*w[184];
   w[183]=w[183]+w[186];
   w[183]=w[3]*w[183];
   w[164]=w[183]+w[164]+w[176];
   w[164]=w[3]*w[164];
   w[176]=w[18]+w[56];
   w[167]=w[167]+w[176];
   w[183]=w[167]*w[4];
   w[160]=w[160]-w[183];
   w[160]=4.E+0*w[160];
   w[183]=w[160]*w[185];
   w[186]=6.25E-2*w[19];
   w[175]=w[175]-w[186];
   w[175]=w[175]*w[2];
   w[187]=w[126]+w[43];
   w[188]=4.E+0*w[187];
   w[189]=w[188]-w[111];
   w[189]=4.E+0*w[189];
   w[190]=w[189]-w[19];
   w[191]=w[190]*w[9];
   w[192]=-w[191]-w[175];
   w[192]=w[185]*w[192];
   w[193]=-w[87]-w[181];
   w[193]=w[4]*w[193];
   w[194]=w[188]*w[6];
   w[193]=w[194]+w[193];
   w[193]=w[193]*w[168];
   w[193]=w[193]-w[94];
   w[193]=w[3]*w[193];
   w[192]=w[193]-w[183]+w[192];
   w[192]=w[9]*w[192];
   w[193]=w[25]*w[48];
   w[22]=w[22]*w[6];
   w[193]=-w[75]+w[193]+w[22];
   w[193]=w[193]*w[6];
   w[193]=w[141]-w[193];
   w[195]=w[166]+w[87];
   w[195]=w[195]*w[6];
   w[195]=w[195]+w[153];
   w[196]=w[195]*w[2];
   w[196]=-w[196]-8.E+0*w[193];
   w[197]=-w[185]*w[196];
   w[164]=w[192]+2.E+0*w[197]+w[164];
   w[164]=PM22Lm*w[164];
   w[179]=w[179]*w[6];
   w[179]=-w[179]+1.25E-1*w[94];
   w[179]=w[179]*w[3];
   w[192]=w[56]+2.E+0*w[79];
   w[192]=w[192]*w[6];
   w[170]=w[192]+w[170];
   w[197]=w[170]*w[6];
   w[198]=w[142]*w[4];
   w[197]=w[198]+w[197];
   w[197]=w[197]*w[168];
   w[142]=w[142]*w[93];
   w[179]=w[179]+w[197]+w[142];
   w[179]=w[179]*w[3];
   w[197]=-w[148]*w[193];
   w[195]=w[195]*w[93];
   w[195]=w[197]-w[195];
   w[195]=w[6]*w[195];
   w[195]=2.E+0*w[195];
   w[179]=w[179]+w[195];
   w[197]=PM22m*w[3];
   w[198]=PM22Lm*w[3];
   w[198]=-w[197]+w[198];
   w[179]=w[7]*w[179]*w[198];
   w[49]=w[179]+w[49]+w[164];
   w[49]=PM21p*w[49];
   w[164]=w[122]*w[48];
   w[35]=w[164]+w[35];
   w[14]=w[14]*ss4;
   w[39]=w[39]+w[14]-w[59];
   w[39]=w[43]+2.E+0*w[39];
   w[179]=-w[56]+4.E+0*w[39];
   w[198]=w[179]*w[63];
   w[166]=w[166]-w[53];
   w[119]=w[166]+w[119];
   w[119]=-w[56]+2.E+0*w[119];
   w[119]=w[119]*w[5];
   w[35]=w[119]-w[198]-4.E+0*w[35];
   w[35]=w[35]*w[6];
   w[119]=w[43]+w[20];
   w[199]=w[119]+w[80];
   w[200]=w[154]+2.E+0*w[199];
   w[151]=w[151]+2.E+0*w[200];
   w[151]=w[151]*w[6];
   w[151]=w[151]-w[72];
   w[151]=w[151]*w[4];
   w[35]=w[69]+w[151]+w[35];
   w[35]=w[35]*w[82];
   w[151]=w[110]+3.E+0*w[87];
   w[84]=w[151]+w[90]+w[84];
   w[83]=w[83]+w[84];
   w[200]=5.E+0*w[43]+w[83]+w[45];
   w[200]=w[200]*w[6];
   w[200]=w[200]+w[92];
   w[200]=w[200]*w[4];
   w[200]=w[200]-w[95];
   w[200]=w[200]*w[2];
   w[201]=w[40]+w[43];
   w[131]=w[131]-w[201];
   w[202]=w[131]*w[63];
   w[100]=w[100]-w[202];
   w[100]=w[100]*w[82];
   w[100]=w[100]+w[107];
   w[100]=w[100]*w[3];
   w[35]=w[35]+w[200]-w[100];
   w[35]=w[35]*w[3];
   w[100]=w[144]*w[8];
   w[144]=w[120]-w[56];
   w[144]=w[144]*w[6];
   w[100]=w[100]-w[144];
   w[100]=w[100]*w[6];
   w[100]=w[100]-w[141];
   w[100]=w[100]*w[4];
   w[100]=w[100]-w[145];
   w[100]=w[100]*w[148];
   w[141]=w[150]+3.E+0*w[143];
   w[141]=w[141]*w[4];
   w[106]=w[141]+w[106];
   w[106]=w[106]*w[2];
   w[35]=w[35]+w[100]-w[106];
   w[39]=2.E+0*w[39];
   w[100]=w[39]-w[73];
   w[100]=w[56]+2.E+0*w[100];
   w[100]=w[100]*w[63];
   w[100]=w[100]-w[114];
   w[100]=w[100]*w[4];
   w[68]=-w[124]+2.E+0*w[68];
   w[68]=w[68]*w[6];
   w[64]=w[68]-w[64];
   w[64]=w[100]-4.E+0*w[64];
   w[64]=w[64]*w[82];
   w[68]=w[83]+w[46];
   w[68]=w[68]*w[4];
   w[83]=w[67]-w[73];
   w[83]=-w[87]+2.E+0*w[83];
   w[83]=w[83]*w[63];
   w[68]=w[83]-w[68]+w[98];
   w[68]=w[68]*w[4];
   w[68]=w[68]+w[112];
   w[68]=w[68]*w[2];
   w[83]=w[132]-w[116];
   w[83]=-w[111]+2.E+0*w[83];
   w[83]=w[83]*w[4];
   w[100]=w[127]*w[6];
   w[100]=w[100]-w[125];
   w[83]=w[83]+2.E+0*w[100];
   w[83]=w[83]*w[82];
   w[83]=w[83]+w[134];
   w[83]=w[83]*w[3];
   w[64]=-w[137]-w[68]+w[83]-w[64];
   w[68]=-w[9]*w[64];
   w[68]=w[68]+w[35];
   w[83]=PM21Lp*PM22m;
   w[68]=w[68]*w[83];
   w[49]=w[49]+w[68];
   w[49]=w[1]*w[49];
   w[27]=w[27]-w[32];
   w[27]=w[27]*ss3;
   w[27]=w[27]-w[45]+w[20];
   w[27]=w[27]*w[5];
   w[68]=w[78]+w[52];
   w[78]=w[68]+w[80];
   w[78]=w[78]*w[4];
   w[27]=w[27]+w[78]-2.E+0*w[158];
   w[78]=5.E-1*w[56];
   w[100]=-w[90]+w[78]-w[186];
   w[106]=w[100]-w[53]+w[18]+w[17];
   w[106]=w[106]*w[2];
   w[27]=-w[106]+8.E+0*w[27];
   w[106]=w[2]*w[27];
   w[114]=w[162]+w[73];
   w[127]=w[61]+w[111];
   w[114]=-w[127]+2.E+0*w[114];
   w[114]=w[114]*w[4];
   w[41]=w[41]-w[56];
   w[41]=w[41]*w[5];
   w[41]=w[41]-w[124];
   w[41]=w[114]+2.E+0*w[41];
   w[114]=w[181]+w[120];
   w[114]=w[117]+2.E+0*w[114];
   w[114]=-w[111]+2.E+0*w[114];
   w[114]=w[114]*w[2];
   w[132]=2.E+0*w[187];
   w[134]=-w[56]+w[132]-w[111];
   w[134]=-w[19]+8.E+0*w[134];
   w[134]=w[134]*w[3];
   w[41]=w[134]+w[114]+8.E+0*w[41];
   w[114]=-w[3]*w[41];
   w[106]=w[106]+w[114];
   w[106]=w[3]*w[106];
   w[65]=w[65]*w[8];
   w[22]=w[65]-w[139]+w[22]-w[74];
   w[22]=w[22]*w[4];
   w[65]=w[5]*w[108]*w[6];
   w[22]=w[22]+w[65]+w[147];
   w[65]=w[80]-w[18];
   w[108]=w[56]+2.E+0*w[65];
   w[108]=w[108]*w[6];
   w[114]=w[70]+w[55];
   w[134]=w[114]+w[53];
   w[137]=w[134]*w[91];
   w[139]=w[87]+w[73];
   w[139]=w[139]*w[4];
   w[108]=w[108]+w[139]-w[137]+w[75];
   w[137]=w[73]*w[2];
   w[139]=5.E-1*w[137];
   w[108]=-w[139]+2.E+0*w[108];
   w[108]=w[108]*w[2];
   w[22]=w[108]-1.6E+1*w[22];
   w[108]=-w[2]*w[22];
   w[41]=w[41]*w[9]*w[2];
   w[41]=w[41]+w[108]+w[106];
   w[41]=PM22Lm*w[41];
   w[106]=w[25]+2.E+0*w[29];
   w[106]=w[106]*w[11];
   w[106]=w[106]+w[157]+w[33];
   w[108]=w[122]*w[8];
   w[122]=-w[108]-w[106];
   w[141]=w[179]*w[6];
   w[143]=w[120]-w[54];
   w[36]=w[36]-w[67]+w[143];
   w[36]=2.E+0*w[36]-w[56];
   w[36]=w[5]*w[36];
   w[68]=w[154]+w[118]+w[68];
   w[68]=w[4]*w[68];
   w[36]=w[68]-w[141]+4.E+0*w[122]+w[36];
   w[68]=-w[111]+2.E+0*w[131];
   w[118]=2.E+0*w[3];
   w[122]=w[68]*w[118];
   w[131]=2.E+0*w[90];
   w[145]=w[131]+w[151];
   w[57]=w[149]+w[57];
   w[78]=-w[78]+w[145]+w[57];
   w[78]=w[2]*w[78];
   w[36]=w[122]+4.E+0*w[36]+w[78];
   w[36]=w[3]*w[36];
   w[78]=w[29]+w[73];
   w[150]=w[78]*w[48];
   w[76]=w[76]+w[150]+w[144];
   w[76]=w[76]*w[4];
   w[78]=w[56]+2.E+0*w[78];
   w[78]=w[78]*w[5];
   w[78]=w[78]+w[146];
   w[78]=w[78]*w[6];
   w[76]=w[78]-w[76];
   w[76]=8.E+0*w[76];
   w[78]=-w[73]+w[134];
   w[78]=w[78]*w[48];
   w[78]=w[78]+w[75];
   w[134]=-w[81]-w[65];
   w[134]=2.E+0*w[134]-w[117];
   w[134]=w[6]*w[134];
   w[78]=w[74]+2.E+0*w[78]+w[134];
   w[78]=2.E+0*w[78]+w[139];
   w[78]=w[2]*w[78];
   w[36]=w[36]+w[76]+w[78];
   w[36]=w[3]*w[36];
   w[78]=w[196]*w[2];
   w[36]=w[78]+w[36];
   w[36]=w[36]*w[197];
   w[27]=-w[3]*w[27];
   w[22]=w[27]+w[22];
   w[27]=pow(w[3],2);
   w[22]=PM22Lm*w[22]*w[27];
   w[22]=w[36]+w[22];
   w[22]=w[7]*w[22];
   w[36]=w[6]*w[37];
   w[37]=w[47]*w[8];
   w[36]=w[36]+w[37]+w[106];
   w[47]=-w[89]-w[131]-w[57];
   w[47]=w[2]*w[47];
   w[57]=-w[120]-w[60]-w[119];
   w[57]=8.E+0*w[57]+w[61];
   w[57]=w[5]*w[57];
   w[60]=-w[81]-w[199];
   w[60]=2.E+0*w[60]-w[117];
   w[60]=4.E+0*w[60]+w[111];
   w[60]=w[4]*w[60];
   w[36]=w[47]+w[60]+w[57]+1.6E+1*w[36];
   w[36]=w[2]*w[36];
   w[47]=w[25]+w[73];
   w[57]=w[47]-w[56];
   w[57]=w[57]*w[5];
   w[57]=w[57]-w[124];
   w[21]=w[21]+w[73];
   w[60]=-w[56]+2.E+0*w[21];
   w[60]=w[60]*w[4];
   w[57]=w[60]+2.E+0*w[57];
   w[57]=w[57]*w[4];
   w[51]=w[51]-w[116];
   w[60]=pow(w[5],2);
   w[51]=w[60]*w[51];
   w[51]=w[57]+w[51];
   w[51]=8.E+0*w[51];
   w[21]=w[23]+w[21]-w[16];
   w[21]=-w[127]+4.E+0*w[21];
   w[21]=w[21]*w[4];
   w[23]=-w[56]+2.E+0*w[113];
   w[23]=w[23]*w[5];
   w[23]=w[23]-w[146];
   w[21]=w[21]+2.E+0*w[23];
   w[21]=4.E+0*w[21];
   w[23]=-w[120]+w[201]-w[102];
   w[23]=-w[116]+2.E+0*w[23]+w[61];
   w[23]=2.E+0*w[23]+w[135];
   w[23]=w[2]*w[23];
   w[57]=-w[188]+w[56];
   w[57]=2.E+0*w[57]+w[135];
   w[57]=2.E+0*w[57]+w[19];
   w[57]=w[57]*w[118];
   w[23]=w[57]-w[21]+w[23];
   w[23]=w[3]*w[23];
   w[23]=w[23]-w[51]+w[36];
   w[23]=w[3]*w[23];
   w[36]=w[2]*w[191];
   w[57]=w[118]*w[36];
   w[23]=w[23]+w[57];
   w[23]=PM22m*w[23];
   w[22]=w[22]+w[23]+w[41];
   w[22]=PM21p*w[22];
   w[23]=w[39]+w[56];
   w[39]=8.E+0*w[6];
   w[23]=w[23]*w[39];
   w[39]=w[77]+w[84]-w[186];
   w[39]=w[39]*w[2];
   w[29]=w[29]*w[11];
   w[29]=w[29]+w[31];
   w[41]=w[29]+w[108];
   w[57]=w[79]-w[80];
   w[77]=w[57]-w[120];
   w[77]=-w[111]+4.E+0*w[77];
   w[77]=w[77]*w[4];
   w[16]=w[169]-w[16];
   w[79]=w[56]+8.E+0*w[16];
   w[79]=w[79]*w[5];
   w[23]=w[77]+w[23]+w[79]-w[39]+1.6E+1*w[41];
   w[23]=w[23]*w[2];
   w[23]=w[36]+w[23]+w[51];
   w[51]=w[60]*w[115];
   w[60]=w[127]*w[4];
   w[51]=w[51]+w[60];
   w[60]=w[68]*w[2];
   w[51]=w[60]+2.E+0*w[51];
   w[60]=w[190]*w[3];
   w[51]=w[60]+2.E+0*w[51];
   w[51]=w[51]*w[3];
   w[51]=w[23]-w[51];
   w[68]=-w[51]*w[197];
   w[16]=w[16]-w[120];
   w[16]=w[56]+2.E+0*w[16];
   w[16]=w[16]*w[5];
   w[57]=-w[117]+w[57]-w[154];
   w[57]=w[57]*w[4];
   w[16]=w[16]+w[57]+w[141]+4.E+0*w[41];
   w[16]=-w[122]-w[39]+4.E+0*w[16];
   w[16]=w[16]*w[3];
   w[39]=w[47]*w[48];
   w[41]=3.E+0*w[75];
   w[39]=-w[39]-w[138]+w[41]+w[74];
   w[39]=w[39]*w[4];
   w[25]=w[25]-w[73];
   w[25]=-w[56]+2.E+0*w[25];
   w[25]=w[25]*w[5];
   w[25]=w[25]-w[146];
   w[25]=w[25]*w[6];
   w[25]=w[25]-w[39]+2.E+0*w[147];
   w[39]=w[109]+w[81];
   w[39]=w[39]*w[63];
   w[47]=w[120]+w[87];
   w[47]=w[47]*w[4];
   w[39]=-w[47]+w[39]-w[41]+4.E+0*w[140];
   w[39]=w[39]*w[2];
   w[25]=w[39]+4.E+0*w[25];
   w[16]=w[16]+2.E+0*w[25];
   w[16]=w[16]*w[3];
   w[16]=w[16]-w[78];
   w[25]=w[197]*w[7];
   w[39]=w[16]*w[25];
   w[39]=w[68]+w[39];
   w[39]=PM21Lp*w[39];
   w[22]=w[22]+w[39];
   w[22]=w[13]*w[22];
   w[39]=w[120]-w[103];
   w[41]=w[116]+w[56];
   w[39]=2.E+0*w[39]+w[41];
   w[39]=2.E+0*w[39]+w[111];
   w[39]=w[2]*w[39];
   w[47]=-w[132]-w[56];
   w[47]=8.E+0*w[47]+w[19];
   w[47]=w[3]*w[47];
   w[21]=w[47]+w[21]+w[39];
   w[21]=w[3]*w[21];
   w[21]=w[21]+w[23];
   w[21]=w[9]*w[21];
   w[23]=-w[37]-w[29];
   w[28]=w[32]-w[28];
   w[28]=ss3*w[28];
   w[28]=w[28]+w[67];
   w[28]=w[5]*w[28];
   w[23]=2.E+0*w[23]+w[28];
   w[28]=-w[6]*w[62];
   w[29]=-2.E+0*w[119]+w[81];
   w[29]=w[4]*w[29];
   w[23]=w[29]+2.E+0*w[23]+w[28];
   w[28]=-w[177]-w[100]+w[89];
   w[28]=w[2]*w[28];
   w[29]=2.E+0*w[104]-w[111];
   w[29]=w[29]*w[118];
   w[23]=w[29]+4.E+0*w[23]+w[28];
   w[23]=w[3]*w[23];
   w[28]=-w[71]-w[129];
   w[28]=w[28]*w[48];
   w[28]=w[28]+w[75];
   w[29]=w[81]+w[97];
   w[29]=2.E+0*w[29]+w[41];
   w[29]=w[6]*w[29];
   w[28]=w[74]+2.E+0*w[28]+w[29];
   w[28]=2.E+0*w[28]+w[139];
   w[28]=w[2]*w[28];
   w[23]=w[23]-w[76]+w[28];
   w[23]=w[3]*w[23];
   w[21]=w[21]+w[78]+w[23];
   w[21]=PM22m*w[21];
   w[18]=w[180]+w[18];
   w[18]=-1.875E-1*w[19]+w[56]+1.E+1*w[43]+3.E+0*w[18]-w[172];
   w[18]=w[2]*w[18];
   w[19]=w[3]*w[182];
   w[18]=w[19]+w[160]+w[18];
   w[18]=w[3]*w[18];
   w[19]=w[170]+w[74];
   w[19]=w[137]+4.E+0*w[19];
   w[23]=-w[2]*w[19];
   w[18]=w[23]+w[18];
   w[18]=w[3]*w[18];
   w[23]=-w[160]-w[175];
   w[23]=w[2]*w[23];
   w[28]=-w[2]*w[182];
   w[28]=w[28]+w[60];
   w[28]=w[3]*w[28];
   w[23]=-w[36]+w[23]+w[28];
   w[23]=w[9]*w[23];
   w[18]=w[23]-2.E+0*w[78]+w[18];
   w[18]=PM22Lm*w[18];
   w[23]=w[184]-w[178];
   w[23]=w[23]*w[3];
   w[19]=w[23]+w[19];
   w[19]=w[19]*w[3];
   w[19]=w[19]+2.E+0*w[196];
   w[23]=-PM22m+PM22Lm;
   w[19]=w[7]*w[27]*w[19]*w[23];
   w[18]=w[19]+w[21]+w[18];
   w[18]=PM21p*w[18];
   w[19]=w[9]*w[51];
   w[16]=w[19]-w[16];
   w[16]=w[16]*w[83];
   w[16]=w[18]+w[16];
   w[16]=w[1]*w[16];
   w[18]=3.E+0*w[42]+w[149];
   w[18]=w[8]*w[18];
   w[18]=w[18]+w[30]+3.E+0*w[31]+w[157];
   w[14]=w[14]+w[15];
   w[15]=6.E+0*w[59];
   w[14]=w[52]-w[15]+5.E+0*w[20]+6.E+0*w[14];
   w[14]=2.E+0*w[14]+w[56];
   w[14]=w[14]*w[63];
   w[15]=-w[15]-w[143];
   w[15]=2.E+0*w[15]+w[56];
   w[15]=w[5]*w[15];
   w[14]=-w[86]+w[14]+4.E+0*w[18]+w[15];
   w[14]=w[168]*w[6]*w[14];
   w[15]=-7.E+0*w[87]-1.4E+1*w[73]-w[45]-3.E+0*w[90]-w[173]-w[171];
   w[15]=w[4]*w[6]*w[15];
   w[15]=w[15]+w[95];
   w[15]=w[2]*w[15];
   w[14]=w[14]+w[15];
   w[14]=w[2]*w[14];
   w[15]=8.E+0*w[87]+w[85];
   w[15]=w[4]*w[15];
   w[18]=w[40]-w[102];
   w[18]=-w[45]+2.E+0*w[18]+w[105];
   w[19]=5.E+0*w[56];
   w[18]=-w[87]+2.E+0*w[18]+w[19];
   w[18]=w[18]*w[63];
   w[15]=w[15]+w[18]-w[98];
   w[15]=w[4]*w[15];
   w[15]=w[15]-w[112];
   w[15]=w[2]*w[15];
   w[18]=w[102]+w[117]+w[130];
   w[18]=2.E+0*w[18]-w[111];
   w[18]=w[4]*w[18];
   w[21]=-4.E+0*w[126]-w[44];
   w[21]=2.E+0*w[21]+w[56];
   w[21]=w[6]*w[21];
   w[21]=-w[125]+w[21];
   w[18]=w[133]+2.E+0*w[21]+w[18];
   w[18]=w[4]*w[18];
   w[18]=w[94]+w[18];
   w[18]=w[18]*w[118];
   w[15]=w[18]-w[121]+w[15];
   w[15]=w[3]*w[15];
   w[18]=-w[4]*w[87];
   w[18]=w[194]+w[18];
   w[18]=w[18]*w[168];
   w[18]=w[18]-w[94];
   w[18]=w[2]*w[18];
   w[21]=-w[3]*w[136];
   w[18]=3.E+0*w[18]+w[21];
   w[18]=w[9]*w[18];
   w[14]=w[18]+w[14]+w[15];
   w[14]=PM22m*w[14];
   w[15]=-w[33]-w[24];
   w[15]=-w[164]+2.E+0*w[15]-w[30];
   w[18]=8.E+0*w[26]-w[50];
   w[18]=ss3*w[18];
   w[18]=w[18]-w[20]-3.E+0*w[54]+w[166];
   w[18]=2.E+0*w[18]-w[61];
   w[18]=w[5]*w[18];
   w[15]=-w[198]+4.E+0*w[15]+w[18];
   w[15]=w[6]*w[15];
   w[18]=-w[119]+w[65];
   w[18]=2.E+0*w[18]+w[154];
   w[18]=w[88]+2.E+0*w[18]-w[61];
   w[18]=w[6]*w[18];
   w[18]=w[18]+w[72];
   w[18]=w[4]*w[18];
   w[15]=w[18]-w[69]+w[15];
   w[15]=w[15]*w[82];
   w[18]=w[43]-w[87];
   w[18]=w[4]*w[18];
   w[18]=w[18]+w[202]+w[99];
   w[18]=w[18]*w[82];
   w[18]=w[18]+w[107];
   w[18]=w[3]*w[18];
   w[20]=-7.5E-1*w[56]+w[58]+w[145];
   w[20]=w[6]*w[20];
   w[20]=w[20]-w[92];
   w[20]=w[20]*w[93];
   w[15]=w[18]+w[15]+w[20];
   w[15]=w[3]*w[15];
   w[18]=-w[120]+3.E+0*w[55]+w[70]+w[149];
   w[18]=w[18]*w[91];
   w[20]=-w[110]-w[80]+w[96];
   w[19]=-w[88]+2.E+0*w[20]+w[19];
   w[19]=w[6]*w[19];
   w[18]=w[19]+w[18]+9.E+0*w[75];
   w[18]=w[6]*w[18];
   w[19]=9.E+0*w[73]+w[116];
   w[19]=w[6]*w[19];
   w[19]=w[153]+w[19];
   w[19]=w[4]*w[19];
   w[18]=w[18]+w[19];
   w[18]=w[4]*w[18];
   w[18]=w[18]+7.5E-1*w[142];
   w[18]=w[2]*w[18];
   w[15]=w[15]-w[128]+w[18];
   w[15]=w[3]*w[15];
   w[18]=w[195]*w[2];
   w[15]=w[18]+w[15];
   w[15]=PM22m*w[15];
   w[19]=-w[156]+w[31]+w[24];
   w[20]=-2.E+0*w[165]+w[56];
   w[20]=w[5]*w[20];
   w[19]=4.E+0*w[19]+w[20];
   w[19]=w[6]*w[19];
   w[20]=w[192]-w[72];
   w[20]=w[4]*w[20];
   w[19]=w[20]+w[69]+w[19];
   w[19]=w[19]*w[168];
   w[17]=w[176]+w[17];
   w[20]=-w[90]+w[149]+w[17];
   w[20]=w[6]*w[20];
   w[21]=w[46]*w[48];
   w[23]=5.E-1*w[74];
   w[20]=w[23]+w[21]+w[20];
   w[20]=w[4]*w[20];
   w[20]=w[20]-w[95];
   w[20]=w[2]*w[20];
   w[24]=-w[4]*w[43];
   w[24]=w[24]-w[99];
   w[24]=w[24]*w[168];
   w[26]=5.E-1*w[93];
   w[27]=-w[43]*w[26];
   w[24]=w[24]+w[27];
   w[24]=w[3]*w[24];
   w[19]=w[24]+w[19]+w[20];
   w[19]=w[3]*w[19];
   w[20]=-w[193]*w[185];
   w[24]=-w[170]*w[63];
   w[27]=-w[110]-w[87];
   w[27]=w[6]*w[27];
   w[27]=-w[153]+w[27];
   w[27]=w[4]*w[27];
   w[24]=w[24]+w[27];
   w[24]=w[24]*w[82];
   w[24]=w[24]-w[142];
   w[24]=w[2]*w[24];
   w[19]=w[19]+1.6E+1*w[20]+w[24];
   w[19]=w[3]*w[19];
   w[18]=-w[18]+w[19];
   w[18]=PM22Lm*w[18];
   w[15]=w[15]+w[18];
   w[15]=w[7]*w[15];
   w[18]=-w[6]*w[181];
   w[18]=w[18]+w[99];
   w[17]=-w[174]-w[17];
   w[17]=w[4]*w[17];
   w[17]=4.E+0*w[18]+w[17];
   w[17]=w[4]*w[17];
   w[18]=w[43]+1.25E-1*w[111];
   w[18]=w[18]*w[26];
   w[17]=w[17]+w[18];
   w[17]=w[2]*w[17];
   w[18]=w[161]+w[43];
   w[18]=w[18]*w[10];
   w[19]=w[38]*w[11];
   w[18]=w[18]+w[19]+w[123];
   w[19]=w[53]*w[5];
   w[18]=-w[19]+2.E+0*w[18];
   w[19]=-w[126]*w[63];
   w[20]=-w[73]+w[53];
   w[20]=w[4]*w[20];
   w[19]=w[20]+w[19]-w[18];
   w[19]=w[19]*w[148];
   w[20]=w[87]+w[53];
   w[20]=w[20]*w[93];
   w[24]=w[168]*w[133];
   w[19]=w[24]+w[19]+w[20];
   w[19]=w[3]*w[19];
   w[17]=w[19]+w[183]+w[17];
   w[17]=w[3]*w[17];
   w[19]=w[75]-w[159]+w[155]+w[34];
   w[20]=-w[6]*w[163];
   w[19]=2.E+0*w[19]+w[20];
   w[19]=w[6]*w[19];
   w[19]=-2.E+0*w[66]+w[19];
   w[20]=-w[45]+w[114];
   w[20]=w[20]*w[48];
   w[24]=w[6]*w[167];
   w[20]=w[24]+w[20]+w[75];
   w[20]=w[4]*w[20];
   w[19]=2.E+0*w[19]+w[20];
   w[19]=w[19]*w[168];
   w[20]=w[73]-w[46];
   w[20]=2.E+0*w[20]+w[87];
   w[20]=w[6]*w[20];
   w[20]=w[23]-w[21]+w[20];
   w[20]=w[20]*w[93];
   w[19]=w[19]+w[20];
   w[19]=w[2]*w[19];
   w[20]=-w[6]*w[52];
   w[18]=w[20]+w[18];
   w[20]=w[101]+w[152];
   w[20]=w[4]*w[20];
   w[18]=2.E+0*w[18]+w[20];
   w[18]=w[18]*w[168];
   w[20]=-w[53]*w[93];
   w[18]=w[18]+w[20];
   w[18]=w[2]*w[18];
   w[20]=w[185]*w[189];
   w[21]=-4.E+0*w[53]-w[111];
   w[21]=w[21]*w[93];
   w[20]=w[20]+w[21];
   w[20]=w[3]*w[20];
   w[18]=w[18]+w[20];
   w[18]=w[9]*w[18];
   w[17]=w[18]+w[19]+w[17];
   w[17]=PM22Lm*w[17];
   w[14]=w[15]+w[14]+w[17];
   w[14]=PM21p*w[14];
   w[15]=w[64]*w[197];
   w[17]=-w[35]*w[25];
   w[15]=w[15]+w[17];
   w[15]=PM21Lp*w[15];
   w[14]=w[14]+w[15];
   w[14]=w[13]*w[14];


K32[SI_K32(ip,izp,0,iq,izq,0)] += wj * FCtr * w[14];
K32[SI_K32(ip,izp,0,iq,izq,1)] += wj * FCtr * w[22];
K32[SI_K32(ip,izp,1,iq,izq,0)] += wj * FCtr * w[49];
K32[SI_K32(ip,izp,1,iq,izq,1)] += wj * FCtr * w[16];