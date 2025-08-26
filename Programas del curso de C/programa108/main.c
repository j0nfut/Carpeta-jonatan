#include <stdio.h>
#include <conio.h>

void cargar(int vector[8])
{
    for(int x=0; x<8;x++)
    {
        printf("Ingrece los valores del vector:");
        scanf("%i", &vector[x]);
    }
}

int suma(int vector[8])
{
    int sum;
    for(int x=0; x<8;x++)
    {
        sum= sum+vector[x];
    }
    return sum;
}

int sumamayores36(int vector[8])
{
    int sum;
    for(int x=0; x<8; x++)
    {
        if (vector[x] > 36)
        {
            sum= sum+vector[x];
        }
    }
    return sum;
}
int sumamayores50(int vector[8])
{
    int sum =0;
    for(int x=0; x<8; x++)
    {
        if (vector[x] > 50)
        {
            sum++;
        }
    }
    return sum;
}
int main()
{
    int vector[8];
    cargar(vector);
    printf("La suma de los valores del vector, %i\n", suma(vector));
    printf("La suma de los valores del vector mayores a 36, %i\n", sumamayores36(vector));
    printf("La cantidad de componentes del vector mayores a 50, %i\n", sumamayores50(vector));
    getch();
    return 0;
}
