//Suponga que un individuo desea invertir su capital en un banco y desea saber �Cu�nto dinero ahorra despu�s de un mes, si el banco paga a raz�n de 2% mensual?

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char  *argv[]) {

	int plata;
	printf("Ingrese Cantidad de Plata: ");
	scanf("%d", &plata);
	
	plata = plata + plata * 0.02;	
	printf("Ahorro: %d", plata);
  return 0;
}
