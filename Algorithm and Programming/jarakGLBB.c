// Nama         : Adira Rahmana Akbar
// NIM          : 24060121140114
// Nama Program : jarakGLBB.c
// Tanggal      : 5 Maret 2022
// Deskripsi    : Menghitung dan menampilkan jarak (S) yang dihasilkan pada GLBB dalam meter, S=v0 x t + 1/2 (a x t2)

#include <stdio.h>
#include <stdlib.h>

int main(){
    //Kamus
    float v0,t,a,S;

    //Algoritma
    printf("Masukkan kecepatan awal : ");
    scanf("%f",&v0);

    printf("Masukkan waktu : ");
    scanf("%f",&t);

    printf("Masukkan percepatan : ");
    scanf("%f",&a);

    S = (float)(v0 * t) + (float)(a*t*t / 2);
    printf("%.2f",S);

    return 0;
}
