#include <stdio.h>
#include <string.h>

struct dizi {
    char isim[100];
    char kanal[100];
};

int main() {
    struct dizi diziler[100];
    FILE *dosya;
    char kanal[100];

    dosya = fopen("diziler.txt", "r");
    if (dosya == NULL) {
        printf("Dosya acilamadi.\n");
        return -1;
    }
    int i = 0;
    while (!feof(dosya)) {
        fscanf(dosya, "%s %s", diziler[i].isim, diziler[i].kanal);
        i++;
    }
    fclose(dosya);

    printf("Kanal adini girin: ");
    scanf("%s", kanal);

    printf("\n%s kanalinda yayinlanan diziler:\n", kanal);
    int j=0;
    for (j = 0; j < i; j++) {
        if (strcmp(diziler[j].kanal, kanal) == 0) {
            printf("%s\n", diziler[j].isim);
        }
    }

    return 0;
}
