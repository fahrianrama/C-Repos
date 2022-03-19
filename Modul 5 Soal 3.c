#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    char kalimat[100],huruf;
    int a=0,b=0,c=0;

    printf("Masukkan kalimat : ");
    gets(kalimat);

    for (int i=0;i<strlen(kalimat);i++){
        if (isupper(kalimat[i])){
            a++;
        }
        else if (islower(kalimat[i])){
            b++;
        }
        else{
            c++;
        }
    }
    printf("Jumlah Spasi Ada : %d\n",c);
}
