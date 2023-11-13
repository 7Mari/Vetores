#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL ,"portuguese");

	char nomes[200] [5];
	int idades[5];
	int i =0;
		
	for(i = 0; i < 5; i++){
		printf("Digite o %dº Nome: \n" ,i + 1);
		scanf("%s" ,&nomes[i]);
		fflush(stdin);
		printf("Digite a %dº Idade: \n" ,i + 1);
		scanf("%d" ,&idades[i]);
		
		printf(" \n");
		
		
		
	}
	
	system("cls || clear");
	
	//exibir
	
	for(i = 0; i < 5; i++){
		printf("\n %dº Nome: %s " ,i + 1 ,nomes[i]);
		fflush(stdin);
		printf("\n %dº Idade: %d" ,i + 1 ,idades[i]);
		
		printf(" \n");
	}
	

	
	
	return 0;
}
