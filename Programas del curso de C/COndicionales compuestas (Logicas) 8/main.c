#include <stdio.h>
#include <conio.h>

int main()
{
   int sueldo,antiguedad, porcentaje1, porcentaje2;
   printf("ingrese el sueldo del operario: ");
   scanf("%i", &sueldo);
     printf("ingrese los años de trabajo: ");
   scanf("%i", &antiguedad);
   porcentaje1= (20*sueldo)/100;
   porcentaje2= (5*sueldo)/100;
   if (sueldo< 500 && antiguedad> 10)
   {
       printf("%i", porcentaje1 + sueldo);
   }
   else
   {
       if(sueldo < 500 && antiguedad<10)
       {
           printf("%i", porcentaje2 + sueldo);
       }
       else
       {
           printf("%i", sueldo);
       }
   }
   getch();
   return 0;
}
