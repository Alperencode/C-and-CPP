#include <stdio.h>

// Üçüncü soru
// Kaç satýr olduðunu bilmediðimiz bir dosyanýn çift satýrlarýný atlayýp tek satýrlarý ekrana yazdýrmamýzý istiyor

int main(){
	
	// hangi satýrda olduðumu tutmasý için satirsayisi deðiþkenini oluþturuyorum
	int satirsayisi;
	
	// okumak için dosyayý "r" ile açýyorum
	FILE *dosya = fopen("ornek2.txt","r");
	
	// okuduðu satýrý yazdýrabilmesi için char dizisi tanýmlýyorum
	char satir[255];
	
	// dosyadaki satýr sayýsý bitene kadar çalýþan while döngüsünü yazýyorum
	do{
		// kaçýncý satýrda olduðumu anlamak için
		// döngü her döndüðünde satýr sayýsýný arttýrýyorum 
		satirsayisi++;
		
		// fgets() satýr satýr dosyayý okumamýzý saðlýyor
		// ilk önce dizinin ismini sonra dizinin uzunluðunu sonra da dosya deðiþkenini alýyor
		fgets(satir,255,(FILE*)dosya);
		
		// eðer satýr sayýsý tek ise satýrý yazdýrýyorum
		if(satirsayisi%2 != 0){
			printf("%s",satir);
		}
		
	 // satýr sayýsýnýn bitmesini kontrol eden þey !feof(dosya) fonksiyonu
	 // Satýr sayýsý bitmediði sürece döngüyü döndür anlamýna geliyor
 	}while(!feof(dosya));
	
	// dosyayý kapatýyorum	
	fclose(dosya);
	
	return 0;
}
