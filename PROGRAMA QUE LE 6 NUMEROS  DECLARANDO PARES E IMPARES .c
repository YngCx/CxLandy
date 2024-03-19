#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <string.h>

int main() {
		setlocale(LC_ALL,"");
		
		
	int numeros [6];
	int nuimpares = 0, numpar = 0;
	int i;
	
	for ( i = 0; i < 6; i++){
	
	printf("=== EXIBA AS INFORMACOES ====\n");
	printf("Digite os %i numeros: ", i+1);
	scanf("%i",&numeros[i]);
	system("cls || clear");
	
	if (numeros [i] %2 == 0) {
		numpar++;
	} else {
		nuimpares++;
	}
	}
	
	printf("\nNumero par: %i", numpar);
	printf("\nNumero impar: %i", nuimpares);
	return 0;
	
}

