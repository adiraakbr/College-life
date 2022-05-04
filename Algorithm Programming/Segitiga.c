// Nama         : Adira Rahmana Akbar
// NIM          : 24060121140114
// Nama Program : Segitiga.c
// Tanggal      : 31 Maret 2022
// Deskripsi    : Menampilkan susunan karakter ‘*’ dari sebuah integer N > 0 yang membentuk segitiga sama sisi

#include <stdio.h>
#include <stdlib.h>

int main()
{
   //Kamus
   int i,t,j,N;

   //Algoritma
   printf("Jumlah baris yang diinginkan : ");
   scanf("%d",&N);
   i = N;
   while(i>=1){
        for(t=N;t>i;t--){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
        i--;
   }
    return 0;
}
