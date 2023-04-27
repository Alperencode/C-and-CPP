#include <stdio.h>
int kare, kup, toplam;

void hesapla(int x, int y) {
    kare = x * x;
    kup = y * y * y;
    toplam = kare + kup;
}

int main() {
    int sayi1, sayi2;
    printf("Tam sayi giriniz: ");
    scanf("%d %d", &sayi1, &sayi2);
    hesapla(sayi1, sayi2);
    printf("ilk sayinin karesi %d, ikinci sayinin kubu %d, sayilarin toplami %d\n", kare, kup, toplam);
    return 0;
}
