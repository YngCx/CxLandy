#include <stdio.h>
#include <locale.h>
#include <string.h>
#define TAM 5
int main () {
	setlocale(LC_ALL,"");
	
	int numeros [TAM];
	int numP = 0, numI = 0;
	int positivo = 0, negativo = 0;
	int i, n=0;
	
	for ( i = 0; i< 5; i++){
	
	
	printf("DIGITE O %i� NUMERO: ", i + 1);
	scanf("%i",&numeros[i]);
	
	n++;
	
	if ( numeros[i] % 2 == 0){
	 	numP++;
	} else {
		numI++;
	}
	
	if ( numeros[i] >= 0){
		positivo++;
	} else {
		negativo++;
	}
	}
	
	printf("Quantidade numeros pares: %i\n",numP);
	printf("Quantidade numeros impares: %i\n",numI);	
	printf("Quantidade numeros positivos: %i\n",positivo);
	printf("Quantidade numeros negativo: %i\n",negativo);
	printf("Quantidade  de numeros totais : %i\n",n);
}
