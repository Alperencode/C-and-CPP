#include <stdio.h>

// Ýlk soru
// dosya oluþturup satýr satýr isim-soyadý-numara yazdýrmamýzý istiyor

int main(){
	
	// Yazdýrmak istediðim dosya deðiþkenini oluþturuyorum "w" ile yazmak istediðimi belirtiyorum
	FILE *dosya = fopen("dosya.txt","w");
	
	// fprintf ile ilk önce yazmak istediðim dosyayý gösteriyorum sonra yazmak istediðim þeyi yazdýrýyorum
	fprintf(dosya,"Alperen\nAga\n210205058");
	
	// dosyayý kapatýyorum
	fclose(dosya);
	return 0;
	
}
