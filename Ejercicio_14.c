#include <stdio.h>
#include <stdlib.h>

void main ()

{
    int Horas=0, Minutos=0, Segundos=0, UnidadFinal=0, Conversion=0;
    printf("Ingrese las horas ");
    scanf("%d",&Horas);
    printf ("Ingrese los minutos ");
    scanf("%d",&Minutos);
    printf ("Ingrese los segundos ");
    scanf("%d",&Segundos);
    printf ("Ingrese la unidad final ");
    scanf("%d",&UnidadFinal);

    system ("cls");

    if (UnidadFinal==1)
        {
        Conversion=Horas*3600+Minutos*60+Segundos;
        printf("El tiempo total es de: \n%d segundos",Conversion);
        }
    else 
        {
        if (UnidadFinal==2)
            {
            Conversion=Horas*60+Segundos/60+Minutos;
            printf("El tiempo total es de: \n%d minutos",Conversion);
            }
        else
            {
            Conversion=Segundos/3600+Minutos/60+Horas;
            printf("El tiempo total es de: \n%d horas",Conversion);
            }
        }
}
