#include <stdio.h>
#include <conio.h>

int main()
{
    int x,suma, valor;
    suma=0;
    for(x=1;x<=10; x++)
    {
        printf("Ingrese el valor: ");
        scanf("%i", &valor);

        if (x>5)
        {
            suma= valor+suma;
        }

    }
    printf("La suma de los ultimos valores es: %i", suma);
    getch();
    return 0;
}
