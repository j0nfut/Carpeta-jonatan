#include <stdio.h>
#include <conio.h>
#include <string.h>

struct producto {
int codigo;
char descripcion [41];
float precio;
};
void imprimir (struct producto p)
{
    printf("Codigo del producto:%i\n", p.codigo);
    printf("Descripcion del producto:%s\n", p.descripcion);
    printf("Precio del producto: %0.2f\n", p.precio);
}
int main()
{
    struct producto produ={1,"Naranjas", 15.70};
    imprimir(produ);
    getch();
    return 0;
}
