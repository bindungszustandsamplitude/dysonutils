sv1 = sv1_q1;
ss1 = ss1_q1;
sv2 = sv2_q2;
ss2 = ss2_q2;
sv3 = sv3_q1;
ss3 = ss3_q1;
sv4 = sv4_q2;
ss4 = ss4_q2;

w.resize(10000,0.);

if(isud_q2){
    if(isud_q1){
        FCtr = 2.*6.;}
    else if(!isud_q1){
        FCtr = 4.*6.;}}

if(!isud_q2){
    if(isud_q1){
        FCtr = 4.*6.;}
    else if(!isud_q1){
        FCtr = 4.*6.;}}

if(quark_2.getMass() == 0.7950){
if(quark_1.getMass() == 0.0037){
ampl = (
ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0037(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_0037(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0037(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_0037(0,std::real(l_l+q_l+0.25*q_q)));
}
else
if(quark_1.getMass() == 0.0200){
ampl = (
ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0200(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_0200(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0200(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_0200(0,std::real(l_l+q_l+0.25*q_q)));
}
else
if(quark_1.getMass() == 0.0500){
ampl = (
ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0500(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_0500(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0500(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_0500(0,std::real(l_l+q_l+0.25*q_q)));
}
else
if(quark_1.getMass() == 0.0855){
ampl = (
ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0855(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_0855(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0855(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_0855(0,std::real(l_l+q_l+0.25*q_q)));
}
else
if(quark_1.getMass() == 0.1500){
ampl = (
ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_1500(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_1500(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_1500(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_1500(0,std::real(l_l+q_l+0.25*q_q)));
}
else
if(quark_1.getMass() == 0.2100){
ampl = (
ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_2100(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_2100(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_2100(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_2100(0,std::real(l_l+q_l+0.25*q_q)));
}
else
if(quark_1.getMass() == 0.3500){
ampl = (
ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_3500(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_3500(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_3500(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_3500(0,std::real(l_l+q_l+0.25*q_q)));
}
else
if(quark_1.getMass() == 0.5000){
ampl = (
ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_5000(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_5000(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_5000(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_5000(0,std::real(l_l+q_l+0.25*q_q)));
}
else
if(quark_1.getMass() == 0.6500){
ampl = (
ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_6500(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_6500(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_6500(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_6500(0,std::real(l_l+q_l+0.25*q_q)));
}
else
if(quark_1.getMass() == 0.7950){
ampl = (
ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_7950(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_7950(0,std::real(l_l+q_l+0.25*q_q)));
}
}



    w[1]=Q_Q;
    w[2]=Q_p;
    w[3]=Q_q;
    w[4]=pow(p_p,-1);
    w[5]=p_q;
    w[6]=p_l;
    w[7]=q_q;
    w[8]=q_l;
    w[9]=l_l;
    w[10]=p_p;
    w[11]=Q_l;
   w[12]=ss4*ss2;
   w[13]=sv3*ampl;
   w[14]=w[13]*sv1;
   w[15]=w[12]*w[14];
   w[13]=w[13]*ss1;
   w[16]=sv2*ss4*w[13];
   w[17]=-w[15]+2.E+0*w[16];
   w[18]=ampl*sv2;
   w[19]=w[18]*ss1;
   w[20]=w[19]*sv4;
   w[18]=w[18]*sv1*ss4;
   w[21]=w[20]-w[18];
   w[21]=w[21]*ss3;
   w[13]=ss2*sv4*w[13];
   w[22]=w[13]-w[21]+w[17];
   w[14]=w[14]*sv4*sv2;
   w[23]=2.E+0*w[14];
   w[24]=w[23]*w[8];
   w[25]=w[14]*w[7];
   w[26]=w[24]+w[25];
   w[27]=w[23]*w[9];
   w[28]=w[26]+w[27];
   w[29]=w[22]+w[28];
   w[30]=4.E+0*w[29];
   w[31]=w[14]*w[6];
   w[32]=8.E+0*w[31];
   w[33]=w[14]*w[1];
   w[34]=-w[32]-w[30]+1.5E+0*w[33];
   w[34]=w[34]*w[6];
   w[35]=ss2*sv1*ampl;
   w[36]=w[35]-w[19];
   w[37]=ss3*sv4;
   w[38]=w[36]*w[37];
   w[39]=w[16]-w[15];
   w[38]=w[38]+w[39];
   w[40]=4.E+0*w[38];
   w[41]=w[40]-w[33];
   w[42]=2.E+0*w[4];
   w[41]=w[41]*w[42];
   w[43]=w[41]*pow(w[6],2);
   w[34]=w[34]-w[43];
   w[35]=w[35]+w[19];
   w[44]=w[35]*w[37];
   w[45]=w[16]+w[15];
   w[46]=w[44]-w[45];
   w[47]=w[14]*w[11];
   w[48]=w[46]-w[47];
   w[49]=w[23]*w[6];
   w[50]=w[48]-w[49];
   w[51]=w[27]+2.E+0*w[13];
   w[52]=1.25E-1*w[33];
   w[53]=w[52]-w[51];
   w[54]=w[50]+w[53];
   w[54]=w[54]*w[3];
   w[55]=w[40]*w[8];
   w[56]=w[14]*w[8];
   w[57]=w[56]*w[1];
   w[55]=w[55]-w[57];
   w[54]=w[54]-w[34]-w[55];
   w[54]=w[54]*w[4];
   w[58]=4.E+0*w[56];
   w[59]=w[14]*w[3];
   w[60]=w[58]-w[59];
   w[54]=w[54]-w[60];
   w[54]=w[54]*PDQ1Lp;
   w[20]=w[20]+w[18];
   w[20]=w[20]*ss3;
   w[61]=w[25]-w[13];
   w[62]=w[20]+w[61];
   w[63]=w[47]+w[15];
   w[19]=w[37]*w[19];
   w[37]=w[63]-w[19];
   w[64]=2.E+0*w[6];
   w[37]=w[37]*w[64];
   w[65]=w[59]*w[6];
   w[37]=w[37]+w[65];
   w[66]=w[37]*w[42];
   w[67]=w[63]+w[66]-6.E+0*w[56]-w[62]+1.5E+0*w[59];
   w[68]=PDQ1Lp-PDQ1p;
   w[69]=-w[4]*w[68];
   w[67]=w[69]*w[67];
   w[44]=w[44]+w[45];
   w[70]=w[27]+5.E-1*w[44];
   w[71]=w[24]+w[70];
   w[72]=w[71]*w[4];
   w[73]=5.E-1*w[14];
   w[74]=w[72]+w[73];
   w[75]=w[69]*w[2];
   w[74]=-w[74]*w[75];
   w[67]=w[67]+w[74];
   w[67]=w[67]*w[2];
   w[54]=w[54]-w[67];
   w[36]=w[36]*sv4;
   w[36]=w[36]+w[18];
   w[36]=w[36]*ss3;
   w[67]=w[14]*w[9];
   w[76]=w[67]+w[13];
   w[36]=w[36]+w[76]+w[39];
   w[36]=w[36]*w[9];
   w[39]=w[76]*w[7];
   w[12]=ampl*ss1*w[12]*ss3;
   w[12]=w[36]+w[12]+w[39];
   w[36]=2.E+0*w[8];
   w[39]=w[76]*w[36];
   w[39]=w[39]+w[12];
   w[35]=w[35]*sv4;
   w[77]=w[35]-w[18];
   w[77]=w[77]*ss3;
   w[77]=w[77]+w[45]-w[13];
   w[78]=5.E-1*w[25];
   w[79]=-w[78]+3.125E-2*w[33];
   w[77]=w[79]+w[67]+5.E-1*w[77];
   w[80]=3.E+0*w[56];
   w[81]=w[77]+w[80];
   w[82]=5.E-1*w[1];
   w[81]=w[81]*w[82];
   w[81]=w[81]+4.E+0*w[39];
   w[83]=2.5E-1*w[33];
   w[84]=w[23]*w[11];
   w[85]=w[83]-w[84];
   w[86]=w[49]+4.E+0*w[67];
   w[87]=w[86]+4.E+0*w[13];
   w[88]=-w[46]-w[85]+w[87];
   w[88]=w[3]*w[88];
   w[89]=w[26]-w[13];
   w[90]=w[18]*ss3;
   w[90]=w[90]+w[89];
   w[90]=2.E+0*w[90];
   w[91]=w[90]-w[47];
   w[91]=w[91]*w[11];
   w[88]=w[88]-w[91]+w[34]-w[81];
   w[88]=w[4]*w[88];
   w[92]=w[83]+w[59];
   w[93]=w[67]+w[16];
   w[94]=w[92]+4.E+0*w[93];
   w[88]=w[88]-w[94];
   w[88]=PDQ1p*w[88];
   w[88]=w[88]+w[54];
   w[88]=w[2]*w[88];
   w[95]=w[53]-w[46];
   w[96]=w[95]*w[1];
   w[40]=w[40]*w[11];
   w[96]=w[96]+w[40];
   w[96]=w[96]*w[4];
   w[97]=-w[33]+4.E+0*w[47];
   w[98]=w[96]+w[97];
   w[98]=PDQ1p*w[98];
   w[16]=w[19]-w[16];
   w[99]=w[16]-w[76];
   w[100]=4.E+0*w[99];
   w[41]=w[41]*w[6];
   w[101]=w[100]-w[41];
   w[102]=7.5E-1*w[33];
   w[103]=-w[32]-w[84]+w[102]+w[101];
   w[103]=w[69]*w[103];
   w[48]=w[48]*w[4];
   w[104]=w[48]+w[14];
   w[105]=2.E+0*w[2];
   w[104]=-w[105]*w[104]*w[69];
   w[103]=w[103]-w[104];
   w[105]=w[2]*w[103];
   w[98]=w[98]+w[105];
   w[98]=w[5]*w[98];
   w[105]=w[21]-w[89];
   w[106]=w[105]-w[15];
   w[107]=w[106]*w[1];
   w[108]=w[107]-w[40];
   w[108]=w[108]*w[6];
   w[109]=w[3]*w[38]*w[64];
   w[108]=w[108]-w[109];
   w[108]=w[108]*w[42];
   w[31]=4.E+0*w[31];
   w[110]=w[31]-w[100];
   w[111]=w[83]+w[84];
   w[112]=w[110]+w[111];
   w[112]=w[3]*w[112];
   w[113]=w[6]*w[84];
   w[57]=-w[57]+w[113];
   w[57]=-w[108]+4.E+0*w[57]+w[112];
   w[57]=PDQ1p*w[57];
   w[57]=w[98]+w[57]+w[88];
   w[57]=w[5]*w[57];
   w[88]=w[73]*w[10];
   w[77]=w[56]+w[77]+w[88];
   w[77]=w[77]*w[82];
   w[98]=5.E-1*w[33];
   w[112]=w[30]+w[98];
   w[112]=w[112]*w[6];
   w[77]=w[77]+w[112];
   w[112]=w[93]*w[10];
   w[39]=w[39]+w[112];
   w[39]=4.E+0*w[39]+w[77];
   w[52]=w[49]-w[52]+2.E+0*w[76];
   w[113]=-w[47]-w[52];
   w[113]=w[3]*w[113];
   w[91]=w[113]+w[91]+w[39];
   w[91]=w[3]*w[91];
   w[113]=w[14]*w[10];
   w[114]=w[113]+w[38];
   w[115]=w[114]*w[7];
   w[116]=w[114]*w[36];
   w[115]=w[115]+w[116];
   w[117]=4.E+0*w[11];
   w[115]=w[115]*w[117];
   w[106]=w[106]*w[36];
   w[117]=w[25]*w[1];
   w[118]=1.25E-1*w[117];
   w[106]=w[106]-w[118];
   w[113]=w[113]+w[46];
   w[119]=w[51]+w[113];
   w[119]=w[7]*w[119];
   w[119]=w[119]+w[106];
   w[119]=w[1]*w[119];
   w[120]=4.E+0*w[6];
   w[121]=w[117]*w[120];
   w[91]=w[91]+w[121]+w[119]-w[115];
   w[91]=PDQ1p*w[91];
   w[119]=w[70]+w[56];
   w[121]=w[119]+w[49];
   w[121]=w[121]*w[3];
   w[122]=w[51]+w[46];
   w[122]=w[122]*w[7];
   w[123]=w[120]*w[25];
   w[124]=w[26]*w[11];
   w[106]=-w[124]+w[123]+w[106]+w[121]+w[122];
   w[106]=w[106]*w[4];
   w[121]=5.E-1*w[59];
   w[122]=w[121]+w[25];
   w[106]=w[106]+w[122];
   w[68]=w[106]*w[68];
   w[75]=w[26]*w[75];
   w[68]=w[75]+w[68];
   w[68]=w[2]*w[68];
   w[99]=w[99]*w[7];
   w[29]=w[29]*w[8];
   w[29]=w[99]-w[29];
   w[89]=w[20]+w[89];
   w[99]=w[89]-w[63];
   w[123]=w[99]*w[64];
   w[123]=w[123]-w[65];
   w[123]=w[123]*w[3];
   w[125]=w[7]+w[36];
   w[125]=w[38]*w[125];
   w[126]=w[26]*w[1];
   w[125]=-w[126]+4.E+0*w[125];
   w[125]=w[125]*w[6];
   w[123]=w[123]-w[125];
   w[123]=w[123]*w[4];
   w[120]=w[120]*w[26];
   w[123]=w[123]-w[120];
   w[127]=w[121]+w[63];
   w[128]=-w[127]+w[62]+w[58];
   w[128]=w[128]*w[3];
   w[129]=w[78]+w[56];
   w[130]=w[129]*w[1];
   w[131]=w[84]*w[7];
   w[29]=w[128]+4.E+0*w[29]-w[131]+w[123]+1.5E+0*w[130];
   w[29]=w[29]*PDQ1Lp;
   w[128]=-w[89]+w[127];
   w[128]=w[3]*w[128];
   w[123]=w[128]-w[126]-w[123];
   w[123]=PDQ1p*w[123];
   w[68]=w[68]+w[123]+w[29];
   w[68]=w[2]*w[68];
   w[57]=w[57]+w[91]+w[68];
   w[57]=PDQ2m*w[57];
   w[68]=w[51]+w[38];
   w[68]=w[68]*w[8];
   w[68]=w[68]+w[12];
   w[68]=4.E+0*w[68];
   w[17]=w[13]+w[20]+w[28]-w[17];
   w[20]=4.E+0*w[17];
   w[28]=w[98]+w[32];
   w[91]=w[20]+w[28];
   w[91]=w[91]*w[6];
   w[91]=w[91]-w[43];
   w[123]=w[35]+w[18];
   w[123]=w[123]*ss3;
   w[123]=w[123]+w[45]+w[13];
   w[123]=3.E+0*w[67]+5.E-1*w[123];
   w[126]=-w[79]+w[123];
   w[80]=w[126]+w[80];
   w[80]=w[80]*w[82];
   w[19]=w[19]-w[15];
   w[128]=2.E+0*w[19];
   w[130]=w[128]-w[47];
   w[130]=w[130]*w[11];
   w[132]=w[50]*w[3];
   w[80]=w[80]-w[91]+w[132]-w[68]+w[130];
   w[80]=w[80]*w[4];
   w[133]=w[93]+w[56];
   w[133]=4.E+0*w[133];
   w[80]=w[80]+w[133]-w[92];
   w[80]=w[80]*PDQ1Lp;
   w[92]=w[53]+w[46];
   w[134]=-w[84]+w[92]-w[49];
   w[134]=w[134]*w[3];
   w[135]=2.E+0*w[11];
   w[99]=w[135]*w[99];
   w[71]=w[71]*w[1];
   w[99]=w[134]-w[91]+w[99]+w[71];
   w[99]=w[99]*w[4];
   w[134]=w[98]+w[59];
   w[99]=w[99]-w[134];
   w[99]=w[99]*PDQ1p;
   w[99]=w[99]-w[80];
   w[99]=w[99]*PDQ2Lm;
   w[63]=w[105]-w[63];
   w[105]=-w[121]+w[63]-w[66];
   w[136]=w[69]*PDQ2Lm;
   w[105]=-w[105]*w[136];
   w[72]=w[72]-w[73];
   w[73]=w[2]*PDQ2Lm;
   w[72]=-w[73]*w[72]*w[69];
   w[72]=w[105]+w[72];
   w[72]=w[72]*w[2];
   w[99]=w[99]+w[72];
   w[99]=w[99]*w[2];
   w[20]=w[20]-w[98];
   w[20]=w[20]*w[11];
   w[16]=w[16]+w[76];
   w[76]=4.E+0*w[16];
   w[31]=-w[83]+w[31]+w[76];
   w[31]=w[31]*w[3];
   w[105]=8.E+0*w[6];
   w[137]=w[105]*w[47];
   w[20]=w[31]+w[20]+w[107]+w[108]+w[137];
   w[31]=PDQ2Lm*PDQ1p;
   w[20]=w[20]*w[31];
   w[96]=w[96]-w[97];
   w[96]=w[96]*w[31];
   w[107]=w[85]+w[32];
   w[41]=-w[41]+w[76]+w[107];
   w[41]=-w[41]*w[136];
   w[14]=w[48]-w[14];
   w[48]=2.E+0*w[73];
   w[14]=-w[48]*w[14]*w[69];
   w[14]=w[14]+w[41];
   w[41]=w[14]*w[2];
   w[48]=w[96]-w[41];
   w[48]=w[48]*w[5];
   w[20]=-w[48]+w[99]+w[20];
   w[48]=w[5]*w[20];
   w[48]=w[48]+w[57];
   w[52]=-w[47]+w[52];
   w[52]=w[3]*w[52];
   w[57]=w[90]+w[47];
   w[57]=w[57]*w[11];
   w[39]=w[52]-w[57]+w[39];
   w[39]=w[3]*w[39];
   w[52]=w[51]-w[46];
   w[52]=w[52]*w[7];
   w[76]=w[119]*w[3];
   w[89]=w[89]-w[15];
   w[90]=w[89]*w[36];
   w[90]=w[90]+w[118];
   w[52]=w[52]+w[124]-w[76]-w[90];
   w[52]=w[52]*w[4];
   w[76]=w[52]-w[122];
   w[76]=w[2]*w[76];
   w[64]=w[63]*w[64];
   w[64]=w[64]-w[65];
   w[64]=w[64]*w[3];
   w[64]=w[64]-w[125];
   w[64]=w[64]*w[4];
   w[65]=w[47]+w[89]+w[121];
   w[96]=-w[3]*w[65];
   w[76]=w[76]-w[64]+w[120]+w[96];
   w[76]=w[2]*w[76];
   w[96]=-w[51]+w[113];
   w[96]=w[7]*w[96];
   w[90]=w[96]+w[90];
   w[90]=w[1]*w[90];
   w[39]=w[76]+w[39]+w[90]-w[115];
   w[39]=PDQ1p*w[39];
   w[28]=w[28]+w[30];
   w[28]=w[28]*w[6];
   w[28]=w[28]+w[43];
   w[43]=w[84]+w[95]-w[49];
   w[43]=w[43]*w[3];
   w[63]=w[135]*w[63];
   w[43]=w[43]-w[71]-w[63]-w[28];
   w[43]=w[43]*w[4];
   w[43]=w[43]-w[134];
   w[43]=w[43]*PDQ1Lp;
   w[63]=w[65]-w[66];
   w[63]=w[69]*w[63];
   w[63]=w[63]-w[74];
   w[63]=w[63]*w[2];
   w[43]=w[43]-w[63];
   w[63]=-w[46]+w[111]-w[87];
   w[63]=w[3]*w[63];
   w[57]=w[63]+w[57]-w[28]-w[81];
   w[57]=w[4]*w[57];
   w[57]=w[57]-w[94];
   w[57]=PDQ1p*w[57];
   w[57]=w[57]-w[43];
   w[57]=w[2]*w[57];
   w[63]=w[89]*w[1];
   w[65]=w[63]-w[40];
   w[65]=w[65]*w[6];
   w[65]=w[65]-w[109];
   w[65]=w[65]*w[42];
   w[65]=w[65]-w[137];
   w[66]=w[110]-w[83];
   w[66]=w[66]*w[3];
   w[30]=w[30]-w[98];
   w[30]=w[30]*w[11];
   w[30]=-w[65]-w[63]+w[66]+w[30];
   w[30]=w[30]*PDQ1Lp;
   w[66]=w[101]-w[107];
   w[66]=w[69]*w[66];
   w[66]=w[66]-w[104];
   w[66]=w[66]*w[2];
   w[69]=w[92]*w[1];
   w[69]=w[69]-w[40];
   w[69]=w[69]*w[4];
   w[69]=w[69]-w[97];
   w[71]=w[69]*PDQ1Lp;
   w[66]=w[66]+w[71];
   w[69]=-PDQ1p*w[69];
   w[69]=w[69]+w[66];
   w[69]=w[5]*w[69];
   w[71]=w[85]+w[110];
   w[71]=w[3]*w[71];
   w[65]=w[71]-w[65];
   w[65]=PDQ1p*w[65];
   w[57]=w[69]+w[57]+w[65]-w[30];
   w[57]=w[5]*w[57];
   w[39]=w[57]+w[39];
   w[39]=PDQ2m*w[39];
   w[50]=w[50]-w[53];
   w[50]=w[50]*w[3];
   w[50]=w[50]-w[55]-w[91];
   w[50]=w[50]*w[4];
   w[50]=w[50]+w[60];
   w[50]=w[50]*PDQ1p;
   w[50]=w[50]-w[80];
   w[50]=w[50]*PDQ2Lm;
   w[50]=w[50]+w[72];
   w[53]=w[2]*w[50];
   w[41]=w[5]*w[41];
   w[41]=w[53]+w[41];
   w[41]=w[5]*w[41];
   w[21]=w[61]+w[127]-w[21];
   w[21]=w[21]*w[3];
   w[17]=w[17]*w[8];
   w[16]=w[16]*w[7];
   w[16]=w[16]+w[17];
   w[17]=w[129]*w[82];
   w[16]=w[21]-4.E+0*w[16]-w[17]-w[64]+w[131]-w[120];
   w[16]=w[16]*w[31];
   w[17]=w[52]+w[122];
   w[17]=w[17]*w[73]*PDQ1p;
   w[16]=w[16]+w[17];
   w[17]=-w[2]*w[16];
   w[17]=w[39]+w[17]+w[41];
   w[21]=w[112]+w[12];
   w[31]=w[7]*w[21];
   w[39]=w[51]-w[114];
   w[39]=w[7]*w[39];
   w[39]=w[39]-w[116];
   w[39]=w[8]*w[39];
   w[31]=w[31]+w[39];
   w[39]=w[113]+w[49];
   w[41]=w[7]*w[39];
   w[52]=w[8]*w[19];
   w[53]=w[49]+w[88]+w[70];
   w[53]=w[3]*w[53];
   w[55]=-w[25]-w[58];
   w[55]=w[11]*w[55];
   w[41]=w[53]+w[55]+4.E+0*w[52]+w[41];
   w[41]=w[3]*w[41];
   w[22]=w[25]+w[22]+w[27]+w[24];
   w[22]=w[7]*w[22];
   w[22]=4.E+0*w[22]-1.5E+0*w[117];
   w[22]=w[6]*w[22];
   w[27]=-w[78]-w[88]-w[123];
   w[27]=w[7]*w[27];
   w[52]=w[78]+w[24];
   w[53]=w[8]*w[52];
   w[27]=1.5625E-2*w[117]+5.E-1*w[27]+w[53];
   w[27]=w[1]*w[27];
   w[53]=-w[7]*w[128];
   w[25]=w[25]*w[11];
   w[53]=w[53]+w[25];
   w[53]=w[11]*w[53];
   w[15]=-w[24]+w[15]-w[62];
   w[15]=w[7]*w[15];
   w[52]=-w[3]*w[52];
   w[15]=w[52]+w[25]+w[15];
   w[15]=w[2]*w[15];
   w[15]=w[15]+w[41]+w[22]+w[53]+4.E+0*w[31]+w[27];
   w[15]=PDQ1p*w[15];
   w[22]=w[38]-w[51];
   w[22]=w[8]*w[22];
   w[12]=w[22]-w[12];
   w[22]=-w[56]+w[126];
   w[22]=w[22]*w[82];
   w[12]=-w[132]+w[130]+4.E+0*w[12]+w[22]+w[34];
   w[12]=w[4]*w[12];
   w[22]=w[56]-w[93];
   w[12]=w[12]-w[59]+4.E+0*w[22]+w[83];
   w[12]=PDQ1p*w[12];
   w[22]=w[5]*w[103];
   w[12]=w[22]+w[12]+w[54];
   w[12]=w[5]*w[12];
   w[22]=w[3]*w[37];
   w[22]=w[125]+w[22];
   w[22]=w[22]*w[42];
   w[25]=-w[7]*w[100];
   w[26]=w[26]*w[105];
   w[27]=-w[3]*w[60];
   w[22]=w[22]+w[27]+w[26]+w[131]+w[25]-7.5E-1*w[117];
   w[22]=PDQ1p*w[22];
   w[25]=PDQ1Lp*w[106];
   w[26]=w[49]+w[46];
   w[27]=-w[7]*w[26];
   w[31]=-w[19]*w[36];
   w[27]=w[124]+w[31]+w[27];
   w[24]=-w[24]-w[44]-w[86];
   w[24]=w[3]*w[24];
   w[24]=2.E+0*w[27]+w[24];
   w[24]=w[4]*w[24];
   w[23]=-w[7]*w[23];
   w[23]=w[24]+w[23]-w[59];
   w[23]=PDQ1p*w[23];
   w[23]=w[75]+w[23]+w[25];
   w[23]=w[2]*w[23];
   w[12]=w[12]+w[23]+w[22]+w[29];
   w[12]=w[5]*w[12];
   w[12]=w[12]+w[15];
   w[12]=PDQ2m*w[12];
   w[14]=w[5]*w[14];
   w[14]=w[14]+w[50];
   w[14]=w[5]*w[14];
   w[14]=w[14]-w[16];
   w[14]=w[5]*w[14];
   w[12]=w[14]+w[12];
   w[14]=w[2]*w[20];
   w[15]=w[18]-3.E+0*w[35];
   w[15]=ss3*w[15];
   w[13]=w[15]-3.E+0*w[45]+w[13];
   w[15]=w[56]+w[67];
   w[13]=5.E-1*w[13]-w[79]-5.E+0*w[15];
   w[13]=w[13]*w[82];
   w[15]=3.E+0*w[47];
   w[16]=-w[128]+w[15];
   w[16]=w[11]*w[16];
   w[15]=w[15]-w[26];
   w[15]=w[3]*w[15];
   w[13]=w[15]+w[16]-w[68]+w[13]-w[28];
   w[13]=w[4]*w[13];
   w[13]=w[13]-w[59]-w[133]-w[102];
   w[13]=PDQ1p*w[13];
   w[13]=w[13]-w[43];
   w[13]=w[2]*w[13];
   w[15]=-w[1]*w[19];
   w[15]=w[15]+w[40];
   w[15]=w[6]*w[15];
   w[15]=w[15]+w[109];
   w[15]=w[4]*w[15];
   w[16]=-w[98]+w[32];
   w[16]=w[3]*w[16];
   w[18]=-w[11]*w[33];
   w[19]=w[6]*w[47];
   w[15]=4.E+0*w[15]+w[16]+1.6E+1*w[19]-w[63]+w[18];
   w[15]=PDQ1p*w[15];
   w[13]=w[13]+w[15]-w[30];
   w[13]=w[2]*w[13];
   w[15]=w[51]+w[114];
   w[15]=w[8]*w[15];
   w[15]=w[15]+w[21];
   w[15]=4.E+0*w[15]+w[77];
   w[15]=w[1]*w[15];
   w[16]=w[33]+8.E+0*w[114];
   w[16]=w[16]*w[11];
   w[18]=w[1]*w[128];
   w[18]=w[18]-w[16];
   w[18]=w[11]*w[18];
   w[19]=w[1]*w[39];
   w[16]=-w[16]+w[19];
   w[16]=w[3]*w[16];
   w[15]=w[16]+w[18]+w[15];
   w[15]=PDQ1p*w[15];
   w[16]=-w[1]*w[46];
   w[16]=w[16]+w[40];
   w[16]=w[4]*w[16];
   w[16]=w[16]+w[97];
   w[16]=PDQ1p*w[16];
   w[16]=2.E+0*w[16]+w[66];
   w[16]=w[2]*w[16];
   w[18]=-w[100]+w[85];
   w[18]=PDQ1p*w[1]*w[18];
   w[16]=w[18]+w[16];
   w[16]=w[5]*w[16];
   w[13]=w[16]+w[15]+w[13];
   w[13]=PDQ2m*w[13];
   w[13]=w[13]+w[14];


K13[SI_K13(ip,izp,0,iq,izq,0)] += wj * FCtr * w[13];
K13[SI_K13(ip,izp,0,iq,izq,1)] += wj * FCtr * w[48];
K13[SI_K13(ip,izp,0,iq,izq,2)] += wj * FCtr * w[17];
K13[SI_K13(ip,izp,0,iq,izq,3)] += wj * FCtr * w[12];
