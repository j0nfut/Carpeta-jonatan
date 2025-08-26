#include <stdio.h>
#include <conio.h>

int main()
{
    int numero;
    printf("Ingrese el numero: ");
    scanf("%i", &numero);
    if (numero> 9)
    {
        printf("El numero es de dos digitos.");


    }

    else
    {
        printf("el numero es de 1 digito.");
    }
    getch();
    return 0;
}
