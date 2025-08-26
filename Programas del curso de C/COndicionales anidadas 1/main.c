#include <stdio.h>
#include <stdlib.h>

int main()
{
   int nota1, nota2, nota3, promedio;
   printf("Ingrese el valor de la nota 1: ");
   scanf("%i", &nota1);
   printf("Ingrese el valor de la nota 2: ");
   scanf("%i", &nota2);
   printf("Ingrese el valor de la nota 3: ");
   scanf("%i", &nota3);
   promedio= (nota1+nota2+nota3)/3;

   if (promedio >= 7)
   {
       printf("El alumno a aprobado el año, FELICIDADES.");
   }
   else
   {
       if (promedio>=4)
       {
           printf("Regular");
       }
       else
       {
           printf("Reprobado.");
       }
   }
   getch();
   return 0;
}
