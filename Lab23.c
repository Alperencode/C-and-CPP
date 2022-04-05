#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	char str1[50];

	printf("Metni Giriniz: ");
	fgets(str1, sizeof str1, stdin);
	// scanf("%s",str1);	
	
	int i;
	int sonEleman = strlen(str1) - 1;
	for(i=0;i < strlen(str1); i++){
		
		printf("%c", str1[sonEleman - i]);
			
	}
	
}
