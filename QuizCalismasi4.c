#include <stdio.h>
#include <string.h>
int main() {
	
	// farklýysa 1, aynýysa 0 döndürüyor
	
	char str1[] = "ostim";
	char str2[] = "osTim";
	char str3[] = "ostim";
	char str4[] = "oSTim";
	int result;
	
	result = strcmp(str1, str2);
	printf("strcmp(str1, str2) = %d\n", result);
	result = strcmp(str1, str3);
	printf("strcmp(str1, str3) = %d\n", result);
	result = strcmp(str1, str4);
	printf("strcmp(str1, str4) = %d\n", result);
	return 0;
}

