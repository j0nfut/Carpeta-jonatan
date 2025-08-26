#include <stdio.h>
#include <conio.h>

int main()
{
    int vec[10];
    int f;
    int orden;
    for (f=0;f<10;f++)
    {
        printf("ingrese el elemento: ");
        scanf("%i", &vec[f]);
    }
    orden=1;
    for(f=0;f<9;f++);
    {
        if(vec[f+1]<vec[f])
        {
            orden=0;
        }
    }

    if(orden==1)
    {
        printf("el vector esta ordenado de menor a mayor");
    }

    else
    {
        printf("No esta ordenado de menor a mayor");
    }
    getch();
    return 0;
}
