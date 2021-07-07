#include <stdio.h>
#include <stdlib.h>

void main ()

{
    int Valor=0, V8=0;
    printf ("Ingrese un valor");
    scanf ("%d",&Valor);

    system ("cls");

    V8 = Valor/8;

    printf ("La octava parte del valor ingresado es de: \n%d", V8);
}
