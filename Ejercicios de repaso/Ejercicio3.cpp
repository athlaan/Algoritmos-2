#include <stdio.h>
#include <stdlib.h>

int main(int argc, char  *argv[]) {
 
	int numero;
	
	printf("Ingrese un numero: ");
	scanf("%d", &numero);
	
	if(numero == 0){
		printf("Ingrese un numero mayor a cero");
	}
	
	if(numero % 2 == 0){
		printf("Es par");
	}else{
		printf("Es Impar");
	}
	
  return 0;
}
