#include <stdio.h>

int main(){
	
	int sayi,yildiz,satir;
	
	do{
		printf("\nBir sayi giriniz\n>");
		scanf("%d",&sayi);	
	}while(sayi > 10);
	
	satir = 0;
	while(satir<=sayi){
		yildiz = 0;
		while(yildiz <= satir){
			printf("*");
			yildiz++;
		}
		printf("\n");
		satir++;
	}
	
	/*
		for(i=0;i<=satir;i++){
			for(yildiz=0;yildiz <= i; yildiz++){
				printf("*");
		}
		printf("\n");
	}
	*/
	
}
