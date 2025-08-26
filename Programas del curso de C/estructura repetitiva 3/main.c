#include <stdio.h>
#include <conio.h>

int main()
{
    int x, suma, promedio, valor;
    x=1;
    suma=0;
    while(x<=10)
    {
        printf("ingrese el valor: ");
        scanf("%i", &valor);
        suma= suma+valor;
        x= x+1;
    }
    promedio= suma/10;
    printf("La suma de los valores es: %i \n", suma);
    printf("el promedio es %i", promedio);
    getch();
    return 0;
}
