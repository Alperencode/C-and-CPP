#include <stdio.h>
	
int main(){
	
	int sayi;
	int *isaretci1 = &sayi;
	int **isaretci2 = &isaretci1;
	
	printf("Bir sayi giriniz\n>");
	scanf("%d",&sayi);
	printf("%d",sayi);

	printf("\nBir sayi giriniz\n>");
	scanf("%d",isaretci1);
	printf("%d",sayi);
	
	printf("\nBir sayi giriniz\n>");
	scanf("%d",&isaretci2);
	printf("%d",sayi);


	printf("\n%d",sayi);
	printf("\n%d",*isaretci1);
	printf("\n%d",**isaretci2);
	
	printf("\n%x",&sayi);
	printf("\n%x",&isaretci1);
	printf("\n%x",&isaretci2);
	
	
}
