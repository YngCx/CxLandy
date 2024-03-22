#include <stdio.h>
#include <string.h>
#include <locale.h>


int main() {
		setlocale(LC_ALL,"");
	
	char nomes [2] [200];
	float notas [2] [3];  // 2 pessoas \ 3 notas
	int i, j;


	for ( i = 0; i < 2; i++) {
		printf("Digite o nome do iª aluno: ", i + 1);
		scanf("%s",nomes[i]);
		
		for ( j = 0; j < 3; j++){
			printf("Digite a iª nota: ", j + 1);
			scanf("%f",&notas[i][j]); 
		}
		
	}


	printf("\n ===  Exibindo os resultados ===\n");
	for (i = 0; i < 2; i++){
		printf("%iª aluno: %s \n", j+1, notas [i]);
		
		for ( j = 0; j < 3; j++){ 
		printf("%iª nota: %.1f \n", j+1, notas [i][j]);
		}
		
	}


	return 0;
}
