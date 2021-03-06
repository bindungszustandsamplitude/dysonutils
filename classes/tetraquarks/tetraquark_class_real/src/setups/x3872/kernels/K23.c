sv1 = sv1_q1;
ss1 = ss1_q1;
sv2 = sv2_q1;
ss2 = ss2_q1;
sv3 = sv3_q2;
ss3 = ss3_q2;
sv4 = sv4_q2;
ss4 = ss4_q2;

w.resize(10000,0.);

if(isud){FCtr  = 4.*6.;}
if(!isud){FCtr  = 4.*6.;}

if(quark_1.getMass() == 0.0037){
ampl01 = 0.5 *
 ns_data_v2::amplitudes::meson::vector::fit::m_0037_0037(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_0037(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_0037(0,std::real(l_l+q_l+0.25*q_q));
ampl10 = 0.5 *
 ns_data_v2::amplitudes::meson::vector::fit::m_0037_0037(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_0037(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_0037(0,std::real(l_l+q_l+0.25*q_q));
}
else
if(quark_1.getMass() == 0.0200){
ampl01 = 0.5 *
 ns_data_v2::amplitudes::meson::vector::fit::m_0200_0200(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_0200(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_0200(0,std::real(l_l+q_l+0.25*q_q));
ampl10 = 0.5 *
 ns_data_v2::amplitudes::meson::vector::fit::m_0200_0200(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_0200(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_0200(0,std::real(l_l+q_l+0.25*q_q));
}
else
if(quark_1.getMass() == 0.0500){
ampl01 = 0.5 *
 ns_data_v2::amplitudes::meson::vector::fit::m_0500_0500(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_0500(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_0500(0,std::real(l_l+q_l+0.25*q_q));
ampl10 = 0.5 *
 ns_data_v2::amplitudes::meson::vector::fit::m_0500_0500(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_0500(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_0500(0,std::real(l_l+q_l+0.25*q_q));
}
else
if(quark_1.getMass() == 0.0855){
ampl01 = 0.5 *
 ns_data_v2::amplitudes::meson::vector::fit::m_0855_0855(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_0855(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_0855(0,std::real(l_l+q_l+0.25*q_q));
ampl10 = 0.5 *
 ns_data_v2::amplitudes::meson::vector::fit::m_0855_0855(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_0855(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_0855(0,std::real(l_l+q_l+0.25*q_q));
}
else
if(quark_1.getMass() == 0.1500){
ampl01 = 0.5 *
 ns_data_v2::amplitudes::meson::vector::fit::m_1500_1500(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_1500(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_1500(0,std::real(l_l+q_l+0.25*q_q));
ampl10 = 0.5 *
 ns_data_v2::amplitudes::meson::vector::fit::m_1500_1500(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_1500(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_1500(0,std::real(l_l+q_l+0.25*q_q));
}
else
if(quark_1.getMass() == 0.2100){
ampl01 = 0.5 *
 ns_data_v2::amplitudes::meson::vector::fit::m_2100_2100(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_2100(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_2100(0,std::real(l_l+q_l+0.25*q_q));
ampl10 = 0.5 *
 ns_data_v2::amplitudes::meson::vector::fit::m_2100_2100(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_2100(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_2100(0,std::real(l_l+q_l+0.25*q_q));
}
else
if(quark_1.getMass() == 0.3500){
ampl01 = 0.5 *
 ns_data_v2::amplitudes::meson::vector::fit::m_3500_3500(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_3500(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_3500(0,std::real(l_l+q_l+0.25*q_q));
ampl10 = 0.5 *
 ns_data_v2::amplitudes::meson::vector::fit::m_3500_3500(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_3500(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_3500(0,std::real(l_l+q_l+0.25*q_q));
}
else
if(quark_1.getMass() == 0.5000){
ampl01 = 0.5 *
 ns_data_v2::amplitudes::meson::vector::fit::m_5000_5000(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_5000(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_5000(0,std::real(l_l+q_l+0.25*q_q));
ampl10 = 0.5 *
 ns_data_v2::amplitudes::meson::vector::fit::m_5000_5000(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_5000(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_5000(0,std::real(l_l+q_l+0.25*q_q));
}
else
if(quark_1.getMass() == 0.6500){
ampl01 = 0.5 *
 ns_data_v2::amplitudes::meson::vector::fit::m_6500_6500(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_6500(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_6500(0,std::real(l_l+q_l+0.25*q_q));
ampl10 = 0.5 *
 ns_data_v2::amplitudes::meson::vector::fit::m_6500_6500(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_6500(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_6500(0,std::real(l_l+q_l+0.25*q_q));
}
else
if(quark_1.getMass() == 0.7950){
ampl01 = 0.5 *
 ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_7950(0,std::real(l_l+q_l+0.25*q_q));
ampl10 = 0.5 *
 ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_7950(0,std::real(l_l+q_l+0.25*q_q));
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
   w[14]=PDQ1m*ampl10;
   w[15]=w[14]*sv2;
   w[16]=w[15]*PDQ2p;
   w[17]=ampl01*PDQ1p;
   w[18]=w[17]*sv2;
   w[19]=w[18]*PDQ2m;
   w[16]=w[16]+w[19];
   w[19]=sv1*w[16];
   w[15]=w[15]*PDQ2Lp;
   w[18]=w[18]*PDQ2Lm;
   w[15]=w[15]+w[18];
   w[18]=w[15]*sv1;
   w[20]=w[18]-w[19];
   w[21]=ss3*sv4;
   w[20]=w[20]*w[21];
   w[22]=sv1*sv3;
   w[23]=w[16]*w[22]*ss4;
   w[24]=ss4*w[15];
   w[25]=w[24]*w[22];
   w[26]=w[25]-w[23];
   w[27]=w[20]-w[26];
   w[28]=w[17]*PDQ2m;
   w[29]=w[14]*PDQ2p;
   w[28]=w[28]+w[29];
   w[29]=w[28]*w[22]*ss2;
   w[17]=w[17]*PDQ2Lm;
   w[14]=w[14]*PDQ2Lp;
   w[14]=w[14]+w[17];
   w[14]=ss2*w[14];
   w[17]=w[14]*w[22];
   w[22]=w[17]-w[29];
   w[22]=w[22]*sv4;
   w[30]=sv3*w[16];
   w[15]=w[15]*sv3;
   w[31]=w[15]-w[30];
   w[32]=ss1*sv4;
   w[31]=w[31]*w[32];
   w[33]=w[22]-w[31];
   w[34]=w[27]-w[33];
   w[35]=w[34]*w[12];
   w[28]=ss2*w[28];
   w[36]=w[28]-w[14];
   w[37]=w[36]*sv4;
   w[16]=ss4*w[16];
   w[37]=w[37]+w[16]-w[24];
   w[37]=w[37]*ss3;
   w[38]=w[28]*sv3*ss4;
   w[39]=ss4*w[14];
   w[40]=w[39]*sv3;
   w[41]=w[40]-w[38];
   w[42]=w[37]+w[41];
   w[42]=w[42]*ss1;
   w[43]=w[28]*sv1*ss4;
   w[39]=w[39]*sv1;
   w[44]=w[39]-w[43];
   w[44]=w[44]*ss3;
   w[35]=-w[42]+w[35]-w[44];
   w[42]=w[35]*w[5];
   w[45]=w[23]+w[25];
   w[46]=w[15]+w[30];
   w[46]=w[46]*w[32];
   w[47]=w[45]-w[46];
   w[42]=w[42]+w[47];
   w[48]=w[42]*w[7];
   w[36]=w[36]*w[21];
   w[36]=w[36]+w[41];
   w[36]=w[36]*ss1;
   w[49]=w[33]*w[12];
   w[36]=w[36]+w[49];
   w[49]=w[36]*w[5];
   w[49]=w[49]+w[46];
   w[50]=w[49]*w[6];
   w[48]=w[48]-w[50];
   w[51]=w[19]*w[21];
   w[52]=w[29]*sv4;
   w[53]=w[51]-w[52];
   w[54]=w[53]*w[12];
   w[55]=w[16]*ss3;
   w[55]=w[55]-w[38];
   w[55]=w[55]*ss1;
   w[54]=w[54]+w[55];
   w[56]=w[48]-w[54];
   w[57]=pow(w[6],2);
   w[58]=w[56]*w[57];
   w[59]=w[23]-w[51];
   w[60]=w[30]*w[32];
   w[61]=w[52]-w[60];
   w[62]=-w[59]-w[61];
   w[63]=w[62]*w[12];
   w[64]=w[28]*sv4;
   w[64]=w[64]+w[16];
   w[64]=w[64]*ss3;
   w[65]=w[64]-w[38];
   w[65]=w[65]*ss1;
   w[66]=w[60]-w[23];
   w[67]=w[66]*w[11];
   w[68]=w[43]*ss3;
   w[63]=w[65]+w[63]-w[68]+w[67];
   w[65]=2.E+0*w[7];
   w[69]=w[65]*w[66];
   w[70]=w[69]+w[63];
   w[71]=w[70]*w[7];
   w[72]=w[61]*w[8];
   w[73]=w[72]*w[7];
   w[74]=w[73]-w[71];
   w[75]=w[27]+w[33];
   w[76]=w[7]*w[5];
   w[77]=w[75]*w[76];
   w[78]=w[18]*w[21];
   w[79]=w[78]-w[25];
   w[80]=w[17]*sv4;
   w[81]=w[79]+w[80];
   w[82]=w[15]*w[32];
   w[83]=w[81]-w[82];
   w[84]=w[83]+w[77];
   w[85]=w[84]*w[7];
   w[86]=w[76]*w[33];
   w[87]=w[86]+w[60];
   w[87]=w[87]*w[6];
   w[88]=w[87]+w[85];
   w[89]=w[6]*w[88];
   w[89]=w[89]+w[74];
   w[89]=w[8]*w[89];
   w[89]=-w[58]+w[89];
   w[90]=w[34]*w[76];
   w[91]=w[6]*w[5];
   w[92]=w[91]*w[33];
   w[93]=w[90]-w[92];
   w[94]=w[93]-w[53];
   w[95]=w[94]*w[57];
   w[96]=w[22]-w[27]+3.E+0*w[31];
   w[97]=-w[6]*w[96];
   w[98]=w[62]*w[7];
   w[97]=w[98]+w[97];
   w[97]=w[8]*w[97];
   w[97]=w[95]+w[97];
   w[99]=5.E-1*w[2];
   w[97]=w[97]*w[99];
   w[64]=w[64]+w[38];
   w[64]=w[64]*ss1;
   w[100]=w[52]+w[60];
   w[101]=w[100]+w[23];
   w[102]=w[101]+w[51];
   w[103]=w[102]*w[12];
   w[104]=w[60]+w[23];
   w[105]=w[104]*w[11];
   w[64]=w[64]+w[68]+w[103]+w[105];
   w[68]=w[104]*w[65];
   w[103]=w[100]*w[8];
   w[68]=w[64]+w[68]+w[103];
   w[106]=w[22]+w[31];
   w[107]=w[106]*w[91];
   w[108]=w[107]+w[83];
   w[109]=w[108]+2.E+0*w[86];
   w[110]=-w[6]*w[109];
   w[110]=w[110]-w[68];
   w[110]=w[8]*w[110];
   w[37]=w[37]-w[41];
   w[37]=w[37]*ss1;
   w[41]=w[26]+w[31];
   w[111]=w[41]+w[20];
   w[112]=w[22]+w[111];
   w[113]=w[112]*w[12];
   w[37]=w[37]-w[113]-w[44];
   w[44]=w[37]*w[5];
   w[113]=w[45]+w[46];
   w[44]=w[44]+w[113];
   w[114]=w[44]*w[57];
   w[110]=w[114]+w[110];
   w[96]=5.E-1*w[96];
   w[114]=w[3]*w[8];
   w[115]=w[91]*w[114]*w[96];
   w[116]=w[57]*w[112];
   w[117]=w[5]*w[116];
   w[118]=w[8]*w[102];
   w[117]=w[117]+w[118];
   w[118]=1.25E-1*w[2];
   w[117]=w[117]*w[118];
   w[110]=w[115]+2.E+0*w[110]+w[117];
   w[110]=w[3]*w[110];
   w[89]=w[110]+8.E+0*w[89]+w[97];
   w[89]=w[3]*w[89];
   w[97]=w[64]*w[11];
   w[110]=w[105]*w[65];
   w[115]=w[8]*w[11];
   w[117]=w[115]*w[100];
   w[97]=w[117]+w[110]+w[97];
   w[110]=w[75]*w[7];
   w[119]=w[17]+w[29];
   w[119]=w[119]*sv4;
   w[120]=w[119]+w[27];
   w[121]=w[120]-w[31];
   w[122]=-w[11]*w[121];
   w[122]=w[122]-w[110];
   w[122]=w[6]*w[122];
   w[122]=w[122]-w[97];
   w[123]=-3.E+0*w[15]+5.E+0*w[30];
   w[123]=w[123]*w[32];
   w[124]=3.E+0*w[29];
   w[125]=w[124]-w[17];
   w[125]=w[125]*sv4;
   w[123]=w[123]+w[125];
   w[126]=-w[27]-w[123];
   w[127]=5.E-1*w[6];
   w[126]=w[126]*w[127];
   w[128]=w[53]-w[66];
   w[129]=w[128]*w[7];
   w[126]=w[129]+w[126];
   w[126]=w[3]*w[126];
   w[130]=w[10]*w[11];
   w[131]=-w[128]*w[130];
   w[132]=w[102]*w[118];
   w[133]=w[11]*w[132];
   w[134]=w[4]*w[11];
   w[135]=w[100]*w[134];
   w[122]=w[135]+w[131]+w[126]+2.E+0*w[122]+w[133];
   w[122]=w[4]*w[122];
   w[126]=w[78]+w[80];
   w[41]=-w[41]+w[77]+w[126];
   w[41]=w[41]*w[65];
   w[131]=2.E+0*w[77];
   w[133]=w[131]+w[121];
   w[133]=w[133]*w[6];
   w[41]=w[41]+w[133];
   w[64]=w[64]+w[41];
   w[64]=w[6]*w[64];
   w[135]=-w[65]*w[59];
   w[136]=w[6]*w[100];
   w[136]=w[135]+w[136];
   w[136]=w[8]*w[136];
   w[64]=w[64]+w[136];
   w[136]=w[26]-w[22];
   w[137]=w[20]-w[31];
   w[138]=w[136]+w[137];
   w[139]=w[138]*w[76];
   w[140]=2.E+0*w[31];
   w[141]=w[140]-w[27];
   w[141]=w[141]*w[91];
   w[141]=w[141]-w[139];
   w[142]=-w[6]*w[141];
   w[142]=w[142]+w[103];
   w[142]=w[3]*w[142];
   w[143]=-w[6]*w[132];
   w[64]=w[142]+2.E+0*w[64]+w[143];
   w[64]=w[3]*w[64];
   w[142]=w[83]*w[11];
   w[143]=w[110]+w[142];
   w[144]=2.E+0*w[143];
   w[145]=-w[6]*w[75];
   w[145]=-w[144]+w[145];
   w[145]=w[6]*w[145];
   w[146]=-2.E+0*w[59];
   w[147]=-w[115]*w[146];
   w[145]=w[145]+w[147];
   w[147]=w[138]*w[3];
   w[148]=-w[6]*w[147];
   w[145]=2.E+0*w[145]+w[148];
   w[145]=w[10]*w[145];
   w[148]=w[46]*w[11];
   w[36]=w[148]+w[36];
   w[148]=-w[6]*w[36];
   w[149]=w[54]*w[11];
   w[150]=-w[60]*w[115];
   w[148]=w[150]-w[149]+w[148];
   w[148]=w[6]*w[148];
   w[150]=-w[6]*w[27];
   w[151]=w[53]*w[11];
   w[150]=w[151]+w[150];
   w[150]=w[150]*w[127];
   w[150]=w[150]-w[117];
   w[150]=w[2]*w[150];
   w[64]=w[122]+w[145]+w[64]+8.E+0*w[148]+w[150];
   w[64]=w[4]*w[64];
   w[122]=w[63]*w[11];
   w[145]=w[67]*w[65];
   w[148]=w[115]*w[61];
   w[122]=-w[148]+w[145]+w[122];
   w[145]=w[33]*w[6];
   w[150]=-w[145]-w[143];
   w[150]=w[6]*w[150];
   w[150]=w[150]+w[122];
   w[150]=w[8]*w[150];
   w[47]=w[47]*w[11];
   w[35]=w[47]+w[35];
   w[47]=w[35]*w[57];
   w[47]=w[47]+w[150];
   w[150]=-w[34]*w[57];
   w[152]=-w[62]*w[115];
   w[150]=w[150]+w[152];
   w[150]=w[150]*w[99];
   w[152]=2.E+0*w[6];
   w[153]=-w[34]*w[152]*w[114];
   w[47]=w[153]+8.E+0*w[47]+w[150];
   w[47]=w[10]*w[47];
   w[150]=w[106]*w[6];
   w[143]=w[150]+w[143];
   w[143]=w[6]*w[143];
   w[97]=w[143]+w[97];
   w[97]=w[8]*w[97];
   w[143]=w[113]*w[11];
   w[37]=w[143]+w[37];
   w[143]=-w[37]*w[57];
   w[97]=w[143]+w[97];
   w[102]=-w[102]*w[115];
   w[102]=-w[116]+w[102];
   w[102]=w[102]*w[118];
   w[97]=2.E+0*w[97]+w[102];
   w[97]=w[2]*w[97];
   w[47]=w[64]+w[47]+w[97]+w[89];
   w[47]=w[4]*w[47];
   w[64]=3.E+0*w[30];
   w[89]=w[64]+w[15];
   w[89]=w[89]*w[32];
   w[97]=w[89]-w[120];
   w[102]=w[76]*w[27];
   w[102]=2.E+0*w[102];
   w[116]=w[97]-w[102];
   w[116]=w[116]*w[6];
   w[143]=4.E+0*w[7];
   w[153]=w[143]*w[66];
   w[116]=w[116]+w[153];
   w[154]=w[63]+w[116];
   w[154]=w[6]*w[154];
   w[155]=w[65]*w[61];
   w[156]=w[61]*w[6];
   w[157]=w[155]-w[156];
   w[157]=w[8]*w[157];
   w[154]=w[154]+w[157];
   w[157]=-w[17]+1.5E+0*w[29];
   w[157]=sv4*w[157];
   w[158]=w[18]-1.5E+0*w[19];
   w[158]=w[158]*w[21];
   w[159]=-w[15]+5.E-1*w[30];
   w[159]=w[159]*w[32];
   w[157]=w[159]+w[158]+w[157]+w[25]-5.E-1*w[23];
   w[158]=w[2]*w[6];
   w[157]=w[157]*w[158];
   w[159]=w[106]+w[27];
   w[159]=w[159]*w[91];
   w[160]=w[77]+w[81];
   w[161]=w[46]+w[23];
   w[162]=w[161]-w[160];
   w[163]=-w[159]+w[162];
   w[163]=w[6]*w[163];
   w[164]=2.E+0*w[52];
   w[165]=w[164]-w[59];
   w[166]=-w[8]*w[165];
   w[163]=w[163]+w[166];
   w[166]=w[147]*w[91];
   w[163]=4.E+0*w[163]-w[166];
   w[163]=w[3]*w[163];
   w[154]=w[163]+8.E+0*w[154]+w[157];
   w[154]=w[3]*w[154];
   w[157]=-w[11]*w[97];
   w[157]=w[157]+w[110];
   w[157]=w[6]*w[157];
   w[157]=w[157]-w[122];
   w[163]=5.E+0*w[29];
   w[167]=-w[17]+w[163];
   w[167]=sv4*w[167];
   w[167]=w[31]+w[167]+w[27];
   w[167]=w[6]*w[167];
   w[168]=-w[59]+w[61];
   w[169]=w[168]*w[65];
   w[167]=w[169]+w[167];
   w[169]=-w[3]*w[128];
   w[167]=2.E+0*w[167]+w[169];
   w[167]=w[3]*w[167];
   w[169]=3.E+0*w[53];
   w[170]=-w[169]+w[66];
   w[171]=w[170]*w[99];
   w[172]=w[171]*w[11];
   w[173]=4.E+0*w[168];
   w[174]=w[173]*w[130];
   w[175]=8.E+0*w[52];
   w[176]=-w[134]*w[175];
   w[157]=w[176]-w[174]+w[167]+8.E+0*w[157]-w[172];
   w[157]=w[4]*w[157];
   w[161]=w[81]-w[161];
   w[161]=w[11]*w[161];
   w[161]=w[161]+w[110];
   w[167]=3.E+0*w[22];
   w[176]=w[167]+w[31];
   w[177]=w[27]+w[176];
   w[177]=w[6]*w[177];
   w[161]=2.E+0*w[161]+w[177];
   w[161]=w[6]*w[161];
   w[165]=w[165]*w[115];
   w[161]=w[161]+2.E+0*w[165];
   w[165]=2.E+0*w[2];
   w[161]=w[161]*w[165];
   w[177]=w[34]*w[6];
   w[178]=2.E+0*w[67];
   w[177]=-w[178]+w[177];
   w[177]=w[6]*w[177];
   w[177]=w[177]-2.E+0*w[148];
   w[179]=8.E+0*w[10];
   w[177]=w[177]*w[179];
   w[180]=w[2]*w[11];
   w[181]=w[180]*w[168];
   w[182]=w[168]*w[3];
   w[183]=-4.E+0*w[156]-w[182];
   w[183]=w[3]*w[183];
   w[134]=4.E+0*w[134];
   w[184]=w[61]*w[134];
   w[183]=w[184]+w[181]+w[183];
   w[183]=w[9]*w[183];
   w[154]=4.E+0*w[183]+w[157]+w[177]+w[161]+w[154];
   w[157]=w[9]*w[4];
   w[154]=w[154]*w[157];
   w[47]=w[47]+w[154];
   w[154]=i_*w[1];
   w[47]=w[47]*w[154];
   w[161]=w[60]*w[8];
   w[54]=w[161]+w[54];
   w[177]=w[50]-w[54];
   w[183]=5.E-1*w[27];
   w[140]=-w[140]+w[183];
   w[140]=w[140]*w[91];
   w[139]=w[140]+w[139];
   w[140]=5.E-1*w[53];
   w[184]=w[140]-w[139];
   w[184]=w[2]*w[184];
   w[185]=w[106]*w[8];
   w[186]=w[5]*w[185];
   w[186]=w[186]-w[44];
   w[187]=w[118]*w[112];
   w[188]=w[187]*w[5];
   w[186]=2.E+0*w[186]-w[188];
   w[186]=w[3]*w[186];
   w[177]=w[186]+8.E+0*w[177]+w[184];
   w[177]=w[3]*w[177];
   w[184]=w[84]*w[65];
   w[186]=w[184]-w[37];
   w[131]=-w[131]-w[83];
   w[131]=w[6]*w[131];
   w[131]=-w[185]+w[131]-w[186];
   w[131]=2.E+0*w[131]+w[187];
   w[131]=w[2]*w[131];
   w[131]=w[131]+w[177];
   w[131]=w[3]*w[131];
   w[177]=w[61]*w[7];
   w[185]=w[60]*w[11];
   w[177]=w[177]-w[185];
   w[177]=w[177]*w[8];
   w[71]=-w[71]+w[177]-w[149];
   w[189]=w[28]*w[21];
   w[189]=w[189]-w[38];
   w[189]=w[189]*ss1;
   w[189]=w[189]+w[185];
   w[190]=w[61]*w[12];
   w[190]=w[190]-w[189];
   w[191]=w[65]*w[60];
   w[192]=w[191]-w[190];
   w[193]=w[6]*w[192];
   w[193]=w[193]-w[71];
   w[170]=w[170]*w[7];
   w[194]=-w[151]+w[170];
   w[195]=5.E-1*w[59];
   w[196]=w[195]+w[100];
   w[197]=w[6]*w[196];
   w[194]=5.E-1*w[194]+w[197];
   w[194]=w[2]*w[194];
   w[193]=8.E+0*w[193]+w[194];
   w[193]=w[2]*w[193];
   w[162]=2.E+0*w[162];
   w[75]=w[75]*w[91];
   w[194]=-w[162]+w[75];
   w[197]=w[3]*w[5];
   w[138]=w[197]*w[138];
   w[194]=2.E+0*w[194]+w[138];
   w[194]=w[3]*w[194];
   w[70]=w[70]-w[72];
   w[198]=w[152]*w[60];
   w[199]=w[198]-w[70];
   w[171]=w[194]+8.E+0*w[199]-w[171];
   w[171]=w[3]*w[171];
   w[194]=w[168]*w[6];
   w[199]=w[168]*w[7];
   w[200]=w[199]-w[105];
   w[201]=-2.E+0*w[200]-w[194];
   w[201]=w[201]*w[165];
   w[202]=w[10]*w[3];
   w[173]=w[173]*w[202];
   w[171]=w[173]+w[201]+w[171];
   w[171]=w[10]*w[171];
   w[201]=-w[46]-w[125]+w[79];
   w[201]=w[201]*w[99];
   w[203]=w[18]+w[19];
   w[203]=w[203]*w[21];
   w[22]=w[22]+w[203]+w[77];
   w[204]=-w[113]+w[22];
   w[205]=w[197]*w[106];
   w[204]=2.E+0*w[204]-w[205];
   w[204]=w[3]*w[204];
   w[192]=w[204]-8.E+0*w[192]+w[201];
   w[192]=w[3]*w[192];
   w[201]=w[100]+w[59];
   w[204]=w[201]*w[11];
   w[206]=w[204]-w[199];
   w[206]=w[206]*w[165];
   w[192]=w[173]+w[206]+w[192];
   w[192]=w[4]*w[192];
   w[131]=w[192]+w[171]+w[193]+w[131];
   w[131]=w[4]*w[131];
   w[171]=w[33]*w[8];
   w[83]=w[102]+w[83];
   w[83]=w[6]*w[83];
   w[83]=w[171]+w[83]-w[35];
   w[192]=w[99]*w[34];
   w[83]=8.E+0*w[83]+w[192];
   w[83]=w[2]*w[83];
   w[193]=w[171]*w[5];
   w[206]=-w[193]+w[42];
   w[207]=w[34]*w[5];
   w[208]=-w[99]*w[207];
   w[206]=8.E+0*w[206]+w[208];
   w[206]=w[3]*w[206];
   w[208]=w[34]*w[91];
   w[209]=w[165]*w[208];
   w[206]=w[209]+w[206];
   w[206]=w[3]*w[206];
   w[209]=-w[2]*w[34];
   w[210]=pow(w[3],2);
   w[211]=w[210]*w[207];
   w[209]=w[209]+w[211];
   w[211]=8.E+0*w[9];
   w[209]=w[209]*w[211];
   w[83]=w[209]+w[83]+w[206];
   w[83]=w[3]*w[83];
   w[22]=-w[22]+w[31]+w[45];
   w[206]=w[176]-w[27];
   w[209]=w[206]*w[197];
   w[22]=4.E+0*w[22]+w[209];
   w[22]=w[3]*w[22];
   w[209]=-2.E+0*w[17]+w[124];
   w[209]=sv4*w[209];
   w[212]=-2.E+0*w[15]+w[30];
   w[212]=w[212]*w[32];
   w[209]=w[212]+w[209]+w[59];
   w[209]=w[2]*w[209];
   w[22]=w[209]+w[22];
   w[22]=w[3]*w[22];
   w[209]=w[62]*w[11];
   w[212]=w[209]+w[98];
   w[213]=4.E+0*w[2];
   w[212]=w[212]*w[213];
   w[214]=8.E+0*w[202];
   w[215]=w[59]*w[214];
   w[22]=w[215]+w[212]+w[22];
   w[212]=2.E+0*w[4];
   w[22]=w[22]*w[212];
   w[215]=2.E+0*w[66];
   w[216]=-w[215]-w[208];
   w[216]=w[216]*w[210];
   w[194]=w[178]+w[194];
   w[194]=w[2]*w[194];
   w[194]=w[194]+w[216];
   w[194]=w[194]*w[179];
   w[216]=pow(w[2],2);
   w[217]=w[62]*w[216]*w[152];
   w[22]=w[22]+w[194]+w[217]+w[83];
   w[22]=w[9]*w[22];
   w[83]=w[6]*w[48];
   w[194]=-w[6]*w[86];
   w[85]=w[194]+w[36]-w[85];
   w[85]=w[8]*w[85];
   w[83]=w[83]+w[85];
   w[85]=-w[6]*w[93];
   w[85]=w[85]-w[171];
   w[85]=w[85]*w[99];
   w[83]=8.E+0*w[83]+w[85];
   w[83]=w[2]*w[83];
   w[85]=w[90]*w[8];
   w[90]=-w[165]*w[85];
   w[49]=w[8]*w[49];
   w[171]=w[99]*w[193];
   w[49]=-8.E+0*w[49]+w[171];
   w[49]=w[3]*w[49];
   w[49]=w[90]+w[49];
   w[49]=w[3]*w[49];
   w[49]=w[83]+w[49];
   w[49]=w[3]*w[49];
   w[83]=w[42]*w[6];
   w[90]=w[160]+w[92];
   w[171]=2.E+0*w[30];
   w[193]=w[171]+w[15];
   w[193]=w[193]*w[32];
   w[194]=-w[193]+w[90];
   w[194]=w[8]*w[194];
   w[194]=-w[83]+w[194];
   w[217]=w[208]*w[99];
   w[218]=w[197]*w[8];
   w[34]=w[34]*w[218];
   w[34]=2.E+0*w[34]+8.E+0*w[194]+w[217];
   w[34]=w[3]*w[34];
   w[194]=w[62]*w[8];
   w[219]=w[165]*w[194];
   w[34]=w[219]+w[34];
   w[34]=w[3]*w[34];
   w[219]=2.E+0*w[185];
   w[199]=w[219]-w[199];
   w[199]=w[8]*w[199];
   w[220]=w[66]*w[7];
   w[221]=-w[6]*w[60];
   w[220]=-w[220]+w[221];
   w[220]=w[220]*w[152];
   w[199]=w[220]+w[199];
   w[199]=w[2]*w[199];
   w[220]=w[8]*w[168];
   w[221]=w[66]*w[152];
   w[220]=w[221]+w[220];
   w[220]=w[220]*w[214];
   w[34]=w[220]+8.E+0*w[199]+w[34];
   w[34]=w[10]*w[34];
   w[199]=-w[216]*w[65]*w[194];
   w[22]=w[22]+w[131]+w[34]+w[199]+w[49];
   w[34]=i_*w[13];
   w[22]=w[22]*w[34];
   w[28]=2.E+0*w[28];
   w[49]=w[14]-w[28];
   w[49]=w[49]*w[21];
   w[38]=2.E+0*w[38];
   w[49]=w[49]-w[40]+w[38];
   w[49]=ss1*w[49];
   w[131]=2.E+0*w[29];
   w[199]=w[131]-w[17];
   w[199]=w[199]*sv4;
   w[171]=w[171]-w[15];
   w[171]=w[171]*w[32];
   w[199]=w[199]-w[171];
   w[216]=w[12]*w[199];
   w[220]=-w[11]*w[193];
   w[49]=-w[191]+w[220]+w[49]+w[216];
   w[49]=w[6]*w[49];
   w[49]=w[49]+w[74];
   w[74]=w[184]+w[133];
   w[133]=-w[3]*w[141];
   w[74]=2.E+0*w[74]+w[133];
   w[74]=w[3]*w[74];
   w[133]=5.E-1*w[18];
   w[141]=w[133]-w[19];
   w[141]=w[141]*w[21];
   w[184]=5.E-1*w[25];
   w[101]=-w[141]+w[184]-w[101];
   w[101]=w[6]*w[101];
   w[101]=-5.E-1*w[170]+w[101];
   w[101]=w[2]*w[101];
   w[49]=w[74]+8.E+0*w[49]+w[101];
   w[49]=w[3]*w[49];
   w[74]=2.E+0*w[19];
   w[101]=w[74]-w[18];
   w[101]=w[101]*w[21];
   w[170]=2.E+0*w[23];
   w[191]=w[170]-w[25];
   w[216]=w[101]-w[191];
   w[220]=w[199]+w[216];
   w[221]=w[220]*w[7];
   w[221]=w[221]-w[142];
   w[222]=2.E+0*w[221];
   w[220]=w[6]*w[220];
   w[220]=w[222]+w[220];
   w[147]=2.E+0*w[220]-w[147];
   w[147]=w[3]*w[147];
   w[220]=-w[152]*w[185];
   w[220]=w[220]+w[122];
   w[147]=-w[174]+w[147]+8.E+0*w[220]+w[172];
   w[147]=w[10]*w[147];
   w[220]=w[3]*w[96];
   w[220]=w[222]+w[220];
   w[220]=w[3]*w[220];
   w[223]=w[190]*w[11];
   w[224]=w[65]*w[185];
   w[224]=-w[223]+w[224];
   w[225]=w[196]*w[180];
   w[220]=-w[174]+w[220]+8.E+0*w[224]+w[225];
   w[220]=w[4]*w[220];
   w[224]=-w[201]*w[152]*w[180];
   w[49]=w[220]+w[147]+w[224]+w[49];
   w[49]=w[4]*w[49];
   w[56]=-w[6]*w[56];
   w[147]=w[171]+w[160];
   w[147]=w[7]*w[147];
   w[87]=w[87]+w[147]-w[190];
   w[87]=w[8]*w[87];
   w[56]=w[56]+w[87];
   w[87]=w[94]*w[127];
   w[94]=w[184]-w[23];
   w[123]=w[141]-w[94]+5.E-1*w[123];
   w[123]=w[8]*w[123];
   w[87]=w[87]+w[123];
   w[87]=w[2]*w[87];
   w[123]=w[44]*w[6];
   w[109]=-w[8]*w[109];
   w[109]=w[123]+w[109];
   w[96]=w[96]*w[218];
   w[141]=w[187]*w[91];
   w[96]=w[96]+2.E+0*w[109]+w[141];
   w[96]=w[3]*w[96];
   w[56]=w[96]+8.E+0*w[56]+w[87];
   w[56]=w[3]*w[56];
   w[37]=-w[6]*w[37];
   w[87]=w[79]-w[199];
   w[87]=w[7]*w[87];
   w[87]=w[150]+w[142]+w[87];
   w[87]=w[8]*w[87];
   w[37]=w[37]+w[87];
   w[87]=-w[6]*w[187];
   w[37]=2.E+0*w[37]+w[87];
   w[37]=w[2]*w[37];
   w[37]=w[37]+w[56];
   w[37]=w[3]*w[37];
   w[56]=-w[102]+w[46]-w[120];
   w[56]=w[6]*w[56];
   w[56]=w[56]+w[70];
   w[87]=-w[17]+2.5E+0*w[29];
   w[87]=sv4*w[87];
   w[96]=w[18]-2.5E+0*w[19];
   w[96]=w[96]*w[21];
   w[102]=-w[15]+1.5E+0*w[30];
   w[102]=w[102]*w[32];
   w[87]=w[102]+w[96]+w[87]+w[25]-1.5E+0*w[23];
   w[87]=w[2]*w[87];
   w[96]=-w[159]-w[84];
   w[96]=4.E+0*w[96]-w[138];
   w[96]=w[3]*w[96];
   w[56]=w[96]+8.E+0*w[56]+w[87];
   w[56]=w[3]*w[56];
   w[87]=3.E+0*w[17];
   w[96]=w[87]-w[131];
   w[96]=sv4*w[96];
   w[96]=-w[171]+w[96]-w[216];
   w[96]=w[6]*w[96];
   w[96]=w[144]+w[96];
   w[96]=w[96]*w[165];
   w[56]=w[96]+w[56];
   w[56]=w[3]*w[56];
   w[96]=-w[6]*w[209];
   w[96]=w[96]-w[122];
   w[96]=8.E+0*w[96]-w[172];
   w[96]=w[2]*w[96];
   w[102]=w[82]-w[80];
   w[109]=w[216]-w[102];
   w[122]=-w[109]*w[152];
   w[122]=w[122]-w[182];
   w[122]=w[3]*w[122];
   w[122]=w[181]+w[122];
   w[122]=w[10]*w[122];
   w[144]=w[80]-w[25];
   w[101]=-w[82]-w[101]+w[144]+w[170];
   w[101]=w[7]*w[101];
   w[101]=w[142]+w[101];
   w[109]=-w[3]*w[109];
   w[101]=4.E+0*w[101]+w[109];
   w[101]=w[3]*w[101];
   w[109]=w[180]*w[146];
   w[147]=-w[59]*w[130];
   w[101]=8.E+0*w[147]+w[109]+w[101];
   w[101]=w[101]*w[212];
   w[109]=-w[180]+w[210];
   w[109]=w[211]*w[62]*w[109];
   w[56]=w[109]+w[101]+4.E+0*w[122]+w[96]+w[56];
   w[56]=w[9]*w[56];
   w[35]=w[198]+w[69]+w[35];
   w[35]=w[6]*w[35];
   w[69]=-w[145]+w[221];
   w[69]=w[8]*w[69];
   w[35]=w[35]+w[69];
   w[69]=-w[6]*w[192];
   w[96]=-w[79]-w[199];
   w[96]=w[8]*w[96];
   w[101]=w[104]*w[152];
   w[96]=w[101]+w[96];
   w[101]=2.E+0*w[3];
   w[96]=w[96]*w[101];
   w[35]=w[96]+8.E+0*w[35]+w[69];
   w[35]=w[3]*w[35];
   w[69]=-w[6]*w[105];
   w[69]=w[69]+w[148];
   w[69]=w[69]*w[213];
   w[96]=-w[168]*w[115];
   w[105]=-w[67]*w[152];
   w[96]=w[105]+w[96];
   w[96]=w[96]*w[179];
   w[35]=w[96]+w[69]+w[35];
   w[35]=w[10]*w[35];
   w[69]=-w[6]*w[149];
   w[96]=-w[6]-w[65];
   w[96]=w[185]*w[96];
   w[96]=w[223]+w[96];
   w[96]=w[8]*w[96];
   w[69]=w[69]+w[96];
   w[96]=-w[196]*w[115];
   w[105]=w[151]*w[127];
   w[96]=w[105]+w[96];
   w[96]=w[2]*w[96];
   w[69]=8.E+0*w[69]+w[96];
   w[69]=w[2]*w[69];
   w[35]=w[56]+w[49]+w[35]+w[69]+w[37];
   w[35]=w[35]*w[154];
   w[37]=2.E+0*w[60];
   w[49]=w[37]+w[169]-w[170];
   w[49]=w[49]*w[12];
   w[49]=w[49]+3.E+0*w[55];
   w[48]=-w[161]+w[48]-w[49];
   w[55]=-3.E+0*w[20]-w[26]+w[176];
   w[55]=w[55]*w[76];
   w[55]=w[55]+w[169];
   w[56]=w[106]-w[183];
   w[56]=w[56]*w[91];
   w[55]=5.E-1*w[55]+w[56];
   w[55]=w[2]*w[55];
   w[44]=-2.E+0*w[44]-w[188];
   w[44]=w[3]*w[44];
   w[44]=w[44]+8.E+0*w[48]+w[55];
   w[44]=w[3]*w[44];
   w[48]=-w[137]+3.E+0*w[136];
   w[55]=w[48]*w[76];
   w[55]=w[55]-w[108];
   w[55]=w[6]*w[55];
   w[55]=w[55]-w[186];
   w[55]=2.E+0*w[55]+w[187];
   w[55]=w[2]*w[55];
   w[44]=w[55]+w[44];
   w[44]=w[3]*w[44];
   w[55]=w[131]+w[17];
   w[55]=w[55]*sv4;
   w[56]=w[74]+w[18];
   w[56]=w[56]*w[21];
   w[69]=w[193]-w[170];
   w[55]=-w[55]+w[56]+w[69]-w[25];
   w[55]=w[55]*w[12];
   w[56]=w[191]-w[171];
   w[56]=w[56]*w[11];
   w[28]=w[28]+w[14];
   w[96]=w[28]*sv4;
   w[16]=w[24]+w[96]+2.E+0*w[16];
   w[16]=w[16]*ss3;
   w[38]=w[38]+w[40];
   w[96]=w[16]-w[38];
   w[96]=w[96]*ss1;
   w[43]=w[39]+2.E+0*w[43];
   w[43]=w[43]*ss3;
   w[55]=w[55]-w[56]+w[96]-w[43];
   w[56]=w[55]+w[153];
   w[90]=-w[69]+w[90];
   w[90]=w[6]*w[90];
   w[90]=w[72]+w[90]-w[56];
   w[20]=-w[20]+3.E+0*w[26];
   w[96]=-w[20]+w[106];
   w[96]=w[96]*w[91];
   w[96]=-w[162]+w[96];
   w[96]=2.E+0*w[96]+w[138];
   w[96]=w[3]*w[96];
   w[105]=5.E-1*w[17];
   w[106]=-w[105]-w[131];
   w[106]=sv4*w[106];
   w[74]=w[133]+w[74];
   w[74]=w[74]*w[21];
   w[74]=5.E-1*w[82]+w[74]-w[184]+w[106];
   w[74]=w[2]*w[74];
   w[74]=w[96]+8.E+0*w[90]+w[74];
   w[74]=w[3]*w[74];
   w[90]=-w[156]-w[200];
   w[90]=w[90]*w[213];
   w[74]=w[173]+w[90]+w[74];
   w[74]=w[10]*w[74];
   w[90]=w[167]-w[111];
   w[76]=w[90]*w[76];
   w[90]=w[18]+3.E+0*w[19];
   w[90]=w[90]*w[21];
   w[76]=2.E+0*w[107]+w[76]+w[90]-w[125]-w[113];
   w[76]=2.E+0*w[76]-w[205];
   w[76]=w[3]*w[76];
   w[96]=w[119]-w[46];
   w[106]=w[96]+w[59];
   w[106]=w[106]*w[12];
   w[28]=w[28]*w[21];
   w[28]=w[28]-w[38];
   w[28]=w[28]*ss1;
   w[108]=w[171]*w[11];
   w[28]=w[106]-w[28]-w[108];
   w[106]=-w[15]+4.E+0*w[30];
   w[106]=w[106]*w[32];
   w[108]=-w[106]-w[160];
   w[108]=w[7]*w[108];
   w[86]=-w[37]-w[86];
   w[86]=w[6]*w[86];
   w[86]=w[86]+w[108]+w[28];
   w[108]=w[119]+w[46];
   w[108]=w[108]*w[212];
   w[109]=-w[184]+5.E-1*w[78];
   w[111]=-w[164]+w[109];
   w[111]=w[2]*w[111];
   w[76]=-w[108]+w[76]+8.E+0*w[86]+w[111];
   w[76]=w[3]*w[76];
   w[86]=w[104]-w[169];
   w[86]=w[11]*w[86];
   w[51]=-2.E+0*w[51]+w[100];
   w[51]=w[51]*w[65];
   w[111]=w[100]*w[152];
   w[51]=w[111]+w[86]+w[51];
   w[51]=w[51]*w[165];
   w[86]=w[136]+w[90]-w[89];
   w[86]=2.E+0*w[86];
   w[111]=w[202]*w[86];
   w[51]=w[111]+w[51]+w[76];
   w[51]=w[4]*w[51];
   w[63]=3.E+0*w[63]+w[153];
   w[63]=w[7]*w[63];
   w[37]=-w[59]+w[37]-w[164];
   w[76]=w[12]*w[37];
   w[60]=3.E+0*w[60];
   w[111]=w[60]-w[23];
   w[113]=w[111]*w[65];
   w[113]=w[113]+w[198];
   w[76]=w[76]+w[113]+3.E+0*w[189];
   w[76]=w[6]*w[76];
   w[49]=w[11]*w[49];
   w[49]=-w[177]+w[76]+w[49]+w[63];
   w[63]=-w[66]-5.E+0*w[53];
   w[63]=w[7]*w[63];
   w[63]=-3.E+0*w[151]+w[63];
   w[66]=w[164]+w[195];
   w[66]=w[6]*w[66];
   w[63]=5.E-1*w[63]+w[66];
   w[63]=w[2]*w[63];
   w[49]=8.E+0*w[49]+w[63];
   w[49]=w[2]*w[49];
   w[44]=w[51]+w[74]+w[49]+w[44];
   w[44]=w[4]*w[44];
   w[49]=w[124]+w[17];
   w[49]=w[49]*sv4;
   w[45]=w[49]+w[45]-w[203]-w[89];
   w[49]=4.E+0*w[45];
   w[51]=w[202]*w[49];
   w[63]=w[111]+w[169];
   w[66]=w[11]*w[63];
   w[37]=w[37]*w[65];
   w[74]=-w[61]*w[152];
   w[37]=w[74]+w[66]+w[37];
   w[37]=w[37]*w[213];
   w[63]=w[93]-w[63];
   w[66]=w[112]*w[197];
   w[63]=4.E+0*w[63]+w[66];
   w[63]=w[3]*w[63];
   w[66]=-w[2]*w[112];
   w[63]=w[66]+w[63];
   w[63]=w[3]*w[63];
   w[66]=4.E+0*w[96];
   w[74]=w[4]*w[3];
   w[66]=w[74]*w[66];
   w[37]=w[66]+w[51]+w[37]+w[63];
   w[51]=w[212]*w[9];
   w[37]=w[37]*w[51];
   w[37]=w[44]+w[37];
   w[37]=w[37]*w[34];
   w[44]=-w[7]*w[56];
   w[56]=w[28]-w[113];
   w[56]=w[6]*w[56];
   w[44]=w[73]+w[44]+w[56];
   w[56]=-1.5E+0*w[17]-w[29];
   w[56]=sv4*w[56];
   w[63]=1.5E+0*w[18]+w[19];
   w[63]=w[63]*w[21];
   w[66]=5.E-1*w[15];
   w[73]=-w[66]+w[30];
   w[73]=w[73]*w[32];
   w[56]=w[73]+w[63]+w[56]+w[94];
   w[56]=w[7]*w[56];
   w[31]=w[119]+w[31];
   w[63]=-w[31]+w[109];
   w[63]=w[6]*w[63];
   w[56]=w[56]+w[63];
   w[56]=w[2]*w[56];
   w[18]=w[18]+4.E+0*w[19];
   w[18]=w[18]*w[21];
   w[63]=w[17]+4.E+0*w[29];
   w[63]=w[63]*sv4;
   w[73]=w[82]+w[25];
   w[18]=w[73]+w[18]+w[63];
   w[18]=w[18]*w[12];
   w[16]=w[16]+w[38];
   w[16]=w[16]*ss1;
   w[38]=w[191]+w[171];
   w[38]=w[38]*w[11];
   w[16]=w[18]+w[43]+w[16]+w[38];
   w[18]=-w[152]-w[143];
   w[18]=w[104]*w[18];
   w[18]=-w[103]+w[18]-w[16];
   w[38]=w[105]+w[29];
   w[38]=w[38]*sv4;
   w[23]=w[184]+w[23];
   w[38]=w[38]+w[23];
   w[30]=w[66]+w[30];
   w[30]=w[30]*w[32];
   w[19]=w[133]+w[19];
   w[19]=w[19]*w[21];
   w[21]=w[30]+w[19];
   w[30]=w[38]+w[21];
   w[30]=2.5E-1*w[30];
   w[43]=w[2]*w[30];
   w[18]=2.E+0*w[18]+w[43];
   w[18]=w[3]*w[18];
   w[18]=w[18]+8.E+0*w[44]+w[56];
   w[18]=w[3]*w[18];
   w[28]=-w[11]*w[28];
   w[43]=w[106]+w[81];
   w[43]=w[11]*w[43];
   w[43]=w[43]+w[110];
   w[43]=w[7]*w[43];
   w[33]=w[7]*w[33];
   w[33]=w[219]+w[33];
   w[33]=w[6]*w[33];
   w[28]=w[33]+w[28]+w[43];
   w[26]=w[90]+w[26];
   w[15]=w[64]-w[15];
   w[15]=w[15]*w[32];
   w[29]=-w[87]+w[29];
   w[29]=sv4*w[29];
   w[29]=-w[15]+w[29]+w[26];
   w[29]=w[7]*w[29];
   w[32]=w[82]+w[80];
   w[33]=-w[32]*w[152];
   w[29]=w[33]-w[142]+w[29];
   w[33]=-w[59]+w[31];
   w[33]=w[3]*w[33];
   w[29]=2.E+0*w[29]+w[33];
   w[29]=w[3]*w[29];
   w[33]=-w[130]*w[86];
   w[19]=-w[19]+w[23];
   w[19]=w[19]*w[180];
   w[23]=w[11]*w[108];
   w[19]=w[23]+w[33]+w[29]+8.E+0*w[28]+w[19];
   w[19]=w[4]*w[19];
   w[16]=w[11]*w[16];
   w[23]=-w[7]*w[48];
   w[28]=w[81]+w[171]+w[170];
   w[28]=w[28]*w[11];
   w[23]=w[150]+w[28]+w[23];
   w[23]=w[6]*w[23];
   w[28]=w[28]+w[110];
   w[28]=w[28]*w[65];
   w[16]=w[117]+w[23]+w[16]+w[28];
   w[23]=-w[180]*w[30];
   w[16]=2.E+0*w[16]+w[23];
   w[16]=w[2]*w[16];
   w[23]=w[11]*w[55];
   w[28]=-w[81]+w[69];
   w[28]=w[11]*w[28];
   w[28]=-w[145]+w[28]-w[110];
   w[28]=w[6]*w[28];
   w[29]=w[67]*w[143];
   w[23]=-w[148]+w[28]+w[23]+w[29];
   w[20]=-w[46]+w[125]+w[20];
   w[20]=w[6]*w[20];
   w[20]=w[222]+w[20];
   w[28]=w[82]-w[78]+w[144];
   w[28]=w[3]*w[28];
   w[20]=2.E+0*w[20]+w[28];
   w[20]=w[3]*w[20];
   w[21]=-w[21]+w[38];
   w[21]=w[21]*w[180];
   w[20]=-w[174]+w[20]+8.E+0*w[23]+w[21];
   w[20]=w[10]*w[20];
   w[16]=w[19]+w[20]+w[16]+w[18];
   w[16]=w[4]*w[16];
   w[18]=w[7]*w[45];
   w[19]=w[6]*w[96];
   w[18]=w[18]+w[19];
   w[17]=w[163]+w[17];
   w[17]=w[17]*sv4;
   w[17]=w[17]+w[26]+w[46];
   w[19]=-w[3]*w[17];
   w[18]=4.E+0*w[18]+w[19];
   w[18]=w[3]*w[18];
   w[19]=-w[130]*w[49];
   w[17]=w[17]*w[180];
   w[20]=-w[96]*w[134];
   w[17]=w[20]+w[19]+w[17]+w[18];
   w[17]=w[17]*w[51];
   w[16]=w[16]+w[17];
   w[16]=w[16]*w[154];
   w[17]=w[107]-w[201];
   w[17]=w[8]*w[17];
   w[17]=-w[123]+w[17];
   w[17]=2.E+0*w[17]-w[141];
   w[17]=w[3]*w[17];
   w[18]=w[54]+w[50];
   w[19]=w[6]*w[18];
   w[20]=-w[140]-w[139];
   w[20]=w[20]*w[158];
   w[17]=w[17]+8.E+0*w[19]+w[20];
   w[17]=w[3]*w[17];
   w[19]=w[73]+w[126];
   w[20]=-w[12]*w[19];
   w[14]=w[14]*sv4;
   w[14]=w[14]+w[24];
   w[14]=w[14]*ss3;
   w[21]=-w[40]-w[14];
   w[21]=ss1*w[21];
   w[23]=w[11]*w[73];
   w[24]=w[39]*ss3;
   w[20]=w[23]+w[20]-w[24]+w[21]-w[41];
   w[20]=w[6]*w[20];
   w[21]=-w[6]*w[32];
   w[21]=w[21]+w[204]-w[135];
   w[21]=w[8]*w[21];
   w[20]=w[20]+w[21];
   w[19]=w[6]*w[19]*w[118];
   w[19]=2.E+0*w[20]+w[19];
   w[19]=w[2]*w[19];
   w[20]=2.E+0*w[84]+w[75];
   w[20]=w[6]*w[20];
   w[21]=w[8]*w[146];
   w[20]=w[20]+w[21];
   w[20]=2.E+0*w[20]+w[166];
   w[20]=w[20]*w[202];
   w[21]=w[77]+w[121];
   w[21]=w[6]*w[21];
   w[21]=w[21]+w[68];
   w[23]=-w[3]*w[107];
   w[21]=w[23]+2.E+0*w[21]-w[132];
   w[21]=w[3]*w[21];
   w[15]=w[15]+w[120];
   w[15]=w[15]*w[127];
   w[15]=-w[129]+w[15];
   w[15]=w[2]*w[15];
   w[23]=w[128]*w[202];
   w[26]=-w[100]*w[74];
   w[15]=w[26]+w[23]+w[15]+w[21];
   w[15]=w[4]*w[15];
   w[15]=w[15]+w[20]+w[19]+w[17];
   w[15]=w[4]*w[15];
   w[17]=w[36]-w[88];
   w[17]=w[6]*w[17];
   w[17]=w[17]-w[71];
   w[17]=w[8]*w[17];
   w[17]=w[58]+w[17];
   w[19]=-w[145]-w[151]-w[98];
   w[19]=w[8]*w[19];
   w[19]=-w[95]+w[19];
   w[19]=w[19]*w[99];
   w[17]=8.E+0*w[17]+w[19];
   w[17]=w[2]*w[17];
   w[19]=w[92]+w[84];
   w[19]=w[6]*w[19];
   w[19]=w[19]-w[70];
   w[19]=w[8]*w[19];
   w[20]=-w[42]*w[57];
   w[19]=w[20]+w[19];
   w[20]=w[207]*w[57];
   w[21]=w[20]+w[194];
   w[21]=w[21]*w[99];
   w[23]=w[208]*w[114];
   w[19]=2.E+0*w[23]+8.E+0*w[19]+w[21];
   w[19]=w[19]*w[202];
   w[21]=-w[2]*w[152]*w[85];
   w[23]=w[92]+w[53];
   w[23]=w[23]*w[99];
   w[18]=-8.E+0*w[18]+w[23];
   w[18]=w[18]*w[114];
   w[18]=w[21]+w[18];
   w[18]=w[3]*w[18];
   w[15]=w[15]+w[19]+w[17]+w[18];
   w[15]=w[4]*w[15];
   w[17]=w[102]+w[79];
   w[18]=-w[12]*w[17];
   w[14]=w[40]-w[14];
   w[14]=ss1*w[14];
   w[19]=-w[25]+w[82];
   w[19]=w[11]*w[19];
   w[14]=w[19]+w[18]+w[24]+w[14]-w[116];
   w[14]=w[6]*w[14];
   w[18]=-w[52]+w[60]-w[59];
   w[19]=w[11]*w[18];
   w[21]=-w[6]*w[102];
   w[19]=w[21]+w[19]-w[155];
   w[19]=w[8]*w[19];
   w[14]=w[14]+w[19];
   w[17]=w[17]*w[99]*w[6];
   w[14]=8.E+0*w[14]+w[17];
   w[14]=w[2]*w[14];
   w[17]=-w[92]-w[18];
   w[17]=w[8]*w[17];
   w[17]=w[83]+w[17];
   w[17]=8.E+0*w[17]-w[217];
   w[17]=w[3]*w[17];
   w[18]=w[165]*w[20];
   w[17]=w[18]+w[17];
   w[17]=w[3]*w[17];
   w[18]=-w[77]+w[97];
   w[18]=w[6]*w[18];
   w[18]=w[18]+w[70];
   w[19]=w[206]*w[91];
   w[19]=-2.E+0*w[104]+w[19];
   w[19]=w[19]*w[101];
   w[20]=-w[62]*w[99];
   w[18]=w[19]+8.E+0*w[18]+w[20];
   w[18]=w[3]*w[18];
   w[19]=-w[6]*w[31];
   w[19]=w[19]-w[200];
   w[19]=w[19]*w[213];
   w[20]=w[74]*w[175];
   w[18]=w[20]+w[173]+w[19]+w[18];
   w[18]=w[4]*w[18];
   w[19]=-w[27]+w[96];
   w[19]=w[6]*w[19];
   w[19]=w[178]+w[19];
   w[19]=w[2]*w[19];
   w[20]=w[215]-w[208];
   w[21]=-w[20]*w[210];
   w[23]=-w[3]*w[61]*w[212];
   w[19]=w[23]+w[19]+w[21];
   w[19]=w[19]*w[211];
   w[20]=w[6]*w[20];
   w[20]=w[20]+2.E+0*w[72];
   w[20]=w[20]*w[214];
   w[14]=w[19]+w[18]+w[20]+w[14]+w[17];
   w[14]=w[14]*w[157];
   w[14]=w[15]+w[14];
   w[14]=w[14]*w[34];


K23[SI_K23(ip,izp,0,iq,izq,0)] += wj * FCtr * w[14];
K23[SI_K23(ip,izp,0,iq,izq,1)] += wj * FCtr * w[22];
K23[SI_K23(ip,izp,0,iq,izq,2)] += wj * FCtr * w[37];
K23[SI_K23(ip,izp,1,iq,izq,0)] += wj * FCtr * w[47];
K23[SI_K23(ip,izp,1,iq,izq,1)] += wj * FCtr * w[35];
K23[SI_K23(ip,izp,1,iq,izq,2)] += wj * FCtr * w[16];
