#include <stdio.h>
#include <conio.h>
#include <string.h>
void cargar (char nombres[5][41])
{
    for (int f; f<5;f++)
    {
        printf("cargar los nombres del arreglo:");
        gets(nombres[f]);
    }
}
void imprimir (char nombres[5][41])
{
    printf("Listado de nombres.\n");
    for (int f=0; f<5;f++)
    {
        printf("%s\n", nombres[f]);
    }

}
void orden (char nombres[5][41])
{
    char aux [41];
    for(int k=0;k<4;k++)
    {
        for(int f=0;f<4;f++)
        {
            if (strcmp(nombres[f], nombres[f+1])>0)
            {
                strcpy(aux, nombres[f]);
                strcpy(nombres[f], nombres[f+1]);
                strcpy(nombres[f+1], aux);
            }
        }
    }
}

int main()
{
    char nombres[5][41];
    cargar(nombres);
    imprimir(nombres);
    printf("Ordenados alfabeticamente.\n");
    orden(nombres);
    imprimir(nombres);
    getch();
    return 0;
}
