#include <stdio.h>

int main(){
	
	int j,k;
	
	for(j = 0; j<=14; j++){
			
		if(j<7){
			for(k = 0; k <= j; k++){
				printf("*");
			}
			printf("\n");
		}else{
			for(k=0; k<=14-j; k++){
				printf("*");
			}
			printf("\n");
		}
	}
}
