sv1 = sv1_q1;
ss1 = ss1_q1;
sv2 = sv2_q2;
ss2 = ss2_q2;
sv3 = sv3_q2;
ss3 = ss3_q2;
sv4 = sv4_q1;
ss4 = ss4_q1;

w.resize(10000,0.);

if(isud){FCtr  = 4.*2.;}
if(!isud){FCtr  = 4.*2.;}

if(quark_1.getMass() == 0.0037){
ampl = 0.5*(
ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_0037(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_0037(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_0037_0037(0,std::real(l_l+q_l+0.25*q_q))
+ ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_0037(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_0037(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_0037_0037(0,std::real(l_l+q_l+0.25*q_q))
);}
else
if(quark_1.getMass() == 0.0200){
ampl = 0.5*(
ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_0200(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_0200(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_0200_0200(0,std::real(l_l+q_l+0.25*q_q))
+ ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_0200(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_0200(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_0200_0200(0,std::real(l_l+q_l+0.25*q_q))
);}
else
if(quark_1.getMass() == 0.0500){
ampl = 0.5*(
ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_0500(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_0500(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_0500_0500(0,std::real(l_l+q_l+0.25*q_q))
+ ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_0500(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_0500(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_0500_0500(0,std::real(l_l+q_l+0.25*q_q))
);}
else
if(quark_1.getMass() == 0.0855){
ampl = 0.5*(
ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_0855(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_0855(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_0855_0855(0,std::real(l_l+q_l+0.25*q_q))
+ ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_0855(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_0855(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_0855_0855(0,std::real(l_l+q_l+0.25*q_q))
);}
else
if(quark_1.getMass() == 0.1500){
ampl = 0.5*(
ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_1500(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_1500(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_1500_1500(0,std::real(l_l+q_l+0.25*q_q))
+ ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_1500(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_1500(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_1500_1500(0,std::real(l_l+q_l+0.25*q_q))
);}
else
if(quark_1.getMass() == 0.2100){
ampl = 0.5*(
ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_2100(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_2100(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_2100_2100(0,std::real(l_l+q_l+0.25*q_q))
+ ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_2100(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_2100(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_2100_2100(0,std::real(l_l+q_l+0.25*q_q))
);}
else
if(quark_1.getMass() == 0.3500){
ampl = 0.5*(
ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_3500(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_3500(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_3500_3500(0,std::real(l_l+q_l+0.25*q_q))
+ ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_3500(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_3500(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_3500_3500(0,std::real(l_l+q_l+0.25*q_q))
);}
else
if(quark_1.getMass() == 0.5000){
ampl = 0.5*(
ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_5000(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_5000(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_5000_5000(0,std::real(l_l+q_l+0.25*q_q))
+ ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_5000(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_5000(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_5000_5000(0,std::real(l_l+q_l+0.25*q_q))
);}
else
if(quark_1.getMass() == 0.6500){
ampl = 0.5*(
ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_6500(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_6500(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_6500_6500(0,std::real(l_l+q_l+0.25*q_q))
+ ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_6500(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_6500(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_6500_6500(0,std::real(l_l+q_l+0.25*q_q))
);}
else
if(quark_1.getMass() == 0.7950){
ampl = 0.5*(
ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_7950(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+q_l+0.25*q_q))
+ ns_data_v2::amplitudes::diquark::axialvector::fit::m_7950_7950(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+q_l+0.25*q_q))
);}


    w[1]=1./(Q_Q*pow(p_p,2)-pow(Q_p,2)*p_p);
    w[2]=Q_Q;
    w[3]=Q_p;
    w[4]=Q_q;
    w[5]=p_p;
    w[6]=p_q;
    w[7]=q_l;
    w[8]=p_l;
    w[9]=Q_l;
    w[10]=q_q;
    w[11]=l_l;
    w[12]=pow(Q_p,-1);
    w[13]=pow(p_p,-1);
    w[14]=1./(Q_Q*p_p-pow(Q_p,2));
   w[15]=ampl*i_;
   w[16]=w[15]*ss1;
   w[17]=w[16]*sv2;
   w[15]=w[15]*sv1;
   w[18]=w[15]*ss2;
   w[19]=w[18]+w[17];
   w[19]=w[19]*ss3;
   w[16]=w[16]*ss2;
   w[20]=w[16]*sv3;
   w[19]=w[19]+w[20];
   w[19]=w[19]*ss4;
   w[21]=ss3*sv4;
   w[16]=w[16]*w[21];
   w[19]=w[19]+w[16];
   w[22]=sv3*sv4;
   w[23]=w[22]*w[18];
   w[22]=w[22]*w[17];
   w[24]=w[23]+w[22];
   w[15]=w[15]*sv2;
   w[21]=w[15]*w[21];
   w[15]=ss4*sv3*w[15];
   w[25]=w[21]+w[15];
   w[26]=w[25]+w[24];
   w[27]=w[26]*w[11];
   w[27]=w[19]+w[27];
   w[28]=w[23]-w[22];
   w[29]=w[28]-w[21];
   w[30]=3.E+0*w[15];
   w[31]=w[30]-w[29];
   w[31]=w[31]*w[8];
   w[32]=w[24]*w[10];
   w[33]=2.E+0*w[7];
   w[34]=w[33]*w[25];
   w[34]=w[34]-w[32];
   w[31]=w[31]+w[34]+w[27];
   w[35]=w[15]+w[22];
   w[36]=w[35]*w[3];
   w[31]=-w[36]+2.E+0*w[31];
   w[31]=w[31]*w[3];
   w[37]=w[21]-w[15];
   w[38]=w[37]-w[28];
   w[39]=w[38]*w[11];
   w[39]=w[39]+w[16];
   w[18]=w[18]-w[17];
   w[18]=w[18]*ss3;
   w[18]=w[18]+w[20];
   w[18]=w[18]*ss4;
   w[40]=w[18]-w[39];
   w[41]=w[28]*w[10];
   w[42]=w[40]-w[41];
   w[43]=w[38]*w[8];
   w[44]=w[28]*w[7];
   w[45]=2.E+0*w[44];
   w[46]=w[45]+w[42]-w[43];
   w[47]=8.E+0*w[8];
   w[46]=w[46]*w[47];
   w[31]=w[31]-w[46];
   w[46]=w[25]-w[28];
   w[46]=w[46]*w[7];
   w[17]=ss3*w[17];
   w[17]=w[17]-w[20];
   w[17]=w[17]*ss4;
   w[48]=w[15]-w[22];
   w[49]=w[48]*w[8];
   w[50]=w[17]-w[49];
   w[51]=w[48]*w[11];
   w[51]=w[51]-w[50];
   w[52]=w[22]*w[10];
   w[46]=w[46]-w[51]-w[52];
   w[46]=4.E+0*w[46];
   w[53]=w[46]+w[36];
   w[54]=2.E+0*w[5];
   w[55]=w[53]*w[54];
   w[55]=w[55]+w[31];
   w[55]=w[5]*w[55];
   w[56]=w[37]*w[11];
   w[20]=w[20]*ss4;
   w[16]=w[20]-w[16];
   w[56]=w[56]-w[16];
   w[57]=w[56]-w[45];
   w[58]=2.E+0*w[8];
   w[59]=w[58]*w[48];
   w[60]=w[57]-w[59];
   w[61]=w[24]-w[21];
   w[62]=w[30]-w[61];
   w[62]=w[62]*w[3];
   w[60]=w[62]+4.E+0*w[60];
   w[62]=4.E+0*w[5];
   w[63]=w[62]*w[22];
   w[64]=w[63]+w[60];
   w[64]=w[5]*w[64];
   w[65]=2.E+0*w[24];
   w[66]=w[65]-w[25];
   w[67]=w[66]*w[3];
   w[68]=-w[58]*w[67];
   w[69]=w[54]*w[9];
   w[70]=w[24]*w[69];
   w[71]=w[24]*w[3];
   w[72]=-w[71]+w[63];
   w[73]=2.E+0*w[6];
   w[72]=w[72]*w[73];
   w[64]=w[72]+w[70]+w[68]+w[64];
   w[64]=w[64]*w[73];
   w[68]=w[37]+w[28];
   w[70]=w[68]*w[3];
   w[72]=w[70]*w[8];
   w[74]=w[25]-w[24];
   w[75]=pow(w[8],2);
   w[76]=4.E+0*w[75];
   w[77]=w[76]*w[74];
   w[72]=w[72]+w[77];
   w[72]=w[72]*w[3];
   w[78]=w[74]*w[5];
   w[79]=w[58]*w[74];
   w[78]=w[78]+w[79];
   w[80]=-w[78]*w[69];
   w[81]=w[73]*w[24];
   w[78]=w[81]-w[78];
   w[78]=w[5]*w[78];
   w[82]=2.E+0*w[4];
   w[83]=w[78]*w[82];
   w[55]=w[83]+w[64]+w[80]+w[72]+w[55];
   w[55]=w[1]*w[55];
   w[30]=w[28]-w[30]+3.E+0*w[21];
   w[30]=w[30]*w[8];
   w[64]=w[26]*w[3];
   w[80]=2.5E-1*w[64];
   w[30]=w[30]+w[80];
   w[83]=w[37]*w[6];
   w[84]=w[30]+w[83];
   w[85]=5.E-1*w[21];
   w[86]=-w[85]+5.E-1*w[23];
   w[87]=w[86]+w[35];
   w[88]=w[87]*w[5];
   w[88]=-w[88]+5.E-1*w[84];
   w[89]=w[2]*w[1];
   w[88]=w[89]*w[88]*w[5];
   w[55]=-w[88]+w[55];
   w[55]=w[4]*w[55];
   w[90]=4.E+0*w[8];
   w[91]=w[90]*w[15];
   w[91]=w[91]+w[27];
   w[34]=w[34]+w[91];
   w[34]=-w[36]+2.E+0*w[34];
   w[34]=w[34]*w[3];
   w[42]=4.E+0*w[44]+w[42]+w[59];
   w[42]=w[42]*w[47];
   w[34]=w[34]-w[42];
   w[34]=w[34]*w[3];
   w[42]=w[54]*w[3];
   w[92]=-w[53]*w[42];
   w[93]=w[74]*w[8];
   w[94]=w[93]+w[45];
   w[95]=w[74]*w[3];
   w[94]=-w[95]+4.E+0*w[94];
   w[96]=-w[94]*w[69];
   w[97]=2.E+0*w[22];
   w[98]=w[97]-w[15];
   w[98]=w[98]*w[58];
   w[57]=w[98]+w[57];
   w[99]=4.E+0*w[6];
   w[100]=w[99]*w[22];
   w[101]=w[15]*w[3];
   w[57]=w[100]+w[101]+2.E+0*w[57];
   w[102]=w[97]*w[5];
   w[103]=-w[102]-w[57];
   w[103]=w[3]*w[103];
   w[104]=w[9]*w[63];
   w[103]=w[104]+w[103];
   w[103]=w[103]*w[99];
   w[92]=w[103]+w[96]-w[34]+w[92];
   w[92]=w[6]*w[92];
   w[96]=w[74]*w[7];
   w[103]=w[96]-w[32];
   w[104]=w[103]*w[90];
   w[105]=w[70]*w[7];
   w[104]=w[104]+w[105];
   w[106]=w[104]*w[3];
   w[107]=w[75]*w[41];
   w[106]=w[106]+1.6E+1*w[107];
   w[106]=w[106]*w[3];
   w[107]=w[38]*w[7];
   w[108]=w[107]*w[3];
   w[109]=w[97]*w[10];
   w[96]=w[109]-w[96];
   w[109]=w[96]*w[90];
   w[108]=w[108]-w[109];
   w[109]=-w[108]*w[42];
   w[103]=w[103]*w[3];
   w[110]=w[41]*w[90];
   w[103]=w[110]+w[103];
   w[110]=-w[96]*w[54];
   w[110]=w[110]+w[103];
   w[111]=w[62]*w[9];
   w[110]=w[110]*w[111];
   w[92]=w[92]+w[110]-w[106]+w[109];
   w[92]=w[1]*w[92];
   w[80]=w[80]+w[83];
   w[109]=w[43]+w[80];
   w[110]=5.E-1*w[3];
   w[112]=w[110]*w[109];
   w[113]=w[87]*w[3];
   w[114]=w[58]*w[38];
   w[113]=w[113]+w[114];
   w[115]=-w[5]*w[113];
   w[112]=w[115]+w[112];
   w[112]=w[6]*w[112];
   w[115]=w[33]*w[38];
   w[116]=w[5]*w[115];
   w[116]=w[105]+w[116];
   w[116]=w[5]*w[116];
   w[112]=w[116]+w[112];
   w[112]=w[112]*w[89];
   w[55]=w[55]+w[92]+w[112];
   w[92]=PM22m*PM21p;
   w[55]=w[4]*w[55]*w[92];
   w[112]=w[39]-w[20];
   w[116]=w[114]+w[112];
   w[117]=w[22]*w[9];
   w[116]=w[117]+2.E+0*w[116];
   w[116]=w[116]*w[6];
   w[117]=w[41]+w[40];
   w[118]=w[117]-w[114];
   w[118]=w[118]*w[58];
   w[119]=w[21]-w[22];
   w[120]=w[119]*w[9];
   w[121]=w[120]*w[8];
   w[116]=w[116]-w[118]-w[121];
   w[116]=w[116]*w[6];
   w[118]=2.E+0*w[75];
   w[121]=w[118]*w[41];
   w[116]=w[116]-w[121];
   w[116]=w[116]*w[13];
   w[122]=w[22]*w[6];
   w[49]=w[122]-w[49];
   w[123]=w[49]-w[107];
   w[123]=w[123]*w[73];
   w[124]=w[119]*w[7];
   w[124]=w[124]-w[52];
   w[124]=w[124]*w[9];
   w[116]=w[116]+w[124]+w[123];
   w[123]=w[38]*w[10];
   w[124]=w[123]+w[115];
   w[124]=w[124]*w[8];
   w[39]=w[39]-w[44];
   w[18]=w[18]-w[39];
   w[125]=w[18]+w[41];
   w[125]=w[125]*w[7];
   w[126]=w[112]*w[10];
   w[125]=w[125]-w[126];
   w[124]=w[124]-w[125];
   w[126]=w[48]*w[7];
   w[126]=w[126]-w[52];
   w[127]=w[126]*w[5];
   w[128]=w[127]-w[124];
   w[128]=2.E+0*w[128]+w[116];
   w[129]=w[97]-w[23];
   w[130]=w[129]-w[37];
   w[131]=w[6]*w[8];
   w[130]=w[130]*w[131];
   w[132]=2.E+0*w[21];
   w[133]=w[132]-w[97];
   w[134]=w[15]-w[23];
   w[135]=w[133]-w[134];
   w[136]=w[135]*w[75];
   w[130]=w[130]-w[136];
   w[136]=1.333333333E+0*w[13];
   w[130]=w[130]*w[136];
   w[137]=3.333333333E-1*w[21];
   w[138]=3.333333333E-1*w[23];
   w[139]=w[137]-w[138];
   w[140]=3.333333333E-1*w[15];
   w[141]=-w[139]+w[140]+w[22];
   w[141]=w[141]*w[73];
   w[142]=w[24]*w[4];
   w[143]=1.666666666E-1*w[142];
   w[144]=3.333333333E-1*w[9];
   w[145]=w[144]*w[119];
   w[130]=-w[143]+w[130]+w[141]+w[145];
   w[146]=3.333333333E-1*w[28];
   w[147]=w[21]+w[146]+w[140];
   w[147]=w[147]*w[11];
   w[148]=3.333333333E-1*w[19];
   w[149]=1.333333333E+0*w[8];
   w[150]=w[149]*w[35];
   w[147]=w[147]+w[150]+w[148];
   w[150]=3.333333333E-1*w[32];
   w[151]=w[147]+w[150];
   w[152]=6.666666666E-1*w[7];
   w[153]=w[152]*w[23];
   w[153]=w[153]+w[151];
   w[154]=w[35]*w[5];
   w[154]=3.333333333E-1*w[154];
   w[155]=-w[154]-w[153];
   w[156]=4.166666666E-2*w[26];
   w[157]=w[156]*w[2];
   w[155]=w[157]+2.E+0*w[155]-w[130];
   w[155]=w[4]*w[155];
   w[158]=w[37]-w[24];
   w[159]=3.333333333E-1*w[6];
   w[160]=w[158]*w[159];
   w[161]=-w[21]+w[140]+3.333333333E-1*w[24];
   w[162]=w[161]*w[8];
   w[160]=w[160]-w[162];
   w[162]=w[13]*w[6];
   w[160]=w[160]*w[162];
   w[163]=3.333333333E-1*w[10];
   w[164]=w[163]*w[158];
   w[161]=w[161]*w[7];
   w[160]=w[160]-w[164]+w[161];
   w[161]=5.E-1*w[2];
   w[164]=-w[160]*w[161];
   w[128]=w[155]+1.333333333E+0*w[128]+w[164];
   w[155]=w[12]*w[4];
   w[128]=w[128]*w[155];
   w[164]=w[37]-w[23];
   w[165]=w[164]*w[152];
   w[151]=w[165]-w[151];
   w[165]=1.333333333E+0*w[6];
   w[166]=w[165]*w[158];
   w[167]=3.333333333E-1*w[95];
   w[145]=-2.E+0*w[151]-w[166]+w[145]-w[167];
   w[145]=w[145]*w[6];
   w[151]=w[135]*w[7];
   w[129]=w[129]*w[10];
   w[129]=w[151]-w[129];
   w[129]=w[129]*w[149];
   w[133]=w[133]+w[134];
   w[151]=3.333333333E-1*w[7];
   w[166]=w[133]*w[151];
   w[168]=5.E-1*w[32];
   w[166]=w[166]-w[168];
   w[166]=w[166]*w[3];
   w[129]=-w[145]+w[129]+w[166];
   w[129]=w[129]*w[13];
   w[145]=w[35]*w[6];
   w[123]=w[145]+w[123];
   w[123]=w[129]-6.666666666E-1*w[123];
   w[129]=w[133]*w[8];
   w[129]=w[129]-w[81];
   w[129]=w[129]*w[13];
   w[129]=w[129]+w[74];
   w[133]=3.333333333E-1*w[4];
   w[166]=w[129]*w[133];
   w[169]=w[2]*w[13];
   w[156]=w[156]*w[169];
   w[170]=w[156]*w[6];
   w[166]=w[166]-w[170]-w[123];
   w[166]=w[4]*w[166];
   w[128]=w[166]+w[128];
   w[128]=PM21Lp*w[128];
   w[166]=5.E+0*w[21];
   w[171]=5.E+0*w[15];
   w[172]=w[24]+w[166]+w[171];
   w[173]=3.333333333E-1*w[11];
   w[172]=w[172]*w[173];
   w[174]=w[152]*w[26];
   w[175]=2.E+0*w[15];
   w[176]=w[175]+w[22];
   w[176]=w[176]*w[149];
   w[172]=w[172]+w[176]+w[174]+w[19]+w[150];
   w[174]=w[21]-w[23];
   w[176]=w[174]+w[175];
   w[177]=3.333333333E-1*w[3];
   w[178]=w[176]*w[177];
   w[172]=-w[178]+2.E+0*w[172];
   w[178]=w[144]*w[68];
   w[179]=w[175]+w[61];
   w[180]=-w[179]*w[165];
   w[180]=w[180]-w[178]-w[172];
   w[180]=w[180]*w[162];
   w[181]=w[169]*w[26];
   w[181]=1.25E-1*w[181];
   w[182]=w[6]*w[181];
   w[183]=w[73]*w[35];
   w[180]=w[182]-w[183]+w[180];
   w[180]=w[4]*w[180];
   w[182]=-w[175]+w[174]+w[97];
   w[184]=6.666666666E-1*w[8];
   w[185]=w[184]*w[182];
   w[186]=1.333333333E+0*w[44];
   w[187]=3.333333333E-1*w[41];
   w[185]=w[40]-w[185]+w[186]+w[187];
   w[188]=w[185]*w[58];
   w[189]=-w[37]+6.666666666E-1*w[28];
   w[189]=w[189]*w[11];
   w[190]=w[139]+w[22];
   w[191]=6.666666666E-1*w[15];
   w[192]=w[191]-w[190];
   w[192]=w[192]*w[58];
   w[189]=w[189]+w[192]+w[16]+6.666666666E-1*w[44];
   w[192]=w[144]*w[24];
   w[189]=-w[192]-1.333333333E+0*w[122]+2.E+0*w[189];
   w[193]=w[6]*w[189];
   w[194]=w[93]*w[144];
   w[188]=w[193]+w[188]+w[194];
   w[188]=w[188]*w[162];
   w[193]=w[190]+w[140];
   w[193]=w[193]*w[7];
   w[173]=w[182]*w[173];
   w[182]=w[193]+w[173]+3.333333333E-1*w[52];
   w[50]=w[182]+w[50];
   w[193]=w[97]*w[6];
   w[195]=w[144]*w[48];
   w[196]=-w[193]-2.E+0*w[50]+w[195];
   w[196]=w[6]*w[196];
   w[188]=w[196]+w[188];
   w[196]=-w[175]+5.E-1*w[174];
   w[197]=w[196]*w[159];
   w[166]=-w[28]+w[166]-w[171];
   w[198]=3.333333333E-1*w[8];
   w[166]=w[166]*w[198];
   w[199]=w[166]+w[83];
   w[200]=5.E-1*w[162];
   w[199]=w[199]*w[200];
   w[199]=w[197]+w[199];
   w[199]=w[2]*w[199];
   w[201]=w[24]*w[6];
   w[93]=w[93]-w[201];
   w[202]=w[73]*w[13];
   w[203]=w[93]*w[202];
   w[204]=w[74]*w[6];
   w[203]=w[204]+w[203];
   w[205]=6.666666666E-1*w[4];
   w[203]=w[203]*w[205];
   w[188]=w[203]+4.E+0*w[188]+w[199];
   w[188]=w[188]*w[155];
   w[180]=w[180]+w[188];
   w[180]=PM21p*w[180];
   w[128]=w[180]+w[128];
   w[128]=PM22m*w[128];
   w[180]=2.E+0*w[23];
   w[188]=w[180]-w[22];
   w[199]=w[188]+w[37];
   w[199]=w[199]*w[131];
   w[180]=w[180]-w[175];
   w[203]=w[180]+w[119];
   w[206]=w[203]*w[75];
   w[199]=w[199]+w[206];
   w[199]=w[199]*w[136];
   w[206]=w[68]*w[6];
   w[206]=6.666666666E-1*w[206];
   w[207]=w[144]*w[134];
   w[143]=w[143]+w[199]+w[206]-w[207];
   w[29]=-w[15]+3.333333333E-1*w[29];
   w[29]=w[29]*w[11];
   w[199]=w[68]*w[8];
   w[208]=-w[29]+6.666666666E-1*w[199];
   w[209]=w[148]+w[150];
   w[210]=w[152]*w[22];
   w[210]=w[209]+w[210]+w[208];
   w[211]=w[154]-w[210];
   w[211]=w[157]+2.E+0*w[211]-w[143];
   w[211]=w[4]*w[211];
   w[212]=w[117]*w[58];
   w[213]=w[23]*w[9];
   w[112]=w[213]+2.E+0*w[112];
   w[112]=w[112]*w[6];
   w[213]=w[134]*w[9];
   w[214]=w[213]*w[8];
   w[112]=w[112]-w[212]-w[214];
   w[112]=w[112]*w[6];
   w[112]=w[112]-w[121];
   w[112]=w[112]*w[13];
   w[121]=w[68]*w[7];
   w[49]=w[121]-w[49];
   w[49]=w[49]*w[73];
   w[121]=w[23]*w[10];
   w[212]=w[134]*w[7];
   w[121]=w[121]-w[212];
   w[121]=w[121]*w[9];
   w[49]=w[112]-w[121]+w[49];
   w[112]=w[199]*w[10];
   w[112]=w[112]-w[125];
   w[121]=-w[127]-w[112];
   w[121]=2.E+0*w[121]+w[49];
   w[125]=w[37]+w[24];
   w[127]=w[125]*w[159];
   w[212]=w[24]+w[21];
   w[212]=-w[15]+3.333333333E-1*w[212];
   w[214]=w[212]*w[8];
   w[127]=w[127]+w[214];
   w[127]=w[127]*w[162];
   w[125]=w[125]*w[163];
   w[163]=w[212]*w[7];
   w[125]=w[127]-w[125]-w[163];
   w[127]=-w[125]*w[161];
   w[121]=w[211]+1.333333333E+0*w[121]+w[127];
   w[121]=w[121]*w[155];
   w[127]=w[37]+w[22];
   w[127]=w[127]*w[152];
   w[127]=w[127]-w[29]+w[209];
   w[127]=-w[207]+2.E+0*w[127];
   w[127]=w[127]*w[6];
   w[152]=w[203]*w[7];
   w[161]=w[188]*w[10];
   w[152]=w[152]+w[161];
   w[152]=w[152]*w[149];
   w[161]=w[180]-w[119];
   w[163]=w[161]*w[151];
   w[163]=w[163]+w[168];
   w[163]=w[163]*w[3];
   w[127]=w[127]+w[152]-w[163];
   w[127]=w[127]*w[13];
   w[152]=w[33]+w[10];
   w[152]=w[152]*w[68];
   w[145]=w[152]-w[145];
   w[127]=w[127]+6.666666666E-1*w[145];
   w[145]=w[161]*w[8];
   w[145]=w[145]+w[81];
   w[152]=w[4]*w[13];
   w[152]=3.333333333E-1*w[152];
   w[161]=w[145]*w[152];
   w[161]=w[161]-w[170]+w[127];
   w[161]=w[4]*w[161];
   w[121]=w[161]+w[121];
   w[161]=PM21p*PM22Lm;
   w[121]=w[121]*w[161];
   w[121]=w[121]+w[128];
   w[128]=5.E+0*w[22];
   w[163]=w[174]+w[128]-w[171];
   w[163]=w[163]*w[198];
   w[40]=w[163]-w[40];
   w[163]=-1.666666666E+0*w[44]-6.666666666E-1*w[41]+w[40];
   w[163]=w[8]*w[163];
   w[168]=w[24]+w[132]+w[175];
   w[170]=6.666666666E-1*w[11];
   w[168]=w[168]*w[170];
   w[170]=w[171]+w[22];
   w[170]=w[170]*w[184];
   w[19]=w[168]+w[170]+w[19];
   w[168]=4.E+0*w[24]+w[25];
   w[168]=w[168]*w[151];
   w[168]=w[168]+6.666666666E-1*w[32]+w[19];
   w[170]=1.666666666E+0*w[15];
   w[180]=w[170]+w[190];
   w[180]=w[180]*w[3];
   w[168]=4.E+0*w[168]-w[180];
   w[168]=w[3]*w[168];
   w[188]=3.E+0*w[22];
   w[190]=-w[139]+w[170]-w[188];
   w[190]=w[190]*w[8];
   w[146]=w[146]-w[37];
   w[146]=w[146]*w[11];
   w[16]=w[190]+w[146]+w[16];
   w[146]=-3.333333333E-1*w[44]-w[16];
   w[61]=w[171]+w[61];
   w[171]=w[61]*w[177];
   w[190]=-6.666666666E-1*w[24]+w[25];
   w[190]=w[9]*w[190];
   w[207]=5.333333333E+0*w[122];
   w[146]=w[207]+w[190]+4.E+0*w[146]+w[171];
   w[146]=w[146]*w[99];
   w[79]=w[79]+w[70];
   w[79]=w[9]*w[79];
   w[79]=w[146]+1.333333333E+0*w[79]+1.6E+1*w[163]+w[168];
   w[79]=w[13]*w[79];
   w[17]=w[59]-w[17];
   w[146]=w[182]-w[17];
   w[163]=w[100]+w[36];
   w[168]=3.333333333E-1*w[22];
   w[171]=w[168]-w[140];
   w[182]=w[174]+w[171];
   w[182]=w[9]*w[182];
   w[146]=w[182]+2.E+0*w[146]+w[163];
   w[79]=4.E+0*w[146]+w[79];
   w[79]=w[13]*w[79];
   w[146]=w[97]*w[7];
   w[51]=w[52]+w[146]-w[51];
   w[51]=4.E+0*w[51];
   w[146]=w[51]+w[36];
   w[182]=pow(w[3],2);
   w[190]=w[146]*w[182];
   w[209]=w[90]*w[74];
   w[211]=w[48]*w[3];
   w[211]=w[211]-w[209];
   w[211]=w[211]*w[3];
   w[212]=-w[9]*w[95];
   w[212]=-w[211]+w[212];
   w[214]=2.E+0*w[9];
   w[212]=w[212]*w[214];
   w[215]=w[28]*w[9];
   w[216]=w[25]-w[23];
   w[217]=w[216]-w[188];
   w[218]=w[3]*w[217];
   w[218]=w[218]+2.E+0*w[215];
   w[218]=w[9]*w[218];
   w[219]=w[182]*w[22];
   w[218]=w[219]+w[218];
   w[218]=w[218]*w[99];
   w[212]=w[218]+w[190]+w[212];
   w[218]=w[33]*w[24];
   w[32]=w[218]+w[32];
   w[91]=w[91]+w[32];
   w[91]=2.E+0*w[91];
   w[36]=w[91]-w[36];
   w[36]=w[36]*w[3];
   w[45]=w[117]+w[45];
   w[59]=w[45]+w[59];
   w[117]=w[59]*w[47];
   w[36]=w[36]-w[117];
   w[117]=w[209]+w[70];
   w[218]=w[9]*w[117];
   w[218]=w[36]+w[218];
   w[218]=w[182]*w[218];
   w[220]=w[90]*w[28];
   w[221]=w[220]-w[95];
   w[221]=w[221]*w[3];
   w[222]=-w[9]*w[221];
   w[223]=w[215]*w[3];
   w[219]=w[223]-w[219];
   w[219]=w[219]*w[99];
   w[98]=w[98]+w[56];
   w[98]=w[101]+2.E+0*w[98];
   w[223]=w[98]*w[182];
   w[222]=-w[219]+w[223]+w[222];
   w[222]=w[222]*w[99];
   w[218]=w[222]+w[218];
   w[218]=w[13]*w[218];
   w[212]=2.E+0*w[212]+w[218];
   w[212]=w[13]*w[212];
   w[218]=w[74]*pow(w[9],2);
   w[212]=-8.E+0*w[218]+w[212];
   w[212]=w[14]*w[212];
   w[86]=w[175]+w[86]+w[97];
   w[86]=w[86]*w[3];
   w[86]=w[86]-w[91];
   w[86]=w[86]*w[3];
   w[91]=w[45]-w[43];
   w[91]=w[91]*w[47];
   w[86]=w[86]+w[91];
   w[30]=w[30]*w[110];
   w[30]=w[30]+w[77];
   w[30]=w[30]*w[3];
   w[77]=w[66]*w[90];
   w[91]=w[110]*w[37];
   w[77]=w[77]-w[91];
   w[77]=w[77]*w[3];
   w[91]=w[71]*w[99];
   w[77]=w[77]+w[91];
   w[91]=w[6]*w[77];
   w[91]=-w[30]+w[91];
   w[91]=w[13]*w[91];
   w[70]=w[209]-w[70];
   w[110]=w[9]*w[70];
   w[218]=w[56]+w[43];
   w[101]=w[101]+2.E+0*w[218];
   w[218]=-w[9]*w[24];
   w[218]=w[218]-w[101];
   w[218]=w[218]*w[99];
   w[91]=w[91]+w[218]+w[110]+w[86];
   w[91]=w[13]*w[91];
   w[110]=5.E-1*w[13];
   w[84]=w[84]*w[110];
   w[84]=w[84]-w[87];
   w[84]=w[84]*w[2];
   w[87]=w[214]*w[48];
   w[51]=w[87]-w[51]-w[163];
   w[51]=w[84]+2.E+0*w[51]+w[91];
   w[51]=w[14]*w[51];
   w[91]=-w[28]-7.E+0*w[37];
   w[91]=w[91]*w[198];
   w[91]=w[91]-w[80];
   w[91]=w[13]*w[91];
   w[91]=w[91]+w[170]+w[22]-1.666666666E-1*w[174];
   w[91]=w[13]*w[91];
   w[51]=w[91]+w[51];
   w[51]=w[2]*w[51];
   w[91]=w[71]*w[8];
   w[170]=w[75]*w[28];
   w[91]=-w[91]+4.E+0*w[170];
   w[198]=w[220]-w[71];
   w[218]=w[6]*w[198];
   w[218]=w[91]+w[218];
   w[222]=2.E+0*w[13];
   w[218]=w[222]*w[218];
   w[223]=w[217]*w[90];
   w[223]=w[223]-w[95];
   w[218]=w[218]+w[223];
   w[218]=w[3]*w[218];
   w[220]=w[67]-w[220];
   w[224]=w[220]*w[214];
   w[225]=-w[3]*w[97];
   w[225]=w[225]+w[215];
   w[225]=w[6]*w[225];
   w[218]=8.E+0*w[225]+w[224]+w[218];
   w[218]=w[13]*w[218];
   w[93]=w[93]*w[222];
   w[93]=w[93]+w[74];
   w[224]=w[2]*w[93];
   w[225]=-w[13]*w[198];
   w[225]=4.E+0*w[22]+w[225];
   w[225]=w[225]*w[82];
   w[226]=w[9]*w[217];
   w[218]=w[225]+w[224]-4.E+0*w[226]+w[218];
   w[218]=w[14]*w[218];
   w[25]=-w[65]-w[25];
   w[25]=w[8]*w[25];
   w[25]=w[25]-w[81];
   w[25]=w[13]*w[25];
   w[25]=w[25]-w[179];
   w[81]=6.666666666E-1*w[13];
   w[25]=w[25]*w[81];
   w[25]=w[25]+w[218];
   w[25]=w[25]*w[82];
   w[176]=w[176]*w[58];
   w[27]=w[176]+w[27]+w[32];
   w[32]=w[8]*w[66];
   w[32]=w[32]+w[201];
   w[32]=w[6]*w[32];
   w[66]=w[75]*w[74];
   w[32]=-w[66]+w[32];
   w[32]=w[13]*w[32];
   w[75]=w[38]*w[9];
   w[176]=-w[74]*w[73];
   w[32]=4.E+0*w[32]+w[176]-2.E+0*w[27]+5.E-1*w[75];
   w[32]=w[13]*w[32];
   w[32]=w[181]-2.E+0*w[35]+w[32];
   w[32]=w[2]*w[32];
   w[131]=w[131]*w[28];
   w[131]=w[131]+w[170];
   w[170]=w[131]*w[222];
   w[164]=w[164]+w[188];
   w[176]=-w[8]*w[164];
   w[170]=w[170]-w[193]+w[176]-w[56];
   w[170]=w[13]*w[170];
   w[170]=-w[22]+w[170];
   w[176]=5.E-1*w[169];
   w[188]=w[37]*w[176];
   w[170]=8.E+0*w[170]+w[188];
   w[170]=w[4]*w[170];
   w[59]=w[59]+w[204];
   w[59]=w[9]*w[59];
   w[188]=w[8]+w[6];
   w[188]=w[202]*w[215]*w[188];
   w[59]=-w[188]+w[59];
   w[59]=w[13]*w[59];
   w[193]=w[48]*w[9];
   w[59]=w[193]+w[59];
   w[32]=w[170]+8.E+0*w[59]+w[32];
   w[32]=w[12]*w[32];
   w[25]=w[32]+w[25]+w[51]+w[79]+w[212];
   w[25]=PM21p*w[25];
   w[20]=w[39]-w[20];
   w[32]=w[20]+w[114];
   w[39]=w[158]*w[3];
   w[32]=-w[39]+2.E+0*w[32];
   w[39]=w[138]+w[22];
   w[51]=-1.333333333E+0*w[21]+w[39]+w[191];
   w[51]=w[51]*w[9];
   w[32]=w[51]+6.666666666E-1*w[32];
   w[32]=w[32]*w[73];
   w[51]=-w[140]+w[138]+w[119];
   w[51]=w[51]*w[90];
   w[51]=w[51]+w[167];
   w[51]=w[51]*w[9];
   w[59]=w[132]+w[28];
   w[59]=w[59]*w[151];
   w[59]=w[59]+w[147];
   w[79]=2.E+0*w[59];
   w[119]=w[79]-w[167];
   w[119]=w[119]*w[3];
   w[114]=w[18]-w[114];
   w[138]=w[114]*w[8];
   w[32]=-w[32]+w[51]-w[119]+2.666666666E+0*w[138];
   w[32]=w[32]*w[13];
   w[51]=w[90]*w[48];
   w[51]=w[51]-w[163];
   w[32]=w[32]+6.666666666E-1*w[51];
   w[119]=w[13]*w[32];
   w[138]=w[75]*w[73];
   w[138]=w[138]-w[188];
   w[140]=-2.E+0*w[114]-w[120];
   w[140]=w[9]*w[140];
   w[140]=w[140]+w[138];
   w[140]=w[13]*w[140];
   w[140]=-w[87]+w[140];
   w[128]=w[128]-w[23];
   w[147]=4.E+0*w[21];
   w[170]=w[175]+w[128]-w[147];
   w[170]=w[170]*w[8];
   w[170]=w[170]+w[201];
   w[170]=w[170]*w[6];
   w[135]=w[135]*w[118];
   w[135]=w[170]-w[135];
   w[135]=w[135]*w[81];
   w[75]=1.666666666E-1*w[75];
   w[135]=w[135]+w[141]-w[75];
   w[79]=w[79]+w[135];
   w[79]=w[13]*w[79];
   w[141]=6.666666666E-1*w[35];
   w[170]=w[141]-w[156];
   w[79]=w[79]+w[170];
   w[79]=w[2]*w[79];
   w[131]=w[131]*w[136];
   w[21]=6.666666666E-1*w[21];
   w[39]=w[39]-w[21];
   w[39]=w[39]*w[9];
   w[39]=w[39]+w[131];
   w[43]=w[20]+w[43];
   w[136]=1.333333333E+0*w[43]+w[39];
   w[136]=w[13]*w[136];
   w[202]=1.333333333E+0*w[22];
   w[136]=w[202]+w[136];
   w[204]=w[81]*w[142];
   w[212]=1.666666666E-1*w[37];
   w[218]=w[212]*w[169];
   w[204]=w[204]-w[218];
   w[136]=2.E+0*w[136]+w[204];
   w[136]=w[4]*w[136];
   w[79]=w[136]+1.333333333E+0*w[140]+w[79];
   w[79]=w[12]*w[79];
   w[128]=w[128]-w[132];
   w[128]=w[128]*w[58];
   w[136]=w[99]*w[24];
   w[128]=w[128]+w[136]+w[71];
   w[128]=w[128]*w[13];
   w[38]=w[128]+2.E+0*w[38];
   w[128]=-w[38]*w[152];
   w[139]=w[139]+w[48];
   w[139]=w[139]*w[8];
   w[64]=8.333333333E-2*w[64];
   w[139]=w[139]-w[64];
   w[85]=-w[85]+5.E-1*w[15];
   w[140]=w[85]-w[24];
   w[140]=w[140]*w[159];
   w[139]=w[140]+5.E-1*w[139];
   w[139]=w[139]*w[13];
   w[139]=w[139]+3.333333333E-1*w[74];
   w[140]=-w[139]*w[169];
   w[79]=w[79]+w[128]+w[119]+w[140];
   w[79]=PM21Lp*w[79];
   w[25]=w[25]+w[79];
   w[25]=PM22m*w[25];
   w[79]=w[175]-w[28];
   w[79]=w[79]*w[151];
   w[79]=w[79]+w[148];
   w[29]=w[79]-w[29];
   w[29]=w[29]*w[3];
   w[119]=w[18]*w[149];
   w[29]=w[29]-w[119];
   w[119]=w[134]+w[168]-w[137];
   w[119]=w[119]*w[90];
   w[119]=w[119]-w[167];
   w[119]=w[119]*w[9];
   w[128]=w[168]+w[23];
   w[21]=-1.333333333E+0*w[15]+w[128]+w[21];
   w[21]=w[21]*w[9];
   w[21]=w[21]+1.333333333E+0*w[20];
   w[21]=w[21]*w[73];
   w[21]=-2.E+0*w[29]+w[119]-w[21];
   w[21]=w[21]*w[13];
   w[29]=w[214]*w[68];
   w[29]=w[29]+w[51];
   w[21]=w[21]-6.666666666E-1*w[29];
   w[29]=w[13]*w[21];
   w[23]=-w[22]+5.E+0*w[23];
   w[15]=4.E+0*w[15];
   w[51]=w[132]+w[23]-w[15];
   w[51]=w[51]*w[8];
   w[51]=w[51]+w[201];
   w[51]=w[51]*w[6];
   w[118]=w[203]*w[118];
   w[51]=w[51]+w[118];
   w[51]=w[51]*w[81];
   w[51]=w[51]-w[75]+w[206];
   w[75]=w[79]+w[208];
   w[79]=2.E+0*w[75]+w[51];
   w[79]=w[13]*w[79];
   w[81]=w[141]+w[156];
   w[79]=w[79]-w[81];
   w[79]=w[2]*w[79];
   w[118]=w[128]-w[191];
   w[118]=w[118]*w[9];
   w[118]=w[118]+w[131];
   w[20]=w[20]+w[199];
   w[119]=1.333333333E+0*w[20]+w[118];
   w[119]=w[13]*w[119];
   w[119]=-w[202]+w[119];
   w[119]=2.E+0*w[119]+w[204];
   w[119]=w[4]*w[119];
   w[128]=w[73]*w[68];
   w[128]=w[128]+w[213];
   w[131]=-2.E+0*w[18]-w[128];
   w[131]=w[9]*w[131];
   w[131]=-w[188]+w[131];
   w[131]=w[13]*w[131];
   w[87]=w[87]+w[131];
   w[79]=w[119]+1.333333333E+0*w[87]+w[79];
   w[79]=w[12]*w[79];
   w[23]=w[23]-w[175];
   w[23]=w[23]*w[58];
   w[23]=w[23]+w[136]-w[71];
   w[23]=w[23]*w[13];
   w[23]=w[23]+2.E+0*w[68];
   w[58]=-w[23]*w[152];
   w[68]=w[171]-w[174];
   w[68]=w[68]*w[8];
   w[64]=w[68]-w[64];
   w[68]=w[85]+w[24];
   w[68]=w[68]*w[159];
   w[64]=w[68]+5.E-1*w[64];
   w[68]=pow(w[13],2);
   w[85]=-w[2]*w[64]*w[68];
   w[29]=w[79]+w[58]+w[29]+w[85];
   w[29]=w[29]*w[161];
   w[25]=w[29]+w[25];
   w[29]=-w[36]*w[182];
   w[36]=-w[117]*w[182];
   w[58]=w[74]*w[54];
   w[58]=w[95]+w[58];
   w[58]=w[58]*w[111];
   w[79]=w[62]*w[211];
   w[36]=w[58]+w[36]+w[79];
   w[36]=w[9]*w[36];
   w[58]=w[62]*w[215];
   w[42]=-w[217]*w[42];
   w[42]=-w[58]+w[221]+w[42];
   w[42]=w[9]*w[42];
   w[79]=-w[98]-w[102];
   w[79]=w[182]*w[79];
   w[42]=w[219]+w[42]+w[79];
   w[42]=w[42]*w[99];
   w[79]=-w[54]*w[190];
   w[29]=w[42]+w[36]+w[29]+w[79];
   w[29]=w[1]*w[29];
   w[36]=-w[5]*w[223];
   w[36]=-2.E+0*w[91]+w[36];
   w[36]=w[3]*w[36];
   w[42]=w[217]*w[54];
   w[42]=w[42]-w[220];
   w[42]=w[42]*w[69];
   w[69]=w[22]*w[5];
   w[79]=-w[198]+8.E+0*w[69];
   w[79]=w[3]*w[79];
   w[58]=-w[58]+w[79];
   w[58]=w[58]*w[73];
   w[63]=-w[63]+w[198];
   w[63]=w[4]*w[63]*w[54];
   w[36]=w[63]+w[58]+w[42]+w[36];
   w[36]=w[1]*w[36];
   w[42]=w[78]*w[89];
   w[36]=w[42]+w[36];
   w[36]=w[36]*w[82];
   w[42]=w[146]*w[54];
   w[54]=-w[48]*w[62];
   w[54]=w[54]-w[70];
   w[54]=w[9]*w[54];
   w[42]=w[54]+w[42]-w[86];
   w[42]=w[5]*w[42];
   w[54]=w[102]+w[101];
   w[54]=w[54]*w[62];
   w[58]=w[24]*w[111];
   w[54]=w[58]+w[54]-w[77];
   w[54]=w[6]*w[54];
   w[30]=w[54]+w[30]+w[42];
   w[30]=w[1]*w[30];
   w[30]=w[30]-w[88];
   w[30]=w[2]*w[30];
   w[29]=w[36]+w[29]+w[30];
   w[29]=w[29]*w[92];
   w[30]=w[48]*w[5];
   w[36]=w[30]+w[114];
   w[36]=2.E+0*w[36]+w[120];
   w[36]=w[9]*w[36];
   w[36]=w[36]-w[138];
   w[42]=-w[154]-w[59];
   w[42]=w[157]+2.E+0*w[42]-w[135];
   w[42]=w[2]*w[42];
   w[43]=-w[69]-w[43];
   w[39]=1.333333333E+0*w[43]-w[39];
   w[43]=w[212]*w[2];
   w[43]=-w[43]+6.666666666E-1*w[142];
   w[39]=2.E+0*w[39]-w[43];
   w[39]=w[4]*w[39];
   w[36]=w[39]+1.333333333E+0*w[36]+w[42];
   w[36]=w[12]*w[36];
   w[38]=w[38]*w[133];
   w[39]=w[2]*w[139];
   w[32]=w[36]+w[38]+w[39]-w[32];
   w[32]=PM21Lp*w[32];
   w[36]=w[185]*w[47];
   w[38]=-w[3]*w[172];
   w[39]=-w[179]*w[177];
   w[39]=w[39]+w[189];
   w[39]=w[39]*w[99];
   w[42]=w[70]*w[144];
   w[36]=w[39]+w[42]+w[36]+w[38];
   w[36]=w[13]*w[36];
   w[38]=6.666666666E-1*w[193]-4.E+0*w[50]-w[163];
   w[39]=w[166]+w[80];
   w[39]=w[39]*w[110];
   w[39]=3.333333333E-1*w[196]+w[39];
   w[39]=w[2]*w[39];
   w[42]=w[93]*w[205];
   w[36]=w[42]+w[39]+2.E+0*w[38]+w[36];
   w[36]=PM21p*w[36];
   w[32]=w[36]+w[32];
   w[32]=PM22m*w[32];
   w[36]=w[154]-w[75];
   w[36]=w[157]+2.E+0*w[36]-w[51];
   w[36]=w[2]*w[36];
   w[20]=w[69]-w[20];
   w[20]=1.333333333E+0*w[20]-w[118];
   w[20]=2.E+0*w[20]-w[43];
   w[20]=w[4]*w[20];
   w[18]=-w[30]+w[18];
   w[18]=2.E+0*w[18]+w[128];
   w[18]=w[9]*w[18];
   w[18]=w[188]+w[18];
   w[18]=w[20]+1.333333333E+0*w[18]+w[36];
   w[18]=w[12]*w[18];
   w[20]=w[23]*w[133];
   w[23]=w[64]*w[169];
   w[18]=w[18]+w[20]+w[23]-w[21];
   w[18]=w[18]*w[161];
   w[18]=w[18]+w[32];
   w[20]=w[8]*w[67];
   w[21]=w[6]*w[71];
   w[20]=w[20]+w[21];
   w[20]=w[20]*w[99];
   w[20]=-w[72]+w[20];
   w[20]=w[13]*w[20];
   w[21]=-w[9]*w[65];
   w[21]=-8.E+0*w[122]+w[21]-w[60];
   w[21]=w[21]*w[73];
   w[23]=w[9]*w[209];
   w[20]=w[20]+w[21]+w[23]-w[31];
   w[20]=w[13]*w[20];
   w[21]=w[9]*w[74];
   w[21]=w[21]-w[46]-w[163];
   w[23]=w[93]*w[82];
   w[20]=w[23]+w[84]+2.E+0*w[21]+w[20];
   w[20]=w[14]*w[20];
   w[21]=-w[13]*w[199];
   w[21]=w[21]+w[35];
   w[21]=w[13]*w[21];
   w[20]=w[21]+w[20];
   w[20]=w[4]*w[20];
   w[15]=w[15]+w[147];
   w[21]=w[24]+w[15];
   w[21]=w[21]*w[151];
   w[19]=w[21]-w[150]+w[19];
   w[21]=w[61]*w[165];
   w[19]=w[21]+w[178]+4.E+0*w[19]-w[180];
   w[19]=w[6]*w[19];
   w[19]=w[19]+w[104];
   w[19]=w[13]*w[19];
   w[21]=w[10]*w[158];
   w[23]=w[174]*w[33];
   w[21]=w[183]+w[21]+w[23];
   w[19]=2.E+0*w[21]+w[19];
   w[19]=w[13]*w[19];
   w[21]=w[3]*w[53];
   w[23]=w[9]*w[94];
   w[22]=w[3]*w[22];
   w[30]=-w[9]*w[97];
   w[22]=w[22]+w[30];
   w[22]=w[22]*w[99];
   w[21]=w[22]+w[21]+w[23];
   w[21]=w[6]*w[21];
   w[22]=w[3]*w[108];
   w[23]=-w[103]*w[214];
   w[21]=w[21]+w[22]+w[23];
   w[22]=w[99]*w[3]*w[57];
   w[22]=w[34]+w[22];
   w[22]=w[6]*w[22];
   w[22]=w[106]+w[22];
   w[22]=w[13]*w[22];
   w[21]=2.E+0*w[21]+w[22];
   w[21]=w[13]*w[21];
   w[22]=w[9]*w[96];
   w[21]=8.E+0*w[22]+w[21];
   w[21]=w[14]*w[21];
   w[22]=w[6]*w[113];
   w[23]=-w[200]*w[3]*w[109];
   w[22]=w[23]-w[105]+w[22];
   w[22]=w[13]*w[22];
   w[22]=-w[115]+w[22];
   w[22]=w[14]*w[22];
   w[23]=w[68]*w[6];
   w[26]=w[26]*w[23];
   w[22]=-2.5E-1*w[26]+w[22];
   w[22]=w[2]*w[22];
   w[19]=w[20]+w[22]+w[19]+w[21];
   w[19]=w[4]*w[19];
   w[20]=w[7]*w[45];
   w[21]=-w[10]*w[56];
   w[22]=-w[10]*w[164];
   w[26]=w[48]*w[33];
   w[22]=w[22]+w[26];
   w[22]=w[8]*w[22];
   w[20]=w[22]+w[21]+w[20];
   w[21]=w[7]*w[216];
   w[17]=1.333333333E+0*w[21]-1.666666666E+0*w[52]+w[173]-w[17];
   w[17]=w[100]+2.E+0*w[17]-w[195];
   w[17]=w[6]*w[17];
   w[21]=-2.666666666E+0*w[44]+w[187]+w[40];
   w[21]=w[21]*w[90];
   w[16]=-w[186]-w[16];
   w[16]=w[207]+4.E+0*w[16]+w[192];
   w[16]=w[6]*w[16];
   w[16]=w[16]+w[21]-w[194];
   w[16]=w[6]*w[16];
   w[21]=w[41]*w[76];
   w[16]=w[21]+w[16];
   w[16]=w[13]*w[16];
   w[16]=w[16]+2.E+0*w[20]+w[17];
   w[16]=w[13]*w[16];
   w[17]=2.E+0*w[126];
   w[16]=w[17]+w[16];
   w[20]=w[10]*w[37];
   w[20]=w[20]+w[107];
   w[21]=w[175]-w[132]+w[28];
   w[21]=w[21]*w[184];
   w[21]=w[21]-w[83];
   w[21]=w[21]*w[162];
   w[20]=w[21]+5.E-1*w[20]-w[197];
   w[20]=w[20]*w[169];
   w[15]=7.E+0*w[24]-w[15];
   w[15]=w[8]*w[15];
   w[15]=w[15]+w[136];
   w[15]=w[15]*w[159];
   w[15]=-w[66]+w[15];
   w[15]=w[15]*w[222];
   w[21]=-w[74]*w[165];
   w[15]=w[15]+w[21]-w[27];
   w[15]=w[13]*w[15];
   w[15]=w[15]-w[35];
   w[15]=2.E+0*w[15]+w[181];
   w[15]=w[4]*w[15];
   w[15]=w[15]+4.E+0*w[16]+w[20];
   w[15]=w[15]*w[155];
   w[15]=w[19]+w[15];
   w[15]=PM21p*w[15];
   w[16]=2.E+0*w[124]-w[116];
   w[16]=w[13]*w[16];
   w[16]=-w[17]+w[16];
   w[19]=2.E+0*w[153]+w[130];
   w[19]=w[13]*w[19];
   w[19]=w[19]+w[170];
   w[19]=w[4]*w[19];
   w[20]=w[160]*w[176];
   w[16]=w[19]+1.333333333E+0*w[16]+w[20];
   w[16]=w[16]*w[155];
   w[19]=w[13]*w[123];
   w[20]=-w[129]*w[152];
   w[21]=w[23]*w[157];
   w[19]=w[20]+w[19]+w[21];
   w[19]=w[4]*w[19];
   w[16]=w[19]+w[16];
   w[16]=PM21Lp*w[16];
   w[15]=w[15]+w[16];
   w[15]=PM22m*w[15];
   w[16]=2.E+0*w[210]+w[143];
   w[16]=w[13]*w[16];
   w[16]=w[16]-w[81];
   w[16]=w[4]*w[16];
   w[19]=2.E+0*w[112]-w[49];
   w[19]=w[13]*w[19];
   w[17]=w[17]+w[19];
   w[19]=w[125]*w[176];
   w[16]=w[16]+1.333333333E+0*w[17]+w[19];
   w[16]=w[16]*w[155];
   w[17]=-w[13]*w[127];
   w[19]=-w[145]*w[68]*w[133];
   w[17]=w[19]+w[17]+w[21];
   w[17]=w[4]*w[17];
   w[16]=w[17]+w[16];
   w[16]=w[16]*w[161];
   w[15]=w[16]+w[15];


K32[SI_K32(ip,izp,0,iq,izq,0)] += wj * FCtr * w[15];
K32[SI_K32(ip,izp,0,iq,izq,1)] += wj * FCtr * w[25];
K32[SI_K32(ip,izp,1,iq,izq,0)] += wj * FCtr * w[55];
K32[SI_K32(ip,izp,1,iq,izq,1)] += wj * FCtr * w[29];
K32[SI_K32(ip,izp,2,iq,izq,0)] += wj * FCtr * w[121];
K32[SI_K32(ip,izp,2,iq,izq,1)] += wj * FCtr * w[18];
