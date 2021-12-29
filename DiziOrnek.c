#include <stdio.h>
int main(){
	int toplam = 0;
	int disp[2][3] = {{10, 11, 12},
					  {14, 15, 16}};
	
	
	int i,key = 2;
	
	printf("Dizinin %d. Sutun Elemanlarin Toplami \n", key+1);
	
	for(i = 0; i < 2; i ++) toplam = toplam + disp[i][key];
		
	printf("%d toplam",toplam);	
	return 0;
	
}
