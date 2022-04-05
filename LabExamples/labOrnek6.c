#include <stdio.h>
void hesapla(int x,int y){
	
	double vize = x * 0.4;
	double final = y * 0.6;
	int ortalama = vize + final;
	
	if(ortalama > 60){
		printf("\nGecti");	
	}else{
		printf("\nKaldi");
	}
	
}

int main() {
	
	int vize,final;
	
	printf("Vize ve final notlarinizi giriniz\n>");
	scanf("%d %d", &vize,&final);
	hesapla(vize,final);
		   
}


