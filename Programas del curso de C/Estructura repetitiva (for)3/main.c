#include <stdio.h>
#include <conio.h>

int main()
{
    int aprovados, reprobados, x, nota;
    aprovados=0;
    reprobados=0;
    for (x=1;x<=10; x++)
    {
        printf("Ingrese la nota: ");
        scanf("%i", &nota);
        if (nota>=7)
        {
            aprovados++;
        }
        else
        {
            reprobados++;
        }
    }
    printf("Los aprobados son %i \n", aprovados);
    printf("Los reprobados son %i", reprobados);
    getch();
    return 0;
}
