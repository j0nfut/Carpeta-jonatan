#include <stdio.h>
#include <conio.h>
int main()
{
   int f;
   int sueldo[5];

   for(f=0; f<5; f++)
   {
       printf("Ingrese los sueldos: ");
       scanf("%i", &sueldo[f]);
   }
   printf("Lista de sueldos\n");
   for(f=0;f<5;f++)
   {
       printf("%i\n", sueldo[f]);
   }
   getch();
   return 0;
}
