#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int gun,ay,yil;
	char olay[50];	
}tarih;

int main(){
	tarih tarihler[3];
	int i;
	for(i=0;i<3;i++){
		printf("%d. icin Gun ay yil giriniz: ",i+1);
		scanf("%d%d%d",&tarihler[i].gun,&tarihler[i].ay,&tarihler[i].yil);
		printf("%d. icin olay giriniz: ",i+1);
		scanf("%s",tarihler[i].olay);
	}

	FILE *dosya = fopen("tarihler.txt","w");

	for(i=0;i<3;i++){
		fprintf(dosya,"%d. Tarih: %d %d %d Olay: %s\n",i+1,tarihler[i].gun,tarihler[i].ay,tarihler[i].yil,tarihler[i].olay);
	}
	
	fclose(dosya);
}
