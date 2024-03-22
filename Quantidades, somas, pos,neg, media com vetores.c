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
	int  soma = 0;
	int maiorN = 0, menorN = 999;
	int somaPar = 0, somaIn = 0;
	float mediaPar = 0, mediaIn = 0,mediaTotal = 0;
	
	for ( i = 0; i< 5; i++){
	
	
	printf("DIGITE O %iª NUMERO: ", i + 1);
	scanf("%i",&numeros[i]);
	
	soma += numeros[i];
	n++;
	
	if ( numeros[i] % 2 == 0){
		numP++;
		somaPar+=numeros[i];	
	} else {
		numI++;
		somaIn+=numeros[i];
	}
	
	if ( numeros[i] >= 0){
		positivo++;
	} else {
		negativo++;
 	}
	
	if (numeros[i] > maiorN){
		maiorN = numeros[i];
	} 
	if (numeros[i] < menorN){
		menorN = numeros[i];
	}
	}
	
	
 	mediaPar= somaPar / numP;
 	mediaIn= somaIn / numI;
 	mediaTotal = soma /n;
 	
 
	printf("Quantidade numeros pares: %i\n",numP);
	printf("Quantidade numeros impares: %i\n",numI);	
	printf("Quantidade numeros positivos: %i\n",positivo);
	printf("Quantidade numeros negativo: %i\n",negativo);
	printf("Quantidade  de numeros totais : %i\n",n);
	printf("maior: %i\n",maiorN);
	printf("Menor: %i\n",menorN);
	printf("Media pares: %.1f\n",mediaPar);
	printf("Media impares: %.1f\n",mediaIn);
	printf("Media total: %.1f\n",mediaTotal);
	for ( i = 4; i >= 0; i--){
		printf("%i\n",numeros[i]);
	}
	
}
