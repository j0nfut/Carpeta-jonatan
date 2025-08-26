#include <stdio.h>
#include <conio.h>

int main()
{
    int num_uno, num_dos, num_tres;
    printf("igrese el valor del primer numero: ");
    scanf("%i", &num_uno);
    printf("igrese el valor del segundo numero: ");
    scanf("%i", &num_dos);
    printf("igrese el valor del tercer numero: ");
    scanf("%i", &num_tres);

    if (num_uno>num_dos && num_uno>num_tres)
    {
        printf("El mayor es el %i, ", num_uno);
    }
    else
    {
        if(num_dos>num_tres)
        {
        printf("El mayor es el %i", num_dos);
        }
        else
        {
          printf("El mayor es el %i", num_tres);
        }
    }

    if (num_uno<num_dos && num_uno<num_tres)
    {
        printf("El menor es el %i", num_uno);
    }
    else
    {
        if(num_dos<num_tres)
        {
        printf("El menor es el %i", num_dos);
        }
        else
        {
          printf("El menor es el %i", num_tres);
        }
    }
    getch();
    return 0;

}
