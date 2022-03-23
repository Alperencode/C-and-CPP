#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int elemanSayisi,sum;
	printf("Eleman sayisini giriniz\n>");
	scanf("%d",&elemanSayisi);
	
	int *nums= (int*)calloc(elemanSayisi, sizeof(int)*elemanSayisi);
	int i;
	for(i=0; i<elemanSayisi;i++){
		int gecici;
		printf("\n%d. elemani giriniz: ",i+1);
		scanf("%d",&nums[i]);
	}
	
	for(i=0; i<elemanSayisi;i++){
		printf("\n%d. eleman : %d",i+1,nums[i]);
		sum += nums[i];
	}
	
	printf("\ntoplam: %d",sum);
	
}
