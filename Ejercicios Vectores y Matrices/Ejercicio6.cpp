#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
	
	int n = 0;
	int numeros[100];
	
	for(int i = 9; i >= n; i--){
		printf("Ingrese Numeros: ");
		scanf("%d", &numeros[i]);
	}
	
	for(int i = 0; i < 10; i++){
		printf("%d\n", numeros[i]);
	}
	return 0;
}
