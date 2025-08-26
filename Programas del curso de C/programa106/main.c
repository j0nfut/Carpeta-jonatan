#include <stdio.h>
#include <stdlib.h>

void cargar(float estatu[5])
{
    printf("Para cargar estaturas.\n");
    for(int x=0; x<5;x++)
    {
        printf("Ingrese las estaturas:");
        scanf("%f", &estatu[x]);
    }
}

float promedio( float estatura[5])
{
    float prom;
    float suma;


        suma=estatura[0]+estatura[1]+estatura[2]+estatura[3]+estatura[4];
        prom= suma/5;

    return prom;
}

void superiores(float estatura[5], float med)
{
    int superior = 0;
    int inferior = 0;
    for (int x=0; x<5;x++)
    {
        if(estatura[x] > med)
        {
            superior++;

        }
        else
        {
            if (estatura[x] < med)
            {
            inferior++;
            }
        }
    }
    printf("Las personas mas altas que la media, %i\n", superior);
    printf("Las personas mas bajas que la media, %i\n",inferior);
}
int main()
{
    float estatura[5];
    float media;
    media = promedio(estatura);
    cargar (estatura);
    printf("El promedio de estatura es, %f\n",promedio(estatura));
    superiores(estatura, media);
    getch();
    return 0;
}
