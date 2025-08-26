#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char nombre[20];
    char clave[10];

    printf("Ingrese el nombre:");
    gets(nombre);
    printf("Ingrese la clave:");
    gets(clave);

    if ( strcmp(clave, "abc123")== 0)
    {
        printf("Correcto");
    }
    else
    {
        printf("Incorrecto");
    }
    getch();
    return 0;

}
