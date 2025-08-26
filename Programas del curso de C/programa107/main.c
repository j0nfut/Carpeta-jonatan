#include <stdio.h>
#include <stdlib.h>

void cargarsueldo(float sueldo[4])
{
    for (int x=0; x<4; x++)
    {
        printf("Ingrese los sueldos:");
        scanf("%f", &sueldo[x]);
    }
}
float gastos(float sueldo[4])
{
    float total=0;
    total= sueldo[0]+sueldo[1]+sueldo[2]+sueldo[3]+sueldo[4];
    return total;
}

int main()
{
    float sueldoma[4];
    float sueldota[4];
    printf("Los suedos de la mañana.\n");
    cargarsueldo(sueldoma);
    printf("Los suedos de la tarde.\n");
    cargarsueldo(sueldota);

    printf("El total de gastos en la mañana es, %0.2f\n",gastos(sueldoma));
    printf("El total de gastos en la tarde es, %0.2f\n",gastos(sueldota));
    getch();
    return 0;
}
