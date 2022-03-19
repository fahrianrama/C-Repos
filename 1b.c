#include <stdio.h>
#include <string.h>
int main()
{
    char nama[30],asal[30],alamat[30];

    scanf("%s",nama);

    if (strcmp(nama, "Asep") == 0){
        strcpy(asal, "Dari Jabar");
    }
    else{
        strcpy(asal, "Dari Medan");
    }
    printf("%s",asal);
    return 0;
}
