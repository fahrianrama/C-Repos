#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    char kalimat[100],huruf;
    int a=0,b=0,c=0;

    printf("Masukkan kalimat : ");
    gets(kalimat);

    for (int i=0;i<strlen(kalimat);i++){
        if (i==strlen(kalimat)-1){
            for (int a=c;a<=i;a++){
                printf("%c",kalimat[a]);
            }
            printf(".");
        }
        else if (isupper(kalimat[i])){
            a++;
        }
        else if (islower(kalimat[i])){
            b++;
        }
        else{
            for (int a=c;a<i;a++){
                printf("%c",kalimat[a]);
            }
            printf("\n");
            c=i;
        if (i==strlen(kalimat)-1){
            for (int a=c;a<i;a++){
                printf("%c",kalimat[a]);
            }
        }
        }
    }
}

