#include <stdio.h>

int main(){
    int bakiye,secim,cekim,ekleme;
    printf("\nBakiyenizi giriniz\n>");
    scanf("%d",&bakiye);
    printf("\nIslem seciniz:\n[1]Para Cekme [2]Para Yatirma [3]Bakiye sorgulama [4]Kart Iade\n>");
    scanf("%d",&secim);
    switch(secim){
        case 1:
            printf("\nCekim yapmak istediginiz miktari giriniz\n>");
            scanf("%d",&cekim);
            if(cekim <= bakiye){
                bakiye = bakiye - cekim;
                printf("\nPara cekme basarili!\nKalan bakiyeniz: %dtl",bakiye);
            }else{
                printf("\nBakiyeniz yetersiz");
            }
            break;
       case 2:
            printf("\nYatirmak istediginiz tutari giriniz\n>");
            scanf("%d",&ekleme);
            bakiye = bakiye + ekleme;
            printf("\nPara yatirma basarili!\nMevcut bakiyeniz: %dtl",bakiye);
            break;
       case 3:
            printf("\nMevcut bakiyeniz: %dtl",bakiye);
            break;
       case 4:
            printf("\nKartinizi unutmayiniz.");
            break;
        default:
        	printf("\nLutfen gecerli bir islem giriniz");
    } 
} 
