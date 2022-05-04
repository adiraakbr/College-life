// Nama         : Adira Rahmana Akbar
// NIM          : 24060121140114
// Nama Program : JumDeret31.c
// Tanggal      : 31 Maret 2022
// Deskripsi    : Menghitung jumlah deret 1 sampai N dengan syarat setiap suku ganjil bernilai positif dan suku genap
//                bernilai negatif dari N > 0 menggunakan array/tabel

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
        for(i=1;i<=N;i++){
            T[i]= i;
            sum = sum + (pow(-1, i)*(i * -1));
        }
        printf("Hasilnya adalah %d",sum);
    }
    else{
        printf("N harus bilangan integer positif");
    }
    return 0;
}
