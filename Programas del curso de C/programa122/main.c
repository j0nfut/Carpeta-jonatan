#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <conio.h>
#include <string.h>

void cargar(int mat [5][41])
{
    for (int f=0; f<5;f++)
    {
            printf("Cargar los nombres:");
            gets(mat[f]);
    }
}
void imprimir(int mat [5][41])
{
    for (int f=0; f<5;f++)
    {
            printf("%s\n", mat[f]);
    }
}
void consulta(int mat [5][41])
{
    char nombre[41];
    int existe=0;
    printf("Ingrese el nombre a buscar:");
    gets(nombre);
    for (int f=0; f<5;f++)
    {
        if (strcmp(nombre,mat[f])==0)
        {
            existe=1;
        }

    }
    if (existe==1)
    {
        printf("El nombre se encuentra en la lista.");
    }
    else
    {
        printf("El nombre no se encuentra.");
    }
}
int main()
{
    int mat [5][41];
    cargar(mat);
    printf("Listado de nombres.\n");
    imprimir(mat);
    consulta(mat);
    getch();
    return 0;
}
