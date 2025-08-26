#include <stdio.h>
#include <conio.h>
#include <string.h>
void hombremujer(char let)
{

    if (strcmp(let, 'h')==0)
    {
        printf("Hombre");
    }
    else
    {
        printf("Mujer");
    }
}
int main()
{
    char letra[3];
    hombremujer(letra);
    getch();
    return 0;
}
