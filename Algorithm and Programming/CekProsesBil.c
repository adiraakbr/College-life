// Nama         : Adira Rahmana Akbar
// NIM          : 24060121140114
// Nama Program : CekProsesBil.c
// Tanggal      : 13 Maret 2022
// Deskripsi    : Menampilkan hasil klasifikasi akhir dari bilangan N

#include <stdio.h>
#include <stdlib.h>

int main(){
    //Kamus
    int N;

    //Algoritma
    printf("Masukkan bilangan : ");
    scanf("%d",&N);
    if (N % 2 == 0){
        N = N + 3;
        if (N % 5 == 0){
            N = N + 5;
        }
        else{
            N = N +2;
        }
    }
    else{
        N = N + 2;
        if (N % 3 == 0){
            N = N + 4;
        }
        else{
            N = N + 1;
        }
    }
    printf("%d",N);
    return 0;
}
