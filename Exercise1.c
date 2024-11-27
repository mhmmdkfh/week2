#include <stdio.h>

int main() {
    int angka = 2;

    switch (angka) {
        case 1:
            printf("Angka adalah satu\n");
            break;
        case 2:
            printf("Angka adalah dua\n");
            break;
        case 3:
            printf("Angka adalah tiga\n");
            break;
        default:
            printf("Angka tidak dikenal\n");
    }
    return 0;
}

