#include <stdio.h>
#include <conio.h>

int main()
{
    int num_uno;
    int num_dos;
    printf("ingrese el valor del numero uno: ");
    scanf("%i", &num_uno);

    printf("ingrese el valor del numero dos: ");
    scanf("%i", &num_dos);


    if(num_uno> num_dos)
    {


    printf("el %i es mayor a %i", num_uno, num_dos);
    getch();
     return 0;
    }

    else(num_dos>num_uno);
    {


     printf("el %i es mayor a %i", num_dos, num_uno);
    }
     getch();
     return 0;

}
