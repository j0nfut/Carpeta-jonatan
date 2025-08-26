#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nota, x, n,m;
    x=1;
    n=0;
    while(x<=10)
    {
        printf("ingrese la nota: ");
        scanf("%i", &nota);

        if (nota >=7)
        {
           n= n+1;
        }
        else
        {
            m=m+1;
        }
        x=x+1;
    }
    printf("Hay %i, notas mayores \n", n);
    printf("Hay %i, notas inferiores", m);


}
