#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL ,"portuguese");

	int numeros[6];
	int par = 0; 
	int impar = 0;
	int i;
	
	for(i = 0; i < 6; i++){
		printf("N�mero %d: " , i+1);
		scanf("%d" ,&numeros[i]);
		
		
		if(numeros[i] % 2 == 0){
			
			par+= 1;
		} else{
			impar+= 1;
		}
			
	}
	
	system("cls || clear");
	
	for(i = 0; i < 6; i++){
		printf("%d� N�mero: %d \n" , i+1, numeros[i] );
	}
	
	
	printf("N�meros Pares: %d \n" ,par);
	printf("N�meros �mpares: %d \n" ,impar);
		
	return 0;
}
