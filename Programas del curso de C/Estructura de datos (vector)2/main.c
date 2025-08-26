#include <stdio.h>
#include <conio.h>

int main()
{
    int f,may,men;
    float alturas[5];
    float suma, prom;
    suma=0;
    may=0;
    men=0;
    for(f=0; f<5; f++)
    {
        printf("Ingrese las alturas: ");
        scanf("%f", &alturas[f]);

    }
    for(f=0; f<5; f++)
    {
        suma= suma+alturas[f];
    }
    prom= suma/5;
    printf("El primedio de altura es: %0.2f\n", prom);
     for(f=0; f<5; f++)
     {



    if (alturas[f]>=prom)
    {
        may++;
    }
    else
    {
        men++;
    }
     }
    printf("hay %i, alturas mayores 0 iguales al promedio.\n", may);
    printf("Hay %i, alturas menores al promedio.", men);
    getch();
    return 0;


}
