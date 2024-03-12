#include <stdio.h>
#include <locale.h>

int main() {
	
	int numero = 0, soma = 0, contador = 0, pares = 0, impares = 0;
	int somaPares = 0, somaGeral = 0;
	float mediaGeral, mediaPares;
	
	printf ("Digite um numero: ");
	scanf("%i",&numero);

	while(numero != 0) { // diferente de 0 
		printf("Digite um numero: ");
		scanf("%i",&numero);
		
		if (numero > 0) { // enquanto for maior que 0
			if (numero % 2 == 0) {
				pares++;
				somaPares = somaPares + numero;
			} else {
				impares++;
			}
		
		somaGeral = somaGeral + numero;
		
		contador++;
		
		}
	}

	if (contador == 0) {
		printf("Nao foi informado um numero positivo");
	} else {
	mediaPares = somaPares / pares;
	mediaGeral = somaGeral / contador;
	
	printf("Quantidade de pares: %i \n", pares);
	printf("Quantidade de impares: %i \n", impares);
	printf("Media numero pares: %.1f \n", mediaPares);
	printf("Media Geral: %.1f \n", mediaGeral);



	return 0;
}

