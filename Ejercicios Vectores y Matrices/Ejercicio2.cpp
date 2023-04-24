#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  
	int numero = 0;
	int num[100];

	for(int i = 4; i >= numero; i--){
		printf("Inserte Numeros: ");
		scanf("%d", &num[i]);
		
	}
	for(int i = 0; i < 5; i++){
		printf("%d", num[i]);
	}
  return 0;
}
