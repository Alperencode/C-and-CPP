#include <stdio.h>

int main(){
	
	int s1;
	int *s2;
	s2 = &s1;
	
	printf("%d\n",s1);
	printf("%x\n",s2);
	printf("%d\n",*s2);
	
	printf("\nSayi giriniz\n>");
	scanf("%d",&*s2);
	
	
	printf("\n%d\n",s1);
	printf("%x\n",s2);
	printf("%d\n",*s2);

	
}
