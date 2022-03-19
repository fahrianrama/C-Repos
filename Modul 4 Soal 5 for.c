#include <stdio.h>

int main(void){
    int angka,pangkat,total;

    printf("Masukkan Angka : ");
    scanf("%d",&angka);
    printf("Masukkan Pangkat : ");
    scanf("%d",&pangkat);
    total=angka;
    for (int i=1;i<pangkat;i++){
        total = total * angka;
    }
    printf("Hasil %d Pangkat %d adalah %d: ",angka,pangkat,total);
}
