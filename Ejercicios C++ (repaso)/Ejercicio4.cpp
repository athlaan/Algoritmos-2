#include <stdio.h>
#include <stdlib.h>

int main(int argc, char  *argv[]) {

	int Numero;
	int Numero2;
	printf("Inserte el Primer Numero:");
	scanf("%d", &Numero);
	
	printf("Inserte el Segundo Numero:");
	scanf("%d", &Numero2);
 
 	for (int i = Numero; i <= Numero2; i++){
 		if(i % 2 == 0){
 			printf("%d\n", i);
		 }
	 }
 	printf("\n");
  return 0;
}
