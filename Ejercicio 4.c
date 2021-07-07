#include <stdio.h>
#include <stdlib.h>

void main ()

{
    int F=0, S=0, P=0;
    printf ("Ingrese la fuerza ejercida y luego la superficie en la que es ejercida aquella fuerza");
    scanf ("%d",&F);
    scanf ("%d",&S);

    system ("cls");

    P = F/S;

    printf ("La presion que se ejerce en la superficie es de: \n&d", P);
}
