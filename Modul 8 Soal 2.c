#include <stdio.h>

int main(){
    int kali,jumlah=0,angka;
    printf("Masukkan angka : ");
    scanf("%d",&angka);
    printf("Masukkan angka pengali : ");
    scanf("%d",&kali);
    printf("Hasil perkalian %d x %d  adalah : ",angka,kali,angka);
    for (int i=0;i<kali;i++){
        jumlah+=angka;
        printf("%d",angka);
        if(i==kali-1){
            break;
        }
        printf(" + ");
        }
    printf("\nJumlah : %d",jumlah);
}
