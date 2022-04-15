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
	int i,j;
	ogrenci ogrenciler[3];
	
	for(i=0;i<3;i++){
		printf("\nIsim giriniz: ");
		scanf("%s",ogrenciler[i].isim);
		printf("Sinif giriniz: ");
		scanf("%s",ogrenciler[i].sinif);
		printf("Ogrenci numarasini giriniz: ");
		scanf("%d", &ogrenciler[i].ogrencino);
		
		for(j=0;j<4;j++){
			printf("%d. notu giriniz: ",j+1);
			scanf("%d", &ogrenciler[i].notlar[j]);
		}
	}
	
	for(i=0;i<3;i++){
		printf("\n");
		printf("%d. Ogrenci Isim: %s",i+1,ogrenciler[i].isim);
		printf("\n%d. Ogrenci Sinif : %s",i+1,ogrenciler[i].sinif);
		printf("\n%d. Ogrenci numara: %d",i+1,ogrenciler[i].ogrencino);
		for(j=0;j<4;j++){
			printf("\n%d. Ogrenci %d. not: %d",i+1,j+1,ogrenciler[i].notlar[j]);
		}
	}
	
}
