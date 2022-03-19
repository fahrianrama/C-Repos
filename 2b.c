#include <stdio.h>

void main(){
    char indeks;

    while(indeks != '9'){
        scanf("%c", &indeks);
        printf("Anda memasukkan indeks -%c\n",indeks);
    }
}
