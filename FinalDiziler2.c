#include <stdio.h>

int main(){
	
	int j,i,satir,sutun,gecici,sutunToplam,satirToplam;
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
	
	printf("\nOlusturulan Dizi:\n");
	
	for(i = 0; i < satir; i++){
		
		for(j = 0; j < sutun; j++){
			
			printf("%d ",dizi[i][j]);
			
		}
		
	printf("\n");
		
	}
	
	
	
	printf("\nSutunlar Toplami\n====================\n");
	// sutunToplam = [0][0] + [1][0] + [2][0]
	for(i = 0; i < sutun; i++){
		sutunToplam = 0;
		for(j = 0; j < satir; j++){
			sutunToplam += dizi[j][i];
		}
		printf("%d ",sutunToplam);
	}
	
	printf("\n\nSatirlar Toplami\n====================\n");
	// satirToplam = [0][1] + [0][1] + [0][2]
	for(i = 0; i < satir; i++){
		satirToplam = 0;
		for(j = 0; j < sutun;j++){
			satirToplam += dizi[i][j];
		}		
		printf("%d. Satir toplami: %d\n",i+1,satirToplam);
	}
	return 0;
}






