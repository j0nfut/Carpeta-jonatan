#include <stdio.h>
#include <conio.h>

void cargar(int vector[10])
{
    for(int x=0; x<10;x++)
    {
        printf("Ingrese los datos del vector:");
        scanf("%i",&vector[x]);
    }

}
void orden(int vector[10])
{
    int ordenado=1;
    for (int x=0;x<9;x++)
    {
        if(vector[x]>vector[x+1])
        {
            ordenado=0;
            break;
        }
    }
    if (ordenado==1)
    {
        printf("Los elementos del vector estan ordenados de menor a mayor");
    }
    else
    {
        printf("Los elementos del vector no estan ordenados de menor a mayor");
    }
}

int main()
{
    int vector[10];
    cargar(vector);
    orden(vector);
    getch();
    return 0;
}
