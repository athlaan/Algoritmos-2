#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[]) {
 printf("Cuantos alumnos son?");
 int alumno;
 int monto = 0;
 int costo = 0;
 scanf("%d", &alumno);
	if(alumno >= 100){
	costo = 500;
	monto = alumno * costo;
	printf("Costo: %d, Monto: %d", costo, monto);
	}
	if(alumno >=50 && alumno <= 99){
	costo = 400;
	monto = alumno * costo;
	printf("Costo: %d, Monto: %d", costo, monto);	
	}
	if(alumno >= 30 && alumno <= 49){
		costo = 300;
		monto = alumno * costo;
		printf("Costo: %d, Monto: %d", costo, monto);
	}
	if(alumno <= 30){
		costo = 6000;
		monto = alumno * costo;
		printf("Costo: %d, Monto: %d", costo, monto);
	}
  return 0;
}
