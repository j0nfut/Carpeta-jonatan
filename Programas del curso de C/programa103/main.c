#include <stdio.h>
#include <conio.h>

void cargar(int vec[5])
{
    for (int x=0;x<5;x++)
    {
    printf("Ingrese los datos del vector:");
    scanf("%i", &vec[x]);
    }
}

void imprimir(int vec[5])
{
    printf("El contenido del vector\n");
     for (int x=0;x<5;x++)
    {
    printf("%i ", vec[x]);

    }
}

int main()
{
    int vector[5];
    cargar(vector);
    imprimir(vector);
    return 0;
}
