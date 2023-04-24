//Un maestro desea saber qué porcentaje de hombres y que porcentaje de mujeres hay en un grupo de estudiantes.



#include <stdio.h>
#include <stdlib.h>

int main(int argc, char  *argv[]) {
 
	int alumnos;
	int hombres;
	int mujeres;
	int porcentajeHombres = 0;
	int porcentajeMujeres = 0;
	printf("Ingrese la Cantidad de Alumnos: ");
	scanf("%d", &alumnos);
	//
	printf("Ingrese la Cantidad de Hombres: ");
	scanf("%d", &hombres);
	//
	printf("Ingrese la Cantidad de Mujeres: ");
	scanf("%d", &mujeres);

	porcentajeHombres = porcentajeHombres + ((hombres * 100) / alumnos);
	porcentajeMujeres = porcentajeMujeres + ((mujeres * 100) / alumnos);
	
	printf("Porcentaje de Hombres: %d y Porcentaje de Mujeres: %d", porcentajeHombres, porcentajeMujeres);

  return 0;
}
