#include <stdio.h>


int main(){
	
	int toplam,i;
	int dizi[10] = {1, 3, 5, 12, 4, 12, 8, 4, 3, 7};
	
	FILE *dosya = fopen("dosya2.txt","w");
	
	for(i = 0; i < 10; i++){
		
		toplam += dizi[i];
						
		fprintf(dosya,"%d ", toplam);
		
	}
	
	fclose(dosya);
}
