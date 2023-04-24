//Convierta a horas minutos y segundos un tiempo expresado en segundos

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char  *argv[]) {

	int segundos;
	int hora = 0;
	int minutos = 0;
	int segundos2 = 0;
	printf("Ingrese Cantidad de Segundos: ");
	scanf("%d", &segundos);
	
	hora = segundos / 3600;
	segundos = segundos % 3600;
	
	minutos = segundos / 60;
	segundos = segundos % 60;
	
	segundos2 = segundos;
	
	printf("La hora es: %d h %d m %d s",hora, minutos, segundos2);		
		
  return 0;
}
