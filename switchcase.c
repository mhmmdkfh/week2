#include<stdio.h>

int main(){
	int x;
	
	printf("Masukkan nilai x : ");
	scanf("%d", &x);
	
	//if
	//else
	switch(x){
		case 1:
			printf("nilai x adalah satu \n");
			break;
		case 2:
			printf("nilai x adalah dua \n");
			break;
		case 3:
			printf("nilai x adalah tiga \n");
			break;
		case 4:
			printf("nilai x adalah empat \n");
			break;
		case 5:
			printf("nilai x adalah lima \n");	
			break;
		default:
			printf("nilai x yang dimasukkan salah \n");
	}
	printf("\n\t\t End");
	
	return 0;
}
