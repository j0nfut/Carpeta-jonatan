#include <stdio.h>
#include <conio.h>

int main()
{
    int X,Y;
    printf("Ingrese el valor de X: ");
    scanf("%i", &X);
    printf("Ingrese el valor de Y: ");
    scanf("%i", &Y);
    if (X>0 && Y>0)
    {
        printf("Primer cuadrante");
    }
    else
    {
        if(Y>0 && X<0)
        {
            printf("Segundo cuadrante");
        }
        else
        {
            if(Y<0 && X<0)
            {
                printf("tercer cuadrante");
            }
            else
            {
                printf("Cuarto cuadrante");
            }
        }
    }
    getch();
    return 0;
}
