#include "lib.h"

void savetocsvjadwal(jadwal_t j[15][5]) {
    /*Membuat file agar hasil dapat dimasukkan ke dalam file csv*/
    FILE *outfile;
    outfile = fopen("Tubes_Jadwal Praktikum.csv","w");

    /*Layout jadwal*/
    fprintf(outfile,"Ruang, Praktikum, LAB1, LAB2, LAB3, LSS\n");
    fprintf(outfile,"Minggu, Hari\n");

    char day[5][7] = {"Senin","Selasa","Rabu","Kamis","Jumat"};

    /*looping untuk jadwal setiap minggu*/
    for (int minggu=3; minggu<=15; minggu++) {
        for (int hari=0; hari<=4; hari++) {
            /*layout jadwal (setiap baris selalu ada)*/
            fprintf(outfile,"%d, %s", minggu, day[hari]);
            /*jadwal praktikum sesuai input*/
            //asumsi 1: kalau ga ada jadwal, hasilnya kosong
            //asumsi 2: r=4 untuk validasi
            /*LAB 1 = lab[r=0]*/
            fprintf(outfile,"%s-%s", j[minggu][hari].lab[0].prak, j[minggu][hari].lab[0].rom);
            /*LAB 2 = lab[r=1]*/
            fprintf(outfile,"%s-%s", j[minggu][hari].lab[1].prak, j[minggu][hari].lab[1].rom);
            /*LAB 3 = lab[r=2]*/
            fprintf(outfile,"%s-%s", j[minggu][hari].lab[2].prak, j[minggu][hari].lab[2].rom);
            /*LAB LSS = lab[r=3]*/
            fprintf(outfile,"%s-%s\n", j[minggu][hari].lab[3].prak, j[minggu][hari].lab[3].rom);
        }
    }
    fclose(outfile);
}
