#include <stdio.h>
#include <conio.h>

void cargar(int vector[5])
{
    for(int x=0;x<5;x++)
    {
        printf("ingrese las notas de los alumnos del curso:");
        scanf("%i", &vector[x]);
    }
}
void promedio(int vectorA[5],int vectorB[5])
{
    float promedioA, promedioB;
    float sumaA, sumaB;
    for (int x=0;x<5;x++)
    {
        sumaA=sumaA+vectorA[x];
        sumaB=sumaB+vectorB[x];
    }
    promedioA= sumaA/5;
    promedioB= sumaB/5;
    if(promedioA>promedioB)
    {
        printf("El curso A, tiene un promedio mayor");
    }
    else
        if(promedioA<promedioB)
    {
        printf("El curso B tiene mayor promedio.");
    }

}
int main()
{
    int vectorA[5];
    int vectorB[5];
    cargar(vectorA);
     printf("------------------------------------------\n");
    cargar(vectorB);
    promedio(vectorA, vectorB);
    getch();
    return 0;
}
