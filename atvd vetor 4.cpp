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
		printf("N�mero %d: " , i+1);
		scanf("%d" ,&numeros[i]);
		
			maior = maior > numeros[i] ? maior : numeros[i];
			menor = menor < numeros[i] ? menor : numeros[i];
	}
	
	system("cls || clear");
	
	for(i = 0; i < 5; i++){
		printf("%d� N�mero: %d \n" , i+1, numeros[i] );
	}
	

	
	printf("Maior N�mero: %d \n" ,maior);
	printf("Menor N�mero: %d \n" ,menor);
	
	
	
	return 0;
}
