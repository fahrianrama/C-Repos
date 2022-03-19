#include <stdio.h>

int main(){

	float bil1,bil2,hasil;

	printf("Masukkan Bilangan Pertama = ");
	scanf("%f",&bil1);

	printf("Masukkan Bilangan Pertama = ");
	scanf("%f",&bil2);
	if (bil2==0){
        printf("Error - Division by 0");
        return 0;
	}


	hasil = bil1 / bil2;
	printf("Hasil dari Pembagian  = %.3f",hasil);

	return 0;

}
