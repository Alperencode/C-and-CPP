#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
	
	
	srand(time(NULL));
	int r = rand() % 20;
	
	if(r > 15){
		printf("Basarili sayi: %d", r);
	}else{
		printf("Basarisiz sayi: %d", r);
	}
	   
}

