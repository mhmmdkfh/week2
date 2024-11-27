#include <stdio.h>

int main(){
	int x = 5;
	int y = 10;
	
	printf("-- INCREMENT -- \n");
	printf("nilai x lama adalah : %d \n", x);
	printf("ini adalah nilai post increment : %d \n", x++);
	printf("ini adalh nilia pre increment : %d \n\n", ++x);
	
	
	printf("-- DECREMENT -- \n");
	printf("nilai y lama adalah : %d \n", y);
	printf("ini adalah nilai post decrement : %d \n", y--);
	printf("ini adalah nilai pre decrement : %d \n", --y);
	
	return 0;
}
