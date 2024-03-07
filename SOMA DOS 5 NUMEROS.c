#include <stdio.h>
#include <locale.h>

int main() {
	
	
	float i, n1, n2, n3, n4, n5, soma;
	
	printf("Digite o PRIMEIRO NUMERO: ");
	scanf("%f",&n1);
	
	printf("Digite o SEGUNDO NUMERO: ");
	scanf("%f",&n2);
	
	printf("Digite o TERCEIRO NUMERO: ");
	scanf("%f",&n3);
	
	printf("Digite o QUARTO NUMERO: ");
	scanf("%f",&n4);
	
	printf("Digite o QUINTO NUMERO: ");
	scanf("%f",&n5);
	
	soma = n1 + n2 +n3 +n4 +n5;
	printf("\n=== EXIBIR RESULTADO ====== ");
	printf("Soma: %.1f \n", soma);
	


 	return 0;
}

