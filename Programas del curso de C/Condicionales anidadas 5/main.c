#include <stdio.h>
#include <conio.h>

int main()
{
    int preguntas;
    int correctas;
    float porcentaje;
    printf("ingrese la cantidad de preguntas realizadas: ");
    scanf("%i", &preguntas);
    printf("ingrese la cantidad de preguntas corectamente respondidas: ");
    scanf("%i", &correctas);
    porcentaje = (correctas*100)/preguntas;

    if (porcentaje >= 75)
    {
        if (porcentaje>= 90)
        {
            printf("Nivel maximo.");
        }
        else
        {
            printf("Nivel medio.");
        }
    }
    else
        if(porcentaje>= 50)
        {
        printf("nivel regular.");
        }
        else
        {
            printf("Fuera de nivel.");
        }
        getch();
        return 0;
}
