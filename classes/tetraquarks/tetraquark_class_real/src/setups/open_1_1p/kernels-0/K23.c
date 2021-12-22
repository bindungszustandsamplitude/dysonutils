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
ampl = 0.5 * (
ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0037(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_0037(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_0037_0037(0,std::real(l_l+q_l+0.25*q_q))
+ns_data_v2::amplitudes::meson::vector::fit::m_7950_0037(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0037(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_0037_0037(0,std::real(l_l+q_l+0.25*q_q))
);
}
else
if(quark_1.getMass() == 0.0200){
ampl = 0.5 * (
ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0200(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_0200(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_0200_0200(0,std::real(l_l+q_l+0.25*q_q))
+ns_data_v2::amplitudes::meson::vector::fit::m_7950_0200(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0200(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_0200_0200(0,std::real(l_l+q_l+0.25*q_q))
);
}
else
if(quark_1.getMass() == 0.0500){
ampl = 0.5 * (
ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0500(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_0500(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_0500_0500(0,std::real(l_l+q_l+0.25*q_q))
+ns_data_v2::amplitudes::meson::vector::fit::m_7950_0500(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0500(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_0500_0500(0,std::real(l_l+q_l+0.25*q_q))
);
}
else
if(quark_1.getMass() == 0.0855){
ampl = 0.5 * (
ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0855(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_0855(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_0855_0855(0,std::real(l_l+q_l+0.25*q_q))
+ns_data_v2::amplitudes::meson::vector::fit::m_7950_0855(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_0855(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_0855_0855(0,std::real(l_l+q_l+0.25*q_q))
);
}
else
if(quark_1.getMass() == 0.1500){
ampl = 0.5 * (
ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_1500(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_1500(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_1500_1500(0,std::real(l_l+q_l+0.25*q_q))
+ns_data_v2::amplitudes::meson::vector::fit::m_7950_1500(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_1500(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_1500_1500(0,std::real(l_l+q_l+0.25*q_q))
);
}
else
if(quark_1.getMass() == 0.2100){
ampl = 0.5 * (
ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_2100(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_2100(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_2100_2100(0,std::real(l_l+q_l+0.25*q_q))
+ns_data_v2::amplitudes::meson::vector::fit::m_7950_2100(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_2100(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_2100_2100(0,std::real(l_l+q_l+0.25*q_q))
);
}
else
if(quark_1.getMass() == 0.3500){
ampl = 0.5 * (
ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_3500(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_3500(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_3500_3500(0,std::real(l_l+q_l+0.25*q_q))
+ns_data_v2::amplitudes::meson::vector::fit::m_7950_3500(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_3500(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_3500_3500(0,std::real(l_l+q_l+0.25*q_q))
);
}
else
if(quark_1.getMass() == 0.5000){
ampl = 0.5 * (
ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_5000(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_5000(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_5000_5000(0,std::real(l_l+q_l+0.25*q_q))
+ns_data_v2::amplitudes::meson::vector::fit::m_7950_5000(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_5000(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_5000_5000(0,std::real(l_l+q_l+0.25*q_q))
);
}
else
if(quark_1.getMass() == 0.6500){
ampl = 0.5 * (
ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_6500(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_6500(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_6500_6500(0,std::real(l_l+q_l+0.25*q_q))
+ns_data_v2::amplitudes::meson::vector::fit::m_7950_6500(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_6500(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_6500_6500(0,std::real(l_l+q_l+0.25*q_q))
);
}
else
if(quark_1.getMass() == 0.7950){
ampl = 0.5 * (
ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_7950(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_7950(0,std::real(l_l+q_l+0.25*q_q))
+ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_7950(0,std::real(l_l+q_l+0.25*q_q))
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
   w[15]=sv2*sv1;
   w[16]=sv4*ampl;
   w[17]=w[15]*w[16];
   w[18]=w[17]*w[11];
   w[16]=ss2*w[16]*ss1;
   w[19]=w[16]+w[18];
   w[19]=w[19]*ss3;
   w[20]=sv3*ampl;
   w[15]=w[15]*w[20];
   w[21]=w[15]*w[11];
   w[22]=w[20]*ss1;
   w[23]=w[22]*ss2;
   w[24]=w[23]+w[21];
   w[25]=w[24]*ss4;
   w[26]=w[19]-w[25];
   w[27]=sv1*ss2;
   w[20]=sv4*w[20]*w[27];
   w[22]=w[22]*sv2*sv4;
   w[28]=w[20]-w[22];
   w[29]=w[28]*w[7];
   w[30]=w[26]-w[29];
   w[17]=w[17]*ss3;
   w[15]=w[15]*ss4;
   w[31]=w[17]-w[15];
   w[32]=w[31]-w[28];
   w[33]=w[32]*w[9];
   w[34]=w[30]+w[33];
   w[34]=w[34]*w[6];
   w[27]=ampl*w[27];
   w[35]=ss1*sv2*ampl;
   w[36]=w[27]-w[35];
   w[36]=w[36]*ss3;
   w[36]=w[36]+w[24];
   w[36]=w[36]*ss4;
   w[37]=w[20]*w[11];
   w[38]=w[22]*w[11];
   w[39]=w[37]-w[38];
   w[40]=w[19]-w[39];
   w[41]=w[36]-w[40];
   w[42]=2.E+0*w[29];
   w[43]=w[41]+w[42];
   w[44]=w[43]-w[33];
   w[44]=w[44]*w[7];
   w[45]=w[35]*ss3;
   w[46]=w[45]-w[24];
   w[46]=w[46]*ss4;
   w[46]=w[46]+w[38];
   w[47]=2.E+0*w[22];
   w[48]=w[47]*w[7];
   w[49]=w[22]*w[6];
   w[48]=w[49]+w[48]+w[46];
   w[50]=w[48]*w[5];
   w[51]=w[15]-w[22];
   w[52]=w[51]*w[7];
   w[52]=w[52]-w[49];
   w[53]=w[52]*w[8];
   w[34]=-w[53]+w[50]+w[34]-w[44];
   w[44]=w[17]+w[15];
   w[50]=w[20]+w[22];
   w[54]=w[44]-w[50];
   w[55]=w[54]*w[7];
   w[56]=w[50]*w[6];
   w[57]=w[55]-w[56];
   w[58]=w[54]*w[5];
   w[57]=w[58]+2.E+0*w[57];
   w[57]=w[57]*w[10];
   w[34]=w[57]-4.E+0*w[34];
   w[57]=-w[28]-3.E+0*w[31];
   w[59]=w[57]*w[7];
   w[60]=w[31]*w[6];
   w[59]=w[59]-w[60];
   w[61]=5.E-1*w[17];
   w[62]=-w[61]+5.E-1*w[20];
   w[63]=w[15]+w[22];
   w[64]=w[62]+w[63];
   w[65]=w[64]*w[5];
   w[59]=w[65]+5.E-1*w[59];
   w[59]=w[59]*w[2];
   w[65]=w[31]-w[50];
   w[66]=w[65]*w[6];
   w[67]=w[66]+w[55];
   w[68]=2.E+0*w[3];
   w[67]=w[67]*w[68];
   w[34]=-w[59]+w[67]+2.E+0*w[34];
   w[34]=w[34]*w[3];
   w[59]=w[54]*w[9];
   w[67]=w[47]*w[5];
   w[69]=-w[59]+w[67]-w[42];
   w[69]=w[69]*w[5];
   w[70]=w[28]*w[6];
   w[71]=2.E+0*w[9];
   w[72]=w[70]*w[71];
   w[69]=w[69]+w[72];
   w[69]=w[69]*w[10];
   w[72]=w[47]*w[6];
   w[55]=w[72]-w[55];
   w[72]=w[8]*w[10];
   w[73]=w[72]*w[55];
   w[69]=w[69]-w[73];
   w[73]=w[33]*w[5];
   w[74]=w[32]*w[7];
   w[75]=w[74]*w[8];
   w[73]=w[73]-w[75];
   w[73]=w[73]*w[2];
   w[69]=-w[73]+4.E+0*w[69];
   w[34]=w[34]+2.E+0*w[69];
   w[69]=w[41]-w[33];
   w[69]=w[69]*w[9];
   w[73]=w[67]+w[26];
   w[75]=w[73]-w[42];
   w[76]=w[71]*w[51];
   w[77]=w[75]-w[76];
   w[77]=w[77]*w[5];
   w[78]=w[29]*w[71];
   w[79]=w[28]*w[9];
   w[80]=w[79]*w[6];
   w[77]=-w[77]-w[80]+w[69]+w[78];
   w[81]=w[50]*w[5];
   w[82]=w[59]-w[81];
   w[83]=w[82]*w[10];
   w[77]=w[83]+2.E+0*w[77];
   w[84]=w[44]-w[28];
   w[84]=w[84]*w[7];
   w[85]=w[51]*w[9];
   w[86]=w[22]*w[5];
   w[87]=w[85]-w[86];
   w[46]=w[84]-w[49]+w[46]-w[87];
   w[84]=w[54]*w[10];
   w[46]=-w[84]+4.E+0*w[46];
   w[46]=w[46]*w[8];
   w[46]=-w[46]+2.E+0*w[77];
   w[77]=2.E+0*w[7];
   w[88]=w[77]*w[54];
   w[89]=2.E+0*w[15];
   w[90]=w[89]*w[5];
   w[88]=w[88]-2.E+0*w[56]+w[90]-w[59];
   w[88]=w[88]*w[68];
   w[91]=w[57]*w[9];
   w[92]=w[31]*w[5];
   w[91]=w[91]-w[92];
   w[93]=5.E-1*w[91];
   w[94]=w[64]*w[8];
   w[94]=w[94]+w[93];
   w[94]=w[94]*w[2];
   w[46]=-w[88]-w[94]+2.E+0*w[46];
   w[88]=w[54]*w[8];
   w[95]=w[88]+2.E+0*w[82];
   w[96]=w[95]*w[4];
   w[97]=2.E+0*w[96]+w[46];
   w[97]=w[4]*w[97];
   w[97]=w[97]-w[34];
   w[98]=w[1]*i_;
   w[97]=w[97]*w[98];
   w[99]=w[17]-w[20];
   w[100]=-w[15]+3.E+0*w[22];
   w[101]=w[100]+w[99];
   w[101]=w[101]*w[9];
   w[30]=w[30]+w[101];
   w[30]=w[30]*w[6];
   w[76]=w[41]+w[76];
   w[42]=w[76]+w[42];
   w[102]=w[42]*w[7];
   w[55]=w[55]+w[87];
   w[55]=w[55]*w[5];
   w[30]=-w[102]-w[53]+w[30]+w[55];
   w[30]=w[30]*w[8];
   w[55]=w[76]*w[9];
   w[76]=w[47]-w[15];
   w[76]=w[76]*w[71];
   w[75]=w[75]+w[76];
   w[75]=w[75]*w[5];
   w[102]=w[29]*w[9];
   w[75]=w[75]+w[80]-w[55]-4.E+0*w[102];
   w[75]=w[75]*w[5];
   w[103]=pow(w[9],2);
   w[104]=w[103]*w[28];
   w[105]=w[104]*w[6];
   w[30]=-w[30]+w[75]+2.E+0*w[105];
   w[27]=w[27]+w[35];
   w[27]=w[27]*ss3;
   w[24]=w[27]+w[24];
   w[24]=w[24]*ss4;
   w[35]=w[37]+w[38];
   w[75]=w[24]+w[35]+w[19];
   w[106]=w[77]*w[44];
   w[107]=4.E+0*w[15];
   w[108]=w[107]*w[9];
   w[90]=w[108]+w[90];
   w[106]=-w[56]+w[75]+w[106]+w[90];
   w[106]=w[106]*w[5];
   w[108]=w[77]*w[99];
   w[108]=w[108]+w[66];
   w[109]=w[63]*w[5];
   w[110]=w[108]+w[109];
   w[110]=w[110]*w[8];
   w[111]=w[59]*w[7];
   w[112]=w[56]*w[9];
   w[111]=w[112]-w[111];
   w[106]=w[106]+w[110]-2.E+0*w[111];
   w[110]=w[31]+w[28];
   w[112]=w[110]*w[7];
   w[113]=w[112]-w[109];
   w[113]=w[113]*w[3];
   w[114]=w[44]+w[50];
   w[115]=w[114]*w[2];
   w[116]=1.25E-1*w[115];
   w[117]=w[116]*w[5];
   w[113]=w[113]-w[117]+2.E+0*w[106];
   w[113]=w[113]*w[3];
   w[113]=w[113]+8.E+0*w[30];
   w[118]=w[60]+w[74];
   w[119]=w[118]*w[8];
   w[120]=w[92]+w[33];
   w[121]=w[120]*w[5];
   w[119]=w[119]-w[121];
   w[122]=5.E-1*w[2];
   w[123]=-w[119]*w[122];
   w[75]=w[75]+w[56];
   w[124]=2.E+0*w[50];
   w[125]=w[124]*w[7];
   w[125]=w[125]+w[75];
   w[126]=w[89]+w[99];
   w[127]=w[126]*w[71];
   w[127]=w[127]+w[125];
   w[128]=w[127]+w[58];
   w[129]=w[63]*w[8];
   w[130]=w[128]+w[129];
   w[131]=w[130]*w[8];
   w[124]=w[124]-w[44];
   w[132]=w[124]*w[9];
   w[133]=w[132]+w[81];
   w[133]=w[133]*w[5];
   w[134]=w[103]*w[54];
   w[133]=w[133]-w[134];
   w[131]=w[131]-2.E+0*w[133];
   w[135]=w[110]*w[9];
   w[136]=w[135]-w[129];
   w[137]=w[136]*w[3];
   w[138]=w[116]*w[8];
   w[137]=2.E+0*w[131]+w[137]-w[138];
   w[139]=w[4]*w[137];
   w[123]=w[139]+w[123]-w[113];
   w[139]=w[12]*i_;
   w[123]=w[123]*w[139];
   w[97]=w[97]+w[123];
   w[123]=PDQ2m*PDQ1p;
   w[97]=w[123]*w[4]*w[97];
   w[27]=w[27]+w[23];
   w[140]=w[27]+1.666666666E+0*w[21];
   w[140]=w[140]*ss4;
   w[141]=w[50]-w[17];
   w[142]=w[141]+w[89];
   w[143]=6.666666666E-1*w[5];
   w[142]=w[142]*w[143];
   w[143]=6.666666666E-1*w[7];
   w[114]=w[143]*w[114];
   w[144]=w[16]+1.666666666E+0*w[18];
   w[144]=w[144]*ss3;
   w[145]=w[89]+w[22];
   w[146]=1.333333333E+0*w[9];
   w[145]=w[145]*w[146];
   w[147]=3.333333333E-1*w[56];
   w[35]=w[142]+w[114]+3.333333333E-1*w[35]+w[145]+w[147]+w[140]+w[144];
   w[114]=2.E+0*w[5];
   w[140]=-w[35]*w[114];
   w[142]=3.333333333E-1*w[5];
   w[144]=w[142]*w[10];
   w[145]=-w[110]*w[144];
   w[148]=w[3]*w[126]*w[142];
   w[117]=w[148]+w[117]+w[140]+w[145];
   w[117]=w[3]*w[117];
   w[140]=w[39]+w[29];
   w[145]=3.333333333E-1*w[17];
   w[148]=3.333333333E-1*w[20];
   w[149]=w[145]-w[148];
   w[150]=w[149]+w[22];
   w[151]=6.666666666E-1*w[15];
   w[152]=w[151]-w[150];
   w[152]=w[152]*w[71];
   w[153]=6.666666666E-1*w[86];
   w[152]=-w[152]+w[153]+w[26]-6.666666666E-1*w[140];
   w[152]=w[152]*w[5];
   w[154]=-w[99]+w[89]-w[47];
   w[155]=6.666666666E-1*w[9];
   w[154]=w[154]*w[155];
   w[154]=w[154]+w[41];
   w[154]=w[154]*w[9];
   w[155]=w[146]*w[29];
   w[152]=-w[155]-3.333333333E-1*w[80]+w[152]-w[154];
   w[154]=-w[152]*w[114];
   w[155]=w[82]*w[144];
   w[154]=w[154]+w[155];
   w[155]=w[28]-5.E+0*w[31];
   w[156]=3.333333333E-1*w[9];
   w[155]=w[155]*w[156];
   w[155]=w[155]-w[92];
   w[156]=w[122]*w[5];
   w[157]=-w[155]*w[156];
   w[158]=w[82]*w[4];
   w[158]=1.333333333E+0*w[158];
   w[159]=w[5]*w[158];
   w[117]=w[159]+w[117]+4.E+0*w[154]+w[157];
   w[154]=w[13]*w[4];
   w[117]=w[117]*w[154];
   w[23]=w[23]-w[45]+6.666666666E-1*w[21];
   w[23]=w[23]*ss4;
   w[45]=w[17]*w[11];
   w[37]=-w[37]+w[45]+2.E+0*w[38];
   w[23]=-w[23]+3.333333333E-1*w[37];
   w[37]=3.333333333E-1*w[15];
   w[38]=w[150]+w[37];
   w[38]=w[38]*w[7];
   w[38]=w[38]+w[23]+3.333333333E-1*w[49];
   w[45]=w[38]-w[87];
   w[157]=-w[45]*w[114];
   w[159]=w[51]*w[10];
   w[160]=w[159]*w[142];
   w[157]=w[157]+w[160];
   w[161]=-w[89]+5.E-1*w[99];
   w[162]=w[2]*w[161]*w[142];
   w[163]=6.666666666E-1*w[4];
   w[164]=w[58]*w[163];
   w[165]=w[63]*w[3];
   w[166]=-w[114]*w[165];
   w[157]=w[164]+w[166]+4.E+0*w[157]+w[162];
   w[157]=w[4]*w[157];
   w[117]=w[157]+w[117];
   w[157]=w[123]*i_;
   w[117]=w[117]*w[157];
   w[162]=w[21]+3.333333333E-1*w[27];
   w[162]=w[162]*ss4;
   w[162]=w[162]+3.333333333E-1*w[40];
   w[164]=w[51]-w[17];
   w[164]=w[164]*w[143];
   w[164]=w[164]-w[162]-w[147];
   w[164]=w[164]*w[5];
   w[166]=2.E+0*w[20];
   w[167]=w[166]-w[89];
   w[168]=w[17]-w[22];
   w[169]=w[167]+w[168];
   w[170]=w[7]*w[9];
   w[171]=w[170]*w[169];
   w[172]=w[166]-w[22];
   w[173]=w[6]*w[9];
   w[172]=w[172]*w[173];
   w[171]=w[172]+w[171];
   w[164]=-w[164]+6.666666666E-1*w[171];
   w[167]=w[167]-w[168];
   w[171]=3.333333333E-1*w[7];
   w[172]=w[167]*w[171];
   w[174]=5.E-1*w[56];
   w[172]=w[172]+w[174];
   w[172]=w[172]*w[3];
   w[175]=w[15]-w[20];
   w[176]=w[144]*w[175];
   w[177]=4.166666666E-2*w[115];
   w[178]=w[177]*w[5];
   w[164]=-w[172]-w[176]-w[178]+2.E+0*w[164];
   w[164]=w[164]*w[3];
   w[166]=-w[15]+w[166]+w[168];
   w[172]=w[5]*w[9];
   w[166]=w[166]*w[172];
   w[169]=w[169]*w[103];
   w[166]=w[166]+w[169];
   w[167]=w[167]*w[9];
   w[176]=w[114]*w[50];
   w[167]=w[167]+w[176];
   w[167]=w[167]*w[3];
   w[166]=-w[167]+4.E+0*w[166];
   w[167]=3.333333333E-1*w[4];
   w[166]=w[166]*w[167];
   w[179]=w[41]*w[9];
   w[25]=w[40]-w[25];
   w[40]=w[25]*w[5];
   w[40]=-w[40]+w[179]+w[80];
   w[40]=w[40]*w[5];
   w[40]=w[40]+w[105];
   w[180]=w[175]*w[9];
   w[181]=w[20]*w[5];
   w[180]=w[181]-w[180];
   w[181]=w[10]*w[5];
   w[180]=w[180]*w[181];
   w[40]=-w[180]+2.E+0*w[40];
   w[180]=w[31]+w[50];
   w[182]=w[180]*w[142];
   w[183]=w[50]+w[17];
   w[183]=-w[15]+3.333333333E-1*w[183];
   w[184]=w[183]*w[9];
   w[182]=w[182]+w[184];
   w[182]=w[182]*w[156];
   w[40]=w[182]-w[164]+w[166]+1.333333333E+0*w[40];
   w[40]=w[40]*w[154];
   w[19]=w[36]+w[140]-w[19];
   w[36]=w[19]*w[7];
   w[140]=w[26]-w[140];
   w[164]=w[135]+w[140];
   w[166]=w[164]*w[6];
   w[182]=w[112]+w[87];
   w[182]=w[182]*w[5];
   w[36]=w[182]+w[36]-w[166];
   w[166]=w[175]*w[7];
   w[182]=w[20]*w[6];
   w[166]=w[182]-w[166];
   w[166]=w[166]*w[10];
   w[36]=-w[166]+2.E+0*w[36];
   w[53]=2.E+0*w[53];
   w[166]=-w[53]+w[36];
   w[182]=w[142]*w[110];
   w[182]=w[162]+w[182]+6.666666666E-1*w[135];
   w[184]=w[143]*w[22];
   w[184]=w[184]+w[182]+w[147];
   w[185]=3.333333333E-1*w[10];
   w[186]=w[185]*w[175];
   w[187]=w[50]*w[4];
   w[188]=1.666666666E-1*w[187];
   w[184]=-w[177]+w[188]-w[186]+2.E+0*w[184];
   w[186]=6.666666666E-1*w[129];
   w[189]=w[186]-w[184];
   w[189]=w[4]*w[189];
   w[180]=w[180]*w[6];
   w[183]=w[183]*w[7];
   w[180]=w[183]+3.333333333E-1*w[180];
   w[180]=w[180]*w[122];
   w[77]=w[77]+w[6];
   w[77]=w[77]*w[110];
   w[77]=w[77]-w[109];
   w[183]=6.666666666E-1*w[3];
   w[77]=w[77]*w[183];
   w[77]=w[77]+w[180];
   w[166]=w[189]+1.333333333E+0*w[166]+w[77];
   w[166]=w[4]*w[166];
   w[166]=w[166]-w[40];
   w[180]=PDQ2Lm*PDQ1p*i_;
   w[166]=w[166]*w[180];
   w[189]=w[32]*w[71];
   w[190]=w[25]+w[189];
   w[190]=w[190]*w[5];
   w[41]=w[189]-w[41];
   w[41]=w[41]*w[9];
   w[190]=w[190]+w[41]-w[80];
   w[190]=w[190]*w[5];
   w[190]=w[190]-w[105];
   w[191]=w[168]*w[9];
   w[86]=w[191]-w[86];
   w[86]=w[86]*w[181];
   w[86]=-w[86]+2.E+0*w[190];
   w[24]=w[24]+w[39];
   w[39]=w[18]+3.333333333E-1*w[16];
   w[39]=w[39]*ss3;
   w[146]=w[146]*w[63];
   w[24]=w[39]+w[146]+3.333333333E-1*w[24];
   w[39]=w[65]*w[5];
   w[146]=-w[24]+6.666666666E-1*w[39];
   w[190]=w[99]-w[15];
   w[190]=w[190]*w[143];
   w[190]=w[190]+w[146]-w[147];
   w[190]=w[190]*w[5];
   w[191]=2.E+0*w[17];
   w[192]=w[191]-w[47];
   w[193]=w[192]-w[175];
   w[170]=w[170]*w[193];
   w[194]=w[47]-w[20];
   w[173]=w[194]*w[173];
   w[170]=w[170]-w[173];
   w[170]=w[190]+6.666666666E-1*w[170];
   w[173]=w[142]*w[54];
   w[190]=w[192]+w[175];
   w[192]=w[190]*w[171];
   w[173]=w[173]+w[192]-w[174];
   w[173]=w[173]*w[3];
   w[144]=w[144]*w[168];
   w[144]=w[173]-w[144]+w[178]+2.E+0*w[170];
   w[144]=w[144]*w[3];
   w[170]=w[194]-w[31];
   w[170]=w[170]*w[172];
   w[103]=w[193]*w[103];
   w[170]=w[170]-w[103];
   w[172]=w[190]*w[9];
   w[172]=w[172]-w[176];
   w[172]=w[172]*w[3];
   w[170]=-w[172]+4.E+0*w[170];
   w[170]=w[170]*w[167];
   w[172]=-w[17]+w[37]+3.333333333E-1*w[50];
   w[173]=w[172]*w[9];
   w[174]=w[65]*w[142];
   w[173]=w[174]-w[173];
   w[156]=w[173]*w[156];
   w[86]=-1.333333333E+0*w[86]+w[144]+w[170]+w[156];
   w[86]=w[86]*w[154];
   w[144]=w[140]+w[33];
   w[154]=w[144]*w[6];
   w[156]=w[19]-w[189];
   w[170]=w[156]*w[7];
   w[74]=w[74]+w[87];
   w[74]=w[74]*w[5];
   w[74]=w[74]+w[154]-w[170];
   w[154]=w[168]*w[7];
   w[154]=w[154]-w[49];
   w[154]=w[154]*w[10];
   w[74]=-w[154]+2.E+0*w[74];
   w[53]=w[53]-w[74];
   w[154]=-w[149]+w[37]+w[22];
   w[154]=w[154]*w[5];
   w[24]=w[154]+w[24];
   w[143]=w[143]*w[20];
   w[143]=w[143]+w[24]+w[147];
   w[147]=3.333333333E-1*w[3];
   w[154]=w[147]*w[54];
   w[154]=w[154]+w[177];
   w[170]=w[185]*w[168];
   w[143]=w[170]-w[154]-w[188]+2.E+0*w[143];
   w[170]=-w[186]-w[143];
   w[170]=w[4]*w[170];
   w[172]=w[172]*w[7];
   w[66]=-w[172]+3.333333333E-1*w[66];
   w[66]=w[66]*w[122];
   w[172]=w[32]*w[6];
   w[172]=w[172]+w[109];
   w[172]=w[172]*w[183];
   w[66]=w[66]+w[172];
   w[53]=w[170]+1.333333333E+0*w[53]+w[66];
   w[53]=w[4]*w[53];
   w[53]=w[53]-w[86];
   w[170]=PDQ1Lp*PDQ2m*i_;
   w[53]=w[53]*w[170];
   w[53]=w[53]+w[166]+w[117];
   w[90]=w[90]+w[125];
   w[117]=w[165]+w[116];
   w[125]=w[110]*w[10];
   w[166]=2.E+0*w[129];
   w[90]=-2.E+0*w[90]-w[125]+w[117]-w[166];
   w[90]=w[90]*w[3];
   w[76]=w[76]+w[73];
   w[76]=w[76]*w[5];
   w[78]=w[78]+w[80];
   w[55]=w[76]-w[78]-w[55];
   w[59]=w[58]+w[59];
   w[59]=w[59]*w[10];
   w[76]=w[99]*w[10];
   w[172]=2.E+0*w[87];
   w[76]=w[76]-w[172];
   w[76]=w[76]*w[8];
   w[55]=w[76]+w[59]+2.E+0*w[55];
   w[59]=w[90]-4.E+0*w[55];
   w[76]=-w[93]-5.E+0*w[129];
   w[76]=w[2]*w[76];
   w[76]=w[76]+w[59];
   w[76]=w[3]*w[76];
   w[90]=1.E+1*w[15]+w[99];
   w[90]=w[90]*w[71];
   w[173]=9.E+0*w[15]-w[141];
   w[173]=w[5]*w[173];
   w[174]=w[50]*w[7];
   w[75]=w[173]+1.E+1*w[174]+w[90]+5.E+0*w[75];
   w[90]=-9.E+0*w[28]-7.E+0*w[31];
   w[173]=5.E-1*w[10];
   w[178]=-w[90]*w[173];
   w[75]=-6.25E-1*w[115]+1.E+1*w[129]+2.E+0*w[75]+w[178];
   w[75]=w[8]*w[75];
   w[178]=4.E+0*w[133];
   w[75]=-w[178]+w[75];
   w[75]=w[2]*w[75];
   w[188]=w[58]+w[42]+w[70];
   w[188]=w[188]*w[10];
   w[190]=w[159]*w[8];
   w[192]=w[188]+w[190];
   w[192]=w[192]*w[8];
   w[193]=w[28]*w[5];
   w[194]=w[193]+w[79];
   w[195]=w[10]*w[194]*w[114];
   w[192]=w[192]-w[195];
   w[195]=8.E+0*w[192];
   w[75]=w[76]-w[195]+w[75];
   w[75]=w[3]*w[75];
   w[76]=8.E+0*w[8];
   w[55]=w[55]*w[76];
   w[91]=w[166]+w[91];
   w[196]=w[2]*w[8];
   w[91]=w[91]*w[196];
   w[55]=w[55]+w[91];
   w[91]=2.E+0*w[2];
   w[55]=w[55]*w[91];
   w[55]=w[55]+w[75];
   w[55]=w[3]*w[55];
   w[75]=w[32]*w[10];
   w[130]=w[75]-4.E+0*w[130];
   w[130]=w[8]*w[130];
   w[130]=8.E+0*w[133]+w[130];
   w[130]=w[8]*w[130];
   w[197]=5.E-1*w[115];
   w[198]=pow(w[8],2);
   w[199]=w[197]*w[198];
   w[130]=2.E+0*w[130]+w[199];
   w[130]=w[2]*w[130];
   w[192]=w[8]*w[192];
   w[130]=3.2E+1*w[192]+w[130];
   w[130]=w[2]*w[130];
   w[192]=w[50]*w[9];
   w[192]=w[192]+w[81];
   w[65]=w[65]*w[8];
   w[65]=-w[65]+2.E+0*w[192];
   w[192]=w[65]*w[68];
   w[200]=w[22]*w[8];
   w[73]=w[73]+w[101]+w[200];
   w[73]=w[73]*w[8];
   w[101]=w[79]*w[5];
   w[101]=w[101]+w[104];
   w[73]=w[73]-2.E+0*w[101];
   w[104]=w[122]*w[31];
   w[201]=w[104]*w[8];
   w[192]=w[192]-w[201]+8.E+0*w[73];
   w[201]=w[3]*w[192];
   w[65]=w[65]*w[196];
   w[65]=-8.E+0*w[65]+w[201];
   w[65]=w[3]*w[65];
   w[201]=1.6E+1*w[8];
   w[73]=-w[73]*w[201];
   w[202]=w[31]*w[2];
   w[198]=w[198]*w[202];
   w[73]=w[73]+w[198];
   w[73]=w[73]*w[91];
   w[65]=w[73]+w[65];
   w[65]=w[4]*w[65];
   w[55]=w[65]+w[130]+w[55];
   w[55]=w[14]*w[55];
   w[65]=w[5]*w[144];
   w[65]=w[65]-w[69]-w[102];
   w[73]=-w[54]*w[71];
   w[130]=w[5]*w[124];
   w[73]=w[73]+w[130];
   w[73]=w[10]*w[73];
   w[65]=4.E+0*w[65]+w[73];
   w[21]=w[27]+2.E+0*w[21];
   w[21]=w[21]*ss4;
   w[16]=w[16]+2.E+0*w[18];
   w[16]=w[16]*ss3;
   w[18]=w[71]*w[63];
   w[16]=w[18]-w[39]+w[21]+w[16];
   w[18]=w[7]*w[44];
   w[18]=w[18]+w[16];
   w[21]=2.5E-1*w[115];
   w[27]=-w[3]*w[54];
   w[18]=w[27]+4.E+0*w[18]-w[21];
   w[18]=w[3]*w[18];
   w[27]=-w[2]*w[120];
   w[18]=w[18]+4.E+0*w[65]+w[27];
   w[18]=w[3]*w[18];
   w[27]=-w[2]*w[133];
   w[44]=w[194]*w[181];
   w[44]=4.E+0*w[44];
   w[27]=w[44]+w[27];
   w[65]=w[132]+w[176];
   w[65]=w[3]*w[65];
   w[65]=-4.E+0*w[101]+w[65];
   w[73]=4.E+0*w[4];
   w[65]=w[65]*w[73];
   w[18]=w[65]+4.E+0*w[27]+w[18];
   w[18]=w[13]*w[18];
   w[27]=-2.E+0*w[128]+5.E-1*w[75];
   w[65]=-w[116]-w[27];
   w[65]=w[2]*w[65];
   w[18]=w[18]-8.E+0*w[188]+w[65];
   w[65]=w[150]-w[37];
   w[65]=w[65]*w[9];
   w[65]=w[65]+3.333333333E-1*w[26];
   w[115]=w[153]+w[65];
   w[120]=w[141]*w[3];
   w[128]=1.666666666E-1*w[202];
   w[115]=1.333333333E+0*w[120]+8.E+0*w[115]-w[128];
   w[115]=w[4]*w[115];
   w[85]=-w[153]+6.666666666E-1*w[85];
   w[38]=w[38]-w[85];
   w[130]=3.333333333E-1*w[84];
   w[38]=2.E+0*w[38]-w[130];
   w[62]=w[51]+w[62];
   w[132]=3.333333333E-1*w[2];
   w[62]=w[62]*w[132];
   w[38]=1.333333333E+0*w[165]+4.E+0*w[38]+w[62];
   w[38]=w[3]*w[38];
   w[18]=w[115]+w[38]+3.333333333E-1*w[18];
   w[18]=w[13]*w[18];
   w[38]=w[63]*w[2];
   w[62]=w[73]*w[22];
   w[38]=-w[62]-w[38]+4.E+0*w[159];
   w[38]=6.666666666E-1*w[38];
   w[18]=w[18]-w[38]+w[55];
   w[18]=i_*w[18];
   w[55]=w[71]*w[99];
   w[62]=w[55]-w[67];
   w[67]=w[62]+w[26];
   w[115]=w[124]*w[10];
   w[47]=w[47]*w[8];
   w[47]=w[120]+2.E+0*w[67]+w[47]+w[115];
   w[47]=-w[104]+4.E+0*w[47];
   w[47]=w[47]*w[3];
   w[67]=w[100]-w[99];
   w[67]=w[67]*w[72];
   w[72]=w[193]-w[79];
   w[100]=2.E+0*w[10];
   w[72]=w[72]*w[100];
   w[67]=w[67]+w[72];
   w[72]=w[95]*w[2];
   w[67]=w[72]+4.E+0*w[67];
   w[72]=w[200]-w[79];
   w[79]=w[50]*w[3];
   w[72]=w[79]+4.E+0*w[72];
   w[72]=w[72]*w[73];
   w[47]=w[72]+w[47]+2.E+0*w[67];
   w[47]=w[47]*w[4];
   w[43]=-w[70]+w[62]-w[43];
   w[43]=-w[84]+2.E+0*w[43];
   w[43]=w[43]*w[10];
   w[62]=2.E+0*w[190];
   w[43]=w[43]-w[62];
   w[67]=-w[84]+2.E+0*w[48];
   w[64]=w[64]*w[2];
   w[64]=w[64]+4.E+0*w[67];
   w[64]=w[64]*w[3];
   w[39]=w[55]+w[39];
   w[55]=w[173]*w[57];
   w[39]=w[55]+2.E+0*w[39];
   w[39]=w[39]*w[2];
   w[39]=w[64]+w[39]+4.E+0*w[43];
   w[39]=w[39]*w[3];
   w[26]=w[26]+w[33];
   w[26]=w[26]*w[5];
   w[26]=w[26]-w[78]-w[69];
   w[43]=w[48]-w[87];
   w[43]=-w[159]+2.E+0*w[43];
   w[43]=w[43]*w[8];
   w[26]=-w[83]+w[43]+2.E+0*w[26];
   w[26]=w[94]+4.E+0*w[26];
   w[26]=w[26]*w[2];
   w[43]=w[114]*w[28];
   w[43]=w[43]-w[88];
   w[43]=w[43]*pow(w[10],2);
   w[26]=w[47]+8.E+0*w[43]-w[26]+w[39];
   w[39]=w[139]*w[3]*w[26];
   w[18]=w[18]+w[39];
   w[18]=w[18]*w[123];
   w[39]=w[140]*w[5];
   w[39]=-w[39]+w[179]+w[102];
   w[43]=3.333333333E-1*w[22];
   w[47]=w[43]+w[20];
   w[48]=6.666666666E-1*w[17];
   w[55]=-1.333333333E+0*w[15]+w[47]+w[48];
   w[55]=w[55]*w[5];
   w[57]=w[175]+w[43]-w[145];
   w[57]=w[57]*w[71];
   w[55]=w[57]-w[55];
   w[55]=w[55]*w[10];
   w[39]=w[55]+1.333333333E+0*w[39];
   w[55]=w[89]-w[28];
   w[55]=w[55]*w[171];
   w[57]=w[55]+w[162];
   w[57]=w[130]-w[177]+2.E+0*w[57];
   w[57]=w[57]*w[3];
   w[43]=-w[99]+w[43]-w[37];
   w[64]=5.E-1*w[9];
   w[43]=w[43]*w[64];
   w[15]=-w[61]+5.E-1*w[15];
   w[61]=w[15]+w[50];
   w[61]=w[61]*w[142];
   w[43]=w[43]+w[61];
   w[43]=w[43]*w[2];
   w[39]=-w[43]-w[57]+2.E+0*w[39];
   w[39]=w[39]*w[3];
   w[43]=-w[22]+5.E+0*w[20];
   w[57]=w[191]+w[43]-w[107];
   w[57]=w[57]*w[9];
   w[57]=w[57]+w[81];
   w[57]=w[57]*w[5];
   w[57]=w[57]+2.E+0*w[169];
   w[57]=w[57]*w[2];
   w[57]=w[57]-w[44];
   w[43]=w[43]-w[89];
   w[43]=w[43]*w[9];
   w[43]=w[43]+w[176];
   w[43]=-w[79]+2.E+0*w[43];
   w[43]=w[43]*w[3];
   w[61]=8.E+0*w[101];
   w[43]=w[43]-w[61];
   w[43]=w[43]*w[167];
   w[39]=-w[43]+w[39]+6.666666666E-1*w[57];
   w[39]=w[39]*w[13];
   w[43]=w[125]+w[172];
   w[43]=-w[165]+2.E+0*w[43];
   w[43]=w[43]*w[183];
   w[39]=w[39]-w[43];
   w[43]=w[55]+w[182];
   w[55]=w[177]+1.666666666E-1*w[75];
   w[43]=-w[55]+2.E+0*w[43];
   w[57]=w[2]*w[43];
   w[47]=w[47]-w[151];
   w[47]=w[47]*w[10];
   w[47]=w[47]+1.333333333E+0*w[164];
   w[67]=w[183]*w[110];
   w[70]=-w[128]+6.666666666E-1*w[187];
   w[67]=w[67]-w[70];
   w[72]=2.E+0*w[47]-w[67];
   w[72]=w[4]*w[72];
   w[73]=w[110]*w[5];
   w[19]=w[73]+w[19];
   w[73]=w[175]*w[10];
   w[19]=w[73]+2.E+0*w[19];
   w[73]=1.333333333E+0*w[10];
   w[75]=-w[19]*w[73];
   w[57]=w[72]+w[75]+w[57]+w[39];
   w[57]=w[13]*w[57];
   w[57]=w[38]+w[57];
   w[57]=w[57]*w[180];
   w[37]=-w[168]+w[37]-w[148];
   w[37]=w[37]*w[71];
   w[72]=w[148]+w[22];
   w[75]=-1.333333333E+0*w[17]+w[72]+w[151];
   w[75]=w[75]*w[5];
   w[37]=w[37]+w[75];
   w[37]=w[37]*w[10];
   w[75]=w[189]+w[140];
   w[75]=w[75]*w[5];
   w[41]=w[75]+w[41]-w[102];
   w[37]=w[37]+1.333333333E+0*w[41];
   w[28]=w[191]+w[28];
   w[28]=w[28]*w[171];
   w[41]=w[28]-w[146];
   w[41]=-w[154]-w[130]+2.E+0*w[41];
   w[41]=w[41]*w[3];
   w[15]=w[15]-w[50];
   w[15]=w[15]*w[142];
   w[50]=w[149]+w[51];
   w[50]=w[50]*w[64];
   w[15]=w[15]+w[50];
   w[15]=w[15]*w[2];
   w[15]=w[41]+w[15]+2.E+0*w[37];
   w[15]=w[15]*w[3];
   w[20]=-w[20]+5.E+0*w[22];
   w[17]=-4.E+0*w[17]+w[20]+w[89];
   w[17]=w[17]*w[9];
   w[17]=w[17]+w[81];
   w[17]=w[17]*w[5];
   w[17]=w[17]-2.E+0*w[103];
   w[17]=w[17]*w[2];
   w[17]=w[17]-w[44];
   w[20]=w[20]-w[191];
   w[20]=w[20]*w[9];
   w[20]=w[20]+w[176];
   w[20]=w[79]+2.E+0*w[20];
   w[20]=w[20]*w[3];
   w[20]=w[20]-w[61];
   w[20]=w[20]*w[167];
   w[15]=-w[20]-w[15]+6.666666666E-1*w[17];
   w[15]=w[15]*w[13];
   w[17]=w[54]*w[2];
   w[20]=2.E+0*w[165];
   w[17]=-w[20]-w[17]+8.E+0*w[87];
   w[17]=w[17]*w[147];
   w[15]=w[15]+w[17];
   w[17]=w[24]+w[28];
   w[17]=-w[55]+2.E+0*w[17];
   w[24]=w[2]*w[17];
   w[28]=w[72]-w[48];
   w[28]=w[28]*w[10];
   w[28]=w[28]+1.333333333E+0*w[144];
   w[37]=w[183]*w[32];
   w[37]=w[37]-w[70];
   w[41]=2.E+0*w[28]-w[37];
   w[41]=w[4]*w[41];
   w[32]=w[32]*w[5];
   w[32]=w[32]-w[156];
   w[44]=w[168]*w[10];
   w[32]=-w[44]+2.E+0*w[32];
   w[44]=w[32]*w[73];
   w[24]=w[41]+w[44]+w[24]+w[15];
   w[24]=w[13]*w[24];
   w[24]=-w[38]+w[24];
   w[24]=w[24]*w[170];
   w[18]=w[24]+w[57]+w[18];
   w[24]=w[26]*w[98];
   w[26]=-w[93]-w[129];
   w[26]=w[2]*w[26];
   w[26]=w[26]+w[59];
   w[26]=w[3]*w[26];
   w[27]=w[166]-w[27];
   w[27]=w[8]*w[27];
   w[27]=-w[138]-w[178]+w[27];
   w[27]=w[2]*w[27];
   w[38]=w[4]*w[192];
   w[26]=w[38]+w[26]-w[195]+w[27];
   w[26]=w[26]*w[139];
   w[24]=w[24]+w[26];
   w[24]=w[24]*w[123];
   w[26]=-w[110]*w[185];
   w[27]=w[126]*w[147];
   w[26]=w[27]+w[116]-2.E+0*w[35]+w[26];
   w[26]=w[3]*w[26];
   w[27]=w[82]*w[185];
   w[27]=-2.E+0*w[152]+w[27];
   w[35]=-w[155]*w[122];
   w[26]=w[158]+w[26]+4.E+0*w[27]+w[35];
   w[26]=w[13]*w[26];
   w[27]=-2.E+0*w[45]+3.333333333E-1*w[159];
   w[35]=w[161]*w[132];
   w[20]=w[26]-w[20]+4.E+0*w[27]+w[35];
   w[20]=w[3]*w[20];
   w[26]=w[4]*w[54]*w[183];
   w[20]=w[26]+w[20];
   w[20]=w[20]*w[157];
   w[26]=w[186]-w[43];
   w[26]=w[2]*w[26];
   w[27]=1.333333333E+0*w[200];
   w[35]=w[27]-w[47];
   w[35]=2.E+0*w[35]+w[67];
   w[35]=w[4]*w[35];
   w[19]=w[10]*w[19];
   w[19]=w[19]-w[62];
   w[19]=w[35]+1.333333333E+0*w[19]+w[26]-w[39];
   w[19]=w[19]*w[180];
   w[17]=-w[186]-w[17];
   w[17]=w[2]*w[17];
   w[26]=-w[27]-w[28];
   w[26]=2.E+0*w[26]+w[37];
   w[26]=w[4]*w[26];
   w[27]=-w[10]*w[32];
   w[27]=w[27]+w[62];
   w[15]=w[26]+1.333333333E+0*w[27]+w[17]-w[15];
   w[15]=w[15]*w[170];
   w[15]=w[15]+w[19]+w[20];
   w[17]=w[30]*w[201];
   w[19]=w[119]*w[196];
   w[17]=w[17]+w[19];
   w[17]=w[17]*w[91];
   w[19]=-w[7]*w[90];
   w[19]=w[19]-w[60];
   w[19]=5.E-1*w[19]-4.E+0*w[109];
   w[19]=w[8]*w[19];
   w[19]=5.E-1*w[121]+w[19];
   w[19]=w[2]*w[19];
   w[19]=w[19]-w[113];
   w[19]=w[3]*w[19];
   w[20]=w[106]*w[76];
   w[26]=-w[8]*w[5]*w[197];
   w[20]=w[20]+w[26];
   w[20]=w[2]*w[20];
   w[19]=w[20]+w[19];
   w[19]=w[3]*w[19];
   w[20]=-w[131]*w[76];
   w[20]=w[20]+w[199];
   w[20]=w[2]*w[20];
   w[26]=w[3]*w[137];
   w[27]=w[136]*w[196];
   w[26]=-4.E+0*w[27]+w[26];
   w[26]=w[3]*w[26];
   w[20]=w[20]+w[26];
   w[20]=w[4]*w[20];
   w[17]=w[20]+w[17]+w[19];
   w[17]=w[14]*w[4]*w[17];
   w[19]=-w[42]*w[171];
   w[20]=-3.333333333E-1*w[29]+w[65];
   w[20]=w[6]*w[20];
   w[22]=w[7]*w[22];
   w[22]=w[49]+1.333333333E+0*w[22]+w[23]-w[85];
   w[22]=w[5]*w[22];
   w[19]=w[22]+w[19]+w[20];
   w[19]=2.E+0*w[19]-w[160];
   w[20]=-w[5]*w[161];
   w[20]=-5.E-1*w[118]+w[20];
   w[20]=w[20]*w[132];
   w[22]=w[63]*w[114];
   w[22]=w[22]-w[108];
   w[22]=w[22]*w[183];
   w[23]=2.E+0*w[127]-w[117];
   w[23]=w[23]*w[167];
   w[19]=w[23]+w[22]+4.E+0*w[19]+w[20];
   w[19]=w[4]*w[19];
   w[16]=w[56]+w[174]+w[16];
   w[16]=w[5]*w[16];
   w[16]=w[16]+w[111];
   w[20]=-w[112]-w[58];
   w[20]=w[3]*w[20];
   w[22]=w[110]*w[181];
   w[21]=-w[5]*w[21];
   w[16]=w[20]+w[21]+4.E+0*w[16]+w[22];
   w[16]=w[3]*w[16];
   w[20]=w[33]+w[25];
   w[20]=w[5]*w[20];
   w[20]=w[20]-w[69]-w[80];
   w[20]=w[5]*w[20];
   w[20]=-w[105]+w[20];
   w[21]=-w[82]*w[181];
   w[20]=4.E+0*w[20]+w[21];
   w[21]=-w[31]*w[71];
   w[21]=w[21]-w[92];
   w[21]=w[2]*w[5]*w[21];
   w[22]=-w[9]*w[81];
   w[22]=w[134]+w[22];
   w[23]=w[3]*w[135];
   w[22]=4.E+0*w[22]+w[23];
   w[22]=w[4]*w[22];
   w[16]=w[22]+w[16]+4.E+0*w[20]+w[21];
   w[16]=w[13]*w[16]*w[167];
   w[16]=w[19]+w[16];
   w[16]=w[13]*w[16];
   w[19]=w[63]*w[4];
   w[19]=-w[19]+4.E+0*w[52];
   w[19]=w[19]*w[163];
   w[16]=w[16]-w[19]+w[17];
   w[16]=i_*w[16];
   w[17]=-w[3]*w[34];
   w[20]=w[3]*w[46];
   w[21]=w[68]*w[96];
   w[20]=w[20]+w[21];
   w[20]=w[4]*w[20];
   w[17]=w[17]+w[20];
   w[17]=w[4]*w[17]*w[139];
   w[16]=w[16]+w[17];
   w[16]=w[16]*w[123];
   w[17]=w[4]*w[184];
   w[17]=w[17]-1.333333333E+0*w[36]-w[77];
   w[17]=w[4]*w[17];
   w[17]=w[17]+w[40];
   w[17]=w[13]*w[17];
   w[17]=w[19]+w[17];
   w[17]=w[17]*w[180];
   w[20]=w[4]*w[143];
   w[20]=w[20]+1.333333333E+0*w[74]-w[66];
   w[20]=w[4]*w[20];
   w[20]=w[20]+w[86];
   w[20]=w[13]*w[20];
   w[19]=-w[19]+w[20];
   w[19]=w[19]*w[170];
   w[16]=w[19]+w[17]+w[16];


K23[SI_K23(ip,izp,0,iq,izq,0)] += wj * FCtr * w[16];
K23[SI_K23(ip,izp,0,iq,izq,1)] += wj * FCtr * w[18];
K23[SI_K23(ip,izp,1,iq,izq,0)] += wj * FCtr * w[97];
K23[SI_K23(ip,izp,1,iq,izq,1)] += wj * FCtr * w[24];
K23[SI_K23(ip,izp,2,iq,izq,0)] += wj * FCtr * w[53];
K23[SI_K23(ip,izp,2,iq,izq,1)] += wj * FCtr * w[15];