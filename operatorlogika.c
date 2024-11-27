#include <stdio.h>

int main(){
	float x,y,hasil;
	char kata;
	
	printf("\n\t\t+----------------------+\n");
	printf("\t\t| KALKULATOR SEDERHANA |");
	printf("\n\t\t+----------------------+\n");
	
	printf("Angka_1 : ");
	scanf("%f", &x);
	
	printf("Pilih salah satu operator (+ - x /) : ");
	scanf(" %c", &kata);
	
	printf("Angka_2 : ");
	scanf("%f", &y);
	
	if(kata == '+'){
		hasil = x + y;
	}else if(kata == '-'){
		hasil = x - y;
	}else if(kata == 'x'){
		hasil = x * y;
	}else if(kata == '/'){
		hasil = x / y;
	}else{
		printf("operator yang dimasukkan salah, (hanya + - x /) \n");
	}
	
	printf("-------------%c \n", kata);
	printf("= %.2f", hasil);
	
	return 0;
}
