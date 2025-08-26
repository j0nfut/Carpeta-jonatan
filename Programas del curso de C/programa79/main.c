#include <stdio.h>
#include <string.h>
#include <conio.h>
int main()
{
    char palabra[20];
    printf("Ingresa una palabra:");
    gets(palabra);
    int cant= strlen(palabra);
    printf("La palabra %s tiene %i letras.", palabra, cant);
    getch();
    return 0;
}
