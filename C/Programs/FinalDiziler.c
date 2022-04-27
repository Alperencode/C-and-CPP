#include <stdio.h>

int main(){
	int i,j,satir,sutun,gecici;
	printf("Dizinin satir ve sutun degerlerini giriniz\n>");
	scanf("%d %d",&satir,&sutun);
	
	int dizi[satir][sutun];
	
	for(i = 0; i < satir;i++){
		for(j = 0; j < sutun; j++){
			printf("%d. satir, %d. sutunu giriniz: ",i+1,j+1);
			scanf("%d",&gecici);
			dizi[i][j] = gecici;
		}
	}
	
	printf("\n");
	
	for(i = 0; i < satir; i++){
		
		printf("%d. Satir: ",i+1);
			
		for(j = 0; j < sutun; j++){
			
			printf("%d ",dizi[i][j]);
			
		}
		
		printf("\n");
		
	} 
	
}
