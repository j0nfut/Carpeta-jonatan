#include <stdio.h>
#include <conio.h>

void superfice(int lad)
{
    float sup;
    sup=lad*lad;
    printf("La superficie de el cuadrado es %f\n", sup);

}
void perimetro(int lad)
{
    float peri;
    peri= lad*4;
    printf("El perimetro de el cuadrado es %f\n", peri);
    printf("-------------------------------------\n");
}

int main()
{
    int lado;

    for(lado=10;lado<=20;lado++)
    {

        superfice(lado);
        perimetro(lado);
    }
    getch();
    return 0;
}
