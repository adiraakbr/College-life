// Nama         : Adira Rahmana Akbar
// NIM          : 24060121140114
// Nama Program : CekSeriPositif.c
// Tanggal      : 13 Maret 2022
// Deskripsi    : Menampilkan nilai kebenaran dari total masukkan

#include <stdio.h>
#include <stdlib.h>

int main(){
    //Kamus
    int w,y,z,Total;

    //Algoritma
    printf("Masukkan tahan pertama : ");
    scanf("%d",&w);
    printf("Masukkan tahan kedua : ");
    scanf("%d",&y);
    printf("Masukkan tahan ketiga : ");
    scanf("%d",&z);
    if (w>0 && y>0 && z> 0){
        Total = w + y + z;
        printf("%d", Total);
    }
    else{
        printf("Masukan tahanan tidak boleh negatif");
    }
    return 0;
}
