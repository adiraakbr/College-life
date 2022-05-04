// Nama         : Adira Rahmana Akbar
// NIM          : 24060121140114
// Nama Program : Kalk-SS.c
// Tanggal      : 15 Maret 2022
// deskripsi    : Menghitung dan menampilkan keluaran berupa operasi karakter

#include <stdio.h>
#include <stdlib.h>
int main(){
    //Kamus
    int iA,iB;
    char C;

    //Algoritma
    printf("Masukkan bilangan pertama: ");
    scanf("%d",&iA);
    printf("Masukkan bilangan kedua : ");
    scanf("%d",&iB);
    printf("Masukkan huruf a - f : ");
    scanf(" %c",&C);
    switch (C){
        case 'a' :
            printf("%d",iA + iB);
            break;
        case 'b' :
            printf("%d",iA - iB);
            break;
        case 'c':
            printf("%d",iA * iB);
            break;
        case 'd':
            printf("%f",(float)iA / (float)iB);
            break;
        case 'e':
            printf("%d",iA / iB);
            break;
        case 'f':
            printf("%d",iA % iB);
            break;
        default:
            printf("Bukan pilihan menu yang benar");
            }

    return 0;
}
