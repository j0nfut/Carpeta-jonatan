#include <stdio.h>
#include <conio.h>

void menor()
{
    int valor1,valor2,valor3;
    printf("ingrese el primer valor:");
    scanf("%i", &valor1);
    printf("ingrese el primer valor:");
    scanf("%i",&valor2);
    printf("ingrese el primer valor:");
    scanf("%i", &valor3);
    if(valor1<valor2 && valor1<valor3)
    {
        printf("%i es el menor de todos.\n", valor1);
    }
    else
    {
        if (valor2<valor3)
        {
            printf("%i es el menor de todos.\n", valor2);
        }
        else
        {
             printf("%i es el menor de todos.\n", valor3);
        }
    }

    printf("---------------------------------------------------\n");
}
int main()
{
    menor();
    menor();
    getch();
    return 0;
}
