#include <stdio.h>

int main(){
	
	int sayi;
	
	while(1==1){
	printf("\nBir sayi giriniz\n>");
	scanf("%d",&sayi);
	printf("\nSayiniz %d", sayi);	
	if(sayi <= 10){
		break;
	}
	}
}
