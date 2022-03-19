#include <stdio.h>
#include <string.h>
int main()
{
    int i;
int x[6]={1,2,3,4,5,6};
i=4;x[i]=x[i-1]+x[i+1];
for (int z =0;z<6;z++)
{
    printf(x[z]);
}
printf("%d",x[2]+x[3]);
}
