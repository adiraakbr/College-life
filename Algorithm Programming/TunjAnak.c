// Nama         : Adira Rahmana Akbar
// NIM          : 24060121140114
// Nama Program : TunjAnak.c
// Tanggal      : 16 Maret 2022
// Deskripsi    : Menghitung dan menampilkan berapa besar tunjangan anak yang diberikan

#include <stdio.h>
#include <stdlib.h>

int main(){
    // Algoritma
    int a,g;
    float t;

    // Algoritma
    printf("Masukkan jumlah anak yang dimiliki : ");
    scanf("%d",&a);
    printf("Masukkan jumlah gaji : ");
    scanf("%d", &g);
    if(a>= 0 && g>0){
        if(a<3){
            t = a * 10 * g / 100;
            printf("%d",t);
        }
        else{
            t = 3 * 10 * g / 100;
            printf("%d",t);
        }
    }
    else{
        printf("Angka yang dimasukkan tidak valid");
    }
    return 0;
}

