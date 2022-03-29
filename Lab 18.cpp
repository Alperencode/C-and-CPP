int strncat_ostim(char s1[], char s2[], int limit) 
{
     // for döngüsü ile metini harf harf geziyor
	 for (int i=0; i < limit; i++){
	 	
	 	  // Karakterleri karþýlaþtýrýp geri döndürmesi gereken deðeri döndürüyor
          if (s1[i] < s2[i])
               return -1;
          if (s1[i] > s2[i])
               return 1;
     }
     
     // Karakterler arasýnda fark yoksa 0 dönüyor
     return 0;

}       


#include <stdio.h>
#include <stdlib.h>


int main() {

char s1 [] = "Ostim Teknik Universitesi";
char s2 [] = "Ostim Teknik Universitesi";

int sonuc = strncat_ostim(s1,s2,20);
printf("%d \n",sonuc);

}
	

