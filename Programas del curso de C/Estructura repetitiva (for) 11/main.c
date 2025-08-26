#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,negativo,positivo,suma,valor,quince;
    negativo=0;
    positivo=0;
    suma=0;
    quince=0;
    for(x=1;x<=10;x++)
    {
        printf("Ingrese el valor: ");
        scanf("%i", &valor);
        if(valor<0)
        {
            negativo++;
        }
        else
        {
            positivo++;
            if(valor%15==0)
            {
                quince++;
            }
            else
            {
                if(valor%2==0)
                {
                    suma= valor+suma;
                }
            }
        }
    }
    printf("la cantidad de positivos:%i\n", positivo);
    printf("la cantidad de negtivo:%i\n", negativo);
    printf("la cantidad de multiplos de 15:%i\n", quince);
    printf("la suma de los pares:%i", suma);
    getch();
    return 0;
}
