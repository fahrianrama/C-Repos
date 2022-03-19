#include <conio.h>
#include <math.h>
#include <stdio.h>

struct data
{
    char nama[50];
    int nomor;
    int ptali;
    int elevasi;
};
main()
{
    int pilihan,count,cari,temp=0;
    char lanjut='y';
    float tinggi[50];
    struct data peserta[100];

    while(lanjut=='y'){
        printf("1. Entry Data \n");
        printf("2. Cari Data \n");
        printf("3. Tentukan Juara \n");
        printf("Masukkan pilihan anda: ");
        scanf ("%d",&pilihan);

        if (pilihan==1){
            printf("Masukkan banyak data yang akan diinput : ");
            scanf("%d",&count);

            for (int i=0;i<count;i++){
                printf("Data ke-%d\n",i+1);
                printf("Nama Peserta : ");
                scanf("%s",&peserta[i].nama);
                printf("Nomor Urut Peserta : ");
                scanf("%d",&peserta[i].nomor);
                printf("Panjang Tali Terulur : ");
                scanf("%d",&peserta[i].ptali);
                printf("Sudut Elevasi : ");
                scanf("%d",&peserta[i].elevasi);
                for(int j=1;j<=count;j++){
                    tinggi[i] = sin(peserta[i].elevasi)*peserta[i].ptali;
                    if (tinggi[i]>tinggi[i-1]){
                        temp = tinggi[i];
                        tinggi[i]=tinggi[i-1];
                        tinggi[i-1]=temp;
                    }
                }
            }
        }
        else if (pilihan==2){
            printf("Masukkan nomor urut peserta yang dicari : ");
            scanf("%d",&cari);
            for (int i=0;i<10;i++){
                if (peserta[i].nomor==cari){
                    printf("Data ditemukan !\n");
                    printf("Nama : %s\nTinggi Layang layang : %.3f\n",peserta[i].nama,sin(peserta[i].elevasi)*peserta[i].ptali);
                }
            }

        }
        else if (pilihan==3){
            printf("Juara :");
            for (int i=0;i<count;i++){
                printf("%d",tinggi[i]);
            }
            }
        printf("Ulangi ? : ");
        scanf(" %c", &lanjut);
    }
}
