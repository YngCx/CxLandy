#include <stdio.h>
#include <string.h>
#include <locale.h>


int main() {
		setlocale(LC_ALL,"");
	
	char nomes[4] [200];
	float notas[4] [3];  // 2 pessoas \ 3 notas
	float media[4];
	float soma = 0;
	int i, j;


	for ( i = 0; i < 4; i++) {
		printf("Digite o nome do iª aluno: ", i + 1);
		scanf("%s",nomes[i]);
		
		for ( j = 0; j < 3; j++){
			printf("Digite a iª nota: ", j + 1);
			scanf("%f",&notas[i][j]); 
			
			soma += notas[i][j];
			
		}
		
		media [i] = soma / j;
		soma = 0;
		
		printf("\n"); // Somente para pular uma linha
}


	printf("\n ===  Exibindo os resultados ===\n");
	for (i = 0; i < 4; i++){
		printf("%iª aluno: %s \n", j+1, nomes[i]);
		
		for ( j = 0; j < 3; j++){ 
		printf("%iª nota: %.1f \n", j+1, notas [i][j]);
		}
		
		printf("Media: %.1f \n", media[i]);
	}


	return 0;
}
