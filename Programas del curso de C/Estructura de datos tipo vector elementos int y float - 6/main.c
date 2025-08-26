#include <stdio.h>
#include  <conio.h>

int main()
{
    int vecA[5];
    int vecB[5];
    float promA[5];
    float promB[5];
    int f;
    int sumA;
    int sumB;
    printf("Notas del curso A: \n");
    for (f=0; f<5; f++)
    {
        printf("Ingrese Nota: ");
        scanf("%i", &vecA[f]);
        sumA=0;
        sumA= vecA[f] + sumA;
    }
    printf("Notas del curso B: \n");
    for (f=0; f<5; f++)
    {
        printf("Ingrese Nota: ");
        scanf("%i", &vecB[f]);
        sumB=0;
        sumB= vecB[f] + sumB;
    }
     promA[5] = sumA/5;
     promB[5]= sumB/5;

     if(promA[5] > promB[5])
     {
         printf("El curso A tiene las calificaciones mas altas.");
     }
     else
     {
         printf("El curso B tiene las calificaciones mas altas.");
     }

    getch();
    return 0;

}
