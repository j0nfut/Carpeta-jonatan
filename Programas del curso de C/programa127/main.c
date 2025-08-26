#include <stdio.h>
#include <conio.h>
#include <string.h>

void cargar(char producto[4][41], int precio [4])
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
int listado(char producto[4][41], int precio [4])
{
    int cant=0;

    printf("Nombre||Calificacion\n");
    for(int f=0; f<4;f++)
    {
         if (precio[f]>= 8)
         {
             printf("Muy bueno || ");
             cant++;
         }
         else
         {
             if(precio[f]<=7 && precio[f]>=4)
             {
                 printf("bueno || ");
             }
             else
             {
                 printf("insuficiente || ");
             }
         }

        printf("%s || %i\n",producto[f], precio[f]);

    }
    return cant;
}
void calificacion(int cant)
{
    printf("La cantidad de notas 'Muy bueno' son, %i ", cant);
}


int main()
{
    char producto [4][41];
    int precio[4];
    cargar(producto, precio);
    listado(producto, precio);
    int cant = listado(producto,precio);
    calificacion(cant);
    getch();
    return 0;
}
