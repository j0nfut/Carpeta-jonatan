#include <stdio.h>
#include <string.h>
#include <conio.h>
int main()
{
   char nom_1[15];
   char nom_2[15];
   printf("Ingrese el primer nombre:");
   gets(nom_1);
    printf("Ingrese el segundo nombre:");
   gets(nom_2);


  if ( strcmp(nom_1, nom_2)==0)
  {
      printf("Los nombres %s y %s son iguales.", nom_1, nom_2);
  }
  else if( strcmp(nom_1, nom_2)>0)
  {
      printf("El nombre %s es el mayor", nom_1);
  }
   else if( strcmp(nom_1, nom_2)<0)
  {
      printf("El nombre %s es el mayor", nom_2);
  }
  getch();
  return 0;

}
