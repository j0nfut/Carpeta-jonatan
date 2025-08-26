#include <stdio.h>
#include <conio.h>
#include <string.h>

struct pais{
char nombre[41];
int cantidadhab;
};

int main()
{
    struct pais num1,num2,num3;

    printf("Ingrese el nombre del pais:");
    gets(num1.nombre);
    printf("Ingrese la cantidad de habitantes:");
    scanf("%i", &num1.cantidadhab);
    fflush(stdin);

    printf("Ingrese el nombre del pais:");
    gets(num2.nombre);
    printf("Ingrese la cantidad de habitantes:");
    scanf("%i", &num2.cantidadhab);
    fflush(stdin);

    printf("Ingrese el nombre del pais:");
    gets(num3.nombre);
    printf("Ingrese la cantidad de habitantes:");
    scanf("%i", &num3.cantidadhab);
    fflush(stdin);

    if(num1.cantidadhab>num2.cantidadhab && num1.cantidadhab>num3.cantidadhab)
    {
        printf("El pais con mas habitantes es, %s con %i", num1.nombre, num1.cantidadhab);
    }
    else
    {
        if(num2.cantidadhab>num3.cantidadhab)
        {
            printf("El pais con mas habitantes es, %s con %i", num2.nombre, num2.cantidadhab);
        }
        else
        {
            printf("El pais con mas habitantes es, %s con %i", num3.nombre, num3.cantidadhab);
        }
    }
    getch();
    return 0;
}
