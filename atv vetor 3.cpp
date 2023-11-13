#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int i;
	float nota[4];
	float media;
	float soma = 0;
	
	for(i = 0; i < 4; i++){
		printf("Nota %d:" , i+1);
		scanf("%f" ,&nota[i]);
		
		soma += nota[i];
	}
	
	system("cls || clear");
	
	for(i = 1; i < 4; i++){
		printf("%dº Nota: %.1f\n" , i+1, nota[i] );
	}
	
	media = soma/4;
	printf("Média: %.1f \n" ,media);
	
	if (media >= 7){
		printf("Aprovado");
	} else if (media >= 5){
		printf("Recuperação");
	} else {
		printf("Reprovado");
	}
	
	return 0;
}
