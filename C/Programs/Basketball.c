#include <stdio.h>

int main(){
	
	char menu[120] = "\n==== Menu ==== \nPota Seciniz\n1) Pota 1 (Kolay)\n2) Pota 2 (Orta)\n3) Pota 3 (Zor)\n4) Cikis\n\nSecim Yapiniz: ";
	int secim,i,ihtimal,atis;
	
	// Çýkýþ seçilmediði sürece döngü devam eder
	while(secim != 4){
		int basariliAtis = 0;  // Baþarýlý atýþ her oyunda sýfýrlanýr
		
		printf("%s",menu);  // menü
		scanf("%d", &secim);  // pota seçimi
		
		switch(secim){
			case 1:
				printf("\nKac atis yapmak istersiniz: ");
				scanf("%d", &atis);
				
				srand(time(NULL)); // random sayý üreticiyi sýfýrlýyoruz
				
				for(i=0; i<atis; i++){
					ihtimal = rand() % 10; // 0-10 arasý sayý üretiyoruz
					
					printf("\n%d. Atis: ", i+1);
					if(ihtimal >= 3){
						// %70 ihtimalle baþarýlý
						printf("Basarili.");
						basariliAtis++;
					}else{
						printf("Basarisiz.");
					}
				}
				
				printf("\n");
				break;
				
			case 2:
				printf("\nKac atis yapmak istersiniz: ");
				scanf("%d", &atis);
				
				srand(time(NULL));
				
				for(i=0; i<atis; i++){
					ihtimal = rand() % 10;
					
					printf("\n%d. Atis: ", i+1);
					if(ihtimal >= 5){
						// %50 ihtimalle baþarýlý
						printf("Basarili.");
						basariliAtis++;
					}	
					else{
						printf("Basarisiz.");
					}
				}
				
				printf("\n");
				break;
				
			case 3:
				printf("\nKac atis yapmak istersiniz: ");
				scanf("%d", &atis);
				
				srand(time(NULL));
				
				for(i=0; i<atis; i++){
					ihtimal = rand() % 10;
					
					printf("\n%d. Atis: ", i+1);
					if(ihtimal >= 7){
						// %30 ihtimalle baþarýlý
						printf("Basarili.");
						basariliAtis++;
					}else{
						printf("Basarisiz.");
					}
				}
				
				printf("\n");
				break;
				
			default:
				// Menüde olmayan seçim yapýlýrsa
				break; // Döngü baþa döner
		}
		printf("\n--- Basarili Atis: %d --- \n", basariliAtis);
	}
}
