#include<stdio.h>
#include<conio.h>

int main(){
	float x, y, hasil;
	char kata;

	start:
		printf("\n\t\t\t+--------------------+\n");
		printf("\t\t\t| PROGRAM KALKULATOR |");
		printf("\n\t\t\t+--------------------+\n");
		
		awal:
			printf("Angka 1 : ");
			scanf("%f", &x);  // Gunakan %f untuk float
			
			printf("Pilih Operator(+ - x /) : ");
			scanf(" %c", &kata);
			
			printf("Angka 2 : ");
			scanf("%f", &y);  // Gunakan %f untuk float
			
			// Menggunakan switch-case untuk menggantikan if-else
			switch(kata) {
				case '+':
					hasil = x + y;
					break;
				case '-':
					hasil = x - y;
					break;
				case 'x':
					hasil = x * y;
					break;
				case '/':
					if(y != 0) {
						hasil = x / y;
					} else {
						printf("Error! Pembagian dengan nol tidak diperbolehkan.\n");
						goto awal;
					}
					break;
				default:
					printf("Operator yang anda masukkan salah, (hanya + - x /) !!!\n");
					goto awal;
			}
			
			printf("--------------%c\n", kata);
			printf("= %.2f", hasil);
			getch();
			system("cls");
	goto start;
	return 0;
}

