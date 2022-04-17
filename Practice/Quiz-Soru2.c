#include <stdio.h>

/*

Soru 2) 6 elemanlý bir integerdizisinin 3. Elemanýný gösteren bir pointer’ýnýz mevcuttur.
Dizi ismi dizi1, pointer ismi p1 dir.(5 Puan)

Sýrayla aþaðýdaki iþlemleri yapan kodu yazýnýz.
- Dizinin 3. Elemanýn deðerini bir arttýr
- Dizinin 1. ve 2. Elemanýn deðerini topla 4. elemana yaz
- Dizinin 5. Elemanýnýn deðerini 2 azalt.
- Tüm diziyi ekrana döngü ile yazdýr

*/

int main(){
	int i;
	int dizi1[6] = {10,20,30,40,50,60};
	int *p1 = &dizi1[2];

	*p1 += 1;
	*(p1+1) = *(p1-1)+*(p1-2);
	*(p1+2) -= 2;
	for(i=0;i<6;i++) printf("%d. eleman: %d\n",i+1,dizi1[i]);
}
