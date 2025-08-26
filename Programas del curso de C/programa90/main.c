#include <stdio.h>
#include <conio.h>

void mayor(int v1,int v2)
{
    if (v1>v2)
    {
        printf("el valor %i es el mayor",v1);
    }
    else
    {
        printf("el valor %i es el mayor",v2);
    }

}
int main()
{
    int valor1;
    int valor2;
    printf("Ingrese el primer valor:");
    scanf("%i", &valor1);
    printf("Ingrese el segundo valor:");
    scanf("%i", &valor2);
    mayor(valor1, valor2);
    getch();
    return 0;

}
