#include <stdio.h>
#include <stdlib.h>

int main()
{
      int numero;
    printf("ingrese el numero de 0-1000: ");
    scanf("%i", &numero);

    if(numero>99)
    {


       if(numero>990)

        {
            printf("El numero es mayor.");
        }
        else
        {
            printf("El numero es de 3 cifras");

        }
    }
    else
    {
        if (numero<10)
        {
            printf("El numero es de 1 Cifra");
        }
        else
        {
            printf("El numero es de dos cifras");
        }
    }
    getch();
    return 0;;
}
