#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    char palabra[25];
    printf("Ingrese una palabra:");
    gets(palabra);

    int x=0;
    while(palabra[x]!= '\0')
    {
        x++;
    }
    printf("La palabra %s, tiene %i letras.", palabra, x);
    getch();
    return 0;
}
