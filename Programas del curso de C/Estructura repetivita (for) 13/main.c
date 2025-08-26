#include <stdio.h>
#include <conio.h>

int main()
{
    int x,turnomañana,turnotarde, turnonoche,edad, menor;
    float promañana, promtarde, promnoche;
    turnomañana=0;
    turnotarde=0;
    turnonoche=0;
    for(x=1; x<=5;x++)

    {
        printf("Ingrese las edades: /n");
        scanf("%i", &edad);

        turnomañana= edad+turnomañana;
    }
    promañana= turnomañana/5;
    printf("el promedio de edad es:/n", promañana);
    for (x=1;<=6; x++)
    {
        printf("Ingrese las edades: /n");
        scanf("%i", &edad);

        turnotarde= edad+turnotarde;
    }
    promtarde= turnotarde/6;
    printf("El promedio de edad de la tarde: ",promtarde);
    for (x=1;<=11; x++)
    {
        printf("Ingrese las edades: /n");
        scanf("%i", &edad);

        turnonoche= edad+turnonoche;
    }
    promnoche= turnonoche/6;
    printf("El promedio de edad de la novhe: ",promtarde);
    if(promnoche<promañana && promnoche<promtarde)
    {
        printf("el promedio de noche es menor.")
    }
    else
    {
        if(promtarde<promañana)
        {
            printf("el promedio de la tarde es menor.")
        }
        else
        {
            printf("el promedio de manana es menor.")
        }
    }
    getch();
    return 0;
}
