#include <stdio.h>
#include <conio.h>
#include <string.h>

void palabra( char lapalabra[20])
{
    printf("Ingrese la palabra:");
    gets(lapalabra);
}
void vocales( char lapalabra[20])
{
    int cont=0;
    int x=0;
    while(lapalabra[x]!='\0')
    {
        if(lapalabra[x]== 'a' || lapalabra[x]== 'e' || lapalabra[x]== 'i' || lapalabra[x]== 'o' || lapalabra[x]== 'u')
        {
            cont++;
        }
        x++;
    }
    printf("La cantidad de vocales es, %i", cont);
}
int main()
{
    char vecpalabra[20];
    palabra(vecpalabra);
    vocales(vecpalabra);
    getch();
    return 0;
}
