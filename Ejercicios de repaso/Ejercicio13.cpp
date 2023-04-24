//Una tienda ofrece un descuento del 15% sobre el total de la compra, y un cliente desea saber cuánto deberá pagar finalmente por su compra.



#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  
  int totalDeCompra;
  int descuentoAplicado = 0;
  printf("Introduzca El Total de la Compra: ");
  scanf("%d", &totalDeCompra);
  
  descuentoAplicado = totalDeCompra * 0.15;
  
  totalDeCompra = totalDeCompra - descuentoAplicado;
  
  printf("Debe pagar : %d", totalDeCompra);
  
  return 0;
}
