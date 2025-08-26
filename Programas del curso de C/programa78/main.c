#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    char palabra[20];
    printf("Ingrese palabra en minuscula:");
    gets(palabra);
    int x=0;

    while(palabra[x]!= '\0')
    {
        if (palabra[x]== 'a'|| palabra[x]== 'e' || palabra[x]== 'i' || palabra[x]== 'o' || palabra[x]== 'u')
        {
         palabra[x]= '-';
        }


        x++;
    }
    printf("la palabra trasformada es, %s", palabra);
    getch();
    return 0;
}
