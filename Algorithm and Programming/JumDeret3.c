// Nama         : Adira Rahmana Akbar
// NIM          : 24060121140114
// Nama Program : JumDeret3.c
// Tanggal      : 31 Maret 2022
// Deskripsi    : Menghitung jumlah deret 1 sampai N dengan syarat setiap suku ganjil bernilai positif dan setiap suku genap
//                bernilai negatif dari integer sembarang N > 0


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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
            sum = sum + pow(-1,i+1)*i;
        }
        printf("Hasil deret adalah %d",sum);
   }
   else{
    printf("N harus bilangan integer positif");
   }
    return 0;
}
