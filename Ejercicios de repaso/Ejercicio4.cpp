#include <stdio.h>
#include <stdlib.h>

int main(int argc, char  *argv[]) {

	int prueba1;
	int prueba2;
	int prueba3;
	int prueba4;
	int NotaPrueba = 0;
	int tarea;
	int notaFinal = 0;
	
	printf("Ingrese Nota de la Primera Prueba: ");
	scanf("%d", &prueba1);
	//
	printf("Ingrese Nota de la Segunda Prueba: ");
	scanf("%d", &prueba2);
	//
	printf("Ingrese Nota de la Tercera Prueba: ");
	scanf("%d", &prueba3);
	//
	printf("Ingrese Nota de la Cuarta Prueba: ");
	scanf("%d", &prueba4);
	//
	printf("Ingrese Nota de la Tarea: ");
	scanf("%d", &tarea);
	//
	NotaPrueba = NotaPrueba + (prueba1 + prueba2 + prueba3 + prueba4) / 4;
	
	notaFinal = notaFinal + (NotaPrueba + tarea) / 2;
	
	if(notaFinal >= 6){
		printf("El alumno aprobo con : %d", notaFinal);
	}else{
		printf("El alumno no aprobo");
	}
  return 0;
}
