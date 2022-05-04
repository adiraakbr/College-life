// Nama         : Adira Rahmana Akbar
// NIM          : 24060121140114
// Nama Program : CekPrima.c
// Tanggal      : 18 Maret 2022
// Deskripsi    : Mengetahui dan menampilkan bilangan integer sembarang N dengan N > 0 yang dimasukkan termasuk bilangan sempurna atau bukan

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    // Kamus
    int i,N,p;

    // Algoritma
    p = 0;
    printf("Masukkan bilangan : ");
    scanf("%d",&N);
    if (N<=0){
        printf("N harus bilangan integer positif");
    }
    else{
         for(i=1;i<=N;i++){
            if(N % i==0){
                p = p + 1;
            }
        }
        if(p==2){
            printf("%d adalah bilangan prima",N);
        }
        else{
            printf("%d adalah bukan bilangan prima",N);
        }
    }
    return 0;
}
