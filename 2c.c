#include <stdio.h>

void main(){
    int bilangan = 0;
    int total = 0;
    do {
        if (bilangan%9==0){
            total++;
        }
        bilangan++;
        printf("%d",total);
    } while(bilangan<=19);
}
