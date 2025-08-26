#include <stdio.h>
#include <conio.h>

int superficie(int lado_1,int lado_2)
{
    int super= lado_1*lado_2;
    return super;
}

int main()
{
    int lado_1,lado_2,lado_3,lado_4;

    printf("Ingresa la base del rectangulo 1:");
    scanf("%i", &lado_1);
    printf("Ingresa la altura del rectangulo 1:");
    scanf("%i", &lado_2);
    printf("Ingresa la base del rectangulo 2:");
    scanf("%i", &lado_3);
    printf("Ingresa la altura del rectangulo 2:");
    scanf("%i", &lado_4);
    if (superficie(lado_1,lado_2)== superficie(lado_3,lado_4))
    {
        printf("Los rectangulos tiene la misma superficie");
    }
    else
    {
        if(superficie(lado_1,lado_2)> superficie(lado_3,lado_4))
        {
            printf("El primer rectangulo es mayor");
        }
        else
        {
            printf("El segundo rectangulo es mayor");
        }
    }

    getch();
    return 0;
}
