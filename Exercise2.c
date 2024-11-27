#include <stdio.h>

int main() {
    int x = 5;
    printf("Post-increment: %d\n", x++);  // Cetak 5, kemudian x menjadi 6
    printf("Pre-increment: %d\n", ++x);   // Tambah jadi 7, lalu cetak 7
    
    int y = 10;
    printf("Post-decrement: %d\n", y--);  // Cetak 10, lalu y jadi 9
    printf("Pre-decrement: %d\n", --y);   // Kurangi jadi 8, lalu cetak 8
    
    return 0;
}

