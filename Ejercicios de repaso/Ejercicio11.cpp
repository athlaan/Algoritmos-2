// Un alumno desea saber cuál será su calificación final, dicha calificación se compone de los siguientes porcentajes:
/*55% 		del promedio final de sus calificaciones (de sus  3 evaluaciones parciales)
30% 		de la calificación de promedio
15% 		de la calificación de un trabajo final*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char  *argv[]) {

	int parcial1;
	int parcial2;
	int parcial3;
	int nota;
	int trabajoFinal;
	int Calificacion = 0;
	printf("Ingrese Nota del Primer Parcial: ");
	scanf("%d", &parcial1);
	//
	printf("Ingrese Nota del Segundo Parcial: ");
	scanf("%d", &parcial2);
	//
	printf("Ingrese Nota del Tercero Parcial: ");
	scanf("%d", &parcial3);
	//
	printf("Ingrese Nota: ");
	scanf("%d", &nota);
	//
	printf("Ingrese Nota del trabajo final: ");
	scanf("%d", &trabajoFinal);
	//
		
  	int promParcial = promParcial + (parcial1 + parcial2 + parcial3) / 3;
  	
  	Calificacion += promParcial * 0.55;
  	
  	Calificacion += nota * 0.30;
  	
  	Calificacion += trabajoFinal * 0.15;
  	
  	printf("La Calificacion es: %d", Calificacion);
  
  return 0;
  
}

