#include <stdio.h>

int main(void) {
  char respuesta;

  printf("Ingrese al menú que necesite: \n\nFacturar producto (a)\nImprimir factura (b)\nSalir (c)\n\n> ");
  scanf("%c",&respuesta);

  do{
    switch ( respuesta ){
      case 'a':
        printf("Estas en el menu de Facturar producto\n\n");
        respuesta ='c';
        break;
      case 'b':
        printf("Estas en el menu de Imprimir factura");
        break;
      case 'c':
        printf("Adios\n\n");
        break;
      default:
        printf("Opcion NO valida");
    }
  }while (respuesta != 'c');
  
}