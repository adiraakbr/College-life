// Nama         : Adira Rahmana Akbar
// NIM          : 24060121140114
// Nama Program : Tetris2.c
// Tanggal      : 31 Maret 2022
// Deskripsi    : Menampilkan susunan karakter ‘*’ dari sebuah integer N > 0 dengan susunan dari 1 hingga ke N lalu kembali ke 1

#include <stdio.h>
#include <stdlib.h>

int main()
{
   // Kamus
   int i,t,N;

   // Algoritma
   printf("Masukkan jumlah baris bintang yang diinginkan : ");
   scanf("%d",&N);
   for(i=1;i<=N;i++){                 //loop baris
       for(t=1;t<=i;t++){             //loop kolom
            printf("*");
            if(t==i){
                printf(" %d",t);
            }
       }
       printf("\n");
    }
   for(i=N-1;i>=1;i--){              //loop baris
       for(t=1;t<=i;t++){            //loop kolom
            printf("*");
            if(t==i){
                printf(" %d",t);
            }
       }
       printf("\n");
    }
   return 0;
}
