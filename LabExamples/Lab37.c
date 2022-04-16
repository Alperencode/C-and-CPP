#include <stdio.h>

typedef enum {Bekar, Evli}medeniDurum;

typedef struct{
	
	int gun,ay,yil;

}tarih;

typedef struct{
	
	char kisiIsmi[50];
	tarih dogumTarihi;
	tarih evlenmeTarihi;
	medeniDurum durum;
	
}insan;

int main(){
	
	int uzunluk,i;
	printf("Dizi uzunlugu giriniz\n>");
	scanf("%d",&uzunluk);
	
	insan insanlar[uzunluk];
	
	for(i=0;i<uzunluk;i++){
		
		printf("\n%d. icin isim giriniz: ",i+1);
		scanf("%s",insanlar[i].kisiIsmi);

		printf("\n%d. icin dogum tarihi giriniz (gun ay yil): ",i+1);
		scanf("%d%d%d",&insanlar[i].dogumTarihi.gun,&insanlar[i].dogumTarihi.ay,&insanlar[i].dogumTarihi.yil);
		
		printf("\n%d. icin Medeni durum giriniz (0:bekar 1:evli): ",i+1);
		scanf("%d",&insanlar[i].durum);
		
		if(insanlar[i].durum == 1){
			printf("\n%d. icin evlilik tarihi girin (gun ay yil): ",i+1);
			scanf("%d%d%d",&insanlar[i].evlenmeTarihi.gun,&insanlar[i].evlenmeTarihi.ay,&insanlar[i].evlenmeTarihi.yil);
		}
	}
	for(i=0;i<uzunluk;i++){
		printf("\n%d. insan isim : %s",i+1,insanlar[i].kisiIsmi);
		printf("\n%d. icin dogum tarihi: %d-%d-%d ",i+1,insanlar[i].dogumTarihi.gun,insanlar[i].dogumTarihi.ay,insanlar[i].dogumTarihi.yil);
		if(insanlar[i].durum){
			printf("\n%d. icin Medeni durum: evli",i+1);
			printf("\n%d. icin evlilik tarihi: %d-%d-%d ",i+1,insanlar[i].evlenmeTarihi.gun,insanlar[i].evlenmeTarihi.ay,insanlar[i].evlenmeTarihi.yil);
		}else{
			printf("\n%d. icin Medeni durum: bekar",i+1);
		}
	}
}
