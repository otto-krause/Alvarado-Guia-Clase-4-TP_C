#include <stdio.h>
#include <stdlib.h>

void main ()

{
    int Categoria=0, HorasTrabajadas=0, Sueldo=0;
    printf ("Ingrese la categoria del empleado y luego sus horas trabajadas");
    scanf ("%d",&Categoria);
    scanf ("%d",&HorasTrabajadas);

    system ("cls");

    if (Categoria=1)
        {
        Sueldo=HorasTrabajadas*200;
        }
    else
        {
        if (Categoria=2)
            {
            Sueldo=HorasTrabajadas*180;
            }
        else
            {
            Sueldo=HorasTrabajadas*0;
            }
        }
    printf ("El sueldo del empleado es de; \n%d",Sueldo);
}
