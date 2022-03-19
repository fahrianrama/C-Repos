#include <stdio.h>
const char nama[20];
const char jenis[20];
int mutu,nilakhir,harga,diskon,hakhir;
int arrharga[10];
int jumlah=0;
void Isipus()
{
    FILE *fptr;
    fptr = fopen("kucing2.txt","w+");
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
        if (strcmp(jenis, "Kampung") == 0){
            switch (mutu) {
                case 1:
                    nilakhir=100;
                    break;
                case 2:
                    nilakhir=80;
                    break;
            }
        }
        else{
            switch (mutu) {
                case 1:
                  nilakhir=300;
                  break;
                case 2:
                  nilakhir=225;
                  break;
                case 3:
                  nilakhir=62;
                  break;
            }
        }
        printf("Masukkan diskon harga : ");
        scanf("%d",&diskon);
        fprintf(fptr,"%s #%s #%d#%d#%d\n",nama,jenis,mutu,nilakhir,diskon);
    }
    fclose(fptr);
}
void Tampilpus()
{
    FILE *fread;
    fread = fopen("kucing2.txt","r");
    for (int i=0;i<jumlah;i++)
    {
        fscanf(fread,"%s #%s #%d#%d#%d\n",&nama,&jenis,&mutu,&nilakhir,&diskon);
        printf("Data ke -%d\n",i+1);
        printf("Nama Kucing : %s\n",nama);
        printf("Jenis Kucing : %s\n",jenis);
        printf("Mutu Kucing : %d\n",mutu);
        printf("Nilai Akhir Kucing : %d\n",nilakhir);
        printf("Diskon Harga : %d\n",diskon);
    }
    fclose(fread);
}
void HitHarga()
{
    FILE *fread;
    fread = fopen("kucing2.txt","r");
    for (int i=0;i<jumlah;i++)
    {
        fscanf(fread,"%s #%s #%d#%d#%d\n",&nama,&jenis,&mutu,&nilakhir,&diskon);
        printf("Data ke -%d\n",i+1);
        printf("Nama Kucing : %s\n",nama);
        printf("Jenis Kucing : %s\n",jenis);
        if (strcmp(jenis, "Kampung") == 0){
            harga = nilakhir*500;
        }
        else{
            harga = nilakhir*1000;
        }
        printf("Mutu Kucing : %d\n",mutu);
        printf("Harga : %d\n",harga);
    }
    fclose(fread);
}
void HarAkhir()
{
    FILE *fread;
    fread = fopen("kucing2.txt","r");
    for (int i=0;i<jumlah;i++)
    {
        fscanf(fread,"%s #%s #%d#%d#%d\n",&nama,&jenis,&mutu,&nilakhir,&diskon);
        printf("Data ke -%d\n",i+1);
        printf("Nama Kucing : %s\n",nama);
        printf("Jenis Kucing : %s\n",jenis);
        if (strcmp(jenis, "Kampung") == 0){
            harga = nilakhir*500;
        }
        else{
            harga = nilakhir*1000;
        }
        hakhir = (harga*diskon)/100;
        arrharga[i]=harga-hakhir;
        printf("Mutu Kucing : %d\n",mutu);
        printf("Harga Akhir : %d\n",harga-hakhir);
    }
    fclose(fread);
}
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void urut()
{
    int i, j, min_idx;
    for (i = 0; i < jumlah; i++)
    {
        min_idx = i;
        for (j = i+1; j < jumlah; j++)
        if (arrharga[j] < arrharga[min_idx])
            min_idx = j;
            swap(&arrharga[min_idx], &arrharga[i]);
    }
    for (i=0;i<jumlah;i++){

        for (int j=0;j<jumlah;j++)
        {
            FILE *fread;
            fread = fopen("kucing2.txt","r");
            fscanf(fread,"%s #%s #%d#%d#%d\n",&nama,&jenis,&mutu,&nilakhir,&diskon);
            if (strcmp(jenis, "Kampung") == 0){
                harga = nilakhir*500;
            }
            else{
                harga = nilakhir*1000;
            }
            hakhir = (harga*diskon)/100;
            int total = harga-hakhir;
            if (total==arrharga[i]){
                FILE *fptr;
                fptr = fopen("urut.txt","w+");
                fprintf(fptr,"%s #%s #%d#%d#%d\n",nama,jenis,mutu,nilakhir,diskon);
            fclose(fread);
        }

    }

        printf("Urutan : %d. %d\n",i+1,arrharga[i]);
    }
}
void main()
{
    int pilih;
    while(pilih!=6){
        printf("Pilih Menu : \n1. Masukkan data kucing\n2. Tampilkan Data\n3. Tampilkan Harga\n4. Tampilkan Harga Akhir\n5. Urutkan Data\n6. Selesai\n");
        scanf("%d", &pilih);

        if (pilih==1)
        {
            Isipus();
        }
        else if(pilih==2)
        {
            Tampilpus();
        }
        else if(pilih==3)
        {
            HitHarga();
        }
         else if(pilih==4)
        {
            HarAkhir();
        }
        else if(pilih==5)
        {
            urut();
        }
    }
}
