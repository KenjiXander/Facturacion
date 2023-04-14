#include <stdio.h>

int main(void) {

  char respuesta;

  printf("Ingrese al menú que necesite: \n\nFacturar producto (a)\nImprimir factura (b)\nSalir (c)\n\n> ");
  scanf("%c",&respuesta);

  do
    switch ( respuesta ){
      case 'a':
        printf("Estas en el menu de Facturar producto\n\n");
        printf("Elija uno de los siguientes productos: \n\nLlantas - Precio: $150 (a)\nKit Pastillas de freno - Precio: $55 (b)");
        break;
      case 'b':
        printf("Estas en el menu de Imprimir factura");
        break;
      case 'c':
        printf("Adios\n\n");
        break;
      default:
        printf("Opcion NO valida");
        printf(respuesta);
    }
  while (respuesta);
  
}