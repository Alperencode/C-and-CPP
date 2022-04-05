#include <stdio.h>


void ikiKati(int *adres){
	
	*adres = *adres*2;
	
}
int main(){
	
	int sayi;
	int *adres = &sayi;
	printf("Sayi Giriniz\n>");
	scanf("%d",adres);
	
	ikiKati(adres);
	
	printf("\n%d",sayi);
	
}
