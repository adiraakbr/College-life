// Nama         : Adira Rahmana Akbar
// NIM          : 24060121140114
// Nama Program : CekBilSemb.c
// Tanggal      : 13 Maret 2022
// Deskripsi    : Menampilkan hasil cek bilangan integer sembarang

#include <stdio.h>
#include <stdlib.h>

int main(){
    //Kamus
    int i;

    //Algoritma
    printf("Masukkan bilangan : ");
    scanf("%d",&i);
    if (i>0){
        printf("Bilangan ini termasuk bilangan positif");
    }
    else if (i==0){
        printf("Bilangan ini termasuk bilangan nol");
    }
    else if (i<0){
        printf("Bilangan ini termasuk bilangan negatif");
    }
    else {
        printf("Bukan termasuk sebuah bilangan");
    }
    return 0;
}
