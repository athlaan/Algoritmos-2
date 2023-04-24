#include <stdio.h>
#include <stdlib.h>

int main(int argc, char  *argv[]) {
 
  	int numero1;
  	int numero2;
  	int numero3;
  	float prom;
  	
  	printf("Ingrese El Primer Numero: ");
  	scanf("%d", &numero1);
    //
    printf("Ingrese El Segundo Numero: ");
  	scanf("%d", &numero2);
    //
    printf("Ingrese El Tercer Numero: ");
  	scanf("%d", &numero3);
    //
    
    prom = prom + (numero1 + numero2 + numero3) / 3;
    
    printf("El promedio es: %.2f", prom);
    
  return 0;
}
