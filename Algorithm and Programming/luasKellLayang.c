// Nama         : Adira Rahmana Akbar
// NIM          : 24060121140114
// Nama Program : luasKellLayang.c
// Tanggal      : 5 Maret 2022
// Deskripsi    : Menghitung dan menampilkan luas (dalam meter persegi) dan keliling layang-layang (dalam meter),
//                Luas=1/2 x d1 x d2, dan keliling=2 x (s1 + s2)

#include <stdio.h>
#include <stdlib.h>

int main(){
    //Kamus
    float s1,s2,d1,d2,Luas,Kell;

    //Algoritma
    printf("Masukkan sisi pertama : ");
    scanf("%f",&s1);
    printf("Masukkan sisi kedua : ");
    scanf("%f",&s2);
    printf("Masukkan diagonal pertama : ");
    scanf("%f",&d1);
    printf("Masukkan diagonal kedua : ");
    scanf("%f",&d2);

    Luas = d1 * d2 / 2;
    Kell = 2 * (s1 + s2);

    printf("Luas Layang-layang : %.2f \n",Luas);
    printf("Keliling layang-layang : %.2f", Kell);
    return 0;
}
