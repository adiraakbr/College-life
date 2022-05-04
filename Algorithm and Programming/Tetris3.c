// Nama         : Adira Rahmana Akbar
// NIM          : 24060121140114
// Nama Program : Tetris3.c
// Tanggal      : 31 Maret 2022
// Deskripsi    : Menampilkan susunan karakter ‘*’ dari sebuah integer N > 0 dengan mengikuti deret Un=1/2*n*(n+1)

#include <stdio.h>
#include <stdlib.h>

int main()
{
   //Kamus
   int i,t,N,Un;

   //5Algoritma
   printf("Jumlah baris yang diinginkan : ");
   scanf("%d",&N);
   for(i=1;i<=N;i++){
       Un = (i*(i+1))/2;            //loop baris
       for(t=1;t<=Un;t++){          //loop kolom
            printf("*");
            if(t==Un){
                printf(" %d",t);
            }
        }
        printf("\n");
    }
    return 0;
}
