#include <stdio.h>
#include <stdlib.h>

void cargar(int mat [2][5])
{
    for (int f=0; f<2;f++)
    {
        for(int c=0;c<5; c++)
        {
            printf("Cargar los datos:");
            scanf("%i", &mat[f][c]);
        }
        printf("\n");
    }
}
void imprimir(int mat [2][5])
{
    for (int f=0; f<2;f++)
    {
        for(int c=0;c<5; c++)
        {
            printf("%i ", mat[f][c]);

        }
        printf("\n");
    }
}
void intercambio(int mat [2][5])
{
    int aux;
        for(int c=0;c<5; c++)
        {
            aux=mat[0][c];
            mat [0][c]=mat [1][c];
            mat [1][c] = aux;

        }


}
int main()
{
    int mat [2][5];
    cargar(mat);
    imprimir(mat);
    intercambio(mat);
    printf("--------------------------------\n");
    imprimir(mat);
    getch();
    return 0;;
}
