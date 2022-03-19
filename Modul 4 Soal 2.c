#include <stdio.h>
#include <math.h>

int main(){

	float a, b, c, D,x1, x2;

	printf("Masukan nilai a : ");
	scanf("%f",&a);
	printf("Masukan nilai b : ");
	scanf("%f",&b);
	printf("Masukan nilai c : ");
	scanf("%f",&c);

	D=(b*b)-(4*a*c);

	if (D>0){
		x1 = (-b + sqrt(D)) / (2*a);
      	x2 = (-b - sqrt(D)) / (2*a);
	}else if (D==0){
		x1 = (-b + sqrt(D)) / (2*a);
      	x2 = x1;
	}else {
      	printf("Akar Imajiner\n");
	 	return 0;
	}
	printf("X1 = %d\n",x1);
	printf("X2 = %d\n",x2);
}
