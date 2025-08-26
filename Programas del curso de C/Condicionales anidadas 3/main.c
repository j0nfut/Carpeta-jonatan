#include <stdio.h>
#include <conio.h>

int main()
{
    int numero;
    printf("ingrese el numero: ");
    scanf("%i", &numero);

    if(numero>0)
    {
        printf("El numero es Positivo");
    }
    else
    {
        if (numero==0)
        {
            printf("El numero es nulo");
        }
        else
        {
            printf("El numero es negativo");
        }
    }
    getch();
    return 0;
}
