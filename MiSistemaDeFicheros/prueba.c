#include <stdio.h>
 
int main ()
{
  char cadena [100];
  printf ("Introduzca una cadena: ");
  fgets (cadena, 100, stdin);
  printf ("La cadena leída es: \"%s\"", cadena);
  printf("\n");
  return 0;
}