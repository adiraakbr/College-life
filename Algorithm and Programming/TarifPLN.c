// Nama         : Adira Rahmana Akbar
// NIM          : 24060121140114
// Nama Program : TarifPLN.c
// Tanggal      : 16 Maret 2022
// Deskripsi    : Menghitung dan menampilkan berapa tarif PLN yang dikenakan

#include <stdio.h>
#include <stdlib.h>
int main(){
    // Kamus
    int i,g;

    // Algoritma
    printf("Masukkan golongan tarif listrik : ");
    scanf("%d",&g);
    printf("Masukkan jumlah daya listrik dalam kWh : ");
    scanf("%d", &i);
    if(g == 1){
        if(i > 0 && i <= 100){
            printf("%d",100*1000);
        }
        else if (i > 100 && i < 1000){
            printf("%d",i*1000);
        }
        else if (i>=1000){
            printf("%d", i*1000 + (i*1000*10/100));
        }
        else{
            printf("Angka yang dimasukkan tidak valid");
        }
    }
    else{
        if(i > 0 && i <= 100){
            printf("%d",100*2000);
        }
        else if (i > 100 && i< 1000){
            printf("%d",i*2000);
        }
        else if (i>=1000){
            printf("%d", i*2000 + (i*2000*10/100));
        }
        else{
            printf("Angka yang dimasukkan tidak valid");
        }
    }
    return 0;
}
