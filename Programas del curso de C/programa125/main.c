#include <stdio.h>
#include <conio.h>
#include <string.h>

void cargar(char nombres[5][41], int edad[5])
{
    for(int f=0;f<5;f++)
    {
        printf("Ingrese el nombre:");
        gets(nombres[f]);
        printf("Ingrese la edad:");
        scanf("%i",&edad);
        fflush(stdin);
    }
}
void mayores (char nombres[5][41], int edad[5])
{
    printf("Personas mayores de edad\n");
    for(int f=0;f<5;f++)
    {
        if(edad[f]>=18);
        {
            printf("%s\n", nombres[f]);
        }
    }
}
int main()
{
    char nombres[5][41];
    int edad [5];
    cargar(nombres, edad);
    mayores(nombres, edad);
    getch();
    return 0;
}
