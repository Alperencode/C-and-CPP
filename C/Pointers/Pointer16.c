#include <stdio.h>
int islemler(int *p0,int *p1,int *b1,int *b2,int *b3,int *b4);

int main(){
	
	int a1,a2;
	printf("a1 ve a2'yi giriniz\n>");
	scanf("%d %d",&a1,&a2);
	
	int *p0 = &a1;
	int *p1 = &a2;
	int b1,b2,b3,b4;
	
	printf("sonuc %d",islemler(p0,p1,&b1,&b2,&b3,&b4));
	
}

int islemler(int *p0,int *p1,int *b1,int *b2,int *b3,int *b4){
	
	*b1 = *p0 + *p1;
	*b2 = *p0 * *p1;
	*b3 = *p0 - *p1;
	if(*p1 != 0){
		*b4 = *p0 / *p1;
		return 1;
	}
	return 0;
	
}
