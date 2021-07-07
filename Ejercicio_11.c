#include <stdio.h>
#include <stdlib.h>

void main ()

{
    int P=0, A=0, IMC=0;
    printf("Ingrese su peso ");
    scanf("%d",&P);
    printf ("Ingrese su altura ");
    scanf("%d",&A);

    system ("cls");

    IMC=P/(A*A);

    if (IMC>25)
        {
        printf("La persona se encuentra excedida de peso");
        }
    else 
        {
        if(IMC>=20)
            {
            printf("La persona se encuentra en su pedo ideal");
            }
        else 
            {
            printf("La persona se encuentra por debajo de su peso ideal");
            }
        }
}
