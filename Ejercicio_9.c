#include <stdio.h>
#include <stdlib.h>

void main ()

{
    int Categoria=0, HorasTrabajadas=0, Sueldo=0;
    printf ("Ingrese la categoria del empleado ");
    scanf ("%s",&Categoria);
    printf ("Ingrese las horas trabajadas por el empleado ");
    scanf ("%d",&HorasTrabajadas);

    system ("cls");

    if (Categoria == "a" || "A")
        {
        Sueldo=HorasTrabajadas*200;
        }
    else
        {
        if (Categoria == "b" || "B")
            {
            Sueldo=HorasTrabajadas*180;
            }
        else
            {
            if (Categoria == "c" || "C")
                {
                Sueldo=HorasTrabajadas*150;
                }
            else 
                {
                Sueldo=HorasTrabajadas*0;
                }
            }
        }
    printf ("El sueldo del empleado es de; \n%d",Sueldo);
}
