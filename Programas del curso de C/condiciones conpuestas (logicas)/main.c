#include <stdio.h>
#include <conio.h>

int main()
{
    int num_uno, num_dos, num_tres;
    printf("Ingrese numero 1: ");
    scanf("%i", &num_uno);
    printf("Ingrese numero 2: ");
    scanf("%i", &num_dos);
    printf("Ingrese numero 3: ");
    scanf("%i", &num_tres);

    if (num_uno > num_dos && num_uno > num_tres)
    {
        printf("el mayor es %i", num_uno);
    }
    else
    {
        if (num_dos > num_tres)
        {
            printf("el mayor es %i", num_dos);
        }
        else
        {
            printf("el mayor es %i", num_tres);
        }
    }
    getch();
    return 0;

}
