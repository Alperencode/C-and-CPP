#include <stdio.h>

int sayi1,sayi2;

void sayi(){
	
	if(sayi1<sayi2){
		printf("%d",sayi2);
		
	}
	else{
		printf("%d",sayi1);
	}
	
}


int main(){
	
	printf("Ýki sayi giriniz\n>");
	scanf("%d%d",&sayi1,&sayi2);
	sayi();
	
	return 0;

}



