#include <stdio.h>

int main(){

	int diziuzunlugu,i,gecici;
	printf("Dizinin uzunlugunu giriniz:\n");
	scanf("%d",&diziuzunlugu);
	printf("\n");
		
	int dizi[diziuzunlugu];
	
	for(i = 0; i < diziuzunlugu; i++){
		
		printf("%d. elemani giriniz: ",i+1);
		scanf("%d",&gecici);
		dizi[i] = 	gecici;
		
	}
	
	FILE *dosya = fopen("diziDosyasi.txt","w");
	
	for(i = 0; i < diziuzunlugu; i++){
		
		if(dizi[i] >= 0){
			
			fprintf(dosya,"%d ",dizi[i]);
			
		}else{
			
			fprintf(dosya,"0 ");
			
		}
		
	}
	
	fclose(dosya);
	return 0;
}
