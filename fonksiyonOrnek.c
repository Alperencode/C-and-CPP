#include <stdio.h>

int main(){
	int i,k;
	int sayilarim[2][10] = {{23,42,44,65,45,95,12,54,13,56},
							{30,24,65,76,36,87,86,98,45,24}};
	
	for(i = 0; i <= 1; i++){
		
		for(k = 0; k <= 9; k++){

			printf("%d ",sayilarim[i][k]);
			
		}

		printf("\n");

	}
}


