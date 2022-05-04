// Nama         : Adira Rahmana Akbar
// NIM          : 24060121140114
// Nama Program : JumDeret11.c
// Tanggal      : 31 Maret 2022
// Deskripsi    : Menghitung jumlah deret 1 sampai N dari bilangan integer N > 0 dengan menggunakan array/tabel


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    //Kamus
    int i, N, sum;

    //Algoritma
    printf("Masukkan banyaknya data : ");
    scanf("%d",&N);
    if(N>0){
        int T[N];
        sum=0;
        for(i=1;i<=N;i++){
            T[i]= i;
            sum = sum + T[i];
        }
        printf("Hasilnya adalah %d",sum);
    }
    else{
        printf("N harus bilangan integer positif");
    }
    return 0;
}
