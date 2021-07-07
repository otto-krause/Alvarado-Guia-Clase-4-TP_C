#include <stdio.h>
#include <stdlib.h>

void main ()

{
    int Edad=0, Horas=0, ValorNeto=0, ImporteTotal=0;
    printf ("Ingrese su edad ");
    scanf ("%d",&Edad);
    printf ("Ingrese sus horas de servicio adquiridas ")
    scanf ("%d",&Horas);

    system ("cls");

    if (Edad >= 70)
        {
        ValorNeto = Horas*50-Horas*50*0.50;
        ImporteTotal = ValorNeto+ValorNeto*0.33;
        }
    else {
        if (Edad >= 60)
            {
            ValorNeto = Horas*50-Horas*50*0.30;
            ImporteTotal = ValorNeto+ValorNeto*0.33;
            }
        else {
            if (Edad >= 50)
                {
                ValorNeto = Horas*50-Horas*50*0.20;
                ImporteTotal = ValorNeto+ValorNeto*0.33;
                }
            else {
                ValorNeto = Horas*50;
                ImporteTotal = ValorNeto+ValorNeto*0.33;
                }
            }
        }
        printf ("Su importe total es de: \n%d\ny su importe total sin impuestos es de: \n%d", ImporteTotal, ValorNeto);
}
