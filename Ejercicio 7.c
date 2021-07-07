#include <stdio.h>
#include <stdlib.h>

void main ()

{
    int num1=0, num2=0;
    printf ("Ingrese el primer numero y luego el segundo");
    scanf ("%d",&num1);
    scanf ("%d",&num2);

    system ("cls");

    if (num1 == num2)
        {
        printf("Ambos numeros son iguales");
        }
    else
        {
        if (num1 > num2)
            {
            printf("El primer numero es mayor al segundo");
            }
        else
            {
            printf("El segundo valor es mayor al primero");
            }
        }
}
