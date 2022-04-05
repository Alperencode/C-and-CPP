#include <stdio.h>
int main(){
    int kredipuani,tutar;
    double faiz;
    printf("Kredi puaninizi girin \n");
    scanf("%d",&kredipuani);
    if(kredipuani>0 && kredipuani<100){
        printf("Cekmek istediginiz tutari girin\n");
        scanf("%d",&tutar);
        if(kredipuani>=70 ){
            if(tutar<10000){
                printf("Kredi cekebilirsiniz");
                faiz=(100-kredipuani)%100;
                printf("\nFaiziniz: %lf", faiz);
            }
            else {
                printf("Kredi cekemezsiniz");
            }
        }
        else if(kredipuani>50 ){
            if(tutar<5000){
                printf("Kredi cekebilirsiniz");
                faiz=(100-kredipuani)%100;
                printf("\nFaiziniz: %lf", faiz);
            }
            else{
                printf("Kredi cekemezsiniz");
            }
        }
        else{
            if(tutar<1000){
                printf("Ihtiyac kredisi alabilirsiniz");
                faiz=(100-kredipuani)%100;
                printf("\nFaiziniz: %lf", faiz);
            }
            else {
                printf("Kredi cekemezsiniz");
            }
        }
    }
    else {
        printf("Kredi cekemezsiniz");
    }
    return 0;
}
