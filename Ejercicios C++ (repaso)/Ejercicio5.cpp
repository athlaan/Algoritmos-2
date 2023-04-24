#include <stdio.h>
#include <stdlib.h>

int main(int argc, char  *argv[]) {
	
	int auto1 = 70;
	int auto2 = 150;
	int velocidad;
	int tiempo = 0;
	int distancia = 0;
	printf("Velocidad de los Vehiculos: ");
	scanf("%d", &velocidad);
	//
	tiempo = (auto2-auto1) / (velocidad * 2);
	distancia = tiempo * velocidad;
	
	printf("Se encuentran en la distancia: %d", distancia);	
  return 0;
}
