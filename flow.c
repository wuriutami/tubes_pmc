int Syarat Rombongan(string s, s1);
if (s1 = EL2205){
  if (s rombongan EL2205){
    return index;
  } else{
    return -1
  }
}else if (s1 = EL2208){
  if (s rombongan EL2208){
    return index;
  } else{
    return -1
  }
  
}else if (s1 = EB2200){
  if (s rombongan EB2200){
    return index;
  } else{
    return -1
  }
  
}


int input_minggu;
do{
  read (d);
  
}while((d<3)||(d>15));
return d;

int input_ruangan(prak);
do{
  input (s);
  d =  str2enum_prak(s);
  if (prak != EL2205){
    if (s=LSS){
      syarat = false;
    }else{
      syarat = true;
    }
  }
}while (!syarat)
return d;


int input hari(prak, rombongan);
syarat = false;
do{
  input (s);
  d = str2enum_hari(s);
  if ((prak = EL2205)&(rombongan = C)){
    if (s = Rabu){
      syarat = true;
    }
  }
  if (prak = EB2200){
    if ((s = Selasa)or (s = kamis)){
      syarat = true;
    }
  }
}while (!syarat)
return d;

int str2enum_prak(s);
for (i=0;i<3;i++){
  if (s == prak[i]){
    return i;
  }
}
return 3;
int str2enum_hari(s);
for (i=0;i<5;i++){
  if (s == hari[i]){
    return i;
  }
}
return 5;

int str2enum_lab(s);
for (i=0;i<4;i++){
  if (s == prak[i]){
    return i;
  }else{
    return 4;
  }
}

int rombongan_max(prak);
switch (prak){
  case EL2205 :
    return 9;
  case EL2208 :
    return 9;
  case EB2200:
    return 2;
}

void input_sch(jadwal);
scanf (s);
prak =  str2enum_prak(s)
rombongan = rombongan_max(prak);
input (r);
rombongan = syarat_rombongan(prak,r);
if ((rombongan = A)or(rombongan = B)or(rombongan = C)){
  w=input_minggu
  h=input_hari(prak, rombongan);
  for (i=0;i<max_rombongan;i++){
    ruang= input_ruangan()
    jadwal[w][h].lab[ruang].prak = p[prak].id
    jadwal[w][h].lab[ruang].id = ruang
    jadwal[w][h].lab[ruang].rombongan = rombongan;
        
  }
}else{
  w=input_minggu
  h=input_hari(prak, rombongan)
  ruang= input_ruangan();
  jadwal[w][h].lab[ruang].prak = p[prak].id
  jadwal[w][h].lab[ruang].id = ruang
  jadwal[w][h].lab[ruang].rombongan = rombongan;
}

