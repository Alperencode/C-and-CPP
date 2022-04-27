#include <stdio.h>
#include <stdlib.h>

int main() {
	
	// char dizisi oluþturdum
	char str1[50];
	
	// kullanýcýdan deðer aldým
	// birden fazla kelime alacaðým için fgets ile aldým
	printf("Metni Giriniz: ");
	fgets(str1, sizeof str1, stdin);
	
	// for ile aldýðým metnin içini geziyorum
	int i;
	// strlen() dizinin uzunluðunu veriyor
	int uzunluk = strlen(str1);
	for(i=0;i<uzunluk;i++){
		
		// Geldiðiði karakter boþluk olursa alt satýra geçiyor
		// boþluk deðilse yazmaya devam ediyor		
		if(str1[i]==' '){
			printf("\n");
		}else{
			printf("%c",str1[i]);
		}
	}

}
