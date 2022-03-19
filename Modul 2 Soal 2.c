#include <stdio.h>

main(){
    int sec,jam,menit,detik,sisa;

    printf("Masukan jumlah detik yang akan dihitung : "); scanf("%d",&sec);

    jam=sec/3600;
    sisa=sec%3600;
    menit=sisa/60;
    detik=sisa%60;
    printf("\n===============================================");
    printf("\nMaka waktunya adalah :  ");
    printf("\n Jam   : %d \n Menit : %d \n Detik : %d ",jam,menit,detik);

 }
