// Nama         : Adira Rahmana Akbar
// NIM          : 24060121140114
// Nama Program : Tetris1.c
// Tanggal      : 31 Maret 2022
// Deskripsi    : Menampilkan susunan karakter ‘*’ dari sebuah integer N > 0 dari jumlah terbesar hingga terkecil

#include <stdio.h>
#include <stdlib.h>

int main()
{
   //Kamus
   int i,t,N;

   //Algoritma
   printf("Jumlah baris yang diinginkan : ");
   scanf("%d",&N);
   for(i=1;i<=N;i++){                //loop baris
       for(t=N;t>=i;t--){            //loop kolom
            printf("*");
       }
       printf("\n");
    }
   return 0;
}
