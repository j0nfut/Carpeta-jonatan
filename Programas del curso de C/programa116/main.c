#include <stdio.h>
#include <conio.h>

void cargar(int matriz [4][4])
{
    for(int f=0; f<4;f++)
    {
        for (int c=0; c<4;c++)
        {
            printf("Ingrese los datos:");
            scanf("%i",&matriz[f][c]);
        }
    }
}
void imprimir( int matriz [4][4])
{
    for(int f=0; f<4;f++)
    {
        for (int c=0; c<4;c++)
        {
            printf("%i-", matriz[f][c]);

        }
        printf("\n");
    }
}
void diagonal(int matriz[4][4])
{
    /*printf("Elementos de la diagonal principal\n");
    printf("%i ",matriz[0][0]);
    printf("%i ",matriz[1][1]);
    printf("%i ",matriz[2][2]);
    printf("%i ",matriz[3][3]);*/

    /* for(int f=0; f<4;f++)
    {
        for (int c=0; c<4;c++)
        {
            if(f==c)
            {
            printf("%i-", matriz[f][c]);
            }

        }

    }*/
    for(int k=0; k<4;k++)
    {
        printf("%i ",matriz[k][k]);
    }

}

int main()
{
   int matriz [4][4];
    cargar(matriz);
    imprimir(matriz);
    diagonal(matriz);
    getch();
    return 0;
}
