#include <stdio.h>

int main(){
    long drumA,drumB,tmp;
    char pil;
    printf("Masukkan Nilai Drum A : ");
    scanf("%d",&drumA);
    printf("Masukkan Nilai Drum B : ");
    scanf("%d",&drumB);
    printf("Ketik y untuk menukar nilai : ");
    scanf(" %c",&pil);
    if (pil=='y'){
        tmp=drumA;
        drumA=drumB;
        drumB=tmp;
    }
    printf("\n===============================================");
    printf("\nNilai Drum A : %d , Drum B : %d\n",drumA,drumB);
}

