#include <stdio.h>
#include <conio.h>
void cargar(int vector[5])
{
    printf("Cargar los valores de los vectores.\n");
    for(int x=0; x<5;x++)
    {
        printf("Cargar los valores:");
        scanf("%i", &vector[x]);
    }
}
void nuevovector(int vector1[5], int vector2[5], int vectorsuma[5])
{
    for(int x=0;x<5;x++)
    {
        vectorsuma[x]=vector1[x]+vector2[x];
    }
}
void imprimir(int vector[5])
{
    printf("Los vectores son:\n");
    for (int x=0;x<5;x++)
    {
        printf("%i- ", vector[x]);
    }
    printf("\n");
}

int main()
{
    int vector1[5];
    int vector2[5];
    int vectorsuma[5];
    cargar(vector1);
    cargar(vector2);
    nuevovector(vector1,vector2, vectorsuma);
    imprimir(vector1);
    imprimir(vector2);
    imprimir(vectorsuma);
    getch();
    return 0;
}
