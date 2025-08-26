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

    if (mm==1 || mm ==2 || mm == 3)
    {
        printf("Primer trimestre.");
    }
    getch();
    return 0;
}
