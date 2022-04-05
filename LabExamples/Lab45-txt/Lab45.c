#include <stdio.h>

// • Kullanýcýnýn girdiði basamak kadar merdiven þeklinde basamak çizdiren kodu yazýnýz.
int main(){
	
	int i,j,basamak,bosluk;
	
	printf("Basamak sayisini giriniz\n>");
	scanf("%d",&basamak);
	
	// logic:
	// 6 yýldýz
	// 5 boþluk 1 yýldýz (x2)
	// 5 boþluk + 6 yýldýz
	// 10 boþluk 1 yýldýz (x2)
	// 10 boþluk + 6 yýldýz
	
	for(i = 0; i < basamak; i++){
		for(j = 1; j <= bosluk; j++) {
			printf(" ");	
		}
		printf("******\n");
		bosluk += 5;
		
		for(j = 1; j <= bosluk + 1; j++){
			if(j == bosluk + 1) printf("*\n");
			else printf(" ");
		}
		for(j = 1; j <= bosluk + 1; j++){
			if(j == bosluk + 1) printf("*\n");
			else printf(" ");
		}
	}
}
