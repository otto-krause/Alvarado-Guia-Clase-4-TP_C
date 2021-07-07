#include <stdio.h>
#include <stdlib.h>

void main ()

{
  int lado1=0, lado2=0, P=0, A=0;
  printf ("Ingrese los dos lados del rectangulo");
  scanf ("%d",&lado1);
  scanf ("%d",&lado2);

  system ("cls");

  P = 2*lado1 + 2*lado2;
  A = lado1 * lado2;

  printf ("El perimetro del rectangulo es de: \n%d\ny su area de: \n%d", lado1, lado2);
}
