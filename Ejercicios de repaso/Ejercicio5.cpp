#include <stdio.h>
#include <stdlib.h>

int main(int argc, char  *argv[]) {

	int nota;
	printf("Ingrese una Nota: ");
	scanf("%d", &nota);
	
	if(nota >= 6 && nota <= 7){
		printf("Aprobado");
	}else if (nota >= 8){
		printf("Felicitaciones");
	}else if (nota <= 5 && nota >= 2){
		printf("Desaprobado");
	}else if (nota == 1){
		printf("Debes esforzarte mas");
	}
	
	
  return 0;
}
