#include <stdio.h>

int main(){
	
	int sayi,factorial=1,i;
	printf("\nBir sayi giriniz\n>");
	scanf("%d",&sayi);
	do{	
		factorial *= i;
		i++;
	}
	while(i<=sayi);
	
	printf("Sayinin faktoriyeli: %d",factorial);
}
