
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  
  int pesos;
  int dolar;
  int totalDelPago = 0;
  printf("Inserte Pesos: ");
  scanf("%d", &pesos);
  
  printf("Inserte Dolar actual: ");
  scanf("%d", &dolar);
  
  int pago = pesos / dolar;
  
  totalDelPago = totalDelPago + pago;
  
  printf("Valor a dolares: %d", totalDelPago);
  
  return 0;
}
