#include <stdio.h>
#include <conio.h>

int main()
{
    int vec[8];
    int f;
    int mayor36=0;
    int suma=0;
    int cant=0;
    for(f=0; f<8; f++)
    {
        printf("ingrese elemento: ");
        scanf("%i", &vec[f]);
    }

    for(f=0; f<8; f++)
    {
        suma= suma+vec[f];
    }
    printf("La suma de los 8 elementos es %i \n", suma);

    for(f=0; f<8; f++)
    {

    if (vec[f] > 36)
        {
            mayor36= mayor36+vec[f];
        }

    }
    printf("El valor acumulado de los numeros mayores a 36 es %i \n", mayor36);

    for(f=0; f<8; f++)
    {


    if (vec[f] > 50)
        {
            cant++;
        }
    }
    printf("El valor acumulado de los numeros mayores a 50 es %i\n", cant);
    getch();
    return 0;
}

