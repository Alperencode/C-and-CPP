#include <stdio.h>

int main(){
	int sayilar[5] = {4,3,64,24,56};
	int *pointer[5];
	int *pointerno[5];
	int i = 0;
	for(i = 0;i<=4;i++){
		pointer[i] = &sayilar[i];
	}
	pointerno[0] = &sayilar[0];
	
	printf("%d\n",pointer[0]);
	printf("%d\n",*pointer[0]);
	printf("%d\n",pointer[1]);
	printf("%d\n",*pointer[1]);
	printf("%d\n",pointer[2]);
	printf("%d\n",*pointer[2]);
	
	printf("\n2. eleman: %d",*(pointerno[0]+1));
	printf("\n3. eleman: %d",*(pointerno[0]+2));
}
