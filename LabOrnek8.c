#include <stdio.h>
void yildiz();
int en,boy;

int main(){
	
	printf("En ve boy degerlerini giriniz\n>");
	scanf("%d %d", &en,&boy);
	printf("\n");	
	yildiz();
}

void yildiz(){
	int i,j;
	
	for(i = 0; i<boy; i++){
		
		for(j = 0; j<en; j++){
			printf("*");
		}
		
		printf("\n");
		
	}
	
}
