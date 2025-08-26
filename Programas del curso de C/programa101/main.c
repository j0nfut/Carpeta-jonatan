#include <stdio.h>
#include <conio.h>

int perimetro(int lad)
{
    int peri = lad*4;
    return peri;
}

int main()
{
    int lado;
   printf("Ingrese el lado de un cuadrado:");
   scanf("%i", &lado);
   perimetro(lado);
   printf("El perimetro es %i", perimetro(lado));
   getch();
    return 0;
}
