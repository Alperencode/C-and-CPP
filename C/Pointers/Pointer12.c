# include <stdio.h>

int main(){
	
	float sayi;
	float *isaretci1 = &sayi;
	
	printf("Adresi: %x \nTemsil ettigi sayi: %d",isaretci1,sayi);
	
	*isaretci1 += 10.5;
	
	printf("\nAdresi: %x \nTemsil ettigi sayi: %d",isaretci1,sayi);
}
