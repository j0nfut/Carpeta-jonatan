#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
   char nom_1 [21];
   char nom_2 [21];
   int edad1;
   int edad2;
   printf("Ingrese el nombre de la primera persona:");
   gets(nom_1);
   printf("Ingrese la edad:");
   scanf("%i", &edad1);
   fflush(stdin);
   printf("Ingrese el nombre de la segunda persona:");
   gets(nom_2);
   printf("Ingrese la edad:");
   scanf("%i", &edad2);
   if(edad1>edad2)
   {
       printf("La persona con mayor edad es, %s", nom_1);
   }else if(edad1<edad2){
    printf("La persona con mayor edad es, %s", nom_2);
    }
    else
    {
        printf("Tienen la misma edad, %s y %s", nom_1, nom_2);
    }
    getch();
    return 0;

}
