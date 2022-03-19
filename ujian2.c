#include <stdio.h>
const char nama[20];
const char jenis[20];
int mutu;
int jumlah=0;
void Isipus()
{
    FILE *fptr;
    fptr = fopen("kucing.txt","w+");
    printf("Banyak data yang akan diinput : ");
    scanf("%d",&jumlah);
    for (int i=0; i<jumlah; i++)
    {
        printf("Data ke -%d\n",i+1);
        printf("Masukkan nama kucing : ");
        scanf("%s",&nama);
        printf("Masukkan jenis kucing : ");
        scanf("%s",&jenis);
        printf("Masukkan mutu kucing : ");
        scanf("%d",&mutu);
        fprintf(fptr,"%s #%s #%d\n",nama,jenis,mutu);
    }
    fclose(fptr);
}
void Tampilpus()
{
    FILE *fread;
    fread = fopen("kucing.txt","r");
    for (int i=0;i<jumlah;i++)
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
