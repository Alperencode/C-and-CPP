#include <stdio.h>
#include <stdlib.h>

int main(){
	int gun[4],ay[4],yil[4];
	int i;
	for(i=0;i<4;i++){
		printf("Gun ay yil giriniz: ");
		scanf("%d%d%d",&gun[i],&ay[i],&yil[i]);
	}

	FILE *dosya = fopen("tarih.txt","w");

	for(i=0;i<4;i++){
		fprintf(dosya,"%d %d %d\n",gun[i],ay[i],yil[i]);
	}
	
	fclose(dosya);
}
