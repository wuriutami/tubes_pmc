#include"lib.h"

int main(){
    prak_t p[3];
    strcpy(p[2].id, "EB2200");
    strcpy(p[0].id, "EL2205");
    strcpy(p[1].id, "EL2208");
    jadwal_t jadwal[12][5];
    char s[255];
    input_sch(jadwal, p);
   // printf(jadwal[5][4].lab[])
    for (int i =0 ; i< 12;i++){
        for (int j = 0; j< 5 ; j++){
            //printf("Masuk");
            if (strcmp(jadwal[i][j].lab[0].prak,"")!=0){
           
                printf("Minggu %d Hari %d ada Prak %s rombongan %s di \n", i+1,j+1,jadwal[i][j].lab[0].prak,jadwal[i][j].lab[0].rom,jadwal[i][j].lab[0].id);
            }
            if (strcmp(jadwal[i][j].lab[1].prak,"")!=0){
              
                printf("Minggu %d Hari %d ada Prak %s rombongan %s di \n", i+1,j+1,jadwal[i][j].lab[1].prak,jadwal[i][j].lab[1].rom,jadwal[i][j].lab[1].id);
            }
            if (strcmp(jadwal[i][j].lab[2].prak,"")!=0){
            
                printf("Minggu %d Hari %d ada Prak %s rombongan %s di \n", i+1,j+1,jadwal[i][j].lab[2].prak,jadwal[i][j].lab[2].rom,jadwal[i][j].lab[2].id);
            }
            if (strcmp(jadwal[i][j].lab[3].prak,"")!=0){
                
                printf("Minggu %d Hari %d ada Prak %s rombongan %s di \n", i+1,j+1,jadwal[i][j].lab[3].prak,jadwal[i][j].lab[3].rom,jadwal[i][j].lab[3].id);
            }
        }
    }
    return 0;
}