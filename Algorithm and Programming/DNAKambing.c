// Nama         : Adira Rahmana Akbar
// NIM          : 24060121140114
// Nama Program : DNAKambing.c
// Tanggal      : 31 Maret 2022
// Deskripsi    : Menentukan banyaknya saudara dan tidak saudara dari kumpulan data DNA kambing,
//                jika selisih DNA < 3 kambing bersaudara dan jika selisih DNA >= 3 maka kambing tidak bersaudara

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    //Kamus
    int i,j,h,N,saudara,tdksaudara;

    //Algoritma
    printf("Masukkan banyaknya DNA: ");
    scanf("%d",&N);

    saudara = 0;
    tdksaudara =0;
    if(N>0){
        int T[N];
        for(i=1;i<=N;i++){
            printf("Masukkan DNA ke %d : ",i);
            scanf("%d",&T[i]);
        }
        for(j=N;j>1;j--){
            for(h=1;h<j;h++){
                if(T[j]-T[h]<3){
                    saudara++;
                }
                else{
                    tdksaudara++;
                }
            }
        }
        printf("Jumlah yang bersaudara adalah %d dan jumlah yang tidak bersaudara adalah %d",saudara,tdksaudara);
    }
    else{
        printf("Input yang dimasukkan tidak valid");
    }
    return 0;
}

