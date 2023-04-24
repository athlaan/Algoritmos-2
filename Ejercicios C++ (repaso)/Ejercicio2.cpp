#include <stdio.h>
#include <stdlib.h>

int main(int argc, char  *argv[]) {
  int comision = 0;
  int Sueldo;
  int Articulo1;
  int Articulo2;
  int Articulo3;
  printf("Sueldo Base:");
  scanf("%d", &Sueldo);
  
  printf("Articulo1:");
  scanf("%d", &Articulo1);
  comision = comision + Articulo1*0.10;
 
  printf("Articulo2:");
  scanf("%d", &Articulo2);
  comision = comision + Articulo2*0.10;
 
  printf("Articulo3:");
  scanf("%d", &Articulo3);
  comision = comision + Articulo3*0.10;
 	
	 
	printf("La comision ganada en el mes es: %d\n", comision);
 	printf("La Ganancia total del mes es de: %d", comision + Sueldo);
  
  return 0;
}
