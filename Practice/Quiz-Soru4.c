#include <stdio.h>
#include <string.h>
#include <locale.h>

/*

Soru 2) oyun isimli bir structure’miz vardýr. 
Bu structure oyunismi ismiyle bir char dizisi deðiþkeni ve cikisyili ismi ile bir integer deðiþkeninden oluþmaktadýr.
Kullanýcýdan alýnan ve s1 isimli stringe kayýtlý oyun ismi structure’deki oyunismi deðiþkenine, kullanýcýdan alýnan ve t1 isimli integer ise cikisyili isimli deðiþkene atanacaktýr.
Daha sonra yazdýr isimli bir fonksiyona oyun’u pointer ile gönderiniz.
Yazdýr isimli fonksiyon içinde structure içindeki deðerleri ekrana yazdýrýnýz. (5 Puan)

Not: Girdiler Türkçe Karakter Ýçerebilir.

*/

typedef struct {
	char oyunismi[50];
	int cikisyili;
}oyun;

void yazdir(oyun);

int main(){
	
	setlocale(LC_ALL,"Turkish");
	
	oyun o1;
	char s1[50];
	int t1;
	
	printf("Oyun ismi giriniz: ");
	scanf("%s",s1);
	strcpy(o1.oyunismi,s1);
	
	printf("\nOyun cikis yili giriniz: ");
	scanf("%d",&t1);
	o1.cikisyili = t1;
	
	yazdir(o1);
}

void yazdir(oyun o){
	printf("Oyunun ismi: %s\nCikis yili: %d",o.oyunismi,o.cikisyili);
}


