#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	
	int no;
	char sinif[50];
	float ortalama;
	
}ogrenci;

void readogr(ogrenci *ogr){
	
	printf("No: %d",ogr -> no);
	printf("\nSinif: %s",ogr -> sinif);
	printf("\nOrtalama: %.2f",ogr -> ortalama);
}

int main(){

	ogrenci ogr1;
	ogr1.no = 210;
	strcpy(ogr1.sinif,"yazilim");
	ogr1.ortalama = 2.42;
	readogr(&ogr1);
	
}


