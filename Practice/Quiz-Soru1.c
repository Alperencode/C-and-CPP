#include <stdio.h>

/*

Soru 1) Kullanýcýdan 3 deðer alýnýz. Aldýðýnýz deðerleri pointer ile ortalama isimli bir fonksiyona gönderiniz.
3 deðerin ortalamasýný hesaplayýp fonksiyona parametre gelen istediðiniz bir deðere  kaydediniz.
Fonksiyonu  Main’de  çaðýrdýðýnýz  yerin  altýnda  pointer’dan  ortalama deðerini ekrana yazdýrýn.(5 Puan)

*/

void ortalama(int*,int*,int*,float*);

int main(){
	float ort;
	int s1,s2,s3;
	
	printf("3 not giriniz\n>");
	scanf("%d%d%d",&s1,&s2,&s3);
	
	ortalama(&s1,&s2,&s3,&ort);
	
	printf("\nOrtalama: %.2f",ort);
}

void ortalama(int *s1, int *s2,int *s3,float *ort){
	*ort = (*s1+*s2+*s3)/3;
}
