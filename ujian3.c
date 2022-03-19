#include <stdio.h>
const char nama[10];
const char jenis[10];
int mutu[10],nilakhir,harga;
int i=0;
void Isipus()
{
    FILE *fptr;
    fptr = fopen("kucing2.txt","w+");
    printf("Mengisi data kucing : ");
        printf("Masukkan Nama kucing : ");
        scanf("%s",&nama[i]);
        printf("Masukkan Jenis kucing : ");
        scanf("%s",&jenis[i]);
        printf("Masukkan Mutu kucing : ");
        scanf("%d",&mutu[i]);
        if (jenis[i]=='Kampung'){
            switch (mutu[i]) {
            case 1:
              nilakhir=100;
            case 2:
              nilakhir=80;
            }
        }
        else{
            switch (mutu[i]) {
            case 1:
              nilakhir=300;
            case 2:
              nilakhir=225;
            case 3:
              nilakhir=62;
            }
        }
        fprintf(fptr,"%s #%s #%d#%d\n",nama[i],jenis[i],mutu[i],nilakhir);
        i++;
    fclose(fptr);
}
void Tampilpus()
{
    FILE *fread;
    fread = fopen("kucing.txt","r");
    for (int i=0;i<2;i++)
    {
        fscanf(fread,"%s #%s #%d\n",&nama,&jenis,&mutu);
        printf("Data ke -%d\n",i+1);
        printf("Nama Kucing : %s\n",nama);
        printf("Jenis Kucing : %s\n",jenis);
        printf("Mutu Kucing : %d\n",mutu);
    }
    fclose(fread);
}
void main()
{
    int pilih;
    while(pilih!=3){
        printf("Pilih Menu : \n1. Masukkan data kucing\n2. Tampilkan Data\n3. Selesai\n");
        scanf("%d", &pilih);

        if (pilih==1)
        {
            Isipus();
        }
        else if(pilih==2)
        {
            Tampilpus();
        }
    }
}
