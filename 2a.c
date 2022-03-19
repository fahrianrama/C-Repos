#include <stdio.h>
int i,N,jumlah;
jumlah=0;
void main(){
    for(int i = 0; i < 10; i++){
        scanf("%d",&N);
        jumlah+=N;
        printf("%d",jumlah);
    }
}
