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
   strcpy(aux, nombres[0]);
        for(int f=0;f<4;f++)
        {
            if (strcmp(nombres[f], nombres[f+1])>0)
            {

                strcpy(nombres[f],aux);

            }
        }
    printf("El menor alfabeticamente es %s", aux);
}

int main()
{
    char nombres[5][41];
    cargar(nombres);
    imprimir(nombres);
    orden(nombres);
    getch();
    return 0;
}
