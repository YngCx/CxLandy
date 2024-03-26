#include <stdio.h>
#include <string.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"");
		
	float  soma = 0, media[2];	
	char nome [3][200];
	int i,j,notas[3] [2];
		
		for ( i = 0; i < 3; i++){
		printf("Digite o nome da disciplina: \n", i + 1);
		scanf("%s",&nome[i]);
	
		
	for (j = 0; j < 2; j++){
		
		fflush(stdin);
		printf("Digita a %iª nota: ", j + 1);
		scanf("%i",&notas[i][j]);
		
		soma += notas[i][j];
	}
	media[i]= soma / j;
		soma = 0;
		
	
	}
	fflush(stdin);
	for ( i = 0; i < 3; i++){
		
	printf("A i% disciplina foi: %s\n", i +  1, nome [i]);
	
	

	for ( j = 0; j < 2; j++){
		
	printf("A %iª Nota foi: %i\n", i + 1, notas[i][j]);
			
	}

		
		printf("A media foi: %.1f \n", media[i]);
		
}
	return 0;
}
