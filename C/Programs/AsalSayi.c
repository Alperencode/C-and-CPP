#include <stdio.h>

int main(){
	
	// 1'den girilen sayiya kadar asal sayi testi
	
	int sayi,i,bayrak;
	
	printf("Bir sayi giriniz\n>");
	scanf("%d",&sayi);
	bayrak = 0;
	
	if(sayi >= 0){
		
		for(i=2; i <= sayi/2; i++){

			if(sayi%i == 0){  			// Bölünüyorsa
				bayrak = 1; 			// Sayi asal deðil
				break;
			
			}
			
		}
		
		if(sayi == 1){
			printf("1 sayisina asal sayi testi yapilmaz");
		}else if(bayrak == 0){
			printf("%d sayisi asal bir sayidir.",sayi);
		}else{
			printf("%d sayisi asal bir sayi degildir.",sayi);
		}
		
	}else{
		printf("\n Pozitif bir sayi giriniz...");
	}
}
