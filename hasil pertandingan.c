#include <stdio.h>

char nama[][20] = {"Tom","Jerry","Jono","Andi","Budi","Burhan","Ani","Tono","Tini","Doni"};
int hasil[] = {300,280,266,310,282,291,342,288,278,301};

main()
{
    printf("Total peserta lomba : %d peserta\n",sizeof(hasil)/sizeof(int));
    urutkan_hasil();
    tampilkan_juara();
    return 0;
}
void urutkan_hasil()
{
    int jumlah = sizeof(hasil)/sizeof(int);
    int counter,counter1,temp;
    char temp2[20];
    for (counter = 0 ; counter < jumlah - 1; counter++)
    {
        for (counter1 = 0 ; counter1 < jumlah - counter - 1; counter1++)
        {
            if (hasil[counter1] > hasil[counter1+1])
            {
                strcpy(temp2,nama[counter1]);
                strcpy(nama[counter1],nama[counter1+1]);
                strcpy(nama[counter1+1],temp2);
                temp        = hasil[counter1];
                hasil[counter1]   = hasil[counter1+1];
                hasil[counter1+1] = temp;
            }
        }
    }
}
void tampilkan_juara()
{
    int counter;
    printf("Berikut ini juara lomba balap sepeda:\n");
    for (counter = 0; counter < 3; counter++)
    {
        printf("Juara %d diraih oleh peserta %s dengan hasil waktu %d detik\n", counter+1, nama[counter], hasil[counter]);
    }
}
