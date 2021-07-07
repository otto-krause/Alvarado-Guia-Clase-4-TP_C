#include <stdio.h>
#include <stdlib.h>

void main ()

{
    int PH=0, P=0, PPH=0, PPM=0;
    printf ("Ingrese el numero de postulantes hombres y luego el numero total de postulantes");
    scanf ("%d",&PH);
    scanf ("%d",&P);

    system ("cls");

    PPH = PH*100/P;
    PPM = 100 - PPH;

    printf ("El porcentaje de hombres postulantes es de: \n%d\ny el porcentaje de mujeres postulantes es de: \n%d", PPH, PPM);
}
