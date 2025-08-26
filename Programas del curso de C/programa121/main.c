#include <stdio.h>
#include <conio.h>

void cargar(int mat [3][31])
{
    for (int f=0; f<3;f++)
    {
            printf("Cargar los datos:");
            gets(mat[f]);
    }
}
void imprimir(int mat [3][31])
{
    for (int f=0; f<3;f++)
    {
            printf("%s\n", mat[f]);
    }
}
int main()
{
    int mat [3][31];
    cargar(mat);
    printf("Listado de articulos.\n");
    imprimir(mat);
    getch();
    return 0;
}
