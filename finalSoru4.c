#include <stdio.h>
void hayvanlar(int,double);

int main(){
	
	int x;
	double y;
	printf("X ve Y degerlerini giriniz");
	scanf("%d%f",&x,&y);
	
	hayvanlar(x,y);
	
}

void hayvanlar(int cesitlilik,double yuzde){

	int yil = 2021;
	while(cesitlilik > 0){
		yil++;	
		printf("%d    %d\n",yil,cesitlilik),
		cesitlilik = cesitlilik - ((cesitlilik*yuzde)/100);
	}
	
}
