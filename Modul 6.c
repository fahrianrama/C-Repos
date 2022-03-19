#include <stdio.h>
#include <conio.h>

typedef struct buku{
    char judul[50];
    char pengarang[50];
    int halaman;
    char penerbit[50];
    int tahun;
}book;

main(){

    book contoh[5];

    for (int i=0;i<5;i++){
        printf("Data ke-%d\n",i+1);
        printf("Judul Buku : ");
        scanf("%s",&contoh[i].judul);
        printf("Nama Pengarang : ");
        scanf("%s",&contoh[i].pengarang);
        printf("Jumlah Halaman : ");
        scanf("%d",&contoh[i].halaman);
        printf("Penerbit : ");
        scanf("%s",&contoh[i].penerbit);
        printf("Tahun Diterbitkan : ");
        scanf("%d",&contoh[i].tahun);
    }
}
