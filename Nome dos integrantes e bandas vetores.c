#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAM 3
#define SIZE 5
int main () {
	
	char nomeBanda [200 ][TAM], NomeInt [200][SIZE];
	int i, b;
	
	
	for ( b = 0;  b < TAM; b++){
		
		printf("Digite o nome do %iª Banda: ", b + 1);
		scanf("%s",&nomeBanda[b]);
		
		
		
		fflush(stdin);
		for (i = 0; i < SIZE; i++){
		printf("Digite o nome do %iª integrante: ", i + 1);
		scanf("%s",&NomeInt[b][i]);
			
			
			
			
		}
		
		
	
	}
	
	for ( b = 0; b < TAM; b++){
	printf("Nome da %i Banda: %s \n", b + 1, nomeBanda[b]);
	
	
	for ( i = 0; i < SIZE; i++){
		printf("\nNome dos %i integrantes: %s \n ", NomeInt[b][i]);
		
	}
	
}
}
