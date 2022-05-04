// Nama         : Adira Rahmana Akbar
// NIM          : 24060121140114
// Nama Program : BiayaParkir.c
// Tanggal      : 15 Maret 2022
// Deskripsi    : Menghitung dan menampilkan biaya parkir seseorang berdasarkan waktu lamanya parkir

#include <stdio.h>
#include <stdlib.h>

int main(){
    /*Kamus*/
    int i,p;

    /*Algoritma*/
    printf("Masukkan lama waktu parkir : ");
    scanf("%d",&i);
    if (i > 2){
        p = 2000+((i-2)*500);
        printf("%d",p);
    }
    else {
        p = 2000;
        printf("%d",p);
    }
    return 0;
}
