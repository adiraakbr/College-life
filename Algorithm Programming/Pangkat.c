// Nama         : Adira Rahmana Akbar
// NIM          : 24060121140114
// Nama Program : Pangkat.c
// Tanggal      : 03 April 2022
// Deskripsi    : Menghasilkan dan menampilkan hasil dari nilai pangkat dari 2 input

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Pangkat(int x,int y){
    //Kamus
    int a,b;
    float sum;

    //Algoritma
    sum = 1;
    if(y>0){
        for(a=y;a>=1;a--){
            sum = sum * x;
        }
    }
    else if(y<0){
        for(b=y;b<=-1;b++){
            sum = sum / x;
            b++;
        }
    }
    else{
        sum = 1;
    }
    printf("Hasil pangkatnya adalah %.2f",sum);
}

int main(){
    //Kamus
    int i,j;

    // Algoritma
    printf("Masukkan angka :  ");
    scanf("%d",&i);
    printf("Ingin dipangkat berapa angka tersebut? ");
    scanf("%d",&j);
    Pangkat(i,j);
    return 0;
}
