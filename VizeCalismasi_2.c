// 6) 8 den 35 e kadarki çift sayýlarýn toplamýný tespit ederek yazdýran program kodunu yazýnýz.

#include <stdio.h>

int main(){

	int i,toplam;
	
	for(i=8; i<=35;i++){
	
		if(i%2==0){
			toplam += i;
		}

	}

	printf("8'den 35'e kadar cift sayilarin toplami: %d",toplam);
}
