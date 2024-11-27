#include <stdio.h>

int main() {
    int a = 1; // True
    int b = 0; // False

    if (a || b) {
        printf("OR: Salah satu benar\n");
    }

    if (a && b) {
        printf("AND: Keduanya benar\n");
    } else {
        printf("AND: Salah satu salah\n");
    }

    if (!b) {
        printf("NOT: Kebalikan dari b adalah benar\n");
    }

    return 0;
}

