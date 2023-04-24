#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
	
	int mes;
	int dia[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	printf("Ingrese Numero de Mes: ");
	scanf("%d", &mes);
	
	printf("Dia del Mes: %d", dia[mes - 1]);
	
	return 0;
}
