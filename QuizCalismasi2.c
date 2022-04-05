#include <stdio.h>
#include <stdlib.h>

int main(){
	int sayilar[3] = {1,2,3};
	
	int *pointer[3];
	pointer[0] = &sayilar[0];
	int *temp1 = &sayilar[1]+1;
	int *temp2 = &sayilar[1]+1;
	
	printf("Po 0: %x %d \n", &pointer[0], *pointer[0]);
	printf("Po 1: %x %d \n", &sayilar[1], *temp1);
	printf("Po 2: %x %d \n", &sayilar[2], *temp2);
}
