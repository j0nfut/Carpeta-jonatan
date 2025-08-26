#include <stdio.h>
#include <conio.h>

int main()
{
    int x,n, valor, pares, impares;
    x=1;
    pares=0;
    impares=0;
    printf("cuantos numeros ingresara? ");
    scanf("%i", &n);
    while(x<=n)
    {
        printf("Ingrese el valor: ");
        scanf("%i", &valor);
        if(valor%2==0)
        {
            pares= pares+1;
        }
        else
        {
           impares=impares+1;
        }
        x=x+1;
    }
    printf("Hay %i numeros pares\n", pares);
    printf("Hay %i numeros impares", impares);
    getch();
    return 0;
}
