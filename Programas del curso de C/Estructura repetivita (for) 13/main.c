#include <stdio.h>
#include <conio.h>

int main()
{
    int x,turnoma�ana,turnotarde, turnonoche,edad, menor;
    float proma�ana, promtarde, promnoche;
    turnoma�ana=0;
    turnotarde=0;
    turnonoche=0;
    for(x=1; x<=5;x++)

    {
        printf("Ingrese las edades: /n");
        scanf("%i", &edad);

        turnoma�ana= edad+turnoma�ana;
    }
    proma�ana= turnoma�ana/5;
    printf("el promedio de edad es:/n", proma�ana);
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
    if(promnoche<proma�ana && promnoche<promtarde)
    {
        printf("el promedio de noche es menor.")
    }
    else
    {
        if(promtarde<proma�ana)
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
