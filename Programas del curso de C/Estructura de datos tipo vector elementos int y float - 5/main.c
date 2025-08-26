#include <stdio.h>
#include <conio.h>

int main()
{
    int vec1[4];
    int vec2 [4];
    int vecsum[4];
    int f;
    printf("carga el primer vector\n");
    for(f=0;f<4;f++)
    {

    printf("Ingrese elemento: ");
    scanf("%i", &vec1[f]);
    }
    printf("carga el segundo vector\n");
    for(f=0;f<4;f++)
    {
    printf("Ingrese elemento: ");
    scanf("%i", &vec2[f]);
    }

    for(f=0;f<4;f++)
    {
        vecsum[f]= vec1[f]+ vec2[f];
    }
    printf("Vecttor resultante \n");
    for(f=0;f<4;f++)
    {
        printf("%i -", vecsum[f]);
    }
    getch();
    return 0;
}
