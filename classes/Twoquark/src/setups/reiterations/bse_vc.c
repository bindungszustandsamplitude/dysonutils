
    w[1]=1./( - 1.6E+1*P_P*pow(P_p,2) + 1.6E+1*pow(P_P,2)*p_p);
    w[2]=P_P;
    w[3]=P_p;
    w[4]=p_k;
    w[5]=q_k;
    w[6]=pow(k_k,-1);
    w[7]=P_q;
    w[8]=P_k;
    w[9]=p_p;
    w[10]=p_q;
    w[11]=1./( - 8.E+0*P_P*P_p*p_p + 8.E+0*pow(P_p,3));
    w[12]=1./( - P_P*p_p + pow(P_p,2));
    w[13]=1./( - 4.E+0*P_P*p_p + 4.E+0*pow(P_p,2));
    w[14]=1./( - 2.E+0*P_P*pow(P_p,3)*p_p + pow(P_P,2)*P_p*pow(p_p,2) +
   pow(P_p,5));
    w[15]=q_q;
    w[16]=1./( - 2.E+0*P_P*pow(P_p,2)*p_p + pow(P_P,2)*pow(p_p,2) + pow(
   P_p,4));
    w[17]=1./( - 6.4E+1*P_P*pow(P_p,2)*p_p + 3.2E+1*pow(P_P,2)*pow(
   p_p,2) + 3.2E+1*pow(P_p,4));
   w[18]=w[6]*G;
   w[19]=w[18]*w[8];
   w[20]=w[2]*w[9];
   w[21]=w[19]*w[20];
   w[22]=w[4]*w[2];
   w[23]=w[18]*w[3];
   w[24]=w[22]*w[23];
   w[25]=w[21] - w[24];
   w[26]=w[25]*w[5];
   w[27]=w[8]*w[2];
   w[28]=w[18]*w[4];
   w[29]=w[27]*w[28];
   w[30]=w[29]*w[10];
   w[31]=pow(w[4],2);
   w[32]=w[18]*w[2];
   w[33]=w[31]*w[32];
   w[34]=w[33]*w[7];
   w[30]=w[26] + w[30] - w[34];
   w[34]=w[20]*w[18];
   w[35]=pow(w[8],2);
   w[36]=w[35]*w[34];
   w[37]=pow(w[22],2);
   w[38]=w[37]*w[18];
   w[39]=w[36] - w[38];
   w[40]= - w[39] + w[30];
   w[40]=w[1]*w[40];
   w[41]=eta*w[1];
   w[42]=w[39]*w[41];
   w[40]=w[40] + w[42];
   w[43]=ssp*svm;
   w[40]=w[40]*w[43];
   w[30]=w[30]*w[1];
   w[42]= - w[30] - w[42];
   w[44]=svp*ssm;
   w[42]=w[42]*w[44];
   w[40]=w[40] + w[42];
   w[40]=1.6E+1*w[40];
   w[42]=w[35]*w[18];
   w[45]=w[10]*w[11];
   w[46]=w[42]*w[45];
   w[47]=w[28]*w[11];
   w[48]=w[7]*w[8];
   w[49]=w[47]*w[48];
   w[46]=w[46] - w[49];
   w[49]=w[28]*w[2];
   w[50]=w[49]*w[11];
   w[51]=w[23]*w[8];
   w[52]=w[51]*w[11];
   w[53]=w[50] - w[52];
   w[54]=w[53]*w[5];
   w[54]=w[54] - w[46];
   w[55]=2.E+0*w[8];
   w[56]=w[53]*w[55];
   w[57]=eta - 1.E+0;
   w[58]=w[56]*w[57];
   w[58]=w[54] + w[58];
   w[58]=w[58]*w[43];
   w[59]= - eta*w[56];
   w[59]=w[59] - w[54];
   w[59]=w[59]*w[44];
   w[58]=w[58] + w[59];
   w[58]=8.E+0*w[58];
   w[59]=w[2]*G;
   w[60]= - w[59] + 5.E-1*w[42];
   w[60]=w[60]*w[10];
   w[61]=w[28]*w[8];
   w[62]=w[3]*G;
   w[63]= - w[62] + 5.E-1*w[61];
   w[63]=w[63]*w[7];
   w[64]=w[49] - w[51];
   w[65]=w[64]*w[5];
   w[60]= - w[60] + w[63] - 5.E-1*w[65];
   w[63]=svp*svm;
   w[66]=w[63]*w[12];
   w[67]= - w[60]*w[66];
   w[68]=w[59]*w[10];
   w[69]=w[62]*w[7];
   w[70]=w[68] - w[69];
   w[71]=w[70]*w[13];
   w[72]=w[43] + w[44];
   w[73]= - 1.2E+1*w[71]*w[72];
   w[74]=pow(w[3],2);
   w[75]=w[74]*w[18];
   w[76]=2.E+0*w[75];
   w[77]=w[76] + w[34];
   w[78]=2.E+0*w[77];
   w[79]=w[78]*w[22];
   w[80]=w[51]*w[20];
   w[79]= - w[79] + 3.E+0*w[80];
   w[81]=w[79]*w[8];
   w[82]=3.E+0*w[23];
   w[83]=w[37]*w[82];
   w[84]=pow(w[3],3);
   w[85]=w[84]*G;
   w[86]=w[59]*w[9];
   w[87]=w[86]*w[3];
   w[88]=w[85] - w[87];
   w[89]=w[88]*w[2];
   w[81]=w[89] + w[83] + w[81];
   w[83]=w[81]*eta;
   w[81]=w[83] - w[81];
   w[90]=w[84]*w[18];
   w[20]=w[23]*w[20];
   w[91]=w[90] - w[20];
   w[92]=w[91]*w[5];
   w[93]=w[92]*w[55];
   w[94]=2.E+0*w[34];
   w[95]=w[94] + w[75];
   w[96]=w[95]*w[8];
   w[97]=3.E+0*w[24];
   w[98]=w[96] - w[97];
   w[99]=w[98]*w[8];
   w[100]=w[74]*G;
   w[101]=w[100] - w[86];
   w[102]=w[101]*w[2];
   w[103]=w[99] - w[102];
   w[104]=2.E+0*w[10];
   w[105]=w[103]*w[104];
   w[93]=w[93] - w[105];
   w[105]=w[96]*w[4];
   w[106]=2.E+0*w[88];
   w[107]=w[31]*w[2];
   w[108]=w[82]*w[107];
   w[105]= - w[108] + w[105] - w[106];
   w[109]=2.E+0*w[7];
   w[110]= - w[105]*w[109];
   w[110]=w[110] - w[93] + w[81];
   w[110]=eta*w[110];
   w[111]=w[104]*w[98];
   w[112]=2.E+0*w[5];
   w[113]=w[91]*w[112];
   w[111]=w[111] - w[113];
   w[114]=w[91]*w[8];
   w[115]=w[114] + w[111];
   w[115]=w[5]*w[115];
   w[116]=w[86] + 2.E+0*w[100];
   w[117]=w[104]*w[116];
   w[118]=w[28]*w[74];
   w[119]=w[51]*w[9];
   w[118]=w[118] - w[119];
   w[120]=6.E+0*w[5];
   w[121]=w[120]*w[118];
   w[122]=w[69]*w[9];
   w[123]=3.E+0*w[122];
   w[117]= - w[123] + w[117] + w[121];
   w[121]=w[105] + w[117];
   w[121]=w[7]*w[121];
   w[124]=3.E+0*w[10];
   w[125]=w[59]*w[3];
   w[126]=w[124]*w[125];
   w[127]= - w[126] - w[103];
   w[127]=w[10]*w[127];
   w[78]=w[78]*w[4];
   w[78]= - w[78] + 3.E+0*w[119];
   w[78]=w[78]*w[8];
   w[78]=w[78] + w[108];
   w[108]=w[15]*w[78];
   w[108]=w[110] + w[108] + w[121] + w[127] + w[115];
   w[108]=w[108]*w[63];
   w[110]=w[78] + w[88];
   w[115]=ssp*ssm;
   w[119]=w[110]*w[115];
   w[108]=w[119] + w[108];
   w[108]=w[14]*w[108];
   w[119]=w[77]*w[27];
   w[121]=w[23]*w[4];
   w[127]=pow(w[2],2);
   w[128]=w[121]*w[127];
   w[129]= - w[119] + 6.E+0*w[128];
   w[130]=w[129]*w[8];
   w[131]=pow(w[2],3);
   w[132]=w[18]*w[131]*w[31];
   w[133]=w[101]*w[127];
   w[130]= - 3.E+0*w[132] + w[130] - w[133];
   w[134]=w[130]*eta;
   w[135]=w[134] - w[130];
   w[136]=3.E+0*w[38];
   w[137]=w[136] + w[102];
   w[22]=w[51]*w[22];
   w[138]= - w[137] + 3.E+0*w[22];
   w[139]=w[138]*w[109];
   w[140]=w[75] - w[34];
   w[141]=w[140]*w[5];
   w[142]=w[141]*w[27];
   w[143]=w[127]*w[28];
   w[144]=w[51]*w[2];
   w[145]=w[144] - w[143];
   w[146]=w[145]*w[10];
   w[147]=6.E+0*w[8];
   w[148]=w[147]*w[146];
   w[148]= - w[148] + 2.E+0*w[142];
   w[139]=w[139] + w[148];
   w[149]= - w[135] - w[139];
   w[149]=eta*w[149];
   w[150]=w[141]*w[2];
   w[151]=2.E+0*w[150];
   w[152]= - w[151] + 6.E+0*w[146];
   w[153]=w[140]*w[27];
   w[154]=w[153] + w[152];
   w[154]=w[5]*w[154];
   w[155]=w[77]*w[8];
   w[97]=w[155] - w[97];
   w[156]=w[97]*w[112];
   w[157]=6.E+0*w[10];
   w[158]=w[157]*w[125];
   w[159]=w[116]*w[7];
   w[156]=w[159] + w[156] - w[158];
   w[158]=w[138] - w[156];
   w[158]=w[7]*w[158];
   w[160]=6.E+0*w[24];
   w[155]=w[160] - w[155];
   w[155]=w[155]*w[8];
   w[161]=w[155] - w[136];
   w[162]= - w[15]*w[161];
   w[163]=w[145]*w[8];
   w[164]=w[127]*G;
   w[165]=w[164]*w[10];
   w[166]=w[163] + w[165];
   w[167]= - w[166]*w[124];
   w[149]=w[149] + w[162] + w[158] + w[167] + w[154];
   w[154]=w[63]*w[16];
   w[149]=w[149]*w[154];
   w[155]=w[155] - w[137];
   w[158]=w[155]*w[115];
   w[162]= - w[16]*w[158];
   w[149]=w[162] + w[149];
   w[162]=w[51]*w[4];
   w[167]=w[33] - w[162];
   w[167]= - w[101] - 3.E+0*w[167];
   w[168]=w[167]*w[7];
   w[169]=w[141]*w[8];
   w[170]=w[64]*w[8];
   w[171]=w[170]*w[124];
   w[168]=w[169] + w[171] + w[168];
   w[171]= - w[155] + w[168];
   w[171]=w[17]*w[171];
   w[172]=eta*w[17];
   w[173]=w[155]*w[172];
   w[171]=w[171] + w[173];
   w[171]=w[171]*w[43];
   w[168]=w[168]*w[17];
   w[173]= - w[168] - w[173];
   w[173]=w[173]*w[44];
   w[171]=w[171] + w[173];
   w[171]=1.6E+1*w[171];
   w[173]=w[33] + 2.E+0*w[101];
   w[174]=w[173] - w[162];
   w[175]=w[174]*w[7];
   w[176]= - w[21] + 2.E+0*w[24];
   w[177]=w[176]*w[8];
   w[178]=w[177] - w[38];
   w[179]=2.E+0*w[102];
   w[180]=w[178] - w[179];
   w[181]=w[180]*eta;
   w[182]=w[64]*w[10];
   w[183]=w[182]*w[8];
   w[169]=w[183] + w[169];
   w[175]= - w[169] + w[175] - w[181];
   w[183]=w[180] + w[175];
   w[183]=w[183]*w[43];
   w[175]= - w[175]*w[44];
   w[175]=w[183] + w[175];
   w[175]=w[12]*w[175];
   w[183]=2.E+0*w[32];
   w[31]=w[183]*w[31];
   w[183]=w[31] - w[86];
   w[184]=w[183]*w[7];
   w[185]= - w[125] + 2.E+0*w[29];
   w[186]=w[185]*w[104];
   w[187]= - w[112]*w[21];
   w[186]= - w[184] + w[187] + w[38] + w[186];
   w[186]=w[7]*w[186];
   w[187]= - w[143] + 2.E+0*w[144];
   w[188]=w[187]*w[104];
   w[188]=w[188] - w[151];
   w[189]=w[19]*w[9];
   w[190]=w[189]*w[127];
   w[191]=w[190] - w[128];
   w[192]=w[188] - w[191];
   w[192]=w[192]*w[5];
   w[193]=w[143]*w[8];
   w[194]=2.E+0*w[35];
   w[195]=w[194]*w[32];
   w[195]=w[195] - w[164];
   w[196]=w[195]*w[10];
   w[197]=w[193] + w[196];
   w[198]=w[197]*w[10];
   w[192]=w[192] - w[198];
   w[178]=w[102] - w[178];
   w[178]=w[15]*w[178];
   w[178]=w[178] + w[186] + w[192];
   w[178]=w[1]*w[178];
   w[186]=w[9]*w[42]*w[127];
   w[186]=w[186] - w[132];
   w[198]=w[191]*w[112];
   w[199]=w[143]*w[55];
   w[200]=w[10]*w[199];
   w[18]=2.E+0*w[18];
   w[201]=w[37]*w[18];
   w[202]= - w[7]*w[201];
   w[198]=w[202] + w[198] + w[200] - w[186];
   w[198]=w[1]*w[198];
   w[186]=w[186]*w[41];
   w[186]=w[198] + w[186];
   w[186]=eta*w[186];
   w[178]=w[178] + w[186];
   w[178]=w[178]*w[63];
   w[39]=w[1]*w[39]*w[115];
   w[39]=w[39] + w[178];
   w[39]=1.6E+1*w[39];
   w[178]=w[143]*w[11];
   w[186]=w[144]*w[11];
   w[178]=w[178] - w[186];
   w[198]=w[178]*w[5];
   w[200]=w[35]*w[32];
   w[202]=w[200]*w[45];
   w[198]=w[198] - w[202];
   w[203]=w[29]*w[11];
   w[204]=w[203]*w[7];
   w[205]=w[178]*w[8];
   w[206]=w[205]*w[57];
   w[206]=w[204] + w[198] + w[206];
   w[207]=2.E+0*eta;
   w[206]=w[206]*w[207];
   w[32]=w[45]*w[32];
   w[208]=w[32]*w[55];
   w[209]=w[208] + w[178];
   w[209]=w[209]*w[5];
   w[209]=w[209] - w[202];
   w[210]=w[112]*w[50];
   w[210]= - w[203] + w[210];
   w[210]=w[7]*w[210];
   w[206]=w[206] + w[210] - w[209];
   w[206]=w[206]*w[63];
   w[210]=w[115]*w[56];
   w[206]=w[210] + w[206];
   w[206]=8.E+0*w[206];
   w[72]=w[12]*w[60]*w[72];
   w[210]=w[125]*w[7];
   w[210]=w[210] - w[165];
   w[211]=w[210]*w[13];
   w[212]=1.2E+1*w[63];
   w[213]=w[211]*w[212];
   w[105]=w[105]*w[7];
   w[214]=w[92]*w[8];
   w[215]=w[103]*w[10];
   w[214]=w[214] - w[215];
   w[105]=w[105] + w[214];
   w[81]= - w[81] + w[105];
   w[81]=w[81]*w[43];
   w[83]=w[83] - w[105];
   w[83]=w[83]*w[44];
   w[81]=w[81] + w[83];
   w[81]=w[14]*w[81];
   w[83]=w[138]*w[7];
   w[105]=w[145]*w[124];
   w[215]=w[105]*w[8];
   w[215]=w[215] - w[142];
   w[83]=w[83] - w[215];
   w[135]=w[135] + w[83];
   w[216]=w[43]*w[16];
   w[135]=w[135]*w[216];
   w[83]= - w[134] - w[83];
   w[134]=w[44]*w[16];
   w[83]=w[83]*w[134];
   w[83]=w[135] + w[83];
   w[135]=3.E+0*w[7];
   w[183]=w[183]*w[135];
   w[217]=w[185]*w[157];
   w[138]= - w[183] - 6.E+0*w[26] + w[217] - w[138];
   w[138]=w[7]*w[138];
   w[217]=w[152] - w[153];
   w[217]=w[217]*w[5];
   w[218]=w[196] - w[163];
   w[218]=w[218]*w[124];
   w[217]=w[217] - w[218];
   w[136]= - 3.E+0*w[177] + w[179] + w[136];
   w[136]=w[15]*w[136];
   w[136]=w[136] + w[138] + w[217];
   w[136]=w[17]*w[136];
   w[138]= - w[130] + w[139];
   w[138]=w[17]*w[138];
   w[130]=w[130]*w[172];
   w[130]=w[138] + w[130];
   w[130]=eta*w[130];
   w[130]=w[136] + w[130];
   w[130]=w[130]*w[63];
   w[136]=w[17]*w[158];
   w[130]=w[136] + w[130];
   w[130]=1.6E+1*w[130];
   w[136]= - w[189] + 2.E+0*w[121];
   w[136]=w[136]*w[8];
   w[33]=w[136] - w[33];
   w[138]= - w[33] + 1.5E+0*w[101];
   w[139]=w[15]*w[7];
   w[138]=w[138]*w[139];
   w[136]=w[136] - w[173];
   w[158]=pow(w[7],2);
   w[173]=w[158]*eta;
   w[177]=w[136]*w[173];
   w[138]=w[138] - w[177];
   w[177]=w[182] + w[141];
   w[179]=w[177]*w[5];
   w[218]=pow(w[10],2);
   w[219]=w[218]*w[59];
   w[179]=w[179] + 5.E-1*w[219];
   w[121]=w[189] - w[121];
   w[189]=w[121]*w[5];
   w[220]=w[62]*w[10];
   w[189]=w[220] - w[189];
   w[220]=w[9]*G;
   w[221]=w[220]*w[7];
   w[222]= - w[189] + 5.E-1*w[221];
   w[223]=w[222] - w[136];
   w[223]=w[7]*w[223];
   w[223]=w[223] + w[179];
   w[223]=w[7]*w[223];
   w[223]=w[223] - w[138];
   w[223]=w[223]*w[43];
   w[224]=w[222]*w[7];
   w[179]=w[224] + w[179];
   w[224]= - w[7]*w[179];
   w[138]=w[224] + w[138];
   w[138]=w[138]*w[44];
   w[138]=w[223] + w[138];
   w[138]=w[12]*w[138];
   w[223]=w[201] + w[102];
   w[224]= - w[223] + 2.E+0*w[22];
   w[225]= - w[25]*w[112];
   w[226]= - w[29]*w[104];
   w[227]=w[7]*w[31];
   w[225]=w[227] + w[225] + w[226] + w[224];
   w[225]=w[225]*w[139];
   w[226]= - w[24] + 2.E+0*w[21];
   w[227]=w[226]*w[112];
   w[228]=w[29] - w[125];
   w[229]=w[228]*w[104];
   w[230]=w[86]*w[7];
   w[227]=w[230] + w[229] - w[227];
   w[229]=w[94]*w[35];
   w[229]=w[229] - w[38];
   w[231]=w[229] + w[227];
   w[231]=w[7]*w[231];
   w[192]=w[231] + w[192];
   w[192]=w[7]*w[192];
   w[231]=w[191]*w[5];
   w[232]=w[193]*w[10];
   w[232]=w[232] + w[231];
   w[229]= - w[7]*w[229];
   w[229]=w[229] + w[232];
   w[233]=eta*w[7];
   w[229]=w[229]*w[233];
   w[234]= - w[224]*w[139];
   w[192]=w[229] + w[192] + w[234];
   w[192]=w[207]*w[192];
   w[226]=w[226]*w[5];
   w[228]=w[228]*w[10];
   w[226]=w[228] - w[226];
   w[228]=w[230] + 2.E+0*w[226];
   w[228]=w[228]*w[7];
   w[187]=w[187]*w[10];
   w[187]=w[187] - w[150];
   w[229]=w[187]*w[112];
   w[234]=w[195]*w[218];
   w[229]=w[229] - w[234];
   w[228]=w[228] + w[229];
   w[234]=w[228]*w[7];
   w[192]=w[192] - w[234] + w[225];
   w[192]=w[63]*w[1]*w[192];
   w[225]=w[109]*w[115];
   w[30]= - w[30]*w[225];
   w[30]=w[30] + w[192];
   w[30]=8.E+0*w[30];
   w[47]=w[7]*w[47]*w[55];
   w[192]=w[52]*w[112];
   w[35]=w[35]*w[18];
   w[235]=w[35]*w[45];
   w[47]= - w[47] + w[192] + w[235];
   w[192]= - 3.E+0*w[50] + 4.E+0*w[52];
   w[235]= - w[8]*w[192];
   w[235]=w[235] + w[47];
   w[235]=w[7]*w[235];
   w[209]=w[235] - w[209];
   w[209]=w[7]*w[209];
   w[192]=w[192]*w[48];
   w[192]=w[192] + w[198];
   w[192]=w[192]*w[233];
   w[235]= - w[139]*w[56];
   w[192]=w[192] + w[209] + w[235];
   w[192]=eta*w[192];
   w[209]=w[52]*w[5];
   w[46]=w[209] + w[46];
   w[209]=w[46]*w[7];
   w[32]=w[32]*w[8];
   w[235]=w[32]*w[5];
   w[209]=w[209] - w[235];
   w[236]=w[209]*w[7];
   w[237]=w[53]*w[8];
   w[238]=w[237] - w[54];
   w[238]=w[238]*w[139];
   w[192]=w[192] - w[236] + w[238];
   w[192]=w[192]*w[63];
   w[238]=w[115]*w[7];
   w[54]= - w[54]*w[238];
   w[54]=w[54] + w[192];
   w[54]=8.E+0*w[54];
   w[192]= - w[7] + w[233];
   w[192]=w[43]*w[192];
   w[239]=w[44]*w[233];
   w[192]=w[192] + w[239];
   w[60]=w[12]*w[60]*w[192];
   w[192]=w[71]*w[158];
   w[212]=w[192]*w[212];
   w[239]=w[98]*w[10];
   w[239]=w[239] - w[92];
   w[240]=w[239]*w[5];
   w[241]=1.5E+0*w[218];
   w[242]=w[241]*w[125];
   w[240]=w[242] - w[240];
   w[242]=w[116]*w[10];
   w[243]=3.E+0*w[118];
   w[244]=w[243]*w[5];
   w[242]=w[242] + w[244];
   w[122]= - w[242] + 1.5E+0*w[122];
   w[244]= - w[122] - w[110];
   w[244]=w[7]*w[244];
   w[244]=w[244] - w[240];
   w[244]=w[7]*w[244];
   w[78]=w[78] + 5.E-1*w[88];
   w[78]=w[78]*w[139];
   w[110]=w[110]*w[173];
   w[78]=w[78] + w[110];
   w[110]=w[244] + w[78];
   w[110]=w[110]*w[43];
   w[244]=w[122]*w[7];
   w[240]=w[244] + w[240];
   w[244]=w[7]*w[240];
   w[78]=w[244] - w[78];
   w[78]=w[78]*w[44];
   w[78]=w[110] + w[78];
   w[78]=w[14]*w[78];
   w[110]=w[173]*w[155];
   w[173]=5.E-1*w[102];
   w[161]=w[161] - w[173];
   w[161]=w[161]*w[139];
   w[110]=w[161] + w[110];
   w[161]=w[97]*w[5];
   w[161]=w[161] - w[126];
   w[244]=5.E-1*w[86];
   w[245]=w[244] + w[100];
   w[246]=w[245]*w[7];
   w[246]=w[246] + w[161];
   w[155]=w[155] - w[246];
   w[155]=w[7]*w[155];
   w[105]=w[105] - w[150];
   w[247]=w[105]*w[5];
   w[248]=w[241]*w[164];
   w[247]=w[247] - w[248];
   w[155]=w[155] + w[247];
   w[155]=w[7]*w[155];
   w[155]=w[155] - w[110];
   w[155]=w[155]*w[216];
   w[248]=w[246]*w[7];
   w[247]=w[248] - w[247];
   w[248]=w[7]*w[247];
   w[110]=w[248] + w[110];
   w[110]=w[110]*w[134];
   w[110]=w[155] + w[110];
   w[77]=w[77]*w[55];
   w[77]= - w[77] + 9.E+0*w[24];
   w[77]=w[77]*w[8];
   w[77]=w[77] - w[137];
   w[137]=w[98]*w[112];
   w[155]=w[49] + w[51];
   w[155]=w[155]*w[8];
   w[155]=w[155] - w[125];
   w[248]=w[155]*w[157];
   w[249]= - w[116] + 6.E+0*w[162];
   w[250]=w[249]*w[7];
   w[137]=w[250] + w[137] - w[248];
   w[248]= - w[137] + w[77];
   w[248]=w[7]*w[248];
   w[217]=w[248] + w[217];
   w[217]=w[7]*w[217];
   w[96]=w[160] - w[96];
   w[96]=w[96]*w[55];
   w[96]=w[96] - 3.E+0*w[223];
   w[160]= - w[96]*w[139];
   w[77]= - w[7]*w[77];
   w[77]=w[77] - w[215];
   w[77]=w[77]*w[233];
   w[77]=w[77] + w[217] + w[160];
   w[77]=w[207]*w[77];
   w[160]=w[141]*w[55];
   w[167]= - w[167]*w[109];
   w[207]= - w[182]*w[147];
   w[167]=w[167] - w[160] + w[207] + w[96];
   w[167]=w[167]*w[139];
   w[207]=w[98]*w[5];
   w[217]=w[155]*w[124];
   w[217]=w[217] - w[207];
   w[217]= - w[250] + 2.E+0*w[217];
   w[217]=w[217]*w[7];
   w[223]=w[105]*w[112];
   w[248]=3.E+0*w[218];
   w[195]=w[248]*w[195];
   w[195]=w[195] - w[223];
   w[217]=w[217] - w[195];
   w[250]=w[217]*w[7];
   w[77]=w[77] - w[250] + w[167];
   w[77]=w[63]*w[17]*w[77];
   w[167]= - w[168]*w[225];
   w[77]=w[167] + w[77];
   w[77]=8.E+0*w[77];
   w[100]=4.E+0*w[100];
   w[31]= - 2.E+0*w[162] + w[31] + w[100] - 3.E+0*w[86];
   w[31]=w[7]*w[31];
   w[75]=w[94] - w[75];
   w[75]=w[75]*w[8];
   w[75]=w[75] - w[24];
   w[94]=w[75]*w[5];
   w[162]=w[170] + w[125];
   w[167]=w[162]*w[10];
   w[94]=w[94] - w[167];
   w[94]=2.E+0*w[94];
   w[31]=w[94] + w[31];
   w[31]=w[7]*w[31];
   w[167]=w[176]*w[55];
   w[167]=w[167] - 3.E+0*w[102] - w[201];
   w[167]=w[15]*w[167];
   w[150]=w[146] - w[150];
   w[168]=w[150]*w[112];
   w[176]=w[164]*w[218];
   w[168]=w[168] - w[176];
   w[31]=w[167] + w[31] - w[168];
   w[31]=w[31]*w[66];
   w[66]= - w[187] + w[191];
   w[66]=w[66]*w[112];
   w[167]=w[224]*w[15];
   w[187]=w[199] + w[196];
   w[187]=w[10]*w[187];
   w[21]=w[21]*w[5];
   w[199]=w[185]*w[10];
   w[21]=w[21] - w[199];
   w[201]= - w[36] + w[21];
   w[201]=2.E+0*w[201] + w[184];
   w[201]=w[7]*w[201];
   w[66]=w[167] + w[201] + w[187] + w[66];
   w[66]=w[1]*w[66];
   w[36]=w[36]*w[7];
   w[36]=w[36] - w[232];
   w[187]=2.E+0*w[41];
   w[36]=w[36]*w[187];
   w[66]=w[66] + w[36];
   w[66]=w[66]*w[43];
   w[21]=2.E+0*w[21] + w[184];
   w[21]=w[7]*w[21];
   w[21]=w[167] + w[21] - w[229];
   w[21]=w[1]*w[21];
   w[21]=w[21] + w[36];
   w[21]=w[21]*w[44];
   w[21]=w[66] + w[21];
   w[21]=1.6E+1*w[21];
   w[36]= - w[50] + 2.E+0*w[52];
   w[52]=w[36]*w[48];
   w[52]=w[52] + w[198];
   w[52]=w[52]*eta;
   w[53]=w[53]*w[15];
   w[66]=w[53]*w[8];
   w[52]=w[52] - w[66];
   w[32]=w[32] + w[178];
   w[32]=w[5]*w[32];
   w[36]=w[8]*w[36];
   w[50]=w[50]*w[5];
   w[36]=w[36] - w[50];
   w[36]=w[7]*w[36];
   w[32]=w[36] - w[202] + w[32] - w[52];
   w[32]=w[32]*w[43];
   w[36]= - w[7]*w[50];
   w[36]=w[235] + w[36] - w[52];
   w[36]=w[36]*w[44];
   w[32]=w[32] + w[36];
   w[32]=1.6E+1*w[32];
   w[29]= - w[29] + 2.E+0*w[125];
   w[36]= - w[42] + 2.E+0*w[59];
   w[42]=w[36]*w[104];
   w[50]= - w[64]*w[112];
   w[52]= - w[61] + 2.E+0*w[62];
   w[61]= - w[52]*w[109];
   w[42]=w[61] + w[50] + w[42] + w[29];
   w[42]=w[7]*w[42];
   w[50]= - w[200] + 2.E+0*w[164];
   w[50]=w[50]*w[10];
   w[61]=w[145]*w[5];
   w[50]=w[50] + w[61];
   w[29]= - w[7]*w[29];
   w[29]=w[29] + w[50];
   w[29]=eta*w[29];
   w[29]=w[29] + w[42] - w[50];
   w[29]=eta*w[29];
   w[36]=w[36]*w[10];
   w[42]=w[52]*w[7];
   w[36]= - w[65] + w[36] - w[42];
   w[42]=w[15] - w[7];
   w[50]=w[36]*w[42];
   w[29]=w[29] + w[50];
   w[29]=w[29]*w[63];
   w[36]= - w[36]*w[115];
   w[29]=w[36] + w[29];
   w[29]=w[12]*w[29];
   w[36]=3.E+0*w[74];
   w[36]=w[36]*w[59];
   w[36]=w[36] - w[99];
   w[50]=w[36]*w[10];
   w[52]= - w[90] + 4.E+0*w[20];
   w[52]=w[52]*w[8];
   w[49]=w[49]*w[74];
   w[61]=3.E+0*w[49];
   w[52]=w[52] - w[61];
   w[65]=w[52]*w[5];
   w[50]=w[50] - w[65];
   w[50]=2.E+0*w[50];
   w[65]=w[4]*w[95]*w[55];
   w[74]=w[23]*w[107];
   w[65]=w[65] - 6.E+0*w[74] - 4.E+0*w[85] + w[87];
   w[65]=w[7]*w[65];
   w[65]=w[50] + w[65];
   w[65]=w[7]*w[65];
   w[74]=w[92]*w[2];
   w[90]=w[95]*w[27];
   w[82]=w[4]*w[82]*w[127];
   w[90]=w[82] - w[90];
   w[95]=w[90]*w[10];
   w[74]=w[74] + w[95];
   w[95]=w[74]*w[112];
   w[99]=w[127]*w[62];
   w[107]=w[99]*w[248];
   w[95]=w[107] + w[95];
   w[79]=w[79]*w[55];
   w[23]=w[23]*w[37];
   w[23]=w[79] + w[89] + 6.E+0*w[23];
   w[23]=w[15]*w[23];
   w[23]=w[23] + w[65] - w[95];
   w[23]=w[14]*w[23]*w[63];
   w[37]=w[163] - w[99];
   w[65]=w[37]*w[124];
   w[79]=w[90]*w[5];
   w[65]=w[65] - w[79];
   w[65]=2.E+0*w[65];
   w[100]=w[100] - w[86];
   w[100]=w[100]*w[2];
   w[22]=6.E+0*w[22];
   w[38]=w[22] - w[100] - 6.E+0*w[38];
   w[38]=w[7]*w[38];
   w[38]= - w[65] + w[38];
   w[38]=w[7]*w[38];
   w[51]=w[51]*w[127];
   w[28]=w[131]*w[28];
   w[107]=w[51] - w[28];
   w[167]=w[107]*w[124];
   w[178]=w[141]*w[127];
   w[167]=w[167] - w[178];
   w[187]=w[167]*w[112];
   w[131]=w[131]*G;
   w[198]=w[131]*w[248];
   w[198]=w[198] - w[187];
   w[129]= - w[129]*w[55];
   w[129]=w[129] + w[133] + 6.E+0*w[132];
   w[129]=w[15]*w[129];
   w[38]=w[129] + w[38] - w[198];
   w[38]=w[38]*w[154];
   w[96]=w[96]*w[15];
   w[129]=w[153] - w[105];
   w[129]=w[129]*w[112];
   w[132]=w[97]*w[8];
   w[185]= - w[185]*w[124];
   w[185]=3.E+0*w[26] + w[132] + w[185];
   w[183]=2.E+0*w[185] + w[183];
   w[183]=w[7]*w[183];
   w[185]=w[145]*w[55];
   w[200]= - w[185] + w[196];
   w[200]=w[200]*w[124];
   w[129]=w[96] + w[183] + w[200] + w[129];
   w[129]=w[17]*w[129];
   w[183]=w[97]*w[48];
   w[183]=w[183] - w[215];
   w[200]=w[183]*w[172];
   w[200]=2.E+0*w[200];
   w[129]=w[129] - w[200];
   w[129]=w[129]*w[43];
   w[26]= - w[199] + w[26];
   w[26]=2.E+0*w[26] + w[184];
   w[26]=w[26]*w[135];
   w[26]=w[96] + w[26] + w[195];
   w[26]=w[17]*w[26];
   w[26]=w[26] - w[200];
   w[26]=w[26]*w[44];
   w[26]=w[129] + w[26];
   w[26]=1.6E+1*w[26];
   w[96]=w[140]*w[8];
   w[129]=w[96] - w[177];
   w[129]=w[129]*w[5];
   w[184]=w[121]*w[8];
   w[199]=w[184] - w[222];
   w[199]=w[199]*w[7];
   w[200]= - w[170] + 5.E-1*w[68];
   w[200]=w[200]*w[10];
   w[129]= - w[129] + w[200] - w[199];
   w[199]=w[121]*w[48];
   w[199]=w[199] + w[169];
   w[200]=w[199]*eta;
   w[201]=5.E-1*w[15];
   w[222]=w[201]*w[101];
   w[200]=w[200] + w[222];
   w[224]=w[200] + w[129];
   w[224]=w[224]*w[43];
   w[200]=w[179] + w[200];
   w[200]=w[200]*w[44];
   w[200]=w[224] + w[200];
   w[200]=w[12]*w[200];
   w[224]=w[25]*w[55];
   w[224]=w[224] + w[102];
   w[225]=w[224]*w[15];
   w[228]=w[225] + w[228];
   w[232]=w[228]*w[1];
   w[251]=8.E+0*w[63];
   w[252]=w[232]*w[251];
   w[209]=w[209] + w[66];
   w[253]=w[209]*w[251];
   w[59]=w[59]*w[104];
   w[59]= - 2.E+0*w[69] + w[125] + w[59];
   w[59]=w[7]*w[59];
   w[59]= - w[165] + w[59];
   w[59]=w[13]*w[59];
   w[69]= - eta*w[211];
   w[59]=w[59] + w[69];
   w[59]=eta*w[59];
   w[42]=w[42]*w[71];
   w[59]=w[42] + w[59];
   w[59]=w[59]*w[63];
   w[69]= - w[115]*w[71];
   w[59]=w[69] + w[59];
   w[59]=1.2E+1*w[59];
   w[69]=w[114] + w[239];
   w[69]=w[69]*w[5];
   w[114]=w[243]*w[8];
   w[243]=w[114] + w[88];
   w[122]=w[243] + w[122];
   w[122]=w[122]*w[7];
   w[254]=w[125]*w[10];
   w[103]=w[103] + 1.5E+0*w[254];
   w[103]=w[103]*w[10];
   w[69]=w[103] - w[69] + w[122];
   w[103]=w[243]*w[7];
   w[103]=w[103] - w[214];
   w[122]=w[103]*eta;
   w[254]=w[201]*w[88];
   w[122]=w[122] - w[254];
   w[255]=w[122] - w[69];
   w[255]=w[255]*w[43];
   w[122]= - w[240] + w[122];
   w[122]=w[122]*w[44];
   w[122]=w[255] + w[122];
   w[122]=w[14]*w[122];
   w[246]=w[132] - w[246];
   w[246]=w[246]*w[7];
   w[255]=w[153] + w[105];
   w[255]=w[255]*w[5];
   w[163]=w[163] + 5.E-1*w[165];
   w[163]=w[163]*w[124];
   w[256]=w[201]*w[102];
   w[163]= - w[163] + w[246] + w[255] - w[256];
   w[246]=w[183]*eta;
   w[255]= - w[246] + w[163];
   w[255]=w[255]*w[216];
   w[247]=w[247] + w[256];
   w[246]= - w[246] - w[247];
   w[246]=w[246]*w[134];
   w[246]=w[255] + w[246];
   w[140]=w[194]*w[140];
   w[194]=w[140] - w[102];
   w[255]=w[194]*w[15];
   w[217]=w[255] - w[217];
   w[257]=w[217]*w[17];
   w[251]= - w[257]*w[251];
   w[145]= - w[145]*w[104];
   w[145]=w[151] - w[153] + w[145];
   w[145]=w[5]*w[145];
   w[151]=w[112] - w[8];
   w[153]=w[25]*w[151];
   w[258]= - w[125]*w[104];
   w[153]=w[230] + w[258] + w[153];
   w[153]=w[7]*w[153];
   w[166]=w[10]*w[166];
   w[145]=w[153] + w[166] + w[145];
   w[145]=w[7]*w[145];
   w[153]=w[25]*w[48];
   w[146]= - w[8]*w[146];
   w[142]=w[153] + w[146] + w[142];
   w[142]=w[142]*w[233];
   w[146]=w[102]*w[139];
   w[142]=w[142] + w[145] + w[146];
   w[142]=eta*w[142];
   w[145]=w[104]*w[64];
   w[141]=w[145] + 2.E+0*w[141];
   w[25]= - w[25] + w[141];
   w[25]=w[5]*w[25];
   w[62]=w[104]*w[62];
   w[145]=w[121]*w[112];
   w[62]= - w[221] + w[62] - w[145];
   w[145]= - w[244] - w[62];
   w[145]=w[7]*w[145];
   w[146]=w[125] + w[68];
   w[146]=w[10]*w[146];
   w[25]=w[145] + w[146] + w[25];
   w[25]=w[7]*w[25];
   w[145]=w[150]*w[5];
   w[145]= - w[145] + 5.E-1*w[176];
   w[25]=w[25] - w[145];
   w[25]=w[7]*w[25];
   w[146]= - w[184] + w[101];
   w[146]=w[7]*w[146];
   w[146]=w[146] - w[173] - w[169];
   w[146]=w[146]*w[139];
   w[25]=w[142] + w[25] + w[146];
   w[25]=w[25]*w[63];
   w[142]= - w[199]*w[238];
   w[25]=w[142] + w[25];
   w[25]=w[12]*w[25];
   w[142]=w[224]*w[139];
   w[142]=w[142] + w[234];
   w[146]=w[43] - w[44];
   w[146]=8.E+0*w[146];
   w[142]= - w[1]*w[142]*w[146];
   w[53]=w[53]*w[48];
   w[53]=w[53] + w[236];
   w[53]= - w[53]*w[146];
   w[150]=w[211]*w[233];
   w[153]= - w[125] - w[70];
   w[153]=w[7]*w[153];
   w[153]=w[165] + w[153];
   w[153]=w[13]*w[7]*w[153];
   w[153]=w[153] + w[150];
   w[153]=w[153]*w[43];
   w[150]= - w[192] + w[150];
   w[150]=w[150]*w[44];
   w[150]=w[153] + w[150];
   w[150]=1.2E+1*w[150];
   w[91]=w[91]*w[27];
   w[153]= - w[90]*w[104];
   w[113]= - w[2]*w[113];
   w[91]=w[113] + w[91] + w[153];
   w[91]=w[5]*w[91];
   w[49]=w[80] - w[49];
   w[80]=3.E+0*w[49];
   w[113]=w[80]*w[8];
   w[113]=w[113] - w[89];
   w[49]= - w[49]*w[120];
   w[116]=w[116]*w[2];
   w[104]=w[104]*w[116];
   w[120]= - w[87]*w[135];
   w[49]=w[120] + w[49] + w[104] + w[113];
   w[49]=w[7]*w[49];
   w[104]=w[90]*w[8];
   w[104]=w[104] + w[133];
   w[120]= - w[124]*w[99];
   w[120]=w[120] + w[104];
   w[120]=w[10]*w[120];
   w[49]=w[49] + w[120] + w[91];
   w[49]=w[7]*w[49];
   w[91]= - w[10]*w[104];
   w[27]= - w[27]*w[92];
   w[92]= - w[7]*w[113];
   w[27]=w[92] + w[91] + w[27];
   w[27]=w[27]*w[233];
   w[91]= - w[139]*w[89];
   w[27]=w[27] + w[49] + w[91];
   w[27]=eta*w[27];
   w[49]=w[80] + w[111];
   w[49]=w[5]*w[49];
   w[80]= - w[116] - w[126];
   w[80]=w[10]*w[80];
   w[91]=1.5E+0*w[87] + w[117];
   w[91]=w[7]*w[91];
   w[49]=w[91] + w[80] + w[49];
   w[49]=w[7]*w[49];
   w[74]=w[74]*w[5];
   w[80]=w[241]*w[99];
   w[74]=w[80] + w[74];
   w[49]=w[49] + w[74];
   w[49]=w[7]*w[49];
   w[80]= - w[106] - w[114];
   w[80]=w[7]*w[80];
   w[91]=5.E-1*w[89];
   w[80]=w[80] + w[91] + w[214];
   w[80]=w[80]*w[139];
   w[27]=w[27] + w[49] + w[80];
   w[27]=w[27]*w[63];
   w[49]= - w[103]*w[238];
   w[27]=w[49] + w[27];
   w[27]=w[14]*w[27];
   w[49]=w[119] - w[82];
   w[80]=w[152] + w[49];
   w[80]=w[5]*w[80];
   w[82]=w[245]*w[2];
   w[92]=w[82] - w[156];
   w[92]=w[7]*w[92];
   w[103]= - w[99] - w[165];
   w[103]=w[103]*w[124];
   w[80]=w[92] + w[103] + w[80];
   w[80]=w[7]*w[80];
   w[92]=w[167]*w[5];
   w[103]=w[131]*w[241];
   w[92]=w[103] - w[92];
   w[80]=w[80] + w[92];
   w[80]=w[7]*w[80];
   w[103]=w[127]*w[96];
   w[104]=w[107]*w[157];
   w[103]= - 2.E+0*w[178] + w[103] + w[104];
   w[103]=w[5]*w[103];
   w[104]= - w[49]*w[151];
   w[106]=w[99]*w[157];
   w[111]= - w[7]*w[116];
   w[104]=w[111] + w[106] + w[104];
   w[104]=w[7]*w[104];
   w[106]= - w[8]*w[107];
   w[107]= - w[10]*w[131];
   w[106]=w[106] + w[107];
   w[106]=w[106]*w[124];
   w[103]=w[104] + w[106] + w[103];
   w[103]=w[7]*w[103];
   w[104]=w[8]*w[167];
   w[48]= - w[49]*w[48];
   w[48]=w[48] + w[104];
   w[48]=w[48]*w[233];
   w[49]= - w[139]*w[133];
   w[48]=w[48] + w[103] + w[49];
   w[48]=eta*w[48];
   w[49]= - w[102] + w[132];
   w[49]=w[7]*w[49];
   w[103]=5.E-1*w[133];
   w[49]=w[49] + w[103] - w[215];
   w[49]=w[49]*w[139];
   w[48]=w[48] + w[80] + w[49];
   w[48]=w[48]*w[154];
   w[49]=w[16]*w[183]*w[238];
   w[48]=w[49] + w[48];
   w[49]=w[194]*w[139];
   w[49]=w[49] - w[250];
   w[49]=w[17]*w[49]*w[146];
   w[34]= - w[76] + 3.E+0*w[34];
   w[34]=w[34]*w[8];
   w[24]=w[34] - w[24];
   w[24]=w[24]*w[5];
   w[34]=w[64]*w[55];
   w[34]=w[34] + w[125];
   w[34]=w[34]*w[10];
   w[64]=w[121]*w[55];
   w[76]=w[64] - w[244];
   w[76]=w[76]*w[7];
   w[24]=w[24] - w[34] - w[76];
   w[24]=w[24]*w[7];
   w[24]=w[24] + w[145];
   w[34]=w[182]*w[55];
   w[34]=w[34] + w[160];
   w[76]= - w[7]*w[64];
   w[76]=w[76] - w[173] - w[34];
   w[76]=w[15]*w[76];
   w[80]=w[256] + w[24];
   w[80]=eta*w[80];
   w[24]=w[80] + w[76] - w[24];
   w[24]=eta*w[24];
   w[76]= - w[222] - w[129];
   w[76]=w[15]*w[76];
   w[24]=w[76] + w[24];
   w[24]=w[24]*w[63];
   w[76]=w[179] + w[222];
   w[76]=w[76]*w[115];
   w[24]=w[76] + w[24];
   w[24]=w[12]*w[24];
   w[76]=w[228]*w[41];
   w[80]=w[232] - w[76];
   w[80]=w[80]*w[43];
   w[76]=w[44]*w[76];
   w[76]=w[80] + w[76];
   w[76]=8.E+0*w[76];
   w[57]= - w[43]*w[57];
   w[80]=eta*w[44];
   w[57]=w[57] + w[80];
   w[57]=8.E+0*w[209]*w[57];
   w[80]=w[233]*w[71];
   w[42]=w[42] + w[80];
   w[42]=w[42]*w[43];
   w[80]=w[15] + w[233];
   w[71]=w[44]*w[71]*w[80];
   w[42]=w[42] + w[71];
   w[42]=1.2E+1*w[42];
   w[18]=w[84]*w[18];
   w[18]= - w[18] + 5.E+0*w[20];
   w[18]=w[18]*w[8];
   w[18]=w[18] - w[61];
   w[18]=w[18]*w[5];
   w[20]=w[98]*w[55];
   w[20]=w[20] - w[100];
   w[20]=w[20]*w[10];
   w[61]=w[147]*w[118];
   w[61]=w[61] + 2.E+0*w[85];
   w[71]= - w[61] + 5.E-1*w[87];
   w[71]=w[71]*w[7];
   w[18]= - w[18] + w[71] - w[20];
   w[18]=w[18]*w[7];
   w[18]=w[18] - w[74];
   w[20]= - w[89]*w[201];
   w[20]=w[20] + w[18];
   w[20]=eta*w[20];
   w[71]= - w[243]*w[109];
   w[71]=w[71] + w[91] + w[93];
   w[71]=w[15]*w[71];
   w[18]=w[20] + w[71] - w[18];
   w[18]=eta*w[18];
   w[20]=w[254] + w[69];
   w[20]=w[15]*w[20];
   w[18]=w[20] + w[18];
   w[18]=w[18]*w[63];
   w[20]=w[240] + w[254];
   w[20]= - w[20]*w[115];
   w[18]=w[20] + w[18];
   w[18]=w[14]*w[18];
   w[20]=w[185] - w[99];
   w[20]=w[20]*w[10];
   w[20]=w[20] + w[231];
   w[69]=w[97]*w[55];
   w[71]=w[82] - w[69];
   w[71]=w[71]*w[7];
   w[20]=w[71] + 3.E+0*w[20];
   w[20]=w[20]*w[7];
   w[20]=w[20] + w[92];
   w[71]= - w[133]*w[201];
   w[71]=w[71] - w[20];
   w[71]=eta*w[71];
   w[74]=w[7]*w[69];
   w[74]=w[74] + w[103] + w[148];
   w[74]=w[15]*w[74];
   w[20]=w[71] + w[74] + w[20];
   w[20]=eta*w[20];
   w[71]= - w[15]*w[163];
   w[20]=w[71] + w[20];
   w[20]=w[20]*w[154];
   w[71]= - w[247]*w[115]*w[16];
   w[20]=w[71] + w[20];
   w[71]=w[217]*w[172];
   w[74]= - w[257] + w[71];
   w[74]=w[74]*w[43];
   w[71]= - w[44]*w[71];
   w[71]=w[74] + w[71];
   w[71]=8.E+0*w[71];
   w[74]=w[64] - w[86];
   w[80]=w[74]*w[7];
   w[80]=w[80] - w[94];
   w[80]=w[80]*w[7];
   w[82]=w[102]*w[15];
   w[80]= - w[80] + w[82] - w[168];
   w[80]=w[80]*eta;
   w[75]= - w[177] + w[75];
   w[75]=w[75]*w[112];
   w[74]=w[62] - w[74];
   w[74]=w[7]*w[74];
   w[82]= - 2.E+0*w[162] - w[68];
   w[82]=w[10]*w[82];
   w[74]=w[74] + w[82] + w[75];
   w[74]=w[7]*w[74];
   w[64]=w[64] - w[101];
   w[64]=w[64]*w[7];
   w[75]=w[64] + w[102] + w[34];
   w[75]=w[15]*w[75];
   w[74]= - w[80] + w[75] + w[74] - w[168];
   w[74]=w[74]*w[43];
   w[75]=w[177]*w[112];
   w[82]= - 2.E+0*w[189] + w[221];
   w[82]=w[7]*w[82];
   w[75]=w[82] + w[219] + w[75];
   w[75]=w[7]*w[75];
   w[64]= - 2.E+0*w[169] - w[64];
   w[64]=w[15]*w[64];
   w[64]=w[80] + w[75] + w[64];
   w[64]=w[64]*w[44];
   w[64]=w[74] + w[64];
   w[64]=w[12]*w[64];
   w[28]= - w[28] + 2.E+0*w[51];
   w[28]=w[28]*w[10];
   w[28]=w[28] - w[178];
   w[28]=w[28]*w[112];
   w[35]=w[35]*w[127];
   w[35]=w[35] - w[131];
   w[51]=w[35]*w[218];
   w[28]=w[28] - w[51];
   w[51]= - w[128] + 2.E+0*w[190];
   w[74]= - w[188] - w[51];
   w[74]=w[5]*w[74];
   w[75]= - w[99] + w[197];
   w[75]=w[10]*w[75];
   w[74]=w[75] + w[74];
   w[75]=w[127]*w[220];
   w[75]= - 2.E+0*w[230] + w[75] - 4.E+0*w[226];
   w[75]=w[7]*w[75];
   w[74]=2.E+0*w[74] + w[75];
   w[74]=w[7]*w[74];
   w[75]=w[191]*w[55];
   w[75]=w[75] + w[133];
   w[80]= - w[224]*w[109];
   w[80]=w[80] + w[75];
   w[80]=w[15]*w[80];
   w[74]=w[80] + w[74] + w[28];
   w[74]=w[1]*w[74];
   w[80]=w[99] - w[193];
   w[80]=w[10]*w[80];
   w[51]=w[5]*w[51];
   w[51]=w[80] + w[51];
   w[80]= - w[127]*w[221];
   w[51]=2.E+0*w[51] + w[80];
   w[51]=w[7]*w[51];
   w[75]= - w[15]*w[75];
   w[28]=w[75] + w[51] - w[28];
   w[28]=w[28]*w[41];
   w[28]=w[74] + w[28];
   w[28]=eta*w[28];
   w[41]=w[224] - w[227];
   w[41]=w[7]*w[41];
   w[41]= - w[225] + w[41] - w[229];
   w[41]=w[15]*w[41];
   w[41]=w[234] + w[41];
   w[41]=w[1]*w[41];
   w[28]=w[41] + w[28];
   w[28]=w[28]*w[63];
   w[41]= - w[115]*w[232];
   w[28]=w[41] + w[28];
   w[28]=1.6E+1*w[28];
   w[41]= - w[203] - w[47];
   w[41]=w[7]*w[41];
   w[47]=w[186] + w[208];
   w[47]=w[5]*w[47];
   w[41]=w[41] + w[202] + w[47];
   w[41]=w[7]*w[41];
   w[19]=w[45]*w[127]*w[19]*w[5];
   w[45]= - w[5]*w[186];
   w[45]=w[204] - w[202] + w[45];
   w[45]=w[7]*w[45];
   w[47]= - w[15]*w[205];
   w[45]=w[47] + w[19] + w[45];
   w[45]=eta*w[45];
   w[47]= - w[7]*w[56];
   w[47]=w[205] + w[47];
   w[47]=w[15]*w[47];
   w[19]=w[45] + w[47] - w[19] + w[41];
   w[19]=eta*w[19];
   w[41]=w[237] - w[46];
   w[41]=w[7]*w[41];
   w[41]= - w[66] + w[235] + w[41];
   w[41]=w[15]*w[41];
   w[19]=w[19] + w[236] + w[41];
   w[19]=w[19]*w[63];
   w[41]= - w[209]*w[115];
   w[19]=w[41] + w[19];
   w[19]=1.6E+1*w[19];
   w[41]= - w[70]*w[158];
   w[45]= - w[15]*w[210];
   w[41]=w[41] + w[45];
   w[41]=2.4E+1*w[13]*w[41]*w[63];
   w[45]=w[61] + w[87];
   w[46]=w[45]*w[7];
   w[46]=w[46] - w[50];
   w[46]=w[46]*w[7];
   w[47]=w[89]*w[15];
   w[46]=w[46] + w[47] + w[95];
   w[46]=w[46]*eta;
   w[47]= - w[239] - w[52];
   w[47]=w[47]*w[112];
   w[36]=2.E+0*w[36] + w[126];
   w[36]=w[10]*w[36];
   w[45]= - w[117] - w[45];
   w[45]=w[7]*w[45];
   w[36]=w[45] + w[36] + w[47];
   w[36]=w[7]*w[36];
   w[45]=w[118]*w[55];
   w[45]=w[45] + w[88];
   w[45]=w[45]*w[135];
   w[47]=w[45] - w[89] - w[93];
   w[47]=w[15]*w[47];
   w[36]=w[46] + w[47] + w[36] - w[95];
   w[36]=w[36]*w[43];
   w[43]=w[239]*w[112];
   w[47]=2.E+0*w[242] - w[123];
   w[47]=w[7]*w[47];
   w[50]= - w[125]*w[248];
   w[43]=w[47] + w[50] + w[43];
   w[43]=w[7]*w[43];
   w[45]=2.E+0*w[214] - w[45];
   w[45]=w[15]*w[45];
   w[43]= - w[46] + w[43] + w[45];
   w[43]=w[43]*w[44];
   w[36]=w[36] + w[43];
   w[36]=w[14]*w[36];
   w[43]=w[116] - w[69];
   w[44]=w[43]*w[7];
   w[44]=w[44] + w[65];
   w[44]=w[44]*w[7];
   w[45]=w[133]*w[15];
   w[44]=w[44] + w[45] + w[198];
   w[44]=w[44]*eta;
   w[45]= - w[105] + w[90];
   w[45]=w[45]*w[112];
   w[43]=w[156] - w[43];
   w[43]=w[7]*w[43];
   w[37]= - 2.E+0*w[37] + w[165];
   w[37]=w[37]*w[124];
   w[37]=w[43] + w[37] + w[45];
   w[37]=w[7]*w[37];
   w[43]=w[69] - w[102];
   w[43]=w[43]*w[7];
   w[45]= - w[43] - w[133] - w[148];
   w[45]=w[15]*w[45];
   w[37]=w[44] + w[45] + w[37] - w[198];
   w[37]=w[37]*w[216];
   w[45]= - 2.E+0*w[161] - w[159];
   w[45]=w[7]*w[45];
   w[46]= - w[164]*w[248];
   w[45]=w[45] + w[46] + w[223];
   w[45]=w[7]*w[45];
   w[43]= - 2.E+0*w[215] + w[43];
   w[43]=w[15]*w[43];
   w[43]= - w[44] + w[45] + w[43];
   w[43]=w[43]*w[134];
   w[37]=w[37] + w[43];
   w[22]=w[22] - w[116];
   w[43]=w[10]*w[155];
   w[44]=w[249]*w[109];
   w[43]=w[44] + 4.E+0*w[207] - 1.2E+1*w[43] - w[22];
   w[43]=w[7]*w[43];
   w[44]=w[90] - w[152];
   w[44]=w[5]*w[44];
   w[45]=w[144] + w[143];
   w[45]=w[45]*w[8];
   w[45]=w[45] - w[99];
   w[46]=w[196] + w[45];
   w[46]=w[46]*w[124];
   w[44]=w[46] + w[44];
   w[43]=2.E+0*w[44] + w[43];
   w[43]=w[7]*w[43];
   w[35]=w[35]*w[248];
   w[35]=w[35] - w[187];
   w[44]=w[140]*w[2];
   w[44]=w[44] - w[133];
   w[46]=w[194]*w[109];
   w[46]=w[46] - w[44];
   w[46]=w[15]*w[46];
   w[43]=w[46] + w[43] - w[35];
   w[43]=w[17]*w[43];
   w[45]= - w[45]*w[124];
   w[45]=w[45] - w[79];
   w[22]=w[7]*w[22];
   w[22]=2.E+0*w[45] + w[22];
   w[22]=w[7]*w[22];
   w[44]=w[15]*w[44];
   w[22]=w[44] + w[22] + w[35];
   w[22]=w[22]*w[172];
   w[22]=w[43] + w[22];
   w[22]=eta*w[22];
   w[35]= - w[194] + w[137];
   w[35]=w[7]*w[35];
   w[35]=w[255] + w[35] + w[195];
   w[35]=w[15]*w[35];
   w[35]=w[250] + w[35];
   w[35]=w[17]*w[35];
   w[22]=w[35] + w[22];
   w[22]=w[22]*w[63];
   w[35]=w[115]*w[257];
   w[22]=w[35] + w[22];
   w[22]=1.6E+1*w[22];
   w[35]= - w[174]*w[109];
   w[34]=w[35] + w[34] + w[181] - w[180];
   w[34]=eta*w[34];
   w[35]= - w[96] + w[141];
   w[35]=w[5]*w[35];
   w[43]=w[174] - w[62];
   w[43]=w[7]*w[43];
   w[33]= - w[101] + w[33];
   w[33]=w[15]*w[33];
   w[44]= - w[170] + w[68];
   w[44]=w[10]*w[44];
   w[33]=w[34] + w[33] + w[43] + w[44] + w[35];
   w[33]=w[33]*w[63];
   w[34]=w[136]*w[115];
   w[33]=w[34] + w[33];
   w[33]=w[12]*w[33];

Ker[0][0] = jacobians * weights * prefactor
* w[33];

Ker[0][1] = jacobians * weights * prefactor
* w[175];

Ker[0][2] = jacobians * weights * prefactor
* w[138];

Ker[0][3] = jacobians * weights * prefactor
* w[31];

Ker[0][4] = jacobians * weights * prefactor
* w[200];

Ker[0][5] = jacobians * weights * prefactor
* w[25];

Ker[0][6] = jacobians * weights * prefactor
* w[24];

Ker[0][7] = jacobians * weights * prefactor
* w[64];

Ker[1][0] = jacobians * weights * prefactor
* w[40];

Ker[1][1] = jacobians * weights * prefactor
* w[39];

Ker[1][2] = jacobians * weights * prefactor
* w[30];

Ker[1][3] = jacobians * weights * prefactor
* w[21];

Ker[1][4] = jacobians * weights * prefactor
* w[252];

Ker[1][5] = jacobians * weights * prefactor
* w[142];

Ker[1][6] = jacobians * weights * prefactor
* w[76];

Ker[1][7] = jacobians * weights * prefactor
* w[28];

Ker[2][0] = jacobians * weights * prefactor
* w[58];

Ker[2][1] = jacobians * weights * prefactor
* w[206];

Ker[2][2] = jacobians * weights * prefactor
* w[54];

Ker[2][3] = jacobians * weights * prefactor
* w[32];

Ker[2][4] = jacobians * weights * prefactor
* w[253];

Ker[2][5] = jacobians * weights * prefactor
* w[53];

Ker[2][6] = jacobians * weights * prefactor
* w[57];

Ker[2][7] = jacobians * weights * prefactor
* w[19];

Ker[3][0] = jacobians * weights * prefactor
* w[67];

Ker[3][1] = jacobians * weights * prefactor
* w[72];

Ker[3][2] = jacobians * weights * prefactor
* w[60];

Ker[3][3] = jacobians * weights * prefactor
* w[29];

Ker[3][4] = jacobians * weights * prefactor
*  0.;

Ker[3][5] = jacobians * weights * prefactor
*  0.;

Ker[3][6] = jacobians * weights * prefactor
*  0.;

Ker[3][7] = jacobians * weights * prefactor
*  0.;

Ker[4][0] = jacobians * weights * prefactor
* w[73];

Ker[4][1] = jacobians * weights * prefactor
* w[213];

Ker[4][2] = jacobians * weights * prefactor
* w[212];

Ker[4][3] = jacobians * weights * prefactor
*  0.;

Ker[4][4] = jacobians * weights * prefactor
* w[59];

Ker[4][5] = jacobians * weights * prefactor
* w[150];

Ker[4][6] = jacobians * weights * prefactor
* w[42];

Ker[4][7] = jacobians * weights * prefactor
* w[41];

Ker[5][0] = jacobians * weights * prefactor
* w[108];

Ker[5][1] = jacobians * weights * prefactor
* w[81];

Ker[5][2] = jacobians * weights * prefactor
* w[78];

Ker[5][3] = jacobians * weights * prefactor
* w[23];

Ker[5][4] = jacobians * weights * prefactor
* w[122];

Ker[5][5] = jacobians * weights * prefactor
* w[27];

Ker[5][6] = jacobians * weights * prefactor
* w[18];

Ker[5][7] = jacobians * weights * prefactor
* w[36];

Ker[6][0] = jacobians * weights * prefactor
* w[149];

Ker[6][1] = jacobians * weights * prefactor
* w[83];

Ker[6][2] = jacobians * weights * prefactor
* w[110];

Ker[6][3] = jacobians * weights * prefactor
* w[38];

Ker[6][4] = jacobians * weights * prefactor
* w[246];

Ker[6][5] = jacobians * weights * prefactor
* w[48];

Ker[6][6] = jacobians * weights * prefactor
* w[20];

Ker[6][7] = jacobians * weights * prefactor
* w[37];

Ker[7][0] = jacobians * weights * prefactor
* w[171];

Ker[7][1] = jacobians * weights * prefactor
* w[130];

Ker[7][2] = jacobians * weights * prefactor
* w[77];

Ker[7][3] = jacobians * weights * prefactor
* w[26];

Ker[7][4] = jacobians * weights * prefactor
* w[251];

Ker[7][5] = jacobians * weights * prefactor
* w[49];

Ker[7][6] = jacobians * weights * prefactor
* w[71];

Ker[7][7] = jacobians * weights * prefactor
* w[22];
