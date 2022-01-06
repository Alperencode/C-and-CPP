#include <stdio.h>

int main(){

	FILE *dosya = fopen("Lab50.txt","r");
	char satir[255];
	int no,vize,final,toplam,counter;
	double ortalama;
	fgets(satir,255,(FILE*)dosya);
	printf("%s",satir);
		
	while(!feof(dosya)){
		fscanf(dosya,"%d",&no);
		fscanf(dosya,"%s", satir);
		fscanf(dosya,"%d",&vize);
		fscanf(dosya,"%d",&final);
		printf("%d ", no);
		printf("%s ", satir);
		printf("%d ", vize);
		printf("%d \n", final);
		
		toplam += vize;
		counter++;
	}
	
	ortalama = toplam / counter;
	
	printf("\nOrtalama: %lf",ortalama);
}
