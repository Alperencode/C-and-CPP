#include <stdio.h>
int main(){
    int ankara,adana,antalya;
    int bursa,bolu,burdur,bilecik,bodrum;

    bursa=&ankara;
    bolu=&ankara;
    burdur=&ankara;

    bilecik=&adana;
    bodrum=&adana;

    printf("bursa icin sayi girin\n");
    scanf("%d",bursa);
    printf("%d\n",bursa);
    printf("%x\n",bursa);

    printf("sayi girin\n");
    scanf("%d",bolu);
    printf("%d\n",bolu);
    printf("%x\n",bolu);

    printf("sayi girin\n");
    scanf("%d",burdur);
    printf("%d\n",burdur);
    printf("%x\n",burdur);

    printf("sayi girin\n");
    scanf("%d",bilecik);
    printf("%d\n",bilecik);
    printf("%x\n",bilecik);

    printf("sayi girin\n");
    scanf("%d",bodrum);
    printf("%d\n",bodrum);
    printf("%x\n",bodrum);

    printf("Toplam = %d",(bilecik+bolu));

}
