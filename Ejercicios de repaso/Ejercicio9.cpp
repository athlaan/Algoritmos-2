//Una persona tiene 50 años, y su hijo 20.  ¿Dentro de cuántos años la edad del padre será el doble que la de su hijo?

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char  *argv[]) {
 
	int persona = 50;
	int hijo = 20;
	int cantidadEdad = 0;
	
	while(persona != 2*hijo){
		persona++;
		hijo++;
		cantidadEdad++;
	}
	printf("Dentro de %d años, el padre va a tener el doble de edad que su hijo", cantidadEdad);
	
  return 0;
}
