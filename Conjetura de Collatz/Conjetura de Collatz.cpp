#include <stdio.h>
#include <stdlib.h>

int main(void){
	int a;
	//int numero = 0;
	printf("Ingrese Un Numero: ");
	scanf("%d", &a);
	
	while(a != 1){
		if(a % 2 == 0){ //Si es el Numero es Par
			a = a/2;
		} else if(a % 2 != 0 && a != 1){ //Si el Numero es Impar y es Distinto que 1
				a = a * 3 + 1;
		}
		printf("Numero: %d\n", a); // Imprimir los Numeros
	}	



}





/*	do{
	
	if(a % 2 == 0){
		a = a/2;
	}else if(a != 1 && a % 2 != 0){
		a = a * 3 + 1;
	}
	printf("Numero: %d\n", a);

}while(a != 1);*/

