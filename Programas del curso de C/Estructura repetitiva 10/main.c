#include <stdio.h>
#include <conio.h>

int main()
{
    int x,y,n, valores1,valores2,total_1,total_2;
    x=0;
    y=0;
    total_1=0;
    total_2=0;
    n=5;
    printf("-----LISTA I-------\n");
    while(x<=n)
    {
        printf("ingrese el valor: ");
        scanf("%i", &valores1);
        total_1= total_1 + valores1;
        x=x+1;
    }
    printf("-----LISTA II-------\n");
    while(y<=n)
    {
         printf("ingrese el valor: ");
        scanf("%i", &valores2);
        total_2= total_2+ valores2;
        y=y+1;
    }
    if(total_1>total_2)
    {
        printf("lista 1 es mayor");
    }
    else
    {
        printf("Lista 2 es mayor");
    }
    getch();
    return 0;
}
