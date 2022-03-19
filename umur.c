
#include <stdio.h>

main(){
    int hari,tahun,sisa;

    printf("Masukan jumlah hari : "); scanf("%d",&hari);

    tahun=hari/365;
    sisa=hari%365;
    printf("\n===============================================");
    printf("\nUmur anda adalah :  ");
    printf("\n Tahun   : %d \n Hari : %d",tahun,sisa);

 }
