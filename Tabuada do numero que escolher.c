#include <stdio.h>
#include <locale.h>


int main() {
		setlocale(LC_ALL, "");
	
	int i;
	int numero;
	
	printf("QUAL � O N�MERO QUE VOC� DESEJA: ");
	scanf("%i",&numero);

	for (i = 1; i <= 10; i++) {
		printf("%i x %i = %i \n" , numero, i, numero*i);
	}
	return 0;
	
}

