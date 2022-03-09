#include <stdio.h>

int main(){
	
	int sayi;
	int *isaretci1 = &sayi;
	int **isaretci2 = &isaretci1;
	
	*isaretci1 += 2;
	printf("\nSayi: %d",sayi);
	
	*isaretci2 += 3;
	printf("\nSayi: %d",sayi);
	
}
