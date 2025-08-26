#include <stdio.h>
#include <conio.h>

int promedio(int num_1,int num_2,int num_3)
{
    int suma=num_1+num_2+num_3;
    int prom;
    prom= suma/3;
    return prom;
}

int main()
{
    int valor1,valor2,valor3;
    printf("Ingrese el pirmer valor:");
    scanf("%i",&valor1 );
    printf("Ingrese el segundo valor:");
    scanf("%i",&valor2 );
    printf("Ingrese el tercer valor:");
    scanf("%i",&valor3 );
    printf("El promedio de los 3 numeros es, %i",  promedio(valor1,valor2,valor3));
    getch();
    return 0;
}
