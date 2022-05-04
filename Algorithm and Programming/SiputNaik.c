// Nama         : Adira Rahmana Akbar
// NIM          : 24060121140114
// Nama Program : SiputNaik.c
// Tanggal      : 21 Maret 2022
// Deskripsi    : Mengetahui berapa hari yang dibutuhkan siput untuk mencapai ketinggian N meter

#include <stdio.h>
#include <stdlib.h>

int main()
{
   // Kamus
   float i,N;
   int d;

   // Algoritma
   printf("Masukkan ketinggian N : ");
   scanf("%f",&N);
   if(N<=0){
        printf("N harus bilangan integer positif");
   }
   i = 0;
   d = 0;
   while(i<N){
        i = i + 0.3;
        if(i>=N){
            d++;
            break;
        }
        else{
            i = i - 0.1;
            d++;
        }
   }
   printf("Hari yang dibutuhkan adalah %d hari", d);
   return 0;
}
