#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int generateRandom(int,int);
void Game(int,int,int);

int main(){
	int zorluk,flag = 0;
	setlocale(LC_ALL, "Turkish");

	do{
		printf("Zorluk seçiniz\n[1] Basit  [2] Orta [3] Zor\n>");
		scanf("%d",&zorluk);
		if(zorluk == 1 || zorluk == 2 || zorluk == 3){
			flag = 1;
		}	
	}while(flag == 0);
	
	if(zorluk == 1){
		Game(1,10,5);		
	}else if(zorluk == 2){
		Game(1,25,8);
	}else{
		Game(1,50,10);
	}
	
	return 0;
}

int generateRandom(int baslangic, int bitis){
	srand(time(NULL));
	int r = rand() % bitis + baslangic;
	return r;
}

void Game(int baslangic,int bitis,int tahminHakki){
	
		int sayi = generateRandom(baslangic,bitis);
		int tahminCounter, tahmin;
		tahminHakki++;
		printf("Sayýnýz %d-%d arasýndadýr\n",baslangic,bitis);
		do{
			tahminCounter++;
			tahminHakki--;
			if(tahminHakki <= 0){
				printf("\nHakkýnýz bitti...");
				break;
			}
			printf("%d. Tahmin (Kalan Hak: %d): ",tahminCounter,tahminHakki);
			scanf("%d",&tahmin);
		}while(tahmin != sayi);
		
		printf("\nSayý %d",sayi);
}
