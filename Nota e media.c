#include<stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"");
	
	// Var
	int contador = 0;
	float nota,media, soma = 0;
	char resposta;
	
	// Do while
	
	do {
	printf("Deseja inserir uma nota? ");
	scanf("%c",&resposta);
	
	if(resposta == 'N'){
		printf("Digite a %dª nota: ",contador + 1);
		scanf("%f",&nota);
		
		soma = soma + nota;
		contador = contador + 1;
	}
	
	}while(resposta == 'N');
	
	// Calculando 
	soma = soma + nota;
	media = soma / contador;
	
	printf("Media: %.1f \n",media);
	
	return 0;
		
}
