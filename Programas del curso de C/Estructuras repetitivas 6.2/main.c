#include <stdio.h>
#include <conio.h>

int main()
{
   int x, n;
   float altura,suma,promedio;
   x=1;
   printf("Ingrese el numero de estaturas: ");
   scanf("%i", &n);
   while(x<=n)
   {
   printf("Ingrese las alturas: ");
   scanf("%f", &altura);
   suma= suma+ altura;
   x=x+1;
   }
   promedio= suma/n;
   printf("El promedio de altura es, %f", promedio);
   getch();
   return 0;

}
