#include<stdio.h>
#include<conio.h>

int main(){
	float x,y,hasil;
	char kata;
	
	start:
		printf("\n\t\t\t+--------------------+\n");
		printf("\t\t\t| PROGRAM KALKULATOR |");
		printf("\n\t\t\t+--------------------+\n");
		
		awal:
			printf("Angka 1 : ");
			scanf("%f", &x);
			
			printf("Pilih Operator(+ - x /) : ");
			scanf(" %c", &kata);
			
			printf("Angka 2 : ");
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
				printf("Operator yang anda masukkan salah, (hanya + - y x /) !!!\n");
				getch();
				printf("\n------------------\n");
				goto awal ;
			}
		printf("--------------%c\n",kata);
		printf("= %.2f", hasil);
		getch();
		system("cls");
	goto start ;
	return 0;
}
