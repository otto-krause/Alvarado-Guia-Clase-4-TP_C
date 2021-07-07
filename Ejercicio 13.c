#include <stdio.h>
#include <stdlib.h>

void main ()

{
    int Valor1=0,Valor2=0,Valor3=0;
    printf("Ingrese tres valores");
    scanf("%d",&Valor1);
    scanf("%d",&Valor2);
    scanf("%d",&Valor3);

    system ("cls");

    if (Valor1==Valor2 & Valor1==Valor3)
        {
        printf("Los tres valores son iguales");
        }
    else 
        {
        if(Valor2=Valor3 & Valor1!=Valor2)
            {
            printf("El primer valor es distinto a los otros dos iguales");
            }
        else 
            {
            if (Valor1==Valor3 & Valor2!=Valor1)
                {
                printf("El segundo valor es distinto a los otros dos iguales");
                }
            else 
                {
                printf("Todos los valores son distintos");
                }
            }
        }
}
