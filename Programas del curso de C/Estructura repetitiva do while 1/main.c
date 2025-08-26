#include <stdio.h>
#include <conio.h>

int main()
{
    int valor;
    do
    {
        printf("Ingrese el valor entre 0 y 999 (el 0 finaliza): ");
        scanf("%i", &valor);
        if (valor>99)
        {
            printf("Tiene 3 digitos.\n");
        }
        else
        {
            if (valor>=10)
            {
                printf("Tiene 2 digitos.\n");
            }
            else
            {
                printf("Tiene 1 digito.\n");
            }
        }

    }
    while(valor!=0);

        getch();
        return 0;


}
