#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    char oracion[200];
    printf("Ingrese oracion:");
    gets(oracion);
    int x=0;
    int cant=0;
    while(oracion[x] != '\0' )
    {
        if (oracion[x]== 32)
        {
            cant++;
        }
        x++;
    }
    printf("La cantidad de palabras en la oracion es, %i", cant+1);
    getch();
    return 0;
}
