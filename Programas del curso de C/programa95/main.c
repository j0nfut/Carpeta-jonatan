#include <stdio.h>
#include <conio.h>

void conteo(int valor)
{
    if (valor<0)
    {
        printf("Error");
    }
    else

    {
    int x;
    for (x=0; x<=valor; x++)
    {
        printf("%i-", x);
    }
    }
}
int main()
{

    conteo(-100);
    getch();
    return 0;
}
