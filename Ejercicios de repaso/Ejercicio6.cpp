//Dado un alquiler, se pide determinar  cuánto paga en impuesto por concepto de alquiler, considerando la siguiente escala de cobro:  
//sueldo <= 202	 0% impuesto,  202 < sueldo <= 607 ? 5%,  607 < sueldo <= 1.013 ?10%, 1.013 < sueldo <= 1.418 ?15%, 1.418 < sueldo ? 25%


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char  *argv[]) {

	int sueldo;
	int impuesto=0;
	printf("Ingrese un Sueldo: ");
	scanf("%d", &sueldo);
	
	if(sueldo <= 202){
		impuesto = sueldo * 0;
	}else if(202 < sueldo && sueldo <= 607){
		impuesto = sueldo * 0.05;
	}else if(607 < sueldo && sueldo <= 1013){
		impuesto = sueldo * 0.10;
	}else if(1013 < sueldo && sueldo <= 1418){
		impuesto = sueldo * 0.15;
	}else if(1418 < sueldo){
		impuesto = sueldo * 0.25;
	}
	printf("El impuesto a pagar es :  %d", impuesto);
  return 0;
}
