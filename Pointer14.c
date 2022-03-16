#include <stdio.h>

int main(){
	
	int sayilar[5] = {13,41,52,15,53};
	int *pointer;
	pointer = &sayilar[0];
	
	printf("%d\n", *(pointer));
	printf("%d\n", *(pointer+1));
	printf("%d\n", *(pointer+2));
	
}
