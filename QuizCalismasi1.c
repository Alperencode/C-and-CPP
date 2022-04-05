#include <stdio.h>
#include <stdlib.h>

void diziDeneme(int *pointer){
	printf("%x\n",pointer);
}

int main() {
	
	int sayilar[3] = {1,2,3};
	diziDeneme(sayilar);
	printf("%x \n", &sayilar);
	printf("%x \n", &sayilar[0]);
	printf("%x \n", &sayilar[1]);
	printf("%x \n", &sayilar[1]+1);
	printf("%x \n", &sayilar[1]+2);

}

