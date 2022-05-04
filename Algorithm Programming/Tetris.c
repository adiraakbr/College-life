// Nama         : Adira Rahmana Akbar
// NIM          : 24060121140114
// Nama Program : Tetris.c
// Tanggal      : 31 Maret 2022
// Deskripsi    : Menampilkan susunan karakter ‘*’ dari sebuah integer N > 0

#include <stdio.h>
#include <stdlib.h>

int main()
{
   //Kamus
   int i,t,N;

   //Algoritma
   printf("Jumlah baris yang diinginkan : ");
   scanf("%d",&N);
   for(i=1;i<=N;i++){                 //loop baris
       for(t=1;t<=i;t++){             //loop kolom
            printf("*");
            if(t==i){
                printf(" %d", t);
            }
       }
       printf("\n");
    }
   return 0;
}
