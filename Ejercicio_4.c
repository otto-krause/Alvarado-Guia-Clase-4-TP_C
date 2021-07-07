#include <stdio.h>
#include <stdlib.h>

void main ()

{
    int F=0, S=0, P=0;
    printf ("Ingrese la fuerza ejercida sobre la superficie ");
    scanf ("%d",&F);
    printf ("Ingrese la superficie sobre la que se ejerce la fuerza ");
    scanf ("%d",&S);

    system ("cls");

    P = F/S;

    printf ("La presion que se ejerce sobre la superficie es de: \n&d", P);
}
