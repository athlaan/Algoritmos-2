#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * argv[]){
	int n = 0;
	int numeros[10];
	float media = 0;
	for(int i = 9; i >= n; i--){
		
		printf("Ingrese 10 numeros: ");
		scanf("%d", &numeros[i]);		
	}
	
	media = numeros[4] + numeros[5] / 2;
	
	for(int i = 0; i < 10; i++){
		
		if(numeros[i] >= media){
		
		printf("Numero Arriba de la media: %d\n", numeros[i]);
		
		}
		
	}
	
	printf("La media es: %.2f", media);
}
