#include <stdio.h>
#include <conio.h>

int main()
{
    int x,valor,num3,num5;
    num3=0;
    num5=0;
    for(x=1; x<=10; x++)
    {
        printf("ingrese el valor: ");
        scanf("%i", &valor);
        if(valor%3==0)
        {
            num3++;
        }

        if(valor%5==0)
        {
            num5++;
        }

    }
    printf("hay %i multiplos de 5", num5);
    printf("Hay %i multiplos de 3", num3);
    getch();
    return 0;
}
