#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
	
	char isim[50];
	char sinif[50];
	int ogrencino;
	int notlar[4];
	
}ogrenci;

int main(){
	int i;
	ogrenci ogr1;
	
	printf("Isim giriniz: ");
	gets(ogr1.isim);
	printf("\nSinif giriniz: ");
	gets(ogr1.sinif);
	printf("\nOgrenci numarasini giriniz: ");
	scanf("%d", &ogr1.ogrencino);
	
	for(i=0;i<4;i++){
		printf("\n%d. notu giriniz: ",i+1);
		scanf("%d", &ogr1.notlar[i]);
	}
	for(i=0;i<4;i++){
		printf("\n%d. not: %d",i+1,ogr1.notlar[i]);
	}
}
