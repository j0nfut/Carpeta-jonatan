#include <stdio.h>
#include <conio.h>

int main()
{
   int x,y,primero,segundo,tercero,cuarto,f;
   primero=0;
   segundo=0;
   tercero=0;
   cuarto=0;

   for(f=1;f<=4;f++)
   {
       printf("Ingrese el valor de X: ");
       scanf("%i", &x);
       printf("Ingrese el valor de Y: ");
       scanf("%i", &y);
       if(x>0 && y>0)
       {
           primero++;
       }
       else
       {
           if(x<0 && y>0)
           {
               segundo++;
           }
           else
           {
               if(x<0 && y<0)
               {
                   tercero++;
               }
               else
               {
                   cuarto++;
               }
           }
       }
   }
   printf("El primer cuadrante tienen:%i\n", primero);
   printf("El segundo cuadrante tienen:%i\n", segundo);
   printf("El tercero cuadrante tienen:%i\n", tercero);
   printf("El cuarto cuadrante tienen:%i", cuarto);
   getch();
   return 0;
}
