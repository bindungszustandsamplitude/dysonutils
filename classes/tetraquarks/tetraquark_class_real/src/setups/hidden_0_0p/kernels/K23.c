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
ampl = ns_data_v2::amplitudes::meson::vector::fit::m_0037_0037(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_0037(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_0037(0,std::real(l_l+q_l+0.25*q_q));}
else
if(quark_1.getMass() == 0.0200){
ampl = ns_data_v2::amplitudes::meson::vector::fit::m_0200_0200(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_0200(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_0200(0,std::real(l_l+q_l+0.25*q_q));}
else
if(quark_1.getMass() == 0.0500){
ampl = ns_data_v2::amplitudes::meson::vector::fit::m_0500_0500(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_0500(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_0500(0,std::real(l_l+q_l+0.25*q_q));}
else
if(quark_1.getMass() == 0.0855){
ampl = ns_data_v2::amplitudes::meson::vector::fit::m_0855_0855(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_0855(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_0855(0,std::real(l_l+q_l+0.25*q_q));}
else
if(quark_1.getMass() == 0.1500){
ampl = ns_data_v2::amplitudes::meson::vector::fit::m_1500_1500(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_1500(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_1500(0,std::real(l_l+q_l+0.25*q_q));}
else
if(quark_1.getMass() == 0.2100){
ampl = ns_data_v2::amplitudes::meson::vector::fit::m_2100_2100(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_2100(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_2100(0,std::real(l_l+q_l+0.25*q_q));}
else
if(quark_1.getMass() == 0.3500){
ampl = ns_data_v2::amplitudes::meson::vector::fit::m_3500_3500(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_3500(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_3500(0,std::real(l_l+q_l+0.25*q_q));}
else
if(quark_1.getMass() == 0.5000){
ampl = ns_data_v2::amplitudes::meson::vector::fit::m_5000_5000(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_5000(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_5000(0,std::real(l_l+q_l+0.25*q_q));}
else
if(quark_1.getMass() == 0.6500){
ampl = ns_data_v2::amplitudes::meson::vector::fit::m_6500_6500(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_6500(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_6500(0,std::real(l_l+q_l+0.25*q_q));}
else
if(quark_1.getMass() == 0.7950){
ampl = ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+p_l+0.25*p_p))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_7950(0,std::real(l_l+2.*p_l+q_l+p_p+p_q+0.25*q_q))
*ns_data_v2::amplitudes::meson::vector::fit::m_7950_7950(0,std::real(l_l+p_l+2.*q_l+0.25*p_p+p_q+q_q))
*ns_data_v2::amplitudes::diquark::scalar::fit::m_7950_7950(0,std::real(l_l+q_l+0.25*q_q));}
}



    w[1]=1./(-2.E+0*Q_Q*pow(Q_p,2)*p_p+pow(Q_Q,2)*pow(p_p,2)+pow(Q_p,4));
    w[2]=Q_Q;
    w[3]=Q_p;
    w[4]=Q_q;
    w[5]=p_p;
    w[6]=p_q;
    w[7]=p_l;
    w[8]=Q_l;
    w[9]=q_l;
    w[10]=l_l;
    w[11]=q_q;
   w[12]=ss3*w[1];
   w[13]=sv4*w[12];
   w[14]=PDQ2m*PDQ1p;
   w[15]=w[14]*w[13]*ss2;
   w[16]=w[14]*sv2;
   w[17]=w[16]*w[12];
   w[18]=sv3*w[14]*w[1];
   w[19]=w[18]*ss2;
   w[20]=w[17]-w[19];
   w[20]=w[20]*ss4;
   w[21]=sv4*w[18]*sv2;
   w[22]=w[21]*w[11];
   w[20]=w[20]+w[22];
   w[23]=w[20]+w[15];
   w[23]=w[23]*sv1;
   w[18]=w[18]*ss4;
   w[24]=sv2*ss1*w[18];
   w[21]=w[21]*sv1;
   w[25]=w[21]*w[10];
   w[26]=w[24]+w[25];
   w[13]=ss1*w[13]*w[16];
   w[16]=ss1*w[19]*sv4;
   w[27]=w[13]-w[16];
   w[28]=w[26]-w[27];
   w[23]=w[23]+w[28];
   w[23]=w[23]*w[10];
   w[29]=2.E+0*w[21];
   w[30]=w[29]*w[7];
   w[31]=w[30]+w[24];
   w[32]=w[29]*w[10];
   w[33]=w[31]+w[32];
   w[34]=w[19]*ss4;
   w[35]=w[15]-w[34];
   w[35]=w[35]*sv1;
   w[36]=-w[13]+2.E+0*w[16];
   w[37]=w[36]+w[33]+w[35];
   w[38]=w[37]*w[9];
   w[12]=w[14]*ss2*w[12]*ss4*ss1;
   w[14]=w[16]*w[11];
   w[12]=w[23]+w[12]+w[38]+w[14];
   w[14]=2.E+0*w[7];
   w[23]=w[26]*w[14];
   w[23]=w[23]+w[12];
   w[38]=4.E+0*w[23];
   w[17]=w[17]+w[19];
   w[17]=w[17]*ss4;
   w[17]=w[17]+w[22];
   w[19]=w[15]+w[17];
   w[19]=w[19]*sv1;
   w[22]=w[13]+w[16];
   w[19]=w[19]+w[22]+w[24];
   w[39]=w[21]*w[9];
   w[40]=w[39]+w[25];
   w[41]=w[21]*w[2];
   w[42]=w[21]*w[7];
   w[43]=w[42]+3.125E-2*w[41];
   w[19]=-w[43]+5.E-1*w[19]+3.E+0*w[40];
   w[44]=w[21]*w[6];
   w[45]=w[19]-w[44];
   w[46]=5.E-1*w[2];
   w[45]=w[45]*w[46];
   w[45]=w[45]-w[38];
   w[47]=w[39]+w[26];
   w[48]=2.E+0*w[47];
   w[49]=w[21]*w[8];
   w[50]=w[21]*w[4];
   w[51]=w[49]+w[50];
   w[52]=w[48]-w[51];
   w[53]=2.5E-1*w[41];
   w[54]=-w[53]+2.E+0*w[52];
   w[55]=w[5]*w[54];
   w[41]=1.25E-1*w[41];
   w[52]=-w[41]+w[52];
   w[52]=w[3]*w[52];
   w[56]=sv1*w[15];
   w[56]=w[56]-w[24];
   w[57]=w[56]+w[30];
   w[58]=w[57]+w[50];
   w[58]=w[49]+2.E+0*w[58];
   w[58]=w[58]*w[8];
   w[59]=w[6]*w[8];
   w[60]=w[59]*w[29];
   w[61]=-w[42]-w[56];
   w[61]=2.E+0*w[61]-w[50];
   w[61]=w[4]*w[61];
   w[52]=w[52]+w[55]-w[60]-w[58]+w[61]-w[45];
   w[52]=w[3]*w[52];
   w[20]=w[20]*sv1;
   w[55]=w[20]+w[27];
   w[61]=-w[53]+4.E+0*w[26];
   w[62]=w[44]+w[30];
   w[63]=w[49]+1.25E+0*w[50]-6.E+0*w[39]-w[55]+w[62]-w[61];
   w[63]=w[2]*w[63];
   w[20]=w[20]-w[27];
   w[64]=2.E+0*w[20];
   w[65]=w[64]-w[50];
   w[65]=w[65]*w[8];
   w[66]=w[28]+w[42];
   w[67]=2.E+0*w[66]-w[50];
   w[67]=w[4]*w[67];
   w[67]=-w[60]+w[67]+w[65];
   w[63]=2.E+0*w[67]+w[63];
   w[63]=w[5]*w[63];
   w[67]=w[37]*w[8];
   w[25]=w[25]+w[16];
   w[68]=2.E+0*w[4];
   w[69]=w[68]*w[25];
   w[67]=w[67]+w[69];
   w[67]=w[67]*w[6];
   w[34]=w[15]+w[34];
   w[34]=w[34]*sv1;
   w[33]=-w[36]+w[34]+w[33];
   w[69]=w[33]*w[7];
   w[70]=4.E+0*w[42];
   w[71]=w[70]*w[9];
   w[69]=w[71]+w[69];
   w[69]=w[69]*w[4];
   w[71]=w[20]*w[8];
   w[72]=w[71]*w[14];
   w[67]=w[72]+w[67]-w[69];
   w[67]=4.E+0*w[67];
   w[69]=w[34]-w[24];
   w[73]=w[30]-w[13];
   w[74]=w[69]+w[73];
   w[75]=w[74]*w[14];
   w[76]=2.5E+0*w[49]+1.5E+0*w[50]+w[74];
   w[76]=w[6]*w[76];
   w[77]=w[70]*w[8];
   w[78]=w[42]*w[4];
   w[76]=w[76]+w[77]+w[75]+2.5E+0*w[78];
   w[76]=w[2]*w[76];
   w[52]=w[52]+w[63]-w[67]+w[76];
   w[52]=w[3]*w[52];
   w[57]=-w[49]+2.E+0*w[57];
   w[57]=w[57]*w[8];
   w[56]=3.E+0*w[42]+w[56];
   w[63]=5.E-1*w[50];
   w[56]=2.E+0*w[56]+w[63];
   w[56]=w[4]*w[56];
   w[76]=3.E+0*w[49];
   w[79]=w[4]*w[29];
   w[79]=w[79]+w[76];
   w[80]=2.E+0*w[6];
   w[79]=w[79]*w[80];
   w[45]=w[79]+w[57]+w[56]+w[45];
   w[45]=w[2]*w[45];
   w[18]=ss2*sv1*w[18];
   w[36]=w[18]-w[36];
   w[56]=w[29]*w[9];
   w[79]=w[36]+w[56];
   w[81]=w[79]*w[4];
   w[81]=w[81]-w[71];
   w[81]=w[81]*w[8];
   w[59]=w[59]*w[50];
   w[82]=w[25]+w[42];
   w[83]=pow(w[4],2);
   w[84]=w[83]*w[82];
   w[59]=w[81]+w[59]-w[84];
   w[59]=8.E+0*w[59];
   w[81]=w[5]*w[2];
   w[54]=-w[54]*w[81];
   w[45]=w[54]-w[59]+w[45];
   w[45]=w[5]*w[45];
   w[54]=w[25]*w[6];
   w[36]=w[36]*w[7];
   w[84]=w[30]*w[9];
   w[36]=w[84]+w[36];
   w[54]=w[54]-w[36];
   w[54]=w[54]*w[6];
   w[84]=pow(w[7],2);
   w[85]=w[84]*w[20];
   w[54]=w[54]+w[85];
   w[85]=5.E-1*w[44];
   w[86]=w[85]+w[30];
   w[86]=w[86]*w[6];
   w[84]=w[84]*w[29];
   w[84]=w[86]+w[84];
   w[84]=w[84]*w[2];
   w[54]=w[84]-8.E+0*w[54];
   w[84]=w[54]*w[2];
   w[45]=w[52]-w[84]+w[45];
   w[45]=w[3]*w[45];
   w[52]=4.E+0*w[39];
   w[33]=w[52]+w[33];
   w[33]=w[33]*w[8];
   w[82]=w[82]*w[68];
   w[33]=w[33]-w[82]+w[60];
   w[33]=w[33]*w[6];
   w[37]=w[7]*w[37]*w[4];
   w[33]=w[33]-w[37]-w[72];
   w[33]=4.E+0*w[33];
   w[37]=w[63]+5.E-1*w[49];
   w[82]=w[29]*w[6];
   w[86]=w[82]+6.E+0*w[42];
   w[69]=w[13]-w[69]-w[86]-w[37];
   w[69]=w[6]*w[69];
   w[87]=5.E-1*w[78];
   w[69]=w[69]-w[75]-w[87];
   w[69]=w[2]*w[69];
   w[69]=w[33]+w[69];
   w[69]=w[2]*w[69];
   w[64]=w[64]+w[50];
   w[64]=w[64]*w[8];
   w[66]=-w[66]*w[68];
   w[66]=w[60]+w[66]-w[64];
   w[62]=w[62]+2.5E-1*w[50];
   w[75]=w[32]+2.E+0*w[24];
   w[88]=-w[75]+w[62]+w[41];
   w[52]=w[52]+w[55]-w[88];
   w[52]=w[2]*w[52];
   w[52]=2.E+0*w[66]+w[52];
   w[52]=w[52]*w[81];
   w[52]=w[69]+w[52];
   w[52]=w[5]*w[52];
   w[45]=w[52]+w[45];
   w[45]=ampl*w[45];
   w[23]=2.E+0*w[23]+w[78];
   w[52]=w[19]*w[46];
   w[47]=4.E+0*w[47];
   w[66]=w[47]+w[49];
   w[66]=w[66]*w[80];
   w[69]=w[48]+w[49];
   w[89]=-w[53]+2.E+0*w[69];
   w[90]=w[5]*w[89];
   w[41]=w[41]-w[69];
   w[41]=w[3]*w[41];
   w[23]=w[41]+w[90]-w[52]+w[66]+2.E+0*w[23]+w[57];
   w[23]=w[3]*w[23];
   w[41]=w[56]+w[49];
   w[57]=w[41]+w[61]-w[62]-w[55];
   w[57]=w[2]*w[57];
   w[26]=w[26]+w[56]+w[27];
   w[61]=w[26]+w[42];
   w[62]=-w[61]*w[68];
   w[62]=w[60]+w[62]+w[65];
   w[57]=2.E+0*w[62]+w[57];
   w[57]=w[5]*w[57];
   w[62]=w[24]-w[13];
   w[35]=w[35]-w[62];
   w[65]=1.5E+0*w[49]+w[63]-w[35]-w[86];
   w[65]=w[6]*w[65];
   w[66]=w[35]+w[30];
   w[68]=w[66]*w[14];
   w[65]=w[65]+w[77]-w[68]+1.5E+0*w[78];
   w[65]=w[2]*w[65];
   w[23]=w[23]+w[57]+w[33]+w[65];
   w[23]=w[3]*w[23];
   w[33]=w[63]-w[30];
   w[57]=-w[4]*w[33];
   w[48]=-w[48]+w[50];
   w[48]=2.E+0*w[48]+w[49];
   w[48]=w[48]*w[80];
   w[38]=w[52]+w[48]-w[58]-w[38]+w[57];
   w[38]=w[2]*w[38];
   w[48]=-w[89]*w[81];
   w[38]=w[48]-w[59]+w[38];
   w[38]=w[5]*w[38];
   w[23]=w[23]-w[84]+w[38];
   w[23]=w[3]*w[23];
   w[37]=w[66]+w[37];
   w[37]=w[6]*w[37];
   w[37]=w[37]+w[68]+w[87];
   w[37]=w[2]*w[37];
   w[37]=-w[67]+w[37];
   w[37]=w[2]*w[37];
   w[38]=2.E+0*w[61]-w[50];
   w[38]=w[4]*w[38];
   w[38]=-w[60]+w[38]-w[64];
   w[48]=w[55]+w[88];
   w[48]=w[2]*w[48];
   w[38]=2.E+0*w[38]+w[48];
   w[38]=w[38]*w[81];
   w[37]=w[37]+w[38];
   w[37]=w[5]*w[37];
   w[23]=w[37]+w[23];
   w[23]=ampl*w[23];
   w[37]=w[75]-w[20];
   w[37]=w[37]*w[7];
   w[37]=w[37]+w[12];
   w[19]=w[19]-w[85];
   w[19]=w[19]*w[46];
   w[19]=-w[19]+4.E+0*w[37];
   w[37]=w[18]-w[13];
   w[38]=2.E+0*w[37];
   w[48]=w[38]+w[51];
   w[48]=w[48]*w[8];
   w[47]=-w[50]+w[47]-w[53];
   w[52]=w[47]*w[5];
   w[53]=-w[4]*w[66];
   w[26]=2.E+0*w[26];
   w[57]=w[26]-w[51];
   w[57]=w[57]*w[80];
   w[53]=w[52]+w[57]+w[48]+w[53]+w[19];
   w[53]=w[5]*w[53];
   w[53]=w[54]+w[53];
   w[53]=w[53]*pow(w[2],2);
   w[33]=w[35]+w[33];
   w[33]=w[4]*w[33];
   w[35]=-w[38]+w[51];
   w[35]=w[8]*w[35];
   w[26]=-w[26]-w[51];
   w[26]=w[26]*w[80];
   w[19]=w[26]+w[35]+w[33]-w[19];
   w[19]=w[2]*w[19];
   w[26]=w[63]+w[41]+w[55];
   w[33]=w[26]*w[2];
   w[27]=w[39]+w[27];
   w[35]=w[4]*w[27];
   w[35]=w[35]-w[71];
   w[35]=8.E+0*w[35]+w[33];
   w[35]=w[3]*w[35];
   w[39]=w[47]*w[81];
   w[19]=w[35]-w[39]+w[59]+w[19];
   w[19]=w[3]*w[19];
   w[25]=w[42]+2.E+0*w[25];
   w[25]=w[25]*w[4];
   w[35]=w[79]*w[8];
   w[41]=w[49]*w[6];
   w[25]=w[25]-w[41]-w[35];
   w[25]=w[25]*w[6];
   w[35]=w[36]*w[4];
   w[25]=w[25]-w[35]+w[72];
   w[29]=w[29]*w[8];
   w[35]=w[29]+w[50];
   w[36]=w[82]+w[70]-w[35];
   w[36]=w[6]*w[36];
   w[30]=w[30]*w[8];
   w[30]=w[30]+w[78];
   w[36]=-2.E+0*w[30]+w[36];
   w[36]=w[2]*w[36];
   w[36]=8.E+0*w[25]+w[36];
   w[36]=w[2]*w[36];
   w[27]=-4.E+0*w[27]+w[50];
   w[27]=w[4]*w[27];
   w[27]=w[27]+2.E+0*w[64];
   w[27]=2.E+0*w[27]-w[33];
   w[27]=w[27]*w[81];
   w[19]=w[19]+w[36]+w[27];
   w[19]=w[3]*w[19];
   w[19]=w[19]+w[53];
   w[19]=ampl*w[19];
   w[20]=w[75]+w[20];
   w[20]=w[20]*w[7];
   w[12]=w[20]+w[12];
   w[12]=4.E+0*w[12];
   w[13]=w[50]+w[34]-w[13]-w[31];
   w[13]=w[4]*w[13];
   w[20]=w[15]-3.E+0*w[17];
   w[20]=sv1*w[20];
   w[20]=w[20]-3.E+0*w[22]+w[24];
   w[24]=w[43]+w[85];
   w[20]=5.E-1*w[20]-w[24]-5.E+0*w[40];
   w[20]=w[20]*w[46];
   w[27]=w[76]+w[38]+3.E+0*w[50];
   w[27]=w[8]*w[27];
   w[28]=2.E+0*w[28];
   w[31]=-w[28]-w[51];
   w[31]=w[31]*w[80];
   w[13]=-w[52]+w[20]+w[31]+w[27]-w[12]+w[13];
   w[13]=w[5]*w[13];
   w[14]=w[37]*w[14];
   w[20]=-w[14]-w[30];
   w[27]=-w[38]-w[35];
   w[27]=w[6]*w[27];
   w[26]=w[5]*w[26];
   w[30]=sv1*w[17];
   w[22]=w[30]+w[22];
   w[22]=w[56]+5.E-1*w[22]+w[32];
   w[22]=w[3]*w[22];
   w[20]=w[22]+w[26]+2.E+0*w[20]+w[27];
   w[20]=w[3]*w[20];
   w[13]=w[20]+w[13]+w[54];
   w[13]=w[3]*w[13];
   w[18]=w[44]+w[18]+w[73];
   w[18]=w[6]*w[18];
   w[14]=w[14]+w[18];
   w[14]=w[2]*w[14];
   w[14]=4.E+0*w[25]+w[14];
   w[18]=w[83]*w[21];
   w[20]=w[4]*w[29];
   w[18]=w[18]+w[20];
   w[18]=2.E+0*w[18]-w[33];
   w[18]=w[5]*w[18];
   w[14]=2.E+0*w[14]+w[18];
   w[14]=w[5]*w[14];
   w[13]=w[14]+w[13];
   w[13]=w[3]*w[13];
   w[14]=-w[15]+w[17];
   w[14]=sv1*w[14];
   w[14]=w[14]+w[16]-w[62];
   w[14]=5.E-1*w[14]+w[24]+w[40];
   w[14]=w[14]*w[46];
   w[15]=-w[63]-w[74];
   w[15]=w[4]*w[15];
   w[16]=w[28]-w[51];
   w[16]=w[16]*w[80];
   w[12]=w[14]+w[16]-w[48]+w[12]+w[15];
   w[12]=w[2]*w[12];
   w[12]=w[39]+w[59]+w[12];
   w[12]=w[12]*pow(w[5],2);
   w[12]=w[12]+w[13];
   w[12]=ampl*w[12];


K23[SI_K23(ip,izp,0,iq,izq,0)] += wj * FCtr * w[12];
K23[SI_K23(ip,izp,1,iq,izq,0)] += wj * FCtr * w[45];
K23[SI_K23(ip,izp,2,iq,izq,0)] += wj * FCtr * w[23];
K23[SI_K23(ip,izp,3,iq,izq,0)] += wj * FCtr * w[19];