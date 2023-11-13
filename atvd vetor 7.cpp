#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL ,"portuguese");

	float numeros[10];
	int i;
	float soma = 0;
	int contadorNegativos;
	float contadorPositivos = 0;
		
	for(i = 0; i < 10; i++){
		printf("Digite o %dº Número: \n" ,i + 1);
		scanf("%f" ,&numeros[i]);	
		
		if(numeros[i] < 0){
			contadorNegativos+= 1;
		}
		
		if(numeros[i] > 0){
			contadorPositivos+= 1;
			
			
		}
		
		soma+= contadorPositivos;	
		
	}
	
	system("cls || clear");
	
	//exibir
	
	for(i = 0; i < 10; i++){
		printf("\n %dº Número: %.1f \n" ,i + 1 ,numeros[i]);
	}
	
	printf("Números Negativos: %d \n" ,contadorNegativos);
	printf("Soma dos Números Positivos: %.1f\n" ,soma);
	
	
	return 0;
}
