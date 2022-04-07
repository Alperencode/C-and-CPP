#include <stdio.h>
#include <stdlib.h>

typedef struct{

	int ogrenciid,sinif;
	char memleket[30];
	int dogumtarih;
	float ortalama;

} ogrenci;

void degerAl(ogrenci *ogr1);

int main(){

	ogrenci ogr1;
	degerAl(&ogr1);
	printf("\nOgrenci id: %d\nSinif: %d\nMemleket: %sDogum Yili: %d\nOrtalama: %f",ogr1.ogrenciid,ogr1.sinif,ogr1.memleket,ogr1.dogumtarih,ogr1.ortalama);
	
}

void degerAl(ogrenci *ogr1){
	
	printf("Memleketinizi giriniz: ");
	scanf("%s",&(ogr1 -> memleket));
		
	printf("\nOgrenci id giriniz: ");
	scanf("%d",&(ogr1 -> ogrenciid));
	
	printf("\nSinif giriniz (1-4): ");
	do{
		scanf("%d",&(ogr1 -> sinif));
	}while((ogr1 -> sinif) > 4 || (ogr1 -> sinif) < 1);
	
	printf("\nOrtalama giriniz (0-100): ");
	do{
		scanf("%f",&(ogr1 -> ortalama));
	}while((ogr1 -> ortalama) > 100 || (ogr1 -> ortalama) < 0);
	
	printf("\nDogum yili giriniz (1990-2010): ");
	do{
		scanf("%d",&(ogr1 -> dogumtarih));
	}while((ogr1 -> dogumtarih) >= 2010 || (ogr1 -> dogumtarih) <= 1990);

}
