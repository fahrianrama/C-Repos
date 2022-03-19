#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
    char kalimat[100];

    printf("Masukkan Kalimat : ");
    gets(kalimat);
    getchar();
    strrev(kalimat);
    for (int i=0; i<strlen(kalimat);i++){
        putchar(kalimat[i]);
    }
    return 0;
}

