#include <stdio.h>
#include <stdlib.h>

typedef struct{

	int ogrenciid,sinif;
	char memleket[30];
	int dogumtarih;
	float ortalama;

} ogrenci;

void yazdir(ogrenci);

int main(){

	ogrenci ogr1;
	
	printf("Memleketinizi giriniz: ");
	fgets(ogr1.memleket,sizeof(ogr1.memleket),stdin);
	
	printf("\nOgrenci id giriniz: ");
	scanf("%d",&ogr1.ogrenciid);
	
	printf("\nSinif giriniz (1-4): ");
	do{
		scanf("%d",&ogr1.sinif);
	}while(ogr1.sinif > 4 || ogr1.sinif < 1);
	
	printf("\nOrtalama giriniz (0-100): ");
	do{
		scanf("%f",&ogr1.ortalama);
	}while(ogr1.ortalama > 100 || ogr1.ortalama < 0);
	
	printf("\nDogum yili giriniz (1990-2010): ");
	do{
		scanf("%d",&ogr1.dogumtarih);
	}while(ogr1.dogumtarih >= 2010 || ogr1.dogumtarih <= 1990);
	
	yazdir(ogr1);
	
}

void yazdir(ogrenci ogr1){
	
	printf("\nOgrenci id: %d\nSinif: %d\nMemleket: %sDogum Yili: %d\nOrtalama: %f",ogr1.ogrenciid,ogr1.sinif,ogr1.memleket,ogr1.dogumtarih,ogr1.ortalama);

}
