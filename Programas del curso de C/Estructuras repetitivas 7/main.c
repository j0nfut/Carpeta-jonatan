#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,n,mayor,menor;
    float total, sueldo;
    printf("Ingrese el numero de empleados:");
    scanf("%i", &n);
    x=1;
    mayor=0;
    menor=0;
    total=0;

    while(x<=n)
    {
         printf("ingrese el sueldo del empleado: ");
         scanf("%f", &sueldo);
         if(sueldo<= 300)
         {
             menor=menor+1;

         }
         else
         {
             mayor=mayor+1;

         }
         total=sueldo + total;
         x=x+1;
    }
    printf("los empleados que cobran mas de 300, %i\n", mayor);
    printf("los empleados que cobran menos de 300, %i\n", menor);
    printf("El total de importe en sueldo es, %f", total);
    getch();
    return 0;
}
