#include <stdio.h>
#include <conio.h>

int retsuperfice(int lado)
{
    int superficie= lado*lado;
    return superficie;
}
int main()
{
    int valor, sup;
    printf("Ingrese el valor del lado del cuadro:");
    scanf("%i", &valor);
    sup=retsuperfice(valor);
    printf("La superficie es de %i", sup);
    getch();
    return 0;
}
