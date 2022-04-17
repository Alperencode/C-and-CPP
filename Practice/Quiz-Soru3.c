#include <stdio.h>
#include <stdlib.h>

/*

Soru  1) Sayi1 ve Sayi2 diye 2 adet integer’i içerensoru isimli bir structure oluþturunuz.
Kullanýcýdan aldýðýnýz 2deðeri soru isimli structure’daki ilgili alanlara yazýnýz.
Print isimli bir fonksiyon tanýmlayýnýz.
Fonksiyona parametre olarak gelen soru structure içinden deðiþkenleri fonksiyon içinde yazdýran kodu yazýnýz. (5 Puan)
Not: Fonksiyon Main’in altýnda yazýlacaktýr.

*/

typedef struct {
	int Sayi1,Sayi2;
}soru;

void print(soru);

int main(){
	
	soru s1;
	printf("Sayi degerlerini giriniz\n>");
	scanf("%d%d",&s1.Sayi1,&s1.Sayi2);
	print(s1);
}

void print(soru Soru){
	printf("Sayi 1: %d\nSayi 2: %d",Soru.Sayi1,Soru.Sayi2);
}
