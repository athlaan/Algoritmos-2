#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
	int n;
	int a[3];
	int b[3];
	int c[3];
	
	for (int i = 2; i >= n; i--){
	
		printf("Ingrese Tres Numeros: ");
		scanf("%d", &a[i]);
		
	}
		for(int j = 2; j >= n; j--){
			printf("Ingrese Denuevo Tres Numeros: ");
			scanf("%d", &b[j]);
		}
		
		for(int i = 0; i < 3; i++){
			c[i] = a[i] * b[i];
		}
		for(int i = 0; i < 3; i++){
			printf("%d ", c[i]);
		}
}


