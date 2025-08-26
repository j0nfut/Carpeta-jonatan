#include <stdio.h>
#include <conio.h>

void cargar(int mat [3][4])
{
    for (int f=0; f<3;f++)
    {
        for(int c=0;c<4; c++)
        {
            printf("Cargar los datos:");
            scanf("%i", &mat[f][c]);
        }
        printf("\n");
    }
}
void imprimir(int mat [3][4])
{
    for (int f=0; f<3;f++)
    {
        for(int c=0;c<4; c++)
        {
            printf("%i ", mat[f][c]);

        }
        printf("\n");
    }
}
int mayor(int mat[3][4])
{
    int x= mat[0][0];
    for (int f=0; f<3;f++)
    {
        for(int c=0;c<4; c++)
        {
           if (x<mat[f][c])
           {
               x=mat[f][c];
           }

        }

    }
  printf("El mayor es, %i", x);
}


int main()
{
    int mat [3][4];
    cargar(mat);
    imprimir(mat);
    mayor(mat);
    getch();
    return 0;
}
