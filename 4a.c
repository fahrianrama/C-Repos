#include <stdio.h>
int A[10];
int ii,i=3;
void main(){
    for(int k = 0; k < 5; k++){
        A[k]=k*2;
    }
    printf("%d \n",A[3]);
    ii = A[i+1]+A[i-1];
    printf("%d \n",ii);
    //iii
    for(int k=0; k<5; k++){
        A[k]=k+5;
    }
    //A[3] = 6

}
