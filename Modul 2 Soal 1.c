#include <stdio.h>

main(){
    int sec,jam = 3,menit = 30,detik = 45;
    printf("\nData yang dimasukkan adalah : %d Jam, %d Menit, %d Detik",jam,menit,detik);
    sec = jam*3600 + menit*60 + detik;
    printf("\n===============================================");
    printf("\nTotal waktu dalam detik adalah : %d detik",sec);
 }
