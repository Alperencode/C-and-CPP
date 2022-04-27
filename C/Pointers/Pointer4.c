#include <stdio.h>

int main(){
	
	int s1;
	int *s2 = &s1,*s3 = &s1;
	
	printf("%x",s2);
	
	s1 = 10;
	
	printf("\n%x",s3);

}
