#include <stdio.h>
#include <conio.h>
#include <string.h>

void cargar(char producto[5][41], int precio [5])
{
    for(int f=0; f<5;f++)
    {
        printf("Ingrese el nombre del producto:");
        gets(producto[f]);
        printf("El precio del producto:");
        scanf("%i",&precio[f]);
        fflush(stdin);
    }
}
void  productomayor(char producto [5] [41], int precio [5])
{
    int cant=0;
    for(int f=0;f<5;f++)
    {
        if (precio[0]<precio[f])
        {
            cant++;
        }
    }
    printf("Hay %i protuctos mas caros que el primer producto.", cant);
}

int main()
{
    char producto [5][41];
    int precio[5];
    cargar(producto, precio);
    productomayor(producto, precio);
    getch();
    return 0;
}
