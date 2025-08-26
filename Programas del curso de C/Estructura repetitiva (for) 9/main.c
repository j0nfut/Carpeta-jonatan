#include <stdio.h>
#include <conio.h>

int main()
{
     int x,n, tabla;
     printf("Ingrese el numero a calcular: ");
     scanf("%i", &n);
    for(x=1; x<=10;x++)
    {
       tabla= x*n;

       printf("%i\n", tabla);
    }
    getch();
    return 0;
}
