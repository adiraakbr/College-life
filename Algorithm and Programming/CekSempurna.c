// Nama         : Adira Rahmana Akbar
// NIM          : 24060121140114
// Nama Program : CekSempurna.c
// Tanggal      : 19 Maret 2022
// Deskripsi    : Mengetahui dan menampilkan bilangan integer sembarang N dengan N > 0 yang dimasukkan termasuk bilangan sempurna atau bukan

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Kamus
    int i,N,s;

    //Algoritma
    s = 0;
    printf("Masukkan bilangan : ");
    scanf("%d",&N);
    if(N<=0){
        printf("N harus bilangan integer positif");
    }
    else{
        for(i=1; i<N ;i++){
        if (N % i==0){
            s = s + i;
        }
    }
    }
    if (N==s){
        printf("%d adalah bilangan sempurna",N);
    }
    else{
        printf("%d adalah bukan bilangan sempurna",N);
    }
    return 0;
}
