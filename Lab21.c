#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	char str1[50];

	printf("Metni Giriniz: ");
	fgets(str1, sizeof str1, stdin);
	
	int i;
	for(i=0;i < strlen(str1); i++){
		printf("%c", toupper(str1[i])); 
	}
	
	printf("\n");
	
	for(i=0;i < strlen(str1); i++){
		printf("%c", tolower(str1[i])); 
	}	
}
