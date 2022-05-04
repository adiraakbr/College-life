// Nama         : Adira Rahmana Akbar
// NIM          : 24060121140114
// Nama Program : Kuadran.c
// Tanggal      : 31 Maret 2022
// Deskripsi    : Menghasilkan kuadran dari inputan X dan Y integer sembarangan

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    //Kamus
    int X,Y;

    //Algoritma
    printf("Masukkan nilai X :  ");
    scanf("%d",&X);
    printf("Masukkan nilai Y: ");
    scanf("%d",&Y);
    if (X<0){
        if(Y>0){
            printf("Kuadran II");
        }
        else if (Y<0){
            printf("Kuadran III");
        }
        else{
            printf("Input tidak valid");
        }
    }
    else if(X>0){
        if(Y>0){
            printf("Kuadran I");
        }
        else if (Y<0){
            printf("Kuadran IV");
        }
        else{
            printf("Input tidak valid");
        }
    }
    else{
        printf("Input yang dimasukkan tidak valid");
    }
    return 0;
}
