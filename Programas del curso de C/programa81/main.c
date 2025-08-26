#include <stdio.h>
#include <string.h>
#include <conio.h>
int main()
{
char nom_1[15];
char nom_2[15];
char nom_largo[30];
   printf("Ingrese el primer nombre:");
   gets(nom_1);
   printf("Ingrese el segundo nombre:");
   gets(nom_2);
   if (strlen(nom_1)> strlen(nom_2))
   {
       strcpy(nom_largo,nom_1);

   }
   else
   {
       strcpy(nom_largo,nom_2);
   }
   printf("%s es el nombre mas grande.", nom_largo);

   getch();
   return 0;
}
