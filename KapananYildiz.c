#include <stdio.h>

int main(){
	
	int satir,yildiz;
	
	for(satir = 0; satir<=14; satir++){
			
		if(satir < 7){
			
			for(yildiz=0; yildiz<=satir; yildiz++){
				printf("*");
			}
			printf("\n");
		}else{
			for(yildiz=0; yildiz<=14-satir; yildiz++){
				printf("*");
			}
			printf("\n");
			
		}
		
	}
}
