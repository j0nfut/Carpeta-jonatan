#include <stdio.h>
#include <conio.h>

int main()
{
   int suma,valor, cant1,cant2,cant3;
   cant1=0;
   cant2=0;
   cant3=0;
   suma=0;
   do{
    printf("Ingrese el valor: ");
    scanf("%i", &valor);
    if(valor!=9999)
    {

    suma= suma+valor;

    }
    }while (valor !=9999);
    if (suma==0)
    {
        printf("La suma de los valores es igual a cero.");
    }
    else
    {
        if(valor>0)
        {
            printf("La suma de los valores es mayor a cero");
        }
        else
        {
            printf("La suma de los valores es menor que cero.");
        }
    }


    getch();
    return 0;

}
