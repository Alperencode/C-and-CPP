#include <stdio.h>

int main(){
	
	int sayi,sayac,ortalama = 0,puan,sonuc;
	printf("\nDongu icin sayi giriniz\n>");
	scanf("%d",&sayi);
	
	
	while(sayac < sayi){
		printf("\nOrtalama icin sayi giriniz\n>");
		scanf("%d",&puan);
		ortalama += puan;
		sayac++;
	}
	
	sonuc = ortalama/sayi;
	printf("\n%d not girdiniz ortalamaniz: %d",sayi,sonuc);
}
