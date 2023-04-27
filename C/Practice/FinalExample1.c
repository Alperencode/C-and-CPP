#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    char password[100];
    int length = 0, has_upper = 0, has_lower = 0, has_digit = 0, has_symbol = 0;

    printf("Lutfen en az 8 uzunlugunda bir sifre girin: ");
    scanf("%s", password);

    length = strlen(password);
    while(length < 8){
        printf("Lutfen en az 8 uzunlugunda bir sifre girin: ");
        scanf("%s", password);
        length = strlen(password);
    }

    int i;
    for(i = 0; i < length; i++) {
        if(isupper(password[i]))
            has_upper = 1;
        else if(islower(password[i]))
            has_lower = 1;
        else if(isdigit(password[i]))
            has_digit = 1;
        else if(strchr("*!%?", password[i]) != NULL)
            has_symbol = 1;
    }

    if(has_upper && has_lower && has_digit && has_symbol)
        printf("Tebrikler, guclu bir sifre olusturdunuz!\n");
    else{
        printf("Girilen sifre yeterince guclu degil. Guclu bir sifre olusturmanizi oneririz. \n");
        if(!has_lower)
            printf("Kucuk harf eksik:\n");
        if(!has_upper)
            printf("Buyuk harf eksik:\n");
        if(!has_digit)
            printf("Sayi eksik:\n");
        if(!has_symbol)
            printf("Ozel sembol eksik:\n");
        strcat(password, "***");
        printf("Oneri: %s", password);
    }

    return 0;
}
