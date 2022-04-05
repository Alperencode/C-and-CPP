#include <stdio.h>

int findMax(int,int,int);

int main(){
	
	int s1,s2,s3,max;
	printf("3 sayi giriniz\n>");
	scanf("%d %d %d", &s1,&s2,&s3);
	max = findMax(s1,s2,s3);
	printf("\nMaksimum sayi : %d", max);
}

int findMax(int x,int y,int z){
	
	int maxInt = x;
	if(maxInt < y){
		maxInt = y;
	}
	if(maxInt < z){
		maxInt = z;
	}
	
	return maxInt;
}
