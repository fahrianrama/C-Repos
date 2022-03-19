#include <stdio.h>

int main(){
    int pil,p,r,t;
    float phi=3.14;
    printf("Menu : \n");
    printf(" 1. Menghitung volume kubus\n");
    printf(" 2. Menghitung luas lingkaran\n");
    printf(" 3. Menghitung volume silinder\n");
    printf("Pilih Menu : ");
    scanf("%d",&pil);
    switch (pil) {
    case 1:
        printf("Masukkan Panjang sisi Kubus : ");
        scanf("%d",&p);
        printf("Volume Kubus adalah : %d",p*p*p);
        break;
    case 2:
        printf("Masukkan Jari - jari Lingkaran : ");
        scanf("%d",&r);
        printf("Luas Lingkaran adalah : %.2f",phi*r*r);
        break;
    case 3:
        printf("Masukkan Jari - jari Alas : ");
        scanf("%d",&r);
        printf("Masukkan Tinggi Silinder : ");
        scanf("%d",&t);
        printf("Volume Silinder adalah : %.3f",phi*r*r*t);
        break;
    default:
      printf("Maaf, menu tidak tersedia \n");
  }
  return 0;
}
