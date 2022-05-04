// Nama         : Adira Rahmana Akbar
// NIM          : 24060121140114
// Nama Program : UpahKerja.c
// Tanggal      : 16 Maret 2022
// Deskripsi    : Menghitung dan menampilkan berapa upah kerja yang didapat


#include <stdio.h>
#include <stdlib.h>

int main(){
    // Kamus
    int k,h;

    // Algoritma
    printf("Masukkan golongan karyawan (1 hingga 4) : ");
    scanf("%d",&k);
    printf("Jam kerja dalam seminggu : ");
    scanf("%d", &h);
    if(h<=40){
        switch (k){
        case 1 :
            printf("%d", h*1000);
            break;
        case 2 :
            printf("%d", h*1500);
            break;
        case 3 :
            printf("%d", h*2000);
            break;
        case 4:
            printf("%d", h*2500);
            break;
        }
    }
    else {
        switch (k){
        case 1 :
            printf("%d", 40*1000 + (h-40)* 3 * 1000 / 2);
            break;
        case 2 :
            printf("%d", 40*1500 + (h-40)* 3 * 1500 / 2);
            break;
        case 3 :
            printf("%d", 40*2000 + (h-40)* 3 * 2000 / 2);
            break;
        case 4:
            printf("%d", 40*2500 + (h-40)* 3 * 2500 / 2);
            break;
        }
    }
    return 0;
}
