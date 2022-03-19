#include <stdio.h>

int main(){

    int angka,i=1,pangkat,total;

    printf("Masukkan Angka : ");
    scanf("%d",&angka);
    printf("Masukkan Pangkat : ");
    scanf("%d",&pangkat);
    total=angka;
    while (i<pangkat){
        total = total * angka;
        i++;
    }
    printf("Hasil %d Pangkat %d adalah %d: ",angka,pangkat,total);
    return 0;
}
