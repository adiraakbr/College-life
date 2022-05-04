// Nama         : Adira Rahmana Akbar
// NIM          : 24060121140114
// Nama Program : KelBil.c
// Tanggal      : 31 Maret 2022
// Deskripsi    : Menentukan kelipatan bilangan terkecil dari array integer A sembarang

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    //Kamus
    int i,j,N,KPK;

    //Algoritma
    printf("Masukkan banyaknya data yang ingin dicari KPK nya : ");
    scanf("%d",&N);
    KPK = 1;
    if(N>0){
        int A[N];
        for(i=1;i<=N;i++){
            printf("Masukkan Bilangan ke %d  (dari yang terkecil ke yang terbesar) ",i);
            scanf("%d",&A[i]);
        }
        for(j=1;j<=N;j++){
            if(A[j] % KPK == 0){
                KPK = A[j];
            }
            else{
                KPK = KPK * A[j];
            }
        }
        printf("Kelipatan terkecilnya (KPK) adalah %d",KPK);
    }
    else{
        printf("Input yang dimasukkan tidak valid");
    }
    return 0;
}
