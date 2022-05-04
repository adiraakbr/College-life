// Nama         : Adira Rahmana Akbar
// NIM          : 24060121140114
// Nama Program : volBolaKerct.c
// Tanggal      : 5 Maret 2022
// Deskripsi    : Menghitung dan menampilkan volume bola (Vb) dan volume kerucut (Vk) dalam meter kubik, Vb=4/3 x (PHI x r3 ), dan Vk=1/2 x Vb

#include <stdio.h>
#include <stdlib.h>

int main(){
    //Kamus
    float r,Vb,Vk;
    const float phi = 3.14;

    //Algoritma
    printf("Masukkan jari-jari : ");
    scanf("%f",&r);

    Vb = 4 * phi* r*r*r / 3;
    Vk = Vb / 2;

    printf("Volume bola adalah : %.2f \n",Vb);
    printf("Volume kerucut adalah : %.2f", Vk);
    return 0;
}
