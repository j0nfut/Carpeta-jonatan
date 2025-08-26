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
    if (num_uno < 10 && num_dos < 10 && num_tres < 10)
    {
        printf("los numeros son menores que 10.");
    }
    getch();
    return 0;
}
