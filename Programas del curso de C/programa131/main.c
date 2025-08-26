#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILAS 4
#define COLUMNAS 3
#define TAMANO 41

int cargar (char empleado [FILAS][TAMANO], int sueldo [FILAS][COLUMNAS])
{
    for(int f=0;f<FILAS;f++)
    {
         printf("Ingresa el nombre del empleado:");
         gets(empleado[f]);
        for(int c=0;c<COLUMNAS;c++)
        {
            printf("Ingresa el sueldo:");
            scanf("%i", &sueldo[f][c]);
            fflush(stdin);
        }
    }
}

void calcularsueldo(int sueldo [FILAS][COLUMNAS], int sueldotot[FILAS])
{

    for (int f=0;f<FILAS;f++)
    {
        int cant=0;
        for (int c=0;c<COLUMNAS;c++)
        {
            cant= cant+sueldo[f][c];
        }
        sueldotot[f]=cant;
    }
}
void totalpagado(char empleado [FILAS][TAMANO], int sueldotot[FILAS])
{
    printf("El total pagado a los empleados en los ultimos 3 meses\n");
    for(int f=0; f<FILAS;f++)
    {
        printf("%s - %i\n", empleado[f], sueldotot[f]);
    }
}
void empladomayor(char empleado [FILAS][TAMANO], int sueldotot[FILAS])
{
    char emple[TAMANO];
    int sueld=sueldotot[0];
    strcpy(emple, empleado[0]);
    for (int f=0;f<FILAS;f++)
    {
        if(sueldotot[f]> sueld)
        {
            sueld=sueldotot[f];
            strcpy(emple,empleado[f]);
        }
    }
    printf("El empleado com mayor sueldo fue, %s || %i", emple, sueld);
}

int main()
{
    char empleado [FILAS][TAMANO];
    int sueldo [FILAS][COLUMNAS];
    int sueldotot[FILAS];
    cargar(empleado, sueldo);
    calcularsueldo(sueldo, sueldotot);
    totalpagado(empleado, sueldotot);
    empladomayor(empleado, sueldotot);
    getch();
    return 0;
}
