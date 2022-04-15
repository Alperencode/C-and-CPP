#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ogrenci{
	int ogrencino;
	char sinif[50];
};

void yazdir(struct ogrenci o){
	
	printf("ogrenci no: %d\nSinif: %s",o.ogrencino,o.sinif);
	
}

int main(){
	
	struct ogrenci ogr1;
	ogr1.ogrencino = 210;
	strcpy(ogr1.sinif,"yazilim");
	yazdir(ogr1);
	
}


