#include <stdio.h>
#include <conio.h>

void presentacion()
{
   printf("Este programa registra la carga de dos numeros.\n");
   printf("Efectua la suma de dos valores.\n");
   printf("Muestra los resultados\n");
   printf("--------------------------------------------------\n");
}

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
void finalisacion()
{
    printf("--------------------------------------------------\n");
    printf("Gracias por utilizar el programa");
}

int main()
{
    presentacion();
    cargar();
    finalisacion();
    getch();
    return 0;
}
