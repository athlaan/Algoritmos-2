/*Calcular la FCM para cualquier persona, sabiendo que ésta es la fórmula de la Frecuencia cardíaca máxima por géneros: 
Para hombres FCmax = ((210 – (0,5 * edad en años)) – 1% del peso) + 4
Para mujeres FCmax = (210 – (0,5 * edad en años)) - 1% del peso*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

	int genero;
	int peso;
	int edad;
	//Si es Hombre va a ser 1 y si es Mujer va a ser 2;
	printf("Ingrese El Genero: ");
	scanf("%d", &genero);
	
	printf("Ingrese Peso: ");
	scanf("%d", &peso);
	
	printf("Ingrese Año: ");
	scanf("%d", &edad);
	
	if(genero == 1){
		int FCmax = ((210 - (0.5 * edad)) - peso * 0.01) + 4;
		printf("FCmax de un Hombre:  %d", FCmax);
	}else if(genero == 2){
		int FCmax = (210 - (0.5 * edad))- peso * 0.01;
		printf("FCmax de una Mujer:  %d", FCmax);
	}
	
  return 0;
}
