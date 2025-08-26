#include <stdio.h>
#include <conio.h>
#include <string.h>

void cargar(char producto[5][41], int precio [5])
{
    for(int f=0; f<4;f++)
    {
        printf("Ingrese el nombre del alumno:");
        gets(producto[f]);
        printf("La nota del Alumno:");
        scanf("%i",&precio[f]);
        fflush(stdin);
    }
}
void ordenar (char producto[5][41], int precio [5] )
{
    char auxnom[41];
    int auxnota;
    for (int k=0; k<4 ; k++)
    {

    for (int f=0; f<4-k;f++)
    {
        if(precio[f]< precio[f+1])
        {
            auxnota=precio[f];
            precio[f]=precio[f+1];
            precio[f+1]=auxnota;
            strcpy(auxnom, producto[f]);
            strcpy(producto[f], producto[f+1]);
            strcpy(producto[f+1], auxnom);
        }
        }
    }
}
void imprimir(char producto[5] [41], int precio[5])
{
    printf("Las notas ordenadas:");
    for (int f=0; f<5;f++)
    {
        printf("%s , %i\n", producto[f], precio[f]);
    }
}

int main()
{
    char producto [5][41];
    int precio[5];
    cargar(producto, precio);
    ordenar(producto, precio);
    imprimir(producto, precio);
    getch();
    return 0;
}
