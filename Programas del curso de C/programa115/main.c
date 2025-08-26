#include <stdio.h>
#include <conio.h>

void cargar(int matrix[3][5])
{
    for (int f=0;f<3;f++ )
    {
        for(int c=0;c<5;c++)
        {
            printf("Ingrese elemento de matriz:");
            scanf("%i", &matrix[f][c]);
        }
    }
}
void imprimir(int matrix[3][5])
{
    for (int f=0;f<3;f++ )
    {
        for(int c=0;c<5;c++)
        {
            printf("%i ",matrix[f][c]);

        }
        printf("\n");
    }
}

int main()
{
    int matrix[3][5];
    cargar(matrix);
    imprimir(matrix);
    getch;
    return 0;
}
