// 1) Klavyeden Girilen Üç a, b ve c kenar uzunluklarýna göre bir üçgenin alanýný
// P=(a+b+c)/2 ve Alan = P*((P-a)*(P-b)*(P-c))
// Formülü ile hesaplayarak yazdýran program kodunu yazýnýz.
#include <stdio.h>
#include <math.h>
int main(){
	
	int a,b,c,p,alan,karekok;
	printf("Ucgenin kenar uzunluklarini giriniz:\n>");
	scanf("%d %d %d",&a,&b,&c);
	
	p = (a+b+c)/2;
	alan = p*((p-a)*(p-b)*(p-c));
	karekok = sqrt(alan);

	printf("\nUcgenin alani: %d",karekok);	
	
}

