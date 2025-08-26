#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char nom_1[20];
    char nom_2[20];
    printf("Ingrese el primer nombre:");
    gets(nom_1);
    printf("Ingrese el segundo nombre:");
    gets(nom_2);
    if (strlen(nom_1)>strlen(nom_2))
    {
        printf("%s - %s", nom_1, nom_2);
    }

    else
    {
        printf("%s - %s", nom_2, nom_1);
    }

    getch();
    return 0;
}
