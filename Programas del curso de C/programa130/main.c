#include <stdio.h>
#include <conio.h>

#define TAMANO 5
#define FINPROGRAMA "Gracias por utilizar el progama"

void cargar (int sueldo [TAMANO])
{
    for (int f=0; f<TAMANO; f++)
    {
        printf("Ingrese el sueldo:");
        scanf("%i", &sueldo[f]);
    }
}

void imprimir (int sueldo [TAMANO])
{
   printf("Listado de sueldos\n");
    for (int f=0; f<TAMANO; f++)
    {
        printf("%i\n", sueldo[f]);

    }
}
int main()
{
    int sueldo [TAMANO];
    cargar(sueldo);
    imprimir(sueldo);
    printf(FINPROGRAMA);
    getch();
    return 0;
}
