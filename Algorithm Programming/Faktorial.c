// Nama         : Adira Rahmana Akbar
// NIM          : 24060121140114
// Nama Program : Faktorial.c
// Tanggal      : 03 April 2022
// Deskripsi    : Menghitung dan menampilkan faktorial dari integer N sembarang

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Faktorial(int x){
    //Kamus
    int i,f;

    //Algoritma
    int f = 1;
    for(i=x;i>=1;i--){
        if(i==1){
            f = f * 1;
            printf("%d = %d",i,f);
        }
        else{
            f = f * i;
            printf("%dx",i);
        }
    }
}

int main(){
    //Kamus
    int N;

    // Algoritma
    printf("Masukkan angka :  ");
    scanf("%d",&N);
    if(N>0){
        Faktorial(N);
    }
    else{
        printf("Tidak Ada Hasil Faktorial");
    }
    return 0;
}
