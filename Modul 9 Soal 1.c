#include <stdio.h>

int main(){
    int tinggi[100],peserta[100];
    int temp = 0,temp2 = 0,n;

    printf("Masukkan Jumlah Peserta : ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++) {
        printf("Masukkan tinggi lompatan peserta %d (meter) : ",i+1);
        scanf("%d",&tinggi[i]);
        peserta[i]=i;
    }

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if(tinggi[i] < tinggi[j]) {
                temp = tinggi[i];
                temp2=peserta[i];
                tinggi[i] = tinggi[j];
                peserta[i]=peserta[j];
                tinggi[j] = temp;
                peserta[j]=temp2;
            }
        }
    }

    printf("\n");

    printf("Urutan peserta berdasarkan tinggi lompatan : \n");
    for (int i = 0; i < n; i++) {
        printf("Nomor %d : Peserta : %d dengan Tinggi Lompatan  : %d\n",i+1,peserta[i]+1,tinggi[i]);
    }
    return 0;
}
