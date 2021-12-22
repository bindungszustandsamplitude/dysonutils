sv1 = sv1_q1;
ss1 = ss1_q1;
sv2 = sv2_q1;
ss2 = ss2_q1;
sv3 = sv3_q2;
ss3 = ss3_q2;
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
ampl = ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_0037_0037(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_0037(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_0037(0,std::real(l_l+q_l+0.25*q_q));}
else
if(quark_1.getMass() == 0.0200){
ampl = ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_0200_0200(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_0200(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_0200(0,std::real(l_l+q_l+0.25*q_q));}
else
if(quark_1.getMass() == 0.0500){
ampl = ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_0500_0500(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_0500(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_0500(0,std::real(l_l+q_l+0.25*q_q));}
else
if(quark_1.getMass() == 0.0855){
ampl = ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_0855_0855(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_0855(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_0855(0,std::real(l_l+q_l+0.25*q_q));}
else
if(quark_1.getMass() == 0.1500){
ampl = ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_1500_1500(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_1500(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_1500(0,std::real(l_l+q_l+0.25*q_q));}
else
if(quark_1.getMass() == 0.2100){
ampl = ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_2100_2100(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_2100(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_2100(0,std::real(l_l+q_l+0.25*q_q));}
else
if(quark_1.getMass() == 0.3500){
ampl = ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_3500_3500(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_3500(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_3500(0,std::real(l_l+q_l+0.25*q_q));}
else
if(quark_1.getMass() == 0.5000){
ampl = ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_5000_5000(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_5000(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_5000(0,std::real(l_l+q_l+0.25*q_q));}
else
if(quark_1.getMass() == 0.6500){
ampl = ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_6500_6500(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_6500(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_6500(0,std::real(l_l+q_l+0.25*q_q));}
else
if(quark_1.getMass() == 0.7950){
ampl = ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_7950(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::pseudoscalar::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_7950(0,std::real(l_l+q_l+0.25*q_q));}
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
   w[12]=ss3*sv4*sv1;
   w[13]=sv3*sv1;
   w[14]=w[13]*ss4;
   w[15]=w[12]+w[14];
   w[16]=w[15]*ss2;
   w[17]=ss4*sv3*sv2;
   w[18]=sv4*sv2;
   w[19]=w[18]*ss3;
   w[20]=w[17]+w[19];
   w[20]=w[20]*ss1;
   w[16]=w[16]+w[20];
   w[21]=5.E-1*w[16];
   w[13]=w[13]*w[18];
   w[18]=2.E+0*w[13];
   w[22]=w[18]*w[9];
   w[23]=w[18]*w[8];
   w[24]=w[22]+w[23];
   w[25]=w[21]+w[24];
   w[26]=w[25]*w[4];
   w[27]=5.E-1*w[13];
   w[28]=w[26]+w[27];
   w[29]=PDQ1p-PDQ1Lp;
   w[30]=-w[4]*w[29];
   w[31]=w[30]*PDQ2m;
   w[28]=-w[28]*w[31];
   w[26]=w[26]-w[27];
   w[27]=-PDQ2Lm*w[30];
   w[26]=-w[26]*w[27];
   w[26]=w[28]+w[26];
   w[26]=w[26]*w[2];
   w[28]=w[13]*w[11];
   w[32]=w[19]*ss1;
   w[33]=w[32]-w[28];
   w[34]=w[14]*ss2;
   w[35]=w[34]-w[33];
   w[36]=w[13]*w[3];
   w[35]=w[36]+2.E+0*w[35];
   w[37]=w[35]*pow(w[4],2);
   w[38]=w[37]*PDQ1p;
   w[39]=w[37]*PDQ1Lp;
   w[38]=w[38]-w[39];
   w[38]=w[38]*PDQ2m;
   w[40]=PDQ1p*PDQ2Lm;
   w[37]=w[37]*w[40];
   w[39]=w[39]*PDQ2Lm;
   w[37]=w[38]-w[37]+w[39];
   w[38]=2.E+0*w[6];
   w[37]=w[37]*w[38];
   w[39]=w[13]*w[7];
   w[41]=ss3*ss4;
   w[42]=w[41]*sv2*sv1;
   w[42]=w[42]+w[39];
   w[43]=w[42]+w[23];
   w[44]=ss1*sv3*sv4;
   w[45]=w[44]-w[14];
   w[46]=w[45]*ss2;
   w[47]=w[46]-w[43];
   w[48]=w[47]+w[33];
   w[49]=5.E-1*w[36];
   w[50]=w[48]-w[49];
   w[50]=-w[50]*w[27];
   w[26]=w[26]-w[37]+w[50];
   w[37]=w[44]+w[14];
   w[50]=w[37]*ss2;
   w[51]=w[50]-w[42];
   w[52]=w[13]*w[8];
   w[53]=w[33]-w[51]-1.5E+0*w[36]+6.E+0*w[52];
   w[53]=w[53]*w[31];
   w[53]=w[53]-w[26];
   w[53]=w[53]*w[2];
   w[14]=w[12]-w[14];
   w[54]=2.E+0*w[44];
   w[55]=w[54]+w[14];
   w[55]=w[55]*ss2;
   w[56]=w[17]-w[19];
   w[56]=w[56]*ss1;
   w[57]=w[56]+w[55]+w[22];
   w[57]=w[57]*w[8];
   w[58]=w[14]+w[44];
   w[58]=w[58]*ss2;
   w[58]=w[58]+w[42]+w[56];
   w[59]=w[13]*w[9];
   w[60]=w[59]+w[58];
   w[60]=w[60]*w[9];
   w[41]=ss1*w[41]*ss2;
   w[61]=w[44]*ss2;
   w[62]=w[61]*w[7];
   w[41]=w[41]+w[62];
   w[60]=w[60]+w[41];
   w[57]=w[57]+w[60];
   w[57]=4.E+0*w[57];
   w[37]=w[37]+w[12];
   w[37]=w[37]*ss2;
   w[37]=w[37]+w[20]+w[42];
   w[37]=5.E-1*w[37];
   w[62]=w[13]*w[1];
   w[63]=3.125E-2*w[62];
   w[64]=w[37]-w[63]+3.E+0*w[59];
   w[65]=3.E+0*w[52];
   w[66]=w[64]+w[65];
   w[67]=5.E-1*w[1];
   w[66]=w[66]*w[67];
   w[34]=w[34]-w[32];
   w[68]=2.E+0*w[34];
   w[69]=w[68]+w[28];
   w[69]=w[69]*w[11];
   w[70]=w[14]*ss2;
   w[71]=w[70]-w[56];
   w[72]=w[71]-w[28];
   w[73]=w[72]*w[3];
   w[66]=-w[73]-w[66]+w[69]+w[57];
   w[66]=w[66]*w[4];
   w[74]=2.5E-1*w[62];
   w[75]=w[74]+w[36];
   w[76]=w[17]*ss1;
   w[77]=w[76]+w[59];
   w[78]=w[77]+w[52];
   w[78]=4.E+0*w[78];
   w[66]=w[66]+w[75]-w[78];
   w[66]=w[66]*PDQ1Lp*PDQ2Lm;
   w[24]=w[24]+w[42];
   w[17]=-w[19]+2.E+0*w[17];
   w[17]=w[17]*ss1;
   w[19]=-w[50]+w[17]-w[24];
   w[79]=4.E+0*w[19];
   w[80]=w[18]*w[3];
   w[81]=5.E-1*w[62];
   w[82]=w[80]+w[81];
   w[83]=w[79]-w[82];
   w[83]=-w[83]*w[27];
   w[70]=w[70]+w[56];
   w[84]=4.E+0*w[70];
   w[85]=w[84]-w[62];
   w[85]=w[85]*w[4];
   w[86]=4.E+0*w[13];
   w[87]=w[85]+w[86];
   w[87]=-w[87]*w[31];
   w[85]=w[85]-w[86];
   w[85]=-w[85]*w[27];
   w[85]=w[87]+w[85];
   w[85]=w[85]*w[38];
   w[83]=w[83]+w[85];
   w[17]=w[17]+w[46];
   w[24]=w[17]+w[24];
   w[86]=4.E+0*w[24];
   w[80]=w[86]-w[80];
   w[87]=-w[80]+1.5E+0*w[62];
   w[87]=w[87]*w[31];
   w[87]=w[87]+w[83];
   w[87]=w[87]*w[6];
   w[53]=-w[66]+w[53]+w[87];
   w[12]=w[45]-w[12];
   w[12]=w[12]*ss2;
   w[12]=w[12]-w[20]+w[42];
   w[12]=-w[63]-w[59]+5.E-1*w[12];
   w[45]=w[12]-w[65];
   w[45]=w[45]*w[67];
   w[65]=w[61]+w[59];
   w[87]=2.E+0*w[8];
   w[88]=w[65]*w[87];
   w[88]=w[88]+w[60];
   w[88]=4.E+0*w[88];
   w[45]=w[45]-w[88];
   w[89]=w[18]*w[11];
   w[90]=w[74]-w[89];
   w[91]=4.E+0*w[59];
   w[92]=4.E+0*w[44];
   w[93]=w[92]-w[14];
   w[93]=ss2*w[93];
   w[93]=w[91]+w[56]+w[93]-w[90];
   w[93]=w[3]*w[93];
   w[94]=w[43]-w[61];
   w[94]=2.E+0*w[94];
   w[95]=w[94]-w[28];
   w[95]=w[95]*w[11];
   w[93]=w[93]-w[95]+w[45];
   w[93]=w[4]*w[93];
   w[96]=4.E+0*w[77];
   w[75]=w[96]+w[75];
   w[93]=w[93]-w[75];
   w[93]=PDQ1p*w[93];
   w[54]=w[54]-w[14];
   w[54]=w[54]*ss2;
   w[97]=w[54]+w[56];
   w[98]=1.25E-1*w[62];
   w[99]=w[98]-w[22];
   w[100]=w[97]-w[99];
   w[101]=w[100]+w[28];
   w[101]=w[101]*w[3];
   w[102]=w[84]*w[8];
   w[103]=w[52]*w[1];
   w[102]=w[103]-w[102];
   w[101]=w[101]-w[102];
   w[101]=w[101]*w[4];
   w[103]=4.E+0*w[52];
   w[104]=w[103]-w[36];
   w[101]=w[101]+w[104];
   w[101]=w[101]*PDQ1Lp;
   w[93]=-w[101]+w[93];
   w[93]=PDQ2m*w[93];
   w[105]=w[100]+w[89];
   w[105]=w[105]*w[3];
   w[25]=w[25]*w[1];
   w[50]=w[50]-w[43];
   w[106]=w[50]-w[33];
   w[106]=2.E+0*w[106];
   w[107]=w[106]*w[11];
   w[105]=w[105]+w[107]-w[25];
   w[105]=w[105]*w[4];
   w[107]=w[81]+w[36];
   w[105]=w[105]+w[107];
   w[105]=w[105]*w[40];
   w[93]=w[93]-w[105]-w[53];
   w[93]=w[2]*w[93];
   w[72]=w[72]*w[4];
   w[108]=w[72]+w[13];
   w[108]=-w[108]*w[31];
   w[72]=w[72]-w[13];
   w[72]=-w[72]*w[27];
   w[72]=w[108]+w[72];
   w[108]=2.E+0*w[2];
   w[72]=w[72]*w[108];
   w[108]=w[65]-w[56];
   w[108]=4.E+0*w[108];
   w[109]=w[108]+w[90];
   w[27]=-w[109]*w[27];
   w[27]=w[72]+w[27]-w[85];
   w[72]=w[65]+w[56];
   w[72]=4.E+0*w[72];
   w[85]=w[72]+w[89];
   w[109]=7.5E-1*w[62];
   w[110]=w[85]-w[109];
   w[110]=w[110]*w[31];
   w[110]=w[110]+w[27];
   w[111]=w[2]*w[110];
   w[55]=w[55]-w[56];
   w[99]=w[55]-w[99];
   w[112]=w[99]*w[1];
   w[84]=w[84]*w[11];
   w[112]=w[112]-w[84];
   w[112]=w[112]*w[4];
   w[113]=-w[62]+4.E+0*w[28];
   w[114]=w[112]+w[113];
   w[114]=w[114]*w[40];
   w[112]=-w[112]+w[113];
   w[115]=PDQ2m*PDQ1p;
   w[112]=w[112]*w[115];
   w[111]=w[111]+w[114]+w[112];
   w[111]=w[5]*w[111];
   w[79]=w[79]+w[81];
   w[79]=w[79]*w[11];
   w[108]=w[108]-w[74];
   w[108]=w[108]*w[3];
   w[47]=w[47]+w[32];
   w[112]=w[47]*w[1];
   w[79]=w[112]+w[108]-w[79];
   w[79]=w[79]*w[40];
   w[108]=2.E+0*w[3];
   w[116]=w[108]*w[70];
   w[116]=w[116]+w[84];
   w[112]=w[112]-w[116];
   w[112]=w[112]*w[4];
   w[117]=w[89]+w[36];
   w[117]=2.E+0*w[117];
   w[118]=w[112]+w[117];
   w[118]=w[118]*w[40];
   w[112]=w[117]-w[112];
   w[112]=w[112]*w[115];
   w[112]=w[118]+w[112];
   w[112]=w[112]*w[38];
   w[85]=w[74]+w[85];
   w[85]=w[3]*w[85];
   w[119]=-w[1]*w[103];
   w[85]=w[119]+w[85];
   w[85]=w[85]*w[115];
   w[85]=w[111]+w[93]+w[112]+w[79]+w[85];
   w[85]=w[5]*w[85];
   w[93]=w[96]+w[74];
   w[93]=w[93]*w[3];
   w[96]=w[23]+w[39];
   w[111]=w[96]*w[11];
   w[112]=w[39]*w[1];
   w[93]=-w[93]-w[112]+4.E+0*w[111];
   w[93]=w[93]*w[10];
   w[119]=w[70]*w[7];
   w[120]=w[70]*w[87];
   w[119]=w[119]+w[120];
   w[119]=4.E+0*w[119];
   w[121]=w[119]*w[11];
   w[93]=w[93]+w[121];
   w[55]=w[55]*w[7];
   w[47]=w[47]*w[87];
   w[121]=w[22]*w[7];
   w[122]=-w[121]+1.25E-1*w[112];
   w[47]=-w[122]+w[55]+w[47];
   w[55]=w[1]*w[47];
   w[12]=w[12]-w[52];
   w[12]=w[12]*w[67];
   w[88]=w[12]-w[88];
   w[65]=-w[98]+2.E+0*w[65];
   w[98]=-w[28]-w[65];
   w[98]=w[3]*w[98];
   w[95]=w[98]+w[95]-w[88];
   w[95]=w[3]*w[95];
   w[80]=w[81]+w[80];
   w[80]=w[3]*w[80];
   w[80]=4.E+0*w[112]+w[80];
   w[80]=w[6]*w[80];
   w[55]=w[80]+w[95]+w[55]-w[93];
   w[55]=w[115]*w[55];
   w[33]=w[49]-w[33];
   w[80]=w[33]+w[51]-w[103];
   w[80]=w[80]*w[3];
   w[24]=w[24]*w[8];
   w[95]=w[61]+w[56];
   w[95]=w[95]*w[7];
   w[98]=w[39]*w[9];
   w[95]=w[95]+w[98];
   w[24]=w[24]+w[95];
   w[123]=5.E-1*w[39];
   w[124]=w[123]+w[52];
   w[125]=w[124]*w[1];
   w[126]=w[89]*w[7];
   w[24]=w[126]-1.5E+0*w[125]+w[80]+4.E+0*w[24];
   w[24]=w[24]*PDQ1Lp;
   w[80]=w[50]+w[33];
   w[80]=w[3]*w[80];
   w[125]=w[96]*w[1];
   w[80]=-w[125]+w[80];
   w[80]=PDQ1p*w[80];
   w[119]=w[125]-w[119];
   w[106]=w[106]+w[36];
   w[106]=w[106]*w[3];
   w[106]=w[106]-w[119];
   w[106]=w[106]*w[4];
   w[125]=4.E+0*w[96];
   w[106]=w[106]+w[125];
   w[127]=w[6]*w[106]*w[29];
   w[80]=w[127]-w[24]+w[80];
   w[80]=PDQ2m*w[80];
   w[21]=w[21]+w[22];
   w[127]=w[21]+w[52];
   w[127]=w[127]*w[3];
   w[127]=w[127]-w[111];
   w[47]=w[47]+w[127];
   w[47]=w[47]*w[4];
   w[128]=w[49]+w[39];
   w[47]=w[47]+w[128];
   w[129]=-w[47]*w[29];
   w[130]=w[2]*w[30]*w[96];
   w[129]=-w[130]+w[129];
   w[129]=PDQ2m*w[129];
   w[18]=w[18]*w[7];
   w[18]=w[18]+w[36];
   w[131]=w[38]*PDQ2m;
   w[30]=w[131]*w[30]*w[18];
   w[129]=w[30]+w[129];
   w[129]=w[2]*w[129];
   w[80]=w[129]+w[80];
   w[80]=w[2]*w[80];
   w[55]=w[85]+w[80]+w[55];
   w[55]=ampl*w[55];
   w[80]=w[82]+w[86];
   w[82]=w[80]*w[6];
   w[85]=w[94]+w[28];
   w[85]=w[85]*w[11];
   w[65]=-w[28]+w[65];
   w[65]=w[3]*w[65];
   w[65]=w[82]+w[65]-w[85]-w[88];
   w[65]=w[3]*w[65];
   w[50]=w[50]-w[32];
   w[88]=w[50]*w[87];
   w[94]=w[97]*w[7];
   w[88]=-w[122]+w[88]+w[94];
   w[94]=-w[1]*w[88];
   w[65]=w[94]-w[93]+w[65];
   w[65]=w[115]*w[65];
   w[88]=w[88]-w[127];
   w[88]=w[88]*w[4];
   w[93]=w[88]+w[128];
   w[93]=w[93]*w[40];
   w[88]=w[88]-w[128];
   w[88]=w[88]*w[115];
   w[88]=-w[93]+w[88];
   w[88]=w[2]*w[88];
   w[19]=w[19]*w[8];
   w[61]=w[61]-w[56];
   w[61]=w[61]*w[7];
   w[19]=-w[61]+w[19]-w[98];
   w[33]=w[42]+w[33]-w[46];
   w[33]=w[33]*w[3];
   w[46]=w[124]*w[67];
   w[19]=4.E+0*w[19]+w[33]-w[46]+w[126];
   w[19]=w[19]*w[40];
   w[33]=2.E+0*w[48];
   w[46]=w[33]-w[36];
   w[46]=w[46]*w[3];
   w[46]=w[46]+w[119];
   w[46]=w[46]*w[4];
   w[48]=w[46]+w[125];
   w[48]=w[48]*w[40];
   w[46]=w[125]-w[46];
   w[46]=w[46]*w[115];
   w[46]=w[48]+w[46];
   w[46]=w[6]*w[46];
   w[49]=-w[28]+w[50]-w[49];
   w[61]=w[3]*w[49]*w[115];
   w[46]=w[88]+w[46]-w[19]+w[61];
   w[46]=w[2]*w[46];
   w[49]=w[49]*w[31];
   w[26]=w[49]+w[26];
   w[26]=w[26]*w[2];
   w[49]=w[80]*w[31];
   w[49]=w[49]-w[83];
   w[49]=w[49]*w[6];
   w[26]=w[66]+w[26]+w[49];
   w[14]=-w[92]-w[14];
   w[14]=ss2*w[14];
   w[14]=w[89]+w[74]-w[91]+w[56]+w[14];
   w[14]=w[3]*w[14];
   w[14]=w[14]+w[85]+w[45];
   w[14]=w[4]*w[14];
   w[14]=w[14]-w[75];
   w[14]=PDQ1p*w[14];
   w[45]=w[99]-w[89];
   w[45]=w[45]*w[3];
   w[33]=w[33]*w[11];
   w[25]=w[45]+w[33]+w[25];
   w[25]=w[25]*w[4];
   w[25]=w[25]+w[107];
   w[25]=w[25]*PDQ1Lp;
   w[14]=w[25]+w[14];
   w[14]=PDQ2m*w[14];
   w[33]=w[99]-w[28];
   w[33]=w[33]*w[3];
   w[33]=w[33]+w[102];
   w[33]=w[33]*w[4];
   w[33]=w[33]+w[104];
   w[33]=w[33]*w[40];
   w[14]=w[14]+w[33]+w[26];
   w[14]=w[2]*w[14];
   w[40]=w[90]+w[72];
   w[31]=w[40]*w[31];
   w[27]=w[31]+w[27];
   w[27]=w[27]*w[2];
   w[31]=w[100]*w[1];
   w[31]=w[31]+w[84];
   w[31]=w[31]*w[4];
   w[31]=w[31]+w[113];
   w[45]=PDQ2m*w[31]*w[29];
   w[45]=w[45]+w[27];
   w[45]=w[5]*w[45];
   w[49]=w[86]-w[81];
   w[49]=w[49]*w[11];
   w[61]=w[72]-w[74];
   w[61]=w[61]*w[3];
   w[50]=w[50]*w[1];
   w[49]=w[50]+w[61]+w[49];
   w[49]=w[49]*PDQ1Lp;
   w[61]=PDQ1p*w[3]*w[40];
   w[61]=-w[49]+w[61];
   w[61]=PDQ2m*w[61];
   w[66]=w[50]+w[116];
   w[66]=w[66]*w[4];
   w[66]=w[66]+w[117];
   w[29]=w[131]*w[66]*w[29];
   w[14]=w[45]+w[14]+w[61]+w[29];
   w[14]=w[5]*w[14];
   w[14]=w[14]+w[46]+w[65];
   w[14]=ampl*w[14];
   w[29]=w[7]*w[58];
   w[29]=w[29]+w[98];
   w[29]=w[9]*w[29];
   w[45]=w[54]-w[56];
   w[46]=w[7]*w[45];
   w[46]=-w[120]+w[46]+w[121];
   w[46]=w[8]*w[46];
   w[41]=w[7]*w[41];
   w[29]=w[46]+w[41]+w[29];
   w[41]=w[71]*w[7];
   w[46]=-w[39]-w[103];
   w[46]=w[11]*w[46];
   w[21]=w[3]*w[21];
   w[54]=w[8]*w[34];
   w[21]=w[21]+w[46]+w[41]-4.E+0*w[54];
   w[21]=w[3]*w[21];
   w[37]=-w[7]*w[37];
   w[37]=w[37]-3.E+0*w[98];
   w[46]=w[123]+w[23];
   w[54]=w[8]*w[46];
   w[37]=1.5625E-2*w[112]+5.E-1*w[37]+w[54];
   w[37]=w[1]*w[37];
   w[17]=w[17]+w[43];
   w[17]=w[7]*w[17];
   w[17]=w[121]+w[17];
   w[43]=w[39]+w[36];
   w[43]=w[43]*w[108];
   w[17]=w[43]+4.E+0*w[17]-1.5E+0*w[112];
   w[17]=w[6]*w[17];
   w[32]=-w[23]-w[32]+w[51];
   w[32]=w[7]*w[32];
   w[43]=-w[3]*w[46];
   w[39]=w[39]*w[11];
   w[32]=w[43]+w[39]+w[32];
   w[32]=w[2]*w[32];
   w[43]=-w[8]*w[96];
   w[46]=w[7]*w[76];
   w[43]=w[43]+w[46]+w[98];
   w[46]=w[3]*w[128];
   w[43]=w[46]+4.E+0*w[43]-2.5E-1*w[112];
   w[43]=w[10]*w[43];
   w[46]=w[7]*w[68];
   w[39]=w[46]+w[39];
   w[39]=w[11]*w[39];
   w[17]=w[43]+w[32]+w[17]+w[21]+w[39]+4.E+0*w[29]+w[37];
   w[17]=w[115]*w[17];
   w[21]=-w[22]-w[45];
   w[21]=w[8]*w[21];
   w[21]=w[21]-w[60];
   w[22]=-w[52]+w[64];
   w[22]=w[22]*w[67];
   w[21]=-w[73]-w[69]+4.E+0*w[21]+w[22];
   w[21]=w[4]*w[21];
   w[22]=w[52]-w[77];
   w[21]=w[21]-w[36]+4.E+0*w[22]+w[74];
   w[21]=PDQ1p*w[21];
   w[21]=-w[101]+w[21];
   w[21]=PDQ2m*w[21];
   w[22]=w[5]*w[110];
   w[21]=w[22]+w[21]+w[33]-w[53];
   w[21]=w[5]*w[21];
   w[22]=-w[3]*w[104];
   w[22]=w[22]+w[126]+4.E+0*w[95]-7.5E-1*w[112];
   w[22]=PDQ1p*w[22];
   w[22]=-w[24]+w[22];
   w[22]=PDQ2m*w[22];
   w[24]=PDQ1Lp*w[47];
   w[29]=w[34]*w[87];
   w[29]=w[111]-w[41]+w[29];
   w[16]=-w[23]-w[91]-w[16];
   w[16]=w[3]*w[16];
   w[16]=2.E+0*w[29]+w[16];
   w[16]=w[4]*w[16];
   w[16]=w[16]-w[18];
   w[16]=PDQ1p*w[16];
   w[16]=-w[130]+w[24]+w[16];
   w[16]=PDQ2m*w[16];
   w[16]=w[30]-w[93]+w[16];
   w[16]=w[2]*w[16];
   w[18]=-PDQ1Lp*w[106];
   w[23]=w[3]*w[35];
   w[23]=w[23]-w[119];
   w[23]=w[4]*w[23];
   w[23]=w[125]+w[23];
   w[24]=2.E+0*PDQ1p;
   w[23]=w[23]*w[24];
   w[18]=w[18]+w[23];
   w[18]=PDQ2m*w[18];
   w[18]=w[48]+w[18];
   w[18]=w[6]*w[18];
   w[16]=w[21]+w[16]+w[18]-w[19]+w[22];
   w[16]=w[5]*w[16];
   w[16]=w[16]+w[17];
   w[16]=ampl*w[16];
   w[15]=-3.E+0*w[15]+w[44];
   w[15]=ss2*w[15];
   w[15]=w[15]-3.E+0*w[20]+w[42];
   w[17]=w[59]+w[52];
   w[15]=-w[63]+5.E-1*w[15]-5.E+0*w[17];
   w[15]=w[15]*w[67];
   w[17]=3.E+0*w[28];
   w[18]=w[68]+w[17];
   w[18]=w[11]*w[18];
   w[17]=w[17]-w[71];
   w[17]=w[3]*w[17];
   w[15]=w[17]+w[18]-w[57]+w[15];
   w[15]=w[4]*w[15];
   w[15]=w[15]-w[36]-w[78]-w[109];
   w[15]=PDQ1p*w[15];
   w[15]=w[25]+w[15];
   w[15]=PDQ2m*w[15];
   w[15]=w[15]-w[105]+w[26];
   w[15]=w[2]*w[15];
   w[17]=-w[11]*w[62];
   w[18]=-w[3]*w[81];
   w[17]=w[18]+w[50]+w[17];
   w[17]=PDQ1p*w[17];
   w[17]=-w[49]+w[17];
   w[17]=PDQ2m*w[17];
   w[18]=-PDQ1Lp*w[66];
   w[19]=w[1]*w[34];
   w[19]=w[19]+w[116];
   w[19]=w[4]*w[19];
   w[19]=w[117]+w[19];
   w[19]=w[19]*w[24];
   w[18]=w[18]+w[19];
   w[18]=PDQ2m*w[18];
   w[18]=w[118]+w[18];
   w[18]=w[18]*w[38];
   w[15]=w[15]+w[18]+w[79]+w[17];
   w[15]=w[2]*w[15];
   w[12]=w[82]+w[57]-w[12];
   w[12]=w[1]*w[12];
   w[17]=w[62]+8.E+0*w[70];
   w[17]=w[17]*w[11];
   w[18]=w[71]*w[1];
   w[19]=w[18]-w[17];
   w[19]=w[3]*w[19];
   w[20]=w[78]+w[74];
   w[20]=w[1]*w[20];
   w[21]=w[62]-8.E+0*w[28];
   w[21]=w[3]*w[21];
   w[13]=pow(w[11],2)*w[13];
   w[13]=w[21]+w[20]-8.E+0*w[13];
   w[13]=w[10]*w[13];
   w[20]=-w[1]*w[68];
   w[17]=w[20]-w[17];
   w[17]=w[11]*w[17];
   w[12]=w[13]+w[19]+w[17]+w[12];
   w[12]=w[115]*w[12];
   w[13]=-PDQ1Lp*w[31];
   w[17]=-w[18]+w[84];
   w[17]=w[4]*w[17];
   w[17]=w[17]+w[113];
   w[17]=w[17]*w[24];
   w[13]=w[13]+w[17];
   w[13]=PDQ2m*w[13];
   w[13]=w[27]+w[114]+w[13];
   w[13]=w[2]*w[13];
   w[17]=w[115]*w[1]*w[40];
   w[13]=w[17]+w[13];
   w[13]=w[5]*w[13];
   w[12]=w[13]+w[15]+w[12];
   w[12]=ampl*w[12];


K23[SI_K23(ip,izp,0,iq,izq,0)] += wj * FCtr * w[12];
K23[SI_K23(ip,izp,0,iq,izq,1)] += wj * FCtr * w[55];
K23[SI_K23(ip,izp,0,iq,izq,2)] += wj * FCtr * w[14];
K23[SI_K23(ip,izp,0,iq,izq,3)] += wj * FCtr * w[16];
