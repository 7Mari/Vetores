#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int i;
	int numeros[5];
	int maior = 0; 
	int menor = 9999;
	
	for(i = 0; i < 5; i++){
		printf("Número %d: " , i+1);
		scanf("%d" ,&numeros[i]);
		
			maior = maior > numeros[i] ? maior : numeros[i];
			menor = menor < numeros[i] ? menor : numeros[i];
	}
	
	system("cls || clear");
	
	for(i = 0; i < 5; i++){
		printf("%dº Número: %d \n" , i+1, numeros[i] );
	}
	

	
	printf("Maior Número: %d \n" ,maior);
	printf("Menor Número: %d \n" ,menor);
	
	
	
	return 0;
}
