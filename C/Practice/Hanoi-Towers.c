// Basic Hanoi Towers function to understand recursive functions
#include <stdio.h>

void HanoiTowers(int n, char from, char dest, char temp){
	
	if(n>0){
		HanoiTowers(n-1,from,temp,dest);
		printf("Move disk %d from %c to %c\n",n,from,dest);
		HanoiTowers(n-1,temp,dest,from);
	}
	return;
	
}

int main(){
	
	int n = 3;
	HanoiTowers(n,'A','C','B');
	
}
