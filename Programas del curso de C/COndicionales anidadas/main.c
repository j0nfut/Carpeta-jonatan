#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nota1, nota2, nota3, promedio;
   printf("Ingrese el valor el la numero 1: ");
   scanf("%i", &nota1);
   printf("Ingrese el valor el la numero 2: ");
   scanf("%i", &nota2);
   printf("Ingrese el valor el; la numero 3: ");
   scanf("%i", &nota3);
   if(nota1 > nota2)
   {
       if (nota1 > nota3)
       {
           printf("el mayor es %i", nota1);
       }
       else
       {
           printf("El mayor es %i", nota3);
       }
   }
   else
   {
       if (nota2 > nota3)
       {
           printf("El mayor es %i", nota2);
       }
       else
       {
           printf("El mayor es %i", nota3);
       }
   }
   getch();
   return 0;
}
