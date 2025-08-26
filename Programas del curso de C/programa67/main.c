#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{

    int num_1, num_2;
    char operacion;
    printf("Ingrese el pimer valor:");
    scanf("%i", &num_1);
    printf("Ingrese el segundo valor:");
    scanf("%i", &num_2);

    printf("Selecciona la operacion:'+','-','*','/':");
    scanf(" %c", &operacion);
    if(operacion== '+')
    {
        printf("%i", num_1+num_2);
    }
    else if(operacion== '-')
    {
        printf("%i", num_1-num_2);
    }
    else if(operacion== '*')
    {
        printf("%i", num_1*num_2);
    }
    else if(operacion== '/')
    {
        printf("%i", num_1/num_2);
    }
    getch();
    return 0;
}
