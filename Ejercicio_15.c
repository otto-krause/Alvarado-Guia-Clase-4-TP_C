#include <stdio.h>
#include <stdlib.h>

void main ()

{
    int Num1=0, Num2=0, Num3=0;
    printf("Ingrese tres numeros");
    scanf("%d",&Num1);
    scanf("%d",&Num2);
    scanf("%d",&Num3);

    system ("cls");

    if (Num3>Num2 && Num2>Num1)
        {
        printf("Los numeros fueron ingresados de forma ascendente");
        }
    else
        {
        printf("Los numeros no fueron ingresados de forma ascendente");
        }
}
