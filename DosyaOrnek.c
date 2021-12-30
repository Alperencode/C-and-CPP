#include <stdio.h>

int main(){
	
	FILE *dosya = fopen("dosya.txt","w");
	
	fprintf(dosya,"Alperen\nAga\n210205058");
	
	fclose(dosya);
	return 0;
	
}
