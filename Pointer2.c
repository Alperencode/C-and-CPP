#include <stdio.h>

int main(){
	
	int s1 = 5,s2 = 10;
	int *s3,*s4;
	
	s3 = &s1;
	s4 = &s2;
	
	printf("%d\n",s1);
	printf("%d\n",s2);
	printf("%d\n",*s3);
	printf("%x\n",s3);
	printf("%d\n",*s4);
	printf("%x\n",s4);
}
