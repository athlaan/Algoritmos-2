#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * argv[]){
	int n = 0;
	int numeros[4];
	float media = 0;
	for(int i = 3; i >= n; i--){
		
		printf("Ingrese 4 numeros: ");
		scanf("%d", &numeros[i]);		
	}
	
	for(int i = 0; i < 4; i++){
		
		printf("Numeros: %d\n", numeros[i]);
	}



	media = numeros[1] + numeros[2] / 2;
	
	printf("La media es: %.2f", media);
}
