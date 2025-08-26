#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    char vocales[30];
    printf("Ingrese una palabra en minuscula:");
    gets(vocales);
    int cantidad;
    int x=0;
    while( vocales[x]!='\0')
    {
        if (vocales[x]== 'a' || vocales[x]== 'e' || vocales[x]== 'i' || vocales[x]== 'o' || vocales[x]== 'u' )
        {
            cantidad++;
        }
        x++;
    }
    printf("La cantidad de vocales que tiene la palabra %s es %i", vocales, cantidad);
    getch();
    return 0;

}
