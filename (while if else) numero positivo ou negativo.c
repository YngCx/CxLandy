#include <stdio.h>
#include <locale.h>

int main() {
	
	int numero = -1, soma = 0, contador = 0;
	float media;
	
	printf ("Digite um numero: ");
	scanf("%i",&numero);

	while(numero >= 0) {
		printf("Digite um numero: ");
		scanf("%i",&numero);
		
		if (numero >= 0) {
			soma = soma + numero;
			contador = contador + 1;
		}
	}

	if (contador == 0){
		printf("Nao foi informado um numero positivo");
	} else {
	media = soma / contador;
	printf("Media: %.1f \n", media);
	
	printf("Nota informada: %.1f \n", media);

}

	return 0;
	
}
