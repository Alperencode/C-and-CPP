#include <stdio.h>

int main(){
	
	int i,counter;
	FILE *dosya = fopen("ornek2.txt","r");
	char satir[255];
	
	do{
		counter++;
		fgets(satir,255,(FILE*)dosya);
		if(counter%2 != 0){
			printf("%s",satir);
		}
 	}while(!feof(dosya));
	
	fclose(dosya);
	return 0;
}
