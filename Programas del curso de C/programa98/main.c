#include <stdio.h>
#include <conio.h>

int retornarMayor(int v1, int v2)
{
    int mayor;
    if (v1>v2)
    {
        mayor=v1;
    }
    else
    {
        mayor=v2;
    }
    return mayor;
}

int main()
{
    int valor1,valor2;
    printf("ingrese valor 1:");
    scanf("%i", &valor1);
    printf("ingrese valor 2:");
    scanf("%i", &valor2);
    printf("El valor mas grande es, %i",retornarMayor(valor1, valor2) );
    getch();
    return 0;
}
