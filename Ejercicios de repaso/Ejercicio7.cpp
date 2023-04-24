//Dada como entrada una hora en formato hh:mm, [24], genere como salida la misma hora pero en formato hh:mm [am/pm]



#include <stdio.h>
#include <stdlib.h>

int main(int argc, char  *argv[]) {

	int horas;
	int minutos;
	printf("Ingrese la hora: ");
	scanf("%d", &horas);
	//
	printf("Ingrese los minutos: ");
	scanf("%d", &minutos);
	
	if (horas > 11 && horas < 24){
		printf("La hora es: %d:%d pm",horas - 12, minutos);
	}else{
		printf("La hora es: %d:%d am",horas, minutos);
	}
	
  return 0;
}
