#include <stdio.h>
#include <stdlib.h>

struct pelari {
    char nama[25];
    int no;
    int jam;
    int menit;
    int detik;
    int total;
}peserta[4],swap;


int main(){

    int i;
    int hasil;

    int a,b;

    for(i=0;i<4;i++)
    {
    printf("No = ");
    scanf("%d",&peserta[i].no);
    printf("Nama = ");
    scanf("%s",&peserta[i].nama);
    printf("Jam = ");
    scanf("%d",& peserta [i].jam);
    printf("Menit = ");
    scanf("%d",& peserta [i].menit);
    printf("Detik = ");
    scanf("%d",& peserta [i].detik);
    peserta[i].total= peserta[i].jam*3600+peserta[i].menit*60+ peserta[i].detik;
    }
    for(a=0;a<2;a++)
    {
        for(b=0;b<2;b++)
        {
            if (peserta [b].total> peserta [b+1].total)
            {
                swap= peserta [b];
                peserta [b]= peserta [b+1];
                peserta [b+1]=swap;
            }

        }

    }

    for(hasil=0;hasil<4;hasil++)
    {
        printf("No   : %d\n Nama : %s\n Jam : %d\n Menit: %d\n Detik: %d\n Total: %d\n\n\n\n" ,peserta[hasil].no ,peserta[hasil].nama ,peserta[hasil].jam ,peserta[hasil].menit ,peserta[hasil].detik ,peserta[hasil].total);

    }

return 0;

}
