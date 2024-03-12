#include <stdio.h>
#include <locale.h>

int main(){
	 int idade, maiorIdade, menorIdade, opcao;
 	char sexo;
 	float salario;
 
 
 
 printf("\n====== MENU DE INFORMACOES =====\n");
 printf("\n1 ==== DIGITE '1' PARA INFORMACOES === \n");
 printf("\n === DIGITE 2 SE DESEJA SAIR ==== \n");
 
 	printf("Digite opcao: ");
 	scanf("%i",&opcao);
 
 
 	if (opcao == 1){
 		printf("Digite sua idade: ");
 		scanf("%i",&idade);
 		
 		printf("Digite o sexo: ");
 	 	scanf("%s",&sexo);
	 } else {
	 	printf("OPCAO INVALIDA");
	 }
  	 	if (idade >= 18) {
 	printf ("Maior de idade ");
 	  } else {
	 	printf("Menor de idade ");
	 }

		printf("Digite o nome do 1 funcionario: ");
		



return 0;

 }
