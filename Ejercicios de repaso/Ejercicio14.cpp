/*Generar el valor absoluto de un número dado como entrada.
Valor absoluto o módulo1 de un número real es su valor numérico sin tener en cuenta su signo, sea este positivo (+) o negativo (-). 
Así, por ejemplo, 3 es el valor absoluto de +3 y de -3.
El valor absoluto está relacionado con las nociones de magnitud, distancia y norma en diferentes contextos matemáticos y físicos.*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  
  int num;
  printf("Ingrese un Numero: ");
  scanf("%d", &num);
  
  if(num < 0){
  	num * -1;
  }else if(num > 0){
  	num * 1;
  }
  printf("El valor absoluto es : %d", num);	
  return 0;
}

