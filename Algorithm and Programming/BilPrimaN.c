// Nama         : Adira Rahmana Akbar
// NIM          : 24060121140114
// Nama Program : BilPrimaN.c
// Tanggal      : 02 April 2022
// Deskripsi    : Membuat bilangan prima dari 1 hingga N

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    //Kamus
    int i,j,N,p;

    //Algoritma
    printf("Masukkan angka untuk membuat deret :  ");
    scanf("%d",&N);
    if(N>0){
        printf("bilangan prima nya adalah : ");
        for(i=1;i<=N;i++){
            p = 0;
            for(j=1;j<=i;j++){
                if(i % j==0){
                    p++;
                }
            }
            if(p==2){
                printf(" %d",i);
            }
        }
    }
    else{
        printf("Tidak Ada Bilangan Prima");
    }
    return 0;
}
