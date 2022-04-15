#include <stdio.h>
#include <string.h>

enum corona {Noinfo = -1, Negative, Positive};

int main(){
	
	char testSonuc[20];
	printf("Test sonucunuzu giriniz: ");
	scanf("%s",testSonuc);
	
	if(!strcmp("positive",testSonuc)){
		printf("\nSonuc: %d",Positive);
	}else if(!strcmp("negative",testSonuc)){
		printf("\nSonuc: %d",Negative);
	}else if(!strcmp("noinfo",testSonuc)){
		printf("\nSonuc: %d",Noinfo);
	}else{
		printf("\nGecersiz deger");
	}
}
