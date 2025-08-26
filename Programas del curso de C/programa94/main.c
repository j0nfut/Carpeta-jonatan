#include <stdio.h>
#include <conio.h>

void mayor(int num_1, int num_2, int num_3)
{
    if (num_1>num_2 && num_1>num_3)
    {
        printf("%i es el mayor", num_1);
    }
    else
    {
        if(num_2>num_3)
        {
             printf("%i es el mayor", num_2);
        }
        else
        {
              printf("%i es el mayor", num_3);
        }
    }
}

int main()
{
    int valor1,valor2,valor3;
    printf("Ingrese el primer valor:");
    scanf("%i", &valor1);
    printf("Ingrese el segundo valor:");
    scanf("%i", &valor2);
    printf("Ingrese el tercer valor:");
    scanf("%i", &valor3);
    mayor(valor1, valor2, valor3);
    getch();
    return 0;
}
