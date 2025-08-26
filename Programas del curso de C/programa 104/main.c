#include <stdio.h>
#include <conio.h>

void cargar(int vec[6])
{
    for(int x=0;x<6;x++)
    {
        printf("Ingrese los sueldos:");
        scanf("%i",&vec[x]);
    }
}
void imprimir(int vec[6])
{
    printf("Los sueldos son\n");
    for(int x=0;x<6;x++)
    {
        printf("%i, ", vec[x]);

    }
}
void gastototal(int vec[6])
{
    float gasto=0;
    for(int x =0;x<6;x++)
    {
        gasto=gasto+vec[x];
    }
    printf("\nEl gasto en sueldos fue %f", gasto);
}

int main()
{
    int vector[6];
    cargar(vector);
    imprimir(vector);
    gastototal(vector);
    getch();
    return 0;
}
