#include <stdio.h>
	
struct dersim{
	int derskodu;
	char dersismi[50];
	int dersinsinifi,dersinmevcudu;
}ders1,ders2;

int main(){

	printf("Ders kodunu giriniz: ");
	scanf("%d",&ders1.derskodu);
	
	printf("\nDers ismini giriniz: ");
	scanf("%s",ders1.dersismi);
	
	printf("\nDersin sinifini giriniz: ");
	scanf("%d",&ders1.dersinsinifi);
	
	printf("\nDersin mevcudunu giriniz: ");
	scanf("%d",&ders1.dersinmevcudu);
	
	ders2.derskodu = ders1.derskodu * 2;
	int i;
	for(i=0;i<strlen(ders1.dersismi);i++){
		ders2.dersismi[i] = ders1.dersismi[i];
	}
	ders2.dersinsinifi = ders1.dersinsinifi * 2;
	ders2.dersinmevcudu = ders1.dersinmevcudu * 2;
	
	printf("\nDers2'nin ders kodu: %d", ders2.derskodu);
	printf("\nDers2'nin ders ismi: %s", ders2.dersismi);
	printf("\nDers2'nin sinifi: %d", ders2.dersinsinifi);
	printf("\nDers2'nin mevcudu: %d", ders2.dersinmevcudu);
	
}
