#include <stdio.h>
#include <conio.h>
void cargar(int vector[5])
{
    for(int x=0; x<5;x++)
    {
        printf("Cargar los datos:");
        scanf("%i", &vector[x]);
    }
}
int menor(int vector[5])
{
    int men= vector[0];
    for(int x=1;x<5;x++)
    {
        if(vector[x]<men)
        {
            men=vector[x];
        }
    }
    return men;
}
void repite(int vector[5],int men)
{
   int cant=0;
   for(int x=0;x<5;x++)
   {
       if(vector[x]==men)
       {
           cant++;
       }
   }
   if (cant==1)
   {
       printf("El elemento del vector no se repite.");
   }
   else
   {
       printf("El elemento del vector se repite.");
   }
}

int main()

{
    int vector[5];
    cargar(vector);
    menor(vector);
    int men= menor(vector);
    printf("El elemnto mas pequeño del vector, %i\n", men);
    repite(vector,men);
    getch();
    return 0;
}
