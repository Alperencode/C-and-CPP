#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ogrenci{
	int no,sinif;
};

int main(){
	
	struct ogrenci ogr1 = {210,1};
	printf("No: %d\nSinif: %d",ogr1.no,ogr1.sinif);
	
}


