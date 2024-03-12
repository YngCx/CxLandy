#include <stdio.h>
#include <locale.h>

int main(){
	int idade, maiorIdade = 0, menorIdade = 999;
	int opcao, contadorsalario = 0, mulheres5k;
 	char sexo;
 	float salario, somasalario = 0, mediasalario;
 
 
 do {

 printf("\n====== MENU DE INFORMACOES =====\n");
 printf("\n1 ==== DIGITE '1' PARA INFORMACOES === \n");
 printf("\n === DIGITE 2 SE DESEJA SAIR ==== \n");
 
 	printf("Digite opcao: ");
 	scanf("%i",&opcao);
 
 
 	switch (opcao) {
 		case 1:
	
 		printf("Digite sua idade: ");
 		scanf("%i",&idade);
 		
 		fflush(stdin);
 		printf("Digite o sexo - M OU F: ");
 	 	scanf("%C",&sexo);
 	 	
 	 	sexo = toupper (sexo); // converter para maiusculo 
 	 	
 	 	
 	 	
 	 		printf("Digite o salario: ");
 	 	scanf("%f",&salario);
 	 	
 	 	
 	 	//somasalario = somasalario + salario 
 	 	somasalario += salario;
 	 	
 	 	//contadorsalario = contadorsalario + 1
 	 	contadorsalario++;
 	 	
 	 	if (idade > maiorIdade){
 	 		maiorIdade = idade;
		  }
 	 	
 	 	if (idade < menorIdade)
 	 		menorIdade = idade;
 	 	
 	 	
 	 	
 	 	if ( sexo == 'F' && salario >= 5.000){
 	 		mulheres5k++;
		  }
 	 	
 	 	
 	 	
 	 	
 	 	break;
 	 	
	case 2:
		
		
		mediasalario = somasalario / contadorsalario;
		printf("Media do salario do grupo: R$ %.2F \n", mediasalario);
		printf("Maior idade do grupo: %i \n",maiorIdade);
		printf("Menor idade do grupo: %i \n", menorIdade);
		printf("Quantidade de mulheres com salario maior que 5 mil: %i \n", mulheres5k);
		
		
			break;
		default:
			printf("Opcao invalida... \n");
	
 		}
	} while (opcao != 2);

return 0;
