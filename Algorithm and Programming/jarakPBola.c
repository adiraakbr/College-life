// Nama         : Adira Rahmana Akbar
// NIM          : 24060121140114
// Nama Program : jarakPBola.c
// Tanggal      : 5 Maret 2022
// Deskripsi    : Menghitung dan menampilkan jarak parabola (y) yang dihasilkan dalam meter, y=v0 x t - 1/2 (g x t2)

#include <stdio.h>
#include <stdlib.h>

int main(){
    //Kamus
    float v0,t,y;
    const float g = 9.8;

    //Algoritma
    printf("Masukkan kecepatan awal : ");
    scanf("%f",&v0);

    printf("Masukkan waktu : ");
    scanf("%f",&t);

    y = (v0 * t) - (g*t*t / 2);
    printf("%.2f",y);

    return 0;
}
