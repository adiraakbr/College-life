// Nama         : Axelliano Rafael Situmeang
// NIM          : 24060121130089
// Tanggal      : 29 Maret 2022
// Nama Program : Faktorial.c
/* Deskripsi    : menghasilkan deret angka yang prima dalam rentang N*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Pangkat(int a,int b){
    int k,l;
    float sum = 1;
    if(b>0){
        for(k=b;k>=1;k--){
            sum = sum*a;
        }
    }
    else if (b<0){
        for(l=b;l<=-1;l++){
            sum = sum / a;
        }
    }
    else{
        sum = 1;
    }
    printf("Hasilnya adalah %.4f",sum);
}

int main(){
    int i,j;

    // Algoritma
    printf("Masukkan angka yang akan di Pangkatkan :  ");
    scanf("%d",&i);
    printf("Ingin dipangkatkan berapa? ");
    scanf("%d",&j);
    Pangkat(i,j);
    return 0;
}
