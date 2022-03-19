#include <conio.h>
#include <math.h>
#include <stdio.h>

struct data
{
    char nama[50];
    int nomor;
    int nilai;
};
main()
{
    int pilihan,a=0,b=0,count=3,cari,kena,temp=0,temp2=0;
    char lanjut='y',temp3[50];
    float tinggi[50];
    struct data peserta[100];

    while(lanjut=='y'){
        printf("1. Entry Data \n");
        printf("2. Cari Data \n");
        printf("3. Daftar Peserta\n");
        printf("4. Tentukan Juara \n");
        printf("Masukkan pilihan anda: ");
        scanf ("%d",&pilihan);

        if (pilihan==1){
            printf("Nama Peserta : ");
            scanf("%s",&peserta[a].nama);
            printf("Nomor Urut Peserta : ");
            scanf("%d",&peserta[a].nomor);
                for (int i=0;i<count;i++){
                    printf("Sasaran yang kena : ");
                    scanf("%d",&kena);
                    if (kena==1){
                        peserta[a].nilai+=100;
                    }
                    else if(kena==2){
                        peserta[a].nilai+=90;
                    }
                    else if(kena==3){
                        peserta[a].nilai+=80;
                    }
                    else if(kena==4){
                        peserta[a].nilai+=70;
                    }
                    else if(kena==5){
                        peserta[a].nilai+=60;
                    }
                    else if(kena==6){
                        peserta[a].nilai+=50;
                    }
                    else if(kena==7){
                        peserta[a].nilai+=40;
                    }
                    else if(kena==8){
                        peserta[a].nilai+=30;
                    }
                    else if(kena==9){
                        peserta[a].nilai+=20;
                    }
                    else if(kena==10){
                        peserta[a].nilai+=10;
                    }
                }

            printf("Total Nilai Peserta %d : %d\n",a+1,peserta[a].nilai);
            a++;
            }
        else if(pilihan==2){
            printf("Masukkan nomor urut peserta yang dicari : ");
            scanf("%d",&cari);
            for (int i=0;i<10;i++){
                if (peserta[i].nomor==cari){
                    printf("Data ditemukan !\n");
                    printf("Nama : %s\nTotal Nilai : %d\n",peserta[i].nama,peserta[i].nilai);
                }
            }
        }
        else if(pilihan==3){
            printf("Data Hasil Pertandingan : \n");
            for (int i=0;i<a;i++){
                printf("Peserta : %s | Nilai : %d\n",peserta[i].nama,peserta[i].nilai);
            }
        }
        else{
            for (int i = 0; i < a; i++) {
                for (int j = i+1; j < a; j++) {
                    if(peserta[i].nilai < peserta[j].nilai) {
                        temp = peserta[i].nilai;
                        temp2 = peserta[i].nomor;
                        peserta[i].nilai = peserta[j].nilai;
                        peserta[i].nomor = peserta[j].nomor;
                        peserta[j].nilai = temp;
                        peserta[j].nomor = temp2;
                    }
                }
            }
            for (int i=0;i<a;i++){
                printf("Juara %d : Nama : %s Nomor Urut : %d Nilai : %d\n",i+1,peserta[i].nama,peserta[i].nomor,peserta[i].nilai);
            }
        }

        printf("Ulangi ? : ");
        scanf(" %c", &lanjut);
    }
}
