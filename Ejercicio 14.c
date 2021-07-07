#include <stdio.h>
#include <stdlib.h>

void main ()

{
    int Horas=0, Minutos=0, Segundos=0, UnidadFinal=0, Conversion=0;
    printf("Ingrese las horas, luego los minutos, luego los segundos y por ultimo la unidad final");
    scanf("%d",&Horas);
    scanf("%d",&Minutos);
    scanf("%d",&Segundos);
    scanf("%d",&UnidadFinal);

    system ("cls");

    if (UnidadFinal=1)
        {
        Conversion=Horas*3600+Minutos*60+Segundos;
        }
    else 
        {
        if (UnidadFinal=2)
            {
            Conversion=Horas*60+Segundos/60+Minutos;
            }
        else
            {
            Conversion=Segundos/3600+Minutos/60+Horas;
            }
        }
    printf("El tiempo total es de: \n%d",Conversion);
}
