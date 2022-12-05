#include <stdio.h>

int main(){
	int number,row,i,j;

	printf("Enter the number of rows to build Floyd's triangle row\n>");
	scanf("%d",&row);

	for(i=0; i<row; i++){
		for(j=0; j<i+1; j++){
			number++;	
			printf("%d ",number);
		}
		printf("\n");
	}

}