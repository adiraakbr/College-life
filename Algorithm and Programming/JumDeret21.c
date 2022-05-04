// Nama         : Adira Rahmana Akbar
// NIM          : 24060121140114
// Nama Program : JumDeret21.c
// Tanggal      : 31 Maret 2022
// Deskripsi    : Menghitung jumlah deret 1 sampai N dengan syarat setiap sukunya (2n-1) dari N > 0 menggunakan array/tabel

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    //Kamus
    int i, N, sum;

    // Algoritma
    printf("Masukkan banyaknya data : ");
    scanf("%d",&N);
    if(N>0){
        int T[N];
        sum=0;
        N=2*N-1;
        for(i=1;i<=N;i++){
            T[i]= i;
            if(T[i] % 2 != 0){
            sum = sum + T[i];
            }
        }
        printf("Hasilnya adalah %d",sum);
    }
    else{
        printf("N harus bilangan integer positif");
    }
    return 0;
}
