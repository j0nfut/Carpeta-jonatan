#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    int suma =0;
    int valor;
    char continua;
    do {
        printf("Ingrese un valor entero: ");
        scanf("%i", &valor);
        suma = suma+valor;
        printf("Desea cargar otro valor [s/n]\n");
        scanf(" %c", &continua);
    } while (continua =='s');
    printf("La suma de los valores ingresados es: %i", suma);
    getch();
    return 0;
}
