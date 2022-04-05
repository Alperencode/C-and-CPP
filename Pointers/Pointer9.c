#include <stdio.h>

void Carpim(int *adres,int *carpim){
	
	int i;
	int sonuc = 1;
	for(i = 0;i <= *carpim; i++){
		sonuc *= *adres;
	}
	
	*adres = sonuc;
}

int main(){
	
	int sayi,carpim;
	int *adres = &sayi;
	int *carpimAdres = &carpim;
	
	printf("Sayi ve Carpim Giriniz\n>");
	scanf("%d %d",adres,carpimAdres);
	
	Carpim(adres,carpimAdres);
	
	printf("Carpim degeri: %d",*adres);
	
}
