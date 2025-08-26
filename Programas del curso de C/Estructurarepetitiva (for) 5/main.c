#include <stdio.h>
#include <conio.h>

int main()
{
    int x,n,valor,mayor;
    mayor=0;
    printf("Ingrese la cantidad de numeros: ");
    scanf("%i", &n);
    for(x=1; x<=n; x++)
    {
        printf("Ingrese el valor del numero: ");
        scanf("%i", &valor);
        if(valor >=1000)
        {
            mayor++;
        }

    }
    printf("Hay %i numeros mayores o iguales a 1000.", mayor);
    getch();
    return 0;
}
