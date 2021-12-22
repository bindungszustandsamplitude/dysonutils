kernel.resize(12);

// kernel[1]
kernel[1].resize(n_radial*n_angular_z*n_radial*n_angular_z*(nb1+nb2+nb3)*(nb1+nb2+nb3),0.);

for(size_t ip=0; ip<n_radial; ++ip){
  for(size_t izp=0; izp<n_angular_z; ++izp){
    for(size_t iq=0; iq<n_radial; ++iq){
      for(size_t izq=0; izq<n_angular_z; ++izq){
        for(size_t ib1=0; ib1<nb1; ++ib1){
          for(size_t ib2=0; ib2<nb2; ++ib2){
            kernel[1][SI_K_01(ip,izp, ib1 , iq,izq, nb1+ib2)] = K12[SI_K12(ip,izp,ib1,iq,izq,ib2)];
            kernel[1][SI_K_01(ip,izp, nb1+ib2 , iq,izq, ib1)] = K21[SI_K21(ip,izp,ib2,iq,izq,ib1)];
          }}}}}}

for(size_t ip=0; ip<n_radial; ++ip){
  for(size_t izp=0; izp<n_angular_z; ++izp){
    for(size_t iq=0; iq<n_radial; ++iq){
      for(size_t izq=0; izq<n_angular_z; ++izq){
        for(size_t ib1=0; ib1<nb1; ++ib1){
          for(size_t ib3=0; ib3<nb3; ++ib3){
            kernel[1][SI_K_01(ip,izp, ib1 , iq,izq, nb1+nb2+ib3)] = K13[SI_K13(ip,izp,ib1,iq,izq,ib3)];
            kernel[1][SI_K_01(ip,izp, nb1+nb2+ib3 , iq,izq, ib1)] = K31[SI_K31(ip,izp,ib3,iq,izq,ib1)];
          }}}}}}

for(size_t ip=0; ip<n_radial; ++ip){
  for(size_t izp=0; izp<n_angular_z; ++izp){
    for(size_t iq=0; iq<n_radial; ++iq){
      for(size_t izq=0; izq<n_angular_z; ++izq){
        for(size_t ib2=0; ib2<nb2; ++ib2){
          for(size_t ib3=0; ib3<nb3; ++ib3){
            kernel[1][SI_K_01(ip,izp, nb1+ib2 , iq,izq, nb1+nb2+ib3)] = K23[SI_K23(ip,izp,ib2,iq,izq,ib3)];
            kernel[1][SI_K_01(ip,izp, nb1+nb2+ib3 , iq,izq, nb1+ib2)] = K32[SI_K32(ip,izp,ib3,iq,izq,ib2)];
          }}}}}}



// kernel[2]
kernel[2].resize(n_radial*n_angular_z*n_radial*n_angular_z*(nb1+nb2+nb4)*(nb1+nb2+nb4),0.);

for(size_t ip=0; ip<n_radial; ++ip){
  for(size_t izp=0; izp<n_angular_z; ++izp){
    for(size_t iq=0; iq<n_radial; ++iq){
      for(size_t izq=0; izq<n_angular_z; ++izq){
        for(size_t ib1=0; ib1<nb1; ++ib1){
          for(size_t ib2=0; ib2<nb2; ++ib2){
            kernel[2][SI_K_02(ip,izp, ib1 , iq,izq, nb1+ib2)] = K12[SI_K12(ip,izp,ib1,iq,izq,ib2)];
            kernel[2][SI_K_02(ip,izp, nb1+ib2 , iq,izq, ib1)] = K21[SI_K21(ip,izp,ib2,iq,izq,ib1)];
          }}}}}}

for(size_t ip=0; ip<n_radial; ++ip){
  for(size_t izp=0; izp<n_angular_z; ++izp){
    for(size_t iq=0; iq<n_radial; ++iq){
      for(size_t izq=0; izq<n_angular_z; ++izq){
        for(size_t ib1=0; ib1<nb1; ++ib1){
          for(size_t ib4=0; ib4<nb4; ++ib4){
            kernel[2][SI_K_02(ip,izp, ib1 , iq,izq, nb1+nb2+ib4)] = K14[SI_K14(ip,izp,ib1,iq,izq,ib4)];
            kernel[2][SI_K_02(ip,izp, nb1+nb2+ib4 , iq,izq, ib1)] = K41[SI_K41(ip,izp,ib4,iq,izq,ib1)];
          }}}}}}

for(size_t ip=0; ip<n_radial; ++ip){
  for(size_t izp=0; izp<n_angular_z; ++izp){
    for(size_t iq=0; iq<n_radial; ++iq){
      for(size_t izq=0; izq<n_angular_z; ++izq){
        for(size_t ib2=0; ib2<nb2; ++ib2){
          for(size_t ib4=0; ib4<nb4; ++ib4){
            kernel[2][SI_K_02(ip,izp, nb1+ib2 , iq,izq, nb1+nb2+ib4)] = K24[SI_K24(ip,izp,ib2,iq,izq,ib4)];
            kernel[2][SI_K_02(ip,izp, nb1+nb2+ib4 , iq,izq, nb1+ib2)] = K42[SI_K42(ip,izp,ib4,iq,izq,ib2)];
          }}}}}}

for(size_t ip=0; ip<n_radial; ++ip){
    for(size_t izp=0; izp<n_angular_z; ++izp){
        for(size_t iq=0; iq<n_radial; ++iq){
            for(size_t izq=0; izq<n_angular_z; ++izq){
                for(size_t ib2=0; ib2<nb4; ++ib2){
                    for(size_t ib4=0; ib4<nb4; ++ib4){
                        kernel[2][SI_K_02(ip,izp, nb1+nb2+ib2 , iq,izq, nb1+nb2+ib4)] = K44[SI_K44(ip,izp,ib2,iq,izq,ib4)];
}}}}}}


// kernel[3]
kernel[3].resize(n_radial*n_angular_z*n_radial*n_angular_z*(nb1+nb3+nb4)*(nb1+nb3+nb4),0.);

for(size_t ip=0; ip<n_radial; ++ip){
  for(size_t izp=0; izp<n_angular_z; ++izp){
    for(size_t iq=0; iq<n_radial; ++iq){
      for(size_t izq=0; izq<n_angular_z; ++izq){
        for(size_t ib1=0; ib1<nb1; ++ib1){
          for(size_t ib3=0; ib3<nb3; ++ib3){
            kernel[3][SI_K_03(ip,izp, ib1 , iq,izq, nb1+ib3)] = K13[SI_K13(ip,izp,ib1,iq,izq,ib3)];
            kernel[3][SI_K_03(ip,izp, nb1+ib3 , iq,izq, ib1)] = K31[SI_K31(ip,izp,ib3,iq,izq,ib1)];
          }}}}}}

for(size_t ip=0; ip<n_radial; ++ip){
  for(size_t izp=0; izp<n_angular_z; ++izp){
    for(size_t iq=0; iq<n_radial; ++iq){
      for(size_t izq=0; izq<n_angular_z; ++izq){
        for(size_t ib1=0; ib1<nb1; ++ib1){
          for(size_t ib4=0; ib4<nb4; ++ib4){
            kernel[3][SI_K_03(ip,izp, ib1 , iq,izq, nb1+nb3+ib4)] = K14[SI_K14(ip,izp,ib1,iq,izq,ib4)];
            kernel[3][SI_K_03(ip,izp, nb1+nb3+ib4 , iq,izq, ib1)] = K41[SI_K41(ip,izp,ib4,iq,izq,ib1)];
          }}}}}}

for(size_t ip=0; ip<n_radial; ++ip){
  for(size_t izp=0; izp<n_angular_z; ++izp){
    for(size_t iq=0; iq<n_radial; ++iq){
      for(size_t izq=0; izq<n_angular_z; ++izq){
        for(size_t ib3=0; ib3<nb3; ++ib3){
          for(size_t ib4=0; ib4<nb4; ++ib4){
            kernel[3][SI_K_03(ip,izp, nb1+ib3 , iq,izq, nb1+nb3+ib4)] = K34[SI_K34(ip,izp,ib3,iq,izq,ib4)];
            kernel[3][SI_K_03(ip,izp, nb1+nb3+ib4 , iq,izq, nb1+ib3)] = K43[SI_K43(ip,izp,ib4,iq,izq,ib3)];
          }}}}}}

for(size_t ip=0; ip<n_radial; ++ip){
    for(size_t izp=0; izp<n_angular_z; ++izp){
        for(size_t iq=0; iq<n_radial; ++iq){
            for(size_t izq=0; izq<n_angular_z; ++izq){
                for(size_t ib2=0; ib2<nb4; ++ib2){
                    for(size_t ib4=0; ib4<nb4; ++ib4){
                    kernel[3][SI_K_03(ip,izp, nb1+nb3+ib2 , iq,izq, nb1+nb3+ib4)] = K44[SI_K44(ip,izp,ib2,iq,izq,ib4)];
}}}}}}


// kernel[4]
kernel[4].resize(n_radial*n_angular_z*n_radial*n_angular_z*(nb2+nb3+nb4)*(nb2+nb3+nb4),0.);

for(size_t ip=0; ip<n_radial; ++ip){
  for(size_t izp=0; izp<n_angular_z; ++izp){
    for(size_t iq=0; iq<n_radial; ++iq){
      for(size_t izq=0; izq<n_angular_z; ++izq){
        for(size_t ib2=0; ib2<nb2; ++ib2){
          for(size_t ib3=0; ib3<nb3; ++ib3){
            kernel[4][SI_K_04(ip,izp, ib2 , iq,izq, nb2+ib3)] = K23[SI_K23(ip,izp,ib2,iq,izq,ib3)];
            kernel[4][SI_K_04(ip,izp, nb2+ib3 , iq,izq, ib2)] = K32[SI_K32(ip,izp,ib3,iq,izq,ib2)];
          }}}}}}

for(size_t ip=0; ip<n_radial; ++ip){
  for(size_t izp=0; izp<n_angular_z; ++izp){
    for(size_t iq=0; iq<n_radial; ++iq){
      for(size_t izq=0; izq<n_angular_z; ++izq){
        for(size_t ib2=0; ib2<nb2; ++ib2){
          for(size_t ib4=0; ib4<nb4; ++ib4){
            kernel[4][SI_K_04(ip,izp, ib2 , iq,izq, nb2+nb3+ib4)] = K24[SI_K24(ip,izp,ib2,iq,izq,ib4)];
            kernel[4][SI_K_04(ip,izp, nb2+nb3+ib4 , iq,izq, ib2)] = K42[SI_K42(ip,izp,ib4,iq,izq,ib2)];
          }}}}}}

for(size_t ip=0; ip<n_radial; ++ip){
  for(size_t izp=0; izp<n_angular_z; ++izp){
    for(size_t iq=0; iq<n_radial; ++iq){
      for(size_t izq=0; izq<n_angular_z; ++izq){
        for(size_t ib3=0; ib3<nb3; ++ib3){
          for(size_t ib4=0; ib4<nb4; ++ib4){
            kernel[4][SI_K_04(ip,izp, nb2+ib3 , iq,izq, nb2+nb3+ib4)] = K34[SI_K34(ip,izp,ib3,iq,izq,ib4)];
            kernel[4][SI_K_04(ip,izp, nb2+nb3+ib4 , iq,izq, nb2+ib3)] = K43[SI_K43(ip,izp,ib4,iq,izq,ib3)];
          }}}}}}


// kernel[5]
kernel[5].resize(n_radial*n_angular_z*n_radial*n_angular_z*(nb1+nb2)*(nb1+nb2),0.);

for(size_t ip=0; ip<n_radial; ++ip){
  for(size_t izp=0; izp<n_angular_z; ++izp){
    for(size_t iq=0; iq<n_radial; ++iq){
      for(size_t izq=0; izq<n_angular_z; ++izq){
        for(size_t ib1=0; ib1<nb1; ++ib1){
          for(size_t ib2=0; ib2<nb2; ++ib2){
            kernel[5][SI_K_05(ip,izp, ib1 , iq,izq, nb1+ib2)] = K12[SI_K12(ip,izp,ib1,iq,izq,ib2)];
            kernel[5][SI_K_05(ip,izp, nb1+ib2 , iq,izq, ib1)] = K21[SI_K21(ip,izp,ib2,iq,izq,ib1)];
          }}}}}}


// kernel[6]
kernel[6].resize(n_radial*n_angular_z*n_radial*n_angular_z*(nb1+nb3)*(nb1+nb3),0.);

for(size_t ip=0; ip<n_radial; ++ip){
  for(size_t izp=0; izp<n_angular_z; ++izp){
    for(size_t iq=0; iq<n_radial; ++iq){
      for(size_t izq=0; izq<n_angular_z; ++izq){
        for(size_t ib1=0; ib1<nb1; ++ib1){
          for(size_t ib3=0; ib3<nb3; ++ib3){
            kernel[6][SI_K_06(ip,izp, ib1 , iq,izq, nb1+ib3)] = K13[SI_K13(ip,izp,ib1,iq,izq,ib3)];
            kernel[6][SI_K_06(ip,izp, nb1+ib3 , iq,izq, ib1)] = K31[SI_K31(ip,izp,ib3,iq,izq,ib1)];
          }}}}}}


// kernel[7]
kernel[7].resize(n_radial*n_angular_z*n_radial*n_angular_z*(nb1+nb4)*(nb1+nb4),0.);

for(size_t ip=0; ip<n_radial; ++ip){
  for(size_t izp=0; izp<n_angular_z; ++izp){
    for(size_t iq=0; iq<n_radial; ++iq){
      for(size_t izq=0; izq<n_angular_z; ++izq){
        for(size_t ib1=0; ib1<nb1; ++ib1){
          for(size_t ib4=0; ib4<nb4; ++ib4){
            kernel[7][SI_K_07(ip,izp, ib1 , iq,izq, nb1+ib4)] = K14[SI_K14(ip,izp,ib1,iq,izq,ib4)];
            kernel[7][SI_K_07(ip,izp, nb1+ib4 , iq,izq, ib1)] = K41[SI_K41(ip,izp,ib4,iq,izq,ib1)];
          }}}}}}


// kernel[8]
kernel[8].resize(n_radial*n_angular_z*n_radial*n_angular_z*(nb2+nb3)*(nb2+nb3),0.);

for(size_t ip=0; ip<n_radial; ++ip){
  for(size_t izp=0; izp<n_angular_z; ++izp){
    for(size_t iq=0; iq<n_radial; ++iq){
      for(size_t izq=0; izq<n_angular_z; ++izq){
        for(size_t ib2=0; ib2<nb2; ++ib2){
          for(size_t ib3=0; ib3<nb3; ++ib3){
            kernel[8][SI_K_08(ip,izp, ib2 , iq,izq, nb2+ib3)] = K23[SI_K23(ip,izp,ib2,iq,izq,ib3)];
            kernel[8][SI_K_08(ip,izp, nb2+ib3 , iq,izq, ib2)] = K32[SI_K32(ip,izp,ib3,iq,izq,ib2)];
          }}}}}}


// kernel[9]
kernel[9].resize(n_radial*n_angular_z*n_radial*n_angular_z*(nb2+nb4)*(nb2+nb4),0.);

for(size_t ip=0; ip<n_radial; ++ip){
  for(size_t izp=0; izp<n_angular_z; ++izp){
    for(size_t iq=0; iq<n_radial; ++iq){
      for(size_t izq=0; izq<n_angular_z; ++izq){
        for(size_t ib2=0; ib2<nb2; ++ib2){
          for(size_t ib4=0; ib4<nb4; ++ib4){
            kernel[9][SI_K_09(ip,izp, ib2 , iq,izq, nb2+ib4)] = K24[SI_K24(ip,izp,ib2,iq,izq,ib4)];
            kernel[9][SI_K_09(ip,izp, nb2+ib4 , iq,izq, ib2)] = K42[SI_K42(ip,izp,ib4,iq,izq,ib2)];
          }}}}}}


// kernel[10]
kernel[10].resize(n_radial*n_angular_z*n_radial*n_angular_z*(nb3+nb4)*(nb3+nb4),0.);

for(size_t ip=0; ip<n_radial; ++ip){
  for(size_t izp=0; izp<n_angular_z; ++izp){
    for(size_t iq=0; iq<n_radial; ++iq){
      for(size_t izq=0; izq<n_angular_z; ++izq){
        for(size_t ib3=0; ib3<nb3; ++ib3){
          for(size_t ib4=0; ib4<nb4; ++ib4){
            kernel[10][SI_K_10(ip,izp, ib3 , iq,izq, nb3+ib4)] = K34[SI_K34(ip,izp,ib3,iq,izq,ib4)];
            kernel[10][SI_K_10(ip,izp, nb3+ib4 , iq,izq, ib3)] = K43[SI_K43(ip,izp,ib4,iq,izq,ib3)];
          }}}}}}

// kernel[11]
kernel[11].resize(n_radial*n_angular_z*n_radial*n_angular_z*nb4*nb4,0.);


for(size_t ip=0; ip<n_radial; ++ip){
    for(size_t izp=0; izp<n_angular_z; ++izp){
        for(size_t iq=0; iq<n_radial; ++iq){
            for(size_t izq=0; izq<n_angular_z; ++izq){
                for(size_t ib3=0; ib3<nb4; ++ib3){
                    for(size_t ib4=0; ib4<nb4; ++ib4){
                        kernel[11][SI_K_11(ip,izp, ib3 , iq,izq, ib4)] = K44[SI_K44(ip,izp,ib3,iq,izq,ib4)];
                    }}}}}}
