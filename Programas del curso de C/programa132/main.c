#include <stdio.h>
#include <conio.h>
#include <string.h>

struct producto {
int codigo;
char descripcion [41];
float precio;
};

int main()
{
    struct producto  pro1, pro2;


    printf("Ingrese el codigo de producto:");
    scanf("%i", &pro1.codigo);
    fflush(stdin);
    printf("Ingrese el nombre del producto:");
    gets(pro1.descripcion);
    printf("Ingrese el precio del producto:");
    scanf("%f", &pro1.precio);


    printf("Ingrese el codigo de producto:");
    scanf("%i", &pro2.codigo);
    fflush(stdin);
    printf("Ingrese el nombre del producto:");
    gets(pro2.descripcion);
    printf("Ingrese el precio del producto:");
    scanf("%f", &pro2.precio);

    if (pro1.precio>pro2.precio)
    {
        printf("El producto %s tiene un precio mayor", pro1.descripcion);
    }
    else
    {
        if (pro1.precio<pro2.precio)
        {
             printf("El producto %s tiene un precio mayor", pro2.descripcion);
        }
        else
        {
            printf("Ambos productos tienen el mismo precio.");
        }
    }
    getch();
    return 0;
}
