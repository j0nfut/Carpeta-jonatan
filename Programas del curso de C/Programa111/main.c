#include <stdio.h>
#include <conio.h>

void cargar(int vector[5])
{
    for(int x=0;x<5;x++)
    {
        printf("Ingrese los datos:");
        scanf("%i", &vector[x]);

    }
}
void mayor(int vector[5])
{
    int may=vector[0];
    int pos=0;
    for (int x=1; x<5; x++)
    {
        if (may<vector[x])
        {
            may=vector[x];
            pos=x;
        }
    }
    printf("El elemento mas grande del vector,%i\n", may);
    printf("Se encuentra en la pocicion,%i\n", pos);
}
int main()
{
    int vector[5];
    cargar(vector);
    mayor(vector);
    getch();
    return 0;
}
