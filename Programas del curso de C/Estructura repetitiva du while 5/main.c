#include <stdio.h>
#include <conio.h>

int main()
{
    int cuenta, saldo, acreedor;
    acreedor=0;
    do{
        printf("Ingresar el numero de cuenta: ");
        scanf("%i", &cuenta);
        if(cuenta>=0)
        {


        printf("Ingresar el saldo de cuenta: ");
        scanf("%i", &saldo);
        if (saldo >0)
        {
            acreedor++;
            printf("%i, Es acreedor.\n", cuenta);
        }
        else
        {
            if(saldo==0)
            {
                printf("%i, es nulo\n");
            }
            else
            {
                printf("%i, es deudor.\n", cuenta);
            }
        }
        }
    }while(cuenta>0);
    printf("El total de acredores es %i", acreedor);
    getch();
    return 0;
}
