// Nama         : Adira Rahmana Akbar
// NIM          : 24060121140114
// Nama Program : DeretPrima.c
// Tanggal      : 21 Maret 2022
// Deskripsi    : Mengetahui dan menampilkan bilangan integer sembarang N dengan N > 0 yang dimasukkan dapat dibentuk bilangan prima


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    // Kamus
    int i,r,N,p;

    // Algoritma
    printf("Masukkan bilangan :");
    scanf("%d",&N);
    if(N<=0){
        printf("N harus bilangan integer positif");
    }
    else{
        for(i=2; i<=N ;i++){
         p = 0;
			 for (r=  2; r<=(sqrt(i)) ;r++){
				if (i%r == 0){
					p = 1;
					break;
				}
			}
			if (p == 0){
				printf("%d ", i);
			}

		}
    }
    return 0;
}
