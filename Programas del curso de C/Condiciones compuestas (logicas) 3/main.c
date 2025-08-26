#include <stdio.h>
#include <conio.h>

int main()
{
    int dd;
    int mm;
    int aa;

    printf("Dia: ");
    scanf("%i", &dd);
    printf("Mes: ");
    scanf("%i", &mm);
    printf("Año: ");
    scanf("%i", &aa);

if (mm == 12 && dd ==258)
{
    printf("Es navidad!!");
}
getch();
return 0;
}
