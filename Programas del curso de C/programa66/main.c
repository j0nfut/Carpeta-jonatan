#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
 char letra;
 for(letra= 'A'; letra <= 'Z'; letra++)
 {
     printf("%c ", letra);
 }
 printf("\n\n");
 for(letra= 'a'; letra <= 'z'; letra++)
 {
     printf("%c ", letra);
 }
 getch();
 return 0;
}
