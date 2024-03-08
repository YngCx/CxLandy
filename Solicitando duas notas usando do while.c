#include <stdio.h>
#include <locale.h>

int main() {
	
	float nota1, nota2, media;
	char nome [200];
	
	
	do {
		
		printf("Qual o nome do aluno: ");
			scanf("%s",&nome);
		
		printf("Qual a primeira nota do aluno: ");
			scanf("%f",&nota1);
			
			printf("Qual a primeira nota do aluno: ");
			scanf("%f",&nota2);
			
			
			
		} while ( nota1 < 0 || nota1 > 10 || nota2 < 0 || nota2 > 10);
		
		
			media=  ( nota1 + nota2) /2;
			printf("A media final do aluno e: %1.f ", media);
	
	
	return 0;
	
	
	
}
