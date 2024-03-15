#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 4
int main () {
	setlocale(LC_ALL,"");
	
	float notas[TAM], soma = 0, media;
	char resultado[200];
	int i;
	
	printf("\n === Solicitando notas ===\n");
	for ( i = 0; i < TAM; i++) {
		printf("Digite a %iª nota: ", i + 1);
		scanf("%f", &notas[i]);
		
		
		soma += notas [i];
		
	}
	
	media = soma / TAM;
	
	printf("\n ==== Exibindo resultados === \n");
	for ( i = 0; i < TAM; i++) {
		printf("%iª nota: %.1f \n", i +1, notas[i]);
	}
	printf("Media: %.1f \n", media);
	
	if (media >= 7) {
		strcpy (resultado, "aprovado!");
	}else if (media >= 5) {
		strcpy(resultado, "recuperacao..");
		
	} else {
		strcpy(resultado, "reprovado!");
	}
	
	
	printf("\n === exibindo resultados ====");
	for ( i = 0; i < TAM; i++) {
		printf("%iª nota: %.1f \n", i + 1, notas[i]);
	}
	
	printf("media: %.f \n", media);
	printf("resultado: %s \n", resultado);
	
	
	
	return 0;
	

}

	
