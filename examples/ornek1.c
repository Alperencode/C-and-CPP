#include <stdio.h>

int main(){
    int sayi1,sayi2,secim;
    while(1){
	    printf("\nIki sayi giriniz\n>");
	    scanf("%d %d",&sayi1,&sayi2);
	    printf("\nIslem seciniz:");
	    printf("\n[1]Toplama [2]Cikarma [3]Carpma [4]Bolme\n>");
	    scanf("%d",&secim);
	    int toplam = sayi1 + sayi2; 
		int cikarma = sayi1 - sayi2;
		int carpma = sayi1 * sayi2;
		double bolum = (double) sayi1 / sayi2;
	    switch(secim){
	    	case 1:
	            printf("\nToplamin sonucu: %d",toplam);
	            break;
	    	case 2:
	            printf("\nCikarma sonucu: %d",cikarma);
	            break;
	    	case 3:
	            printf("\nCarpmanin sonucu: %d",carpma);
	            break;
	    	case 4:
	            printf("\nBolumun sonucu: %lf",bolum);
	            break;
	    	default:
	            printf("\nGecerli bir sayi giriniz.");
	    } 
	}
}

