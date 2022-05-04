// Nama         : Adira Rahmana Akbar
// NIM          : 24060121140114
// Nama Program : IsiMatrik.c
// Tanggal      : 31 Maret 2022
// Deskripsi    : Membuat matrik dengan nilai 1 diisi diagonal utama, nilai 0 diisi di atas diagonal utama,
//                nilai 2 diisi di bawah diagonal utama dengan syarat memiliki ordo sama (M x N)

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    //Kamus
    int i,j,M,N;

    //Algoritma
    printf("Masukkan baris M: ");
    scanf("%d",&M);
    printf("Masukkan kolom N: ");
    scanf("%d",&N);
    if(M==N && M>0 && N>0){
        for(i=1;i<=M;i++){
            for(j=1;j<=N;j++){
                if(i==j){
                    printf("1 ");
                }
                else if (j>i){
                    printf("0 ");
                }
                else{
                    printf("2 ");
                }
            }
            printf("\n");
        }
    }
    else{
        printf("Nilai M dan N harus sama");
    }
    return 0;
}
