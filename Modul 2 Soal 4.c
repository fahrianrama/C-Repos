#include <stdio.h>

void main(){
    int n,nilai,min=100,max=0,total=0;
    printf("Masukkan total data : ");
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        printf("Masukkan Nilai ke - %d : ", i+1);
        scanf("%d",&nilai);
        if (nilai<min){
            min=nilai;
        }
        if (nilai>max){
            max=nilai;
        }
        total+=nilai;
    }
    printf(" Nilai Minimal adalah : %d",min);
    printf("\n Nilai Maksimal adalah : %d",max);
    printf("\n Nilai Rata - rata adalah : %d",total/n);

}
