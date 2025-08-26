#include <stdio.h>
#include <conio.h>

void calculo(int dinero, float cant)
{
    float paga;
    paga= dinero*cant;
    printf("su sueldo es, %0.2f\n", paga);
}

int main()
{
    int sueldo;
    float horas;
    char s;

    do{
    printf("Ingrese su sueldo:");
    scanf("%i", &sueldo);
    printf("Ingrese horas trabajadas:");
    scanf("%f", &horas);
    calculo(sueldo, horas);
       }while (s=='s');
    getch();
    return 0;
}
