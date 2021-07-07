#include <stdio.h>
#include <stdlib.h>

void main ()

{
    int SB=0, C=0, NDH=0, APH=0, SF=0;
    printf ("Ingrese el sueldo basico del empleado ");
    scanf ("%d",&SB);
    printf ("Ingrese la categoria del empleado ");
    scanf ("%d",&C);
    printf ("Ingrese la cantidad de hijos que posee el empleado ");
    scanf ("%d",&NDH);

    system ("cls");

    switch (C)
    {
    case 1:
        if (NDH>4)
            {
            APH=NDH*300+200;
            SF=SB+SB*0.10+APH;
            }
        else{
            APH=NDH*300;
            SF=SB+SB*0.10+APH;
            }
        break;
    
    case 2:
        if (NDH>4)
            {
            APH=NDH*300+200;
            SF=SB+SB*0.20+APH;
            }
        else{
            APH=NDH*300;
            SF=SB+SB*0.20+APH;
            }
        break;

    default:
        if (NDH>4)
            {
            APH=NDH*300+200;
            SF=SB+APH;
            }
        else{
            APH=NDH*300;
            SF=SB+APH;
            }
        break;
    }
    printf ("Su sueldo final es de: \n%d",SF);
}
