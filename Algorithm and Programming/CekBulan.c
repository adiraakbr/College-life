// Nama         : Adira Rahmana Akbar
// NIM          : 24060121140114
// Nama Program : CekBulan.c
// Tanggal      : 13 Maret 2022
// Deskripsi    : Menampilkan nama-nama bulan dari nomor hari yang dimasukkan

#include <stdio.h>
#include <stdlib.h>

int main(){
    //Kamus
    int b;

    //Algoritma
    printf("Masukkan bilangan : ");
    scanf("%d",&b);
    switch (b){
        case 1 :
            printf("Januari");
            break;
        case 2 :
            printf("Februari");
            break;
        case 3:
            printf("Maret");
            break;
        case 4:
            printf("April");
            break;
        case 5:
            printf("Mei");
            break;
        case 6:
            printf("Juni");
            break;
        case 7:
            printf("Juli");
            break;
        case 8:
            printf("Agustus");
            break;
        case 9:
            printf("September");
            break;
        case 10:
            printf("Oktober");
            break;
        case 11:
            printf("November");
            break;
        case 12:
            printf("Desember");
            break;
        default:
            printf("Masukan nomor bulan tidak tepat");
            break;
            }

    return 0;
}
