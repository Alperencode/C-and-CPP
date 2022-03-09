#include <stdio.h>
void ikiKati(int *adres,int carpim){
	
	if(carpim >= 1 && carpim <= 10){
		*adres = *adres * carpim;
	}else{
		*adres = 0;
	}
	
}

int main(){
	
	int sayi,carpim;
	int *adres = &sayi;
	
	printf("Sayi ve Carpim Giriniz\n>");
	scanf("%d %d",adres,&carpim);
	
	ikiKati(adres,carpim);
	
	printf("%d",*adres);
		
}
