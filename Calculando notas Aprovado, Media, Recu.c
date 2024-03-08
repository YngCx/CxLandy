#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	// Var
	int i;
	float nota, soma = 0, media;
	
	// for
	for(i = 1; i <= 3; i++){
	
	// Do
	do{
		printf("Digite a %dª nota: ",i);
		scanf("%f",&nota);
		
	}while(nota < 0 || nota > 10);
	
	soma = soma + nota;
	
}

	// media
	media = soma / 3;
	
	printf("Media: %.1f \n",media);
	
	// IF
	if(media >= 7){
		printf("Aprovado");
	}else if (media >= 4){
		printf("Recuperaçao");
	}else{
		printf("Reprovado");
	}
	
	return 0;
}

