#include <stdio.h>
#include <stdlib.h>

typedef struct{

	int gun,ay,yil;
	char haftaningunu[30];

} date;


int main(){
	
	date bugun = {10,03,2003,"Cuma"};
	
	printf("Gun: %d\nAy: %d\nYil: %d\nHaftanin Gunu: %s",bugun.gun,bugun.ay,bugun.yil,bugun.haftaningunu);
	
}
