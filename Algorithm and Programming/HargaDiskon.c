// Nama         : Adira Rahmana Akbar
// NIM          : 24060121140114
// Nama Program : HargaDiskon.c
// Tanggal      : 15 Maret 2022
// Deskripsi    : Menghitung dan menampilkan total harga setelah diberikan diskon


#include <stdio.h>
#include <stdlib.h>

int main(){
    //Kamus
    int hargaA;
    char pilihan;

    //Algoritma
    printf("Masukkan pilihan jenis barang, A - C : ");
    scanf(" %c",&pilihan);
    printf("Masukkan harga barang : ");
    scanf("%d", &hargaA);
    switch (pilihan){
        case 'A' :
            printf("%d", (90 * hargaA / 100);
            break;
        case 'B' :
            printf("%d",(85* hargaA / 100));
            break;
        case 'C' :
            printf("%d", (80* hargaA / 100);
            break;
        default:
            printf("Bukan jenis diskon yang benar");
            }

    return 0;
}
