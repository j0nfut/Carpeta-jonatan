#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cargar (char pais[5][41], int poblacion[5])
{
    for(int f=0;f<5;f++)
    {
        printf("ingrese los paises:");
        gets(pais[f]);
        printf("Ingrese la poblacion del pais:");
        scanf("%i", &poblacion[f]);
        fflush(stdin);

    }
}

void ordenar (char pais[5][41], int poblacion[5])
{
    char aux[41];
    int auxabitantes;
    for (int k=0;k<4;k++)
    {
        for (int f=0;f<4-k;f++)
        {
            if(strcmp(pais[f],pais[f+1])>0)
            {
                strcpy(aux, pais[f]);
                strcpy(pais[f], pais[f+1]);
                strcpy(pais[f+1],aux);
                auxabitantes=poblacion[f];
                poblacion[f]=poblacion[f+1];
                poblacion[f+1]=auxabitantes;
            }
        }
    }
}
void ordenar2 (char pais[5][41], int poblacion[5])
{
    char aux[41];
    int auxabitantes;
    for (int k=0;k<4;k++)
    {
        for (int f=0;f<4-k;f++)
        {
            if(poblacion[f]<poblacion[f+1])
            {
                strcpy(aux, pais[f]);
                strcpy(pais[f], pais[f+1]);
                strcpy(pais[f+1],aux);
                auxabitantes=poblacion[f];
                poblacion[f]=poblacion[f+1];
                poblacion[f+1]=auxabitantes;
            }
        }
    }
}


void imprimir(char pais[5][41], int poblacion[5])
{
    for (int f=0;f<5;f++)
    {
        printf("%s || %i\n", pais[f], poblacion[f]);
    }
}

int main()
{
    char pais [5][41];
    int poblacion[5];
    cargar(pais, poblacion);
    ordenar(pais, poblacion);
    printf("Ordenado Alfabeticamente.\n");
    imprimir(pais, poblacion);
    printf("Ordenado por poblacion.\n");
    ordenar2(pais, poblacion);
    getch();
    return 0;
}
