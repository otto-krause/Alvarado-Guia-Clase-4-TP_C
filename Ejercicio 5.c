#include <stdio.h>
#include <stdlib.h>

void main ()

{
    int R1=0, R2=0, R3=0, R4=0, R5=0, RT=0;
    printf ("Ingrese las cinco resistencias");
    scanf ("%d",&R1);
    scanf ("%d",&R2);
    scanf ("%d",&R3);
    scanf ("%d",&R4);
    scanf ("%d",&R5);

    system ("cls");

    RT=R1+R2+R3+R4+R5;

    printf ("Los numeros ingresados son: \n&d\n&d\n&d\n&d\n&d\ny la suma de ellos es de: \n&d", R1, R2, R3, R4, R5, RT);
}
