#include <stdio.h>
#include <conio.h>

int main()
{
    int cant1,cant2,cant3,suma;
    float peso;
    cant1=0;
    cant2=0;
    cant3=0;
    do{
            printf("ingrese el peso (0 finaliza): ");
            scanf("%f", &peso);
            if(peso>10.2)
            {
                cant1++;
            }
            else
            {
                if (peso>=9.2)
                {
                    cant2++;
                }
                else
                {
                    if(peso>0)
                    {
                        cant3++;
                    }
                }
            }

    }while(peso!=0);
    suma= cant1+cant2+cant3;
    printf("Piezas con un peso mayor a 10.2:%i\n", cant1);
    printf("Piezas con un peso menor a 10.2 y mayor a 9.2:%i\n", cant2);
    printf("Piezas con un peso menor a 9.2:%i\n", cant3);
    getch();
    return 0;


}
