#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	char logincada[200] = "caio";
	char senhacada[200] = "1234";
	char login[200];
	char senha[200];
	
		do{
	
		

		printf("\nDigite o login do usuario: ");
		scanf("%s",&login);

		printf("\nDigite a senha do usuario: ");
		scanf("%s",&senha);		



			// strcmp serve para comparar   // '!' "diferente"  // '||' nescessario para repetir caso 1 seja diferente
		} while (strcmp(logincada, login ) != 0 || strcmp(senhacada, senha ) != 0);
		 
		 printf("\nAcessando o sistema..");
		

	return 0; 


}
