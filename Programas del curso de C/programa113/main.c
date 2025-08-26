#include <stdio.h>
#include <conio.h>
void cargar(int vector[5])
{
    for(int x=0;x<5;x++)
    {
        printf("Cargar los datos:");
        scanf("%i", &vector[x]);
    }
}
void ordenar(int vector[5])
{
    for (int k=0; k<4;k++)
    {
         for(int x=0;x<4;x++)
        {
           if (vector[x]> vector[x+1])
          {
            int aux=vector[x];
            vector[x]=vector[x+1];
            vector[x+1]= aux;
          }
       }
    }
}
void imprimir(int vector[5])
{
    for(int x=0;x<5;x++)
    {
        printf("%i\n", vector[x]);
    }
}
int main()
{
    int vector[5];
    cargar(vector);
    ordenar(vector);
    imprimir(vector);
    getch();
    return 0;
}
