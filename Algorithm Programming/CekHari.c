// Nama         : Adira Rahmana Akbar
// NIM          : 24060121140114
// Nama Program : CekHari.c
// Tanggal      : 13 Maret 2022
// Deskripsi    : Menampilkan nama-nama hari dari nomor hari yang dimasukkan

#include <stdio.h>
#include <stdlib.h>

int main(){
    //Kamus
    int h;

    //Algoritma
    printf("Masukkan bilangan : ");
    scanf("%d",&h);
    switch (h){
        case 1 :
            printf("Senin");
            break;
        case 2 :
            printf("Selasa");
            break;
        case 3:
            printf("Rabu");
            break;
        case 4:
            printf("Kamis");
            break;
        case 5:
            printf("Jumat");
            break;
        case 6:
            printf("Sabtu");
            break;
        case 7:
            printf("Minggu");
            break;
        default:
            printf("Masukan nomor hari tidak tepat");
            break;
            }

    return 0;
}
