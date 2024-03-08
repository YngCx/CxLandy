#include <stdio.h>
#include <locale.h>

int main() {
	int contador = 0;
	char continua; // Não precisamos inicializar a variavel 'continua' pois o teste
	
	
		do { // do siginifica 'faça'
			
		printf("Repetindo.... \n")	;
			
			contador = contador + 1;
			
		printf("Tecle 's' se deseja continuar\n");
			scanf("%c",&continua);
		
			} while (continua == 's');  // while siginifica "enquanto"

		printf("O bloco foi repetido %d vezes", contador);
	
		
			return 0;
	
	}
