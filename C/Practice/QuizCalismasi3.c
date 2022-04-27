#include <stdio.h>
#include <stdlib.h>

int main(){
	
	// adres atamasý yapmasak da ilk elemaný alýyor
	int dizi1[5] = {1,2,3,4,5};
	int *pointer = dizi1;
	
	printf("Adres: %x\nDeger: %d",pointer+1,*pointer+1);
		
}
