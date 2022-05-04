// Nama         : Adira Rahmana Akbar
// NIM          : 24060121140114
// Nama Program : CekSegitiga.c
// Tanggal      : 13 Maret 2022
// Deskripsi    : Menampilkan sisi-sisi segitiga yaitu Segitiga Sama Sisi, Segitiga Sama Kaki, atau Segitiga
//                Sembarang dari 3 buah inputan integer positif (>0)

#include <stdio.h>
#include <stdlib.h>

int main(){
    //Kamus
    int s1,s2,s3;

    //Algoritma
    printf("Masukkan sisi  pertama segitiga: ");
    scanf("%d",&s1);
    printf("Masukkan sisi kedua segitiga : ");
    scanf("%d",&s2);
    printf("Masukkan sisi ketiga segitiga: ");
    scanf("%d",&s3);

    if (s1 <0 || s2 < 0 || s3 < 0){
        printf("Terdapat nilai yang bukan sisi segitiga");
    }
    else{
        if (s1==s2 && s2 == s3){
            printf("Segitiga Sama Sisi");
        }
        else if ((s1==s2 && s2!=s3) || (s1!=s2&& s2==s3) || (s1!=s2 && s1==s3)){
            printf("Segitiga Sama Kaki");
        }
        else{
            printf("Segitiga Sembarang");
        }
    }
    return 0;
}
