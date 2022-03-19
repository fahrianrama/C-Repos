#include <stdio.h>

struct obat {
    char nama[20];
    int kode;
    int harga;
    int jumlah;
};
int Totalharga;
void main(){

    struct obat obat1;
    scanf("%s",&obat1.nama);
    scanf("%d",&obat1.kode);


    printf("Nama: %s\n", obat1.nama);
    printf("Kode: %d\n", obat1.kode);

    Totalharga=obat1.harga*obat1.jumlah;
    printf("%d",Totalharga);

}
