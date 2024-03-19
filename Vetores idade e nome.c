#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <time.h>

int main () {
	setlocale(LC_ALL,"");
	char nome[200] [5];
	int idade [5];
	int i;
	
	for ( i =0; i < 5; i++){
	
	
	printf("\n ========== ");
	printf("\nDIGITE O %i° NOME : \n", i + 1);
	scanf("%s",&nome[i]);
	printf("Digite a %i° idade: ", i + 1);
	scanf("%i",&idade[i]);
	
	}
	for(i=0; i<5;i++){
		printf("\nNome: %s \nIdade: %i \n",nome[i],idade[i]);
	}
	
	return 0;

}
	
