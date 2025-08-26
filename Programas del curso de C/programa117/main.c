#include <stdio.h>
#include <conio.h>

void cargar (int mat [3][4])
{
    for(int f=0;f<3; f++)
    {
        for(int c=0;c<4;c++)
        {
            printf("Ingrese los datos:");
            scanf("%i",&mat[f][c]);
        }
        printf("\n");
    }
}

void impri(int mat [3][4])
{
     for(int f=0; f<4;f++)
    {
        for (int c=0; c<4;c++)
        {
            printf("%i-", mat[f][c]);

        }
        printf("\n");
    }
}
void imprimirfila1(int mat[3][4])
{
    printf("Primera fila.\n");
    for(int c=0;c<4; c++)
    {
       printf("%i", mat[0][c]);
    }
    printf("\n");
}

void imprimirfila3(int mat [3][4])
{
     printf("ultima fila.\n");
    for(int c=0;c<4; c++)
    {
       printf("%i", mat[2][c]);
    }
    printf("\n");
}

void imprimircolumna1(int mat [3][4])
{
     printf("Primera columna.\n");
    for(int f=0;f<3; f++)
    {
       printf("%i", mat[f][0]);
    }
    printf("\n");
}
int main()
{
    int mat [3][4];
    cargar(mat);
    impri(mat);
    imprimirfila1(mat);
    imprimirfila3(mat);
    imprimircolumna1(mat);
    getch();
    return 0;
}
