#include <stdio.h>
#include <stdlib.h>


int main() {
	
	// char dizisi oluþturdum
	char str1[50];
	
	// kullanýcýdan deðer aldým
	printf("Metni Giriniz: ");
	scanf("%s", str1);
	
	// strlen() ile dizinin uzunluðunu alýyorum
	int uzunluk = strlen(str1);
	// son elemandan geriye doðru da bir kontrol yapýcaðým için son elemanýn indexine eriþmek için uzunluktan 1 çýkarýyorum
	// (örn: uzunluk 7 olursa son index'in 6 olmasý gerekicek)
	int sonEleman = uzunluk - 1;
	
	// Sonradan if ile palindrom olup olmadýðýný kontrol edeceðim için bir deðiþken tutuyorum
	int palindrom = 0;
	int i;
	for(i=0; i<uzunluk;i++){
		
		// baþtan sona ve sondan baþa bir þekilde kontrol ediyorum
		// eðer harfler ayný deðilse palindrom deðildir o yüzden deðiþkeni 1 yapýyorum
		if(str1[i] != str1[sonEleman-i]){
			palindrom = 1;
		}
	}
	
	// Deðiþkeni kontrol ederek sonucu yazýyorum
	if(palindrom == 1) printf("\nKelime palindromdur deðildir");
	if(palindrom == 0) printf("\nKelime palindromdur");
}
