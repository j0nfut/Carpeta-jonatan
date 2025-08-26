#include <stdio.h>
#include <conio.h>

void cargar(int matriz [2][5])
{
    for(int c=0; c<5;c++)
    {
        for (int f=0; f<2;f++)
        {
            printf("Ingrese los datos:");
            scanf("%i",&matriz[f][c]);
        }
    }
}
void imprimir( int matriz [2][5])
{
    for(int f=0; f<2;f++)
    {
        for (int c=0; c<5;c++)
        {
            printf("%i-", matriz[f][c]);

        }
        printf("\n");
    }
}
int main()
{
    int matriz[2][5];
    cargar(matriz);
    imprimir(matriz);
    getch();
    return 0;
}
