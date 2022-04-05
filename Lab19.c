#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	char str1[50];

	printf("Metni giriniz: ");
	scanf("%s",str1);
	
	int i;
	int rakamSayac = 0;
	int harfSayac = 0;
	for(i=0;i<strlen(str1);i++){
		
		if (isdigit(str1[i]) == 0){
			harfSayac++;			
		}else{
			rakamSayac++;
		}
	}
	
	printf("\nHarf sayaci: %d",harfSayac);
	printf("\nRakam sayaci: %d",rakamSayac);
}
