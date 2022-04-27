#include <stdio.h>

// Ýkinci soru
// Kullanýcýdan bir dizi doldurmasýný istiyor
// Dizinin pozitif elemanlarýný yazdýrmasýný negatif elemanlarýnýn yerine 0 yazdýrmasýný istiyor

// Not: Ben dizinin uzunluðunu da kullanýcýdan aldým
int main(){

	// Dizi uzunluðu için diziuzunlugu, for döngüsü için i, dizi elemanlarýný atamak için gecici deðiþlenlerini oluþturuyorum
	int diziuzunlugu,i,gecici;
	
	// kullanýcýdan dizi uzunluðunu girmesini istiyorum
	printf("Dizinin uzunlugunu giriniz:\n");
	scanf("%d",&diziuzunlugu);
	printf("\n");
		
	// dizi uzunluðunu kullanarak dizimi oluþturuyorum
	int dizi[diziuzunlugu];
	
	// for döngüsü ile diziyi gezip her gezdiðimde kullanýcýdan aldýðým deðeri o anki elemana atýyorum
	for(i = 0; i < diziuzunlugu; i++){
		
		// kullanýcýdan alma iþlemi
		printf("%d. elemani giriniz: ",i+1);
		scanf("%d",&gecici);
		
		// atama iþlemi
		dizi[i] = gecici;
		
	}
	
	// yazdýrmak istediðim dosyayý açýyorum ya da yaratýyorum
	FILE *dosya = fopen("diziDosyasi.txt","w");
	
	// for döngüsü ile diziyi bir daha gezip pozitif ve negatif deðerleri ayýrýyorum
	for(i = 0; i < diziuzunlugu; i++){
		
		// deðer pozitifse elemaný dosyaya yazdýrýyorum
		if(dizi[i] >= 0){
			
			fprintf(dosya,"%d ",dizi[i]);
			
		// negatifse 0 yazdýrýyorum
		}else{
			
			fprintf(dosya,"0 ");
			
		}
		
	}
	
	// dosyayý kapatýyorum
	fclose(dosya);
	return 0;
}
