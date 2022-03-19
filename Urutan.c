#include <stdio.h>

int hasil[20];
int nomor[20];
int jumlah;

main()
{
    int counter;

    printf("Berapa total peserta lomba?\n");
    scanf("%d", &jumlah);

    input_data();
    urutkan_hasil();
    return 0;
}
void input_data()
{
    int counter;
    for (counter = 0; counter < jumlah; counter++)
    {
        printf("Masukkan nomor urut peserta ke-%d\n", counter+1);
        scanf("%d", &nomor[counter]);
        printf("Masukkan hasil peserta ke-%d (cm)\n", counter+1);
        scanf("%d", &hasil[counter]);
    }
}
void urutkan_hasil()
{
    int counter,counter1,temp2,temp;
    for (counter = 0 ; counter < jumlah - 1; counter++)
    {
        for (counter1 = 0 ; counter1 < jumlah - counter - 1; counter1++)
        {
            if (hasil[counter1] > hasil[counter1+1])
            {
                temp2        = nomor[counter1];
                nomor[counter1]   = nomor[counter1+1];
                nomor[counter1+1] = temp2;
                temp        = hasil[counter1];
                hasil[counter1]   = hasil[counter1+1];
                hasil[counter1+1] = temp;
            }
        }
    }
    printf("Berikut ini merupakan hasil urutan peserta:\n");
    for (counter = 0; counter < jumlah; counter++)
    {
        printf("Nomor urut %d dengan hasil : ", nomor[counter]);
        printf("%d\n", hasil[counter]);
    }
}
