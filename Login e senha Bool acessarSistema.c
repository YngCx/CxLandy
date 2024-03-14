#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>

int main(void){
	setlocale(LC_ALL,"");
	
	char loginCad[200] = "Alvaro";
	char senhaCad[200] =  "Alvaro12";
	char login[200];
	char senha[200];
	bool loginCorreto;
	bool senhaCorreta;
	bool acessarSistema;
	
	do{
		printf("\n-------------------------\n");
		printf("Digite seu usuario: ");
		scanf("%s",&login);
		fflush(stdin);
	
		printf("Digite sua senha: ");
		scanf("%s",&senha);
		
		loginCorreto = strcmp(loginCad, login) == 0;
		senhaCorreta = strcmp(senhaCad, senha) == 0;
		
	
	}while (!acessarSistema);
	
		printf("\nAcessando o sistema...!");
	return 0;
	
}
