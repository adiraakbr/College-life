// Nama         : Adira Rahmana Akbar
// NIM          : 24060121140114
// Nama Program : JumDeret2.c
// Tanggal      : 31 Maret 2022
// Deskripsi    : Menghitung jumlah deret 1 sampai N dengan syarat setiap sukunya (2n-1) dari integer sembarang N > 0

#include <stdio.h>
#include <stdlib.h>

int main()
{
   //Kamus
   int i,N,sum;

   //Algoritma
   printf("Masukkan angka : ");
   scanf("%d",&N);
   if(N>0){
        sum=0;
        for(i=1;i<=N;i++){
            sum = sum + (i*2)-1;
        }
        printf("Hasil deret adalah %d",sum);
   }
   else{
    printf("N harus bilangan integer positif");
   }
    return 0;
}
