#include <stdio.h>
#include <locale.h>


int main() {
	
	float nota;
	char nome [200];
	
		// do while
		
		do {
			
			printf("Qual o nome do aluno: ");
				scanf("%s",&nome);
				
			printf("Qual a nota do aluno: ");
			scanf("%f",&nota);
		
				
		}while( nota < 0 || nota > 10); // || siginifica "ou"
		
		printf("Nota Final: %.1f \n", nota);
		
		return 0;
		
		}
