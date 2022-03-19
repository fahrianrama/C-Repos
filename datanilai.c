#include <stdio.h>

void main()
{
    char nama[255];
    int nim, nilai, data=1, pilihan;

    printf("Pilih Menu : \n1. Tambah Data\n2. Lihat Data\n3. Hitung Rata - Rata\nPilih : ");
    scanf("%d",&pilihan);
    if (pilihan==1){
        FILE *out=fopen("data.txt","a+");

        for(int i=0; i<data;i++)
        {
            printf("Data ke -%d\n",i+1);
            printf("Masukkan Nama : ");
            scanf("%s",&nama);
            printf("Masukkan NIM : ");
            scanf("%d",&nim);
            printf("Masukkan Nilai : ");
            scanf("%d",&nilai);
            fprintf(out,"%s#%d#%d\n",nama,nim,nilai);
        }

        fclose(out);
        printf("Sukses menambah data.");
    }
    else if (pilihan==2){
        FILE *in=fopen("data.txt","r");
        int i=1;
        while(!feof(in)){
           fscanf(in,"%[^#]#%d#%d\n", &nama, &nim, &nilai);fflush(stdin);
           printf("Data ke -%d\n",i);
           printf("\tNama : %s\n\tNIM : %d\n\tNilai : %d\n", nama, nim, nilai);
           i++;
        }
        fclose(in);
    }
    else{
        FILE *in=fopen("data.txt","r");
        int total=0,i=0;
        while(!feof(in)){
           fscanf(in,"%[^#]#%d#%d\n", &nama, &nim, &nilai);fflush(stdin);
           total+=nilai;
           i++;
        }
        int rata = total/i;
        printf("Total Nilai : %d, Jumlah Data : %d\n",total,i);
        printf("Nilai rata rata dari seluruh data adalah : %d\n",rata);
        fclose(in);
    }



}
