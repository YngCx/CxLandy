#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"");
	
	float notas[3], soma = 0, media;
	int i;
	
	printf("\n === Solicitando notas ===\n");
	for ( i = 0; i < 3; i++) {
		printf("Digite a %iª nota: ", i + 1);
		scanf("%f", &notas[i]);
		
		
		soma += notas [i];
		
	}
	
	media = soma / i;
	
	printf("\n ==== Exibindo resultados === \n");
	for ( i = 0; i < 3; i++) {
		printf("%iª nota: %.1f \n", i +1, notas[i]);
	}
	printf("Media: %.1f \n", media);
	
	return 0;
}
