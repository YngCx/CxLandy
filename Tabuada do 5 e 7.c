#include <stdio.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL, "");
	 
	int i;
	
	printf("Tabuada de multiplica��o do n�mero: 5 \n");
	for (i = 1; i <= 10; i++) {
		printf("%i x %i = %i \n", 5, 1, 5*i);
	}
	  printf("\n========================= \n");
	  
		printf("\nTabuada de multiplica��o do n�mero: 7 \n");
	for (i = 1; i <= 10; i++) {
		printf("%i x %i = %i \n", 7, 1, 7*i);
		
	}
	return 0;
}
