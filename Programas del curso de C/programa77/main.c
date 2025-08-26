#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    char palabra[15];
    printf("Ingrese una palabra:");
    gets(palabra);

    if(palabra[0]== 'A')
    {
        printf("La parabra comienza con mayuscula.");
    }
    else if(palabra[0]== 'a')
    {
        printf("La parabra comienza con minuscula.");
    }
    getch();
    return 0;
}
