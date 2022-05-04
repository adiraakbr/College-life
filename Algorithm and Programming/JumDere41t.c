// Nama         : Adira Rahmana Akbar
// NIM          : 24060121140114
// Nama Program : JumlahDere41t.c
// Tanggal      : 31 Maret 2022
// Deskripsi    : Menghasilkan deret bilangan dengan proses sekuensial dengan jumlah suku N dengan syarat setiap sukunya 1/2 n (n + 1)

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    //Kamus
    int i,N,Sn,bilangan;

    //Algoritma
    printf("Masukkan banyaknya bilangan :  ");
    scanf("%d",&N);
    if(N>0){
        Sn = 0;
        printf("Sn= ");
        for(i=1;i<=N;i++){
            bilangan = i*(i+1)/2;
            Sn = Sn + bilangan;
            if(i==N){
                printf("%d = %d",bilangan,Sn);
            }
            else{
                printf("%d+",bilangan);
            }
        }
    }
    else{
        printf("Input yang dimasukkan tidak valid");
    }
    return 0;
}
