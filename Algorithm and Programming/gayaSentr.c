// Nama         : Adira Rahmana Akbar
// NIM          : 24060121140114
// Nama Program : gayaSentr.c
// Tanggal      : 5 Maret 2022
// Deskripsi    : Menghitung dan menampilkan gaya sentripetal (F) yang dihasilkan dalam Newton, F = m*v2 /r

#include <stdio.h>
#include <stdlib.h>

int main(){
    //Kamus
    float m,v,r, F;

    //Algoritma
    printf("Masukkan nilai massa : ");
    scanf("%f",&m);

    printf("Masukkan kecepatan : ");
    scanf("%f",&v);

    printf("Masukkan jari-jari : ");
    scanf("%f",&r);

    F = m * v * v / r;
    printf("%.2f",F);

    return 0;
}
