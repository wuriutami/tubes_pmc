#include"lib.h"

int main(){
    prak_t p[3];
    strcpy(p[2].id, "EB2200");
    strcpy(p[0].id, "EL2205");
    strcpy(p[1].id, "EL2208");
    jadwal_t jadwal[12][5];
    input_sch(jadwal, p);
    return 0;
}