#include <stdio.h>
#include <conio.h>

int main()
{
    int x,n,base,altura,area, num;
    num=0;
    printf("Ingrese el numero de triangulos: ");
    scanf("%i", &n);
    for(x=1; x<=n; x++)
    {
        printf("Ingrese la altura del triangulo: ");
        scanf("%i", &altura);
        printf("Ingrese la base del triangulo: ");
        scanf("%i", &base);
        area= (base*altura)/2;
        printf("La base del triangulo es %i, la altura %i, area es %i\n", base, altura, area);
        if (area>12)
        {
            num++;
        }

    }
    printf("los triangulos con area mayor a 12 son: %i ", num);
    getch();
    return 0;

}
