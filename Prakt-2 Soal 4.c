#include <stdio.h>

int main(){

    int C,F;

    printf("Masukkan Nilai Celcius : ");
    scanf("%d",&C);
    F = C*1.8+32;
    printf("Hasil Suhu dalam Fahrenheit : %d'F\n", F);
    return 0;
}
