// Nama         : Adira Rahmana Akbar
// NIM          : 24060121140114
// Nama Program : FaktorBil.c
// Tanggal      : 18 Maret 2022
// Deskripsi    : Menentukan dan menampilkan faktor bilangan integer sembarang N dengan N > 0 yang dimasukkan


#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kamus
    int i,N;

    //Algoritma
    printf("Masukkan angka untuk mencari faktor bilangan : ");
    scanf("%d",&N);
    if (N<=0){
        printf("N harus bilangan integer positif");
    }
    else{
     for(i=1; i<=N ;i++){
        if (N % i == 0){
            printf(" %d",i);
        }
    }
    }
    return 0;
}
