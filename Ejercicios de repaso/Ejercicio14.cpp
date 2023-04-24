/*Generar el valor absoluto de un n�mero dado como entrada.
Valor absoluto o m�dulo1 de un n�mero real es su valor num�rico sin tener en cuenta su signo, sea este positivo (+) o negativo (-). 
As�, por ejemplo, 3 es el valor absoluto de +3 y de -3.
El valor absoluto est� relacionado con las nociones de magnitud, distancia y norma en diferentes contextos matem�ticos y f�sicos.*/

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

