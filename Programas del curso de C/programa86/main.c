#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char nom_1[21];
    printf("Ingrese el primer nombre:");
    gets(nom_1);
    char nom_2[21];
    printf("Ingrese el segundo nombre:");
    gets(nom_1);
    char nom_3[21];
    printf("Ingrese el tercer nombre:");
    gets(nom_1);
    char completo[64];

    if (strcmp(nom_1,nom_2)<0 && strcmp(nom_1,nom_3 < 0))
    {
        strcpy(completo, nom_1);
        strcat(completo,"-");
        if (strcmp(nom_2,nom_3)<0)
        {
            strcat(completo, nom_2);
            strcat(completo, "-");
            strcat(completo, nom_3);
        }
        else
        {
          strcat(completo, nom_3);
          strcat(completo, "-");
          strcat(completo, nom_2);
        }
    }
    else
    {

        if (strcmp(nom_2,nom_3)<0)
        {
            strcpy(completo, nom_2);
            strcat(completo, "-");

         if (strcmp(nom_1,nom_3)<0)
        {
          strcat(completo, nom_1);
          strcat(completo, "-");
          strcat(completo, nom_3);
        }
       else
       {
        strcat(completo, nom_3);
        strcat(completo, "-");
        strcat(completo, nom_1);
       }
        }
        else
        {
          strcpy(completo, nom_3);
          strcat(completo, "-");

       if (strcmp(nom_1,nom_2)<0)
       {
          strcat(completo, nom_2);
          strcat(completo, "-");
          strcat(completo, nom_1);
       }
       else
       {
           strcat(completo, nom_1);
          strcat(completo, "-");
        strcat(completo, nom_2);
   }
 }
}
printf("los nombres ordenados alfaveticamente \n");
printf("%s", completo);
getch();
return 0;
}
