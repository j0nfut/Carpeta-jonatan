#include <stdio.h>
#include <conio.h>

void cargar()
{
    int valor1,valor2,suma;
    printf("Ingrese el primer valor:");
    scanf("%i", &valor1);
    printf("Ingrese el segundo valor:");
    scanf("%i", &valor2);
    suma= valor1+valor2;
    printf("El resultado de la suma es %i\n", suma);
}
void separacion()
{
    printf("------------------------------------\n");
}
int main()
{
    cargar();
    separacion();
    cargar();
    separacion();
    cargar();
    separacion();
    getch();
    return 0;
}
