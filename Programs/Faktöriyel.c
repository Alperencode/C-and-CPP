// 2) Dýþarýdan girilen sayýnýn faktöriyelini hesaplayan c programýný yazýnýz

#include <stdio.h>

int main(){
	
	int sayi,i,factorial;
	
	printf("Bir sayi giriniz:\n>");
	scanf("%d",&sayi);
	
	for(i=1;i<=sayi;i++){
		factorial *= i;
	}
	
	printf("\n%d'nin faktoriyeli %d'dir.",sayi,factorial);
	
}
