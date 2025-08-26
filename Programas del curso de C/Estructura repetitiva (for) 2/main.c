#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,n, valores;
    float promedio;
    n=0;
    for(x=1; x<=10 ; x=x+1)
    {
        printf("Ingrese los valores: ");
        scanf("%i", &valores);
        n=n+valores;
    }
    promedio= n/10;
    printf("El promedio de los valores es, %f\n", promedio);
    printf("La suma es, %i", n);
    getch();
    return 0;
}
