#include <stdio.h>
#include <conio.h>

int main()
{
    int suma, cant, valor;
    float promedio;
    suma=0;
    cant=0;

    do
    {
        printf("Ingrese el valor: ");
        scanf("%i", &valor);
        if(valor!=0)
        {
            suma=suma+valor;
            cant= cant+1;
        }
    }while(valor!=0);
    if(cant!=0)
    {
        promedio = suma/cant;
        printf("El promedio es, %f", promedio);
    }
    else
    {
        printf("No se ingresaron valores.");
    }
    getch();
    return 0;

}
