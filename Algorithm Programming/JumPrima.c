// Nama         : Adira Rahmana Akbar
// NIM          : 24060121140114
// Nama Program : JumPrima.c
// Tanggal      : 02 April 2022
// Deskripsi    : Menghasilkan jumlah bilangan prima dalam deret 1 sampai N

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    //Kamus
    int i,j,N,Sn,p;

    //Algoritma
    printf("Masukkan banyak data bilangan :  ");
    scanf("%d",&N);
    if(N>0){
        Sn = 0;
        for(i=1;i<=N;i++){
            p = 0;
            for(j=1;j<=i;j++){
                if(i % j== 0){
                    p++;
                }
            }
            if(p==2){
                Sn = Sn + i;
                printf(" %d",i);
            }
            if(i==N){
                printf(" dengan Jumlahan Deret Bilangannya adalah Sn= %d",Sn);
            }
        }
    }
    else{
        printf("Tidak Ada Bilangan, sehingga Jumlahannya Sn=0");
    }
    return 0;
}
