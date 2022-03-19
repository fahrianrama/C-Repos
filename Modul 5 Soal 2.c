#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char nama[100];

    printf("Masukkan Nama Anda : ");
    gets(nama);
    strrev(nama);
    for (int i=0; i<strlen(nama);i++){
        printf("%c", toupper(nama[i]));
    }
    return 0;
}
