#include <stdio.h>
#include <conio.h>

int main()
{
  int num_uno, num_dos, num_tres,suma, producto;



    printf("Ingrese numero 1: ");
    scanf("%i", &num_uno);
    printf("Ingrese numero 2: ");
    scanf("%i", &num_dos);
    printf("Ingrese numero 3: ");
    scanf("%i", &num_tres);

    if (num_uno==num_dos && num_uno == num_tres)
    {
        suma= num_uno + num_dos;
        producto = suma * num_tres;
        printf("%i", producto);
    }
    getch();
    return 0;
}
