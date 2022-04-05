#include <stdio.h>

int main(){
	
	int s, k, giris;
    int yildiz, bosluk;
    printf("giris:");
    scanf("%d", &giris);

    yildiz=1;
    bosluk=giris-1;

    for(k=0; k<giris; k++)
    {

		for(s = 0; s < bosluk;s++){
			printf(" ");
		}	
    
        for(s=0; s<yildiz; s++)
        {
            printf("*");
        }
        printf("\n");
        bosluk--;
        yildiz+=2;
    }

    return 0;
	
}
