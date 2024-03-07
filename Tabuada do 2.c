#include <stdio.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL, "");
	 
	int i;
	
	printf("Tabuada de multiplicação do número: 2 \n");
	for (i = 1; i <= 10; i++) {
		printf("%i x %i = %i \n", 2, 1, 2*i);
	}
		return 0;
	
}
