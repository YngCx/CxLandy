#include <stdio.h>
#include <locale.h>

int main() {
	
	int i;
	int numero, pares = 0, impares = 0;
	
	// Laço de repetição
	for (i = 1; i <= 5; i++) {
		printf("Digite o %iª numero: ", i);
		scanf("%i",&numero);
	
	
	// par ou impar
 	if(numero % 2 == 0) {
	 pares++; 
	} else {
		impares++;
	}

}
	printf("\n ==== EXIBINDO RESULTADO ==== \n");
	printf("Quantidade de pares: %i \n", pares);
	printf("Quantidade de impares: %i \n", impares);
	
	return 0;
}
