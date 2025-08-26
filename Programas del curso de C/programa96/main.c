#include <stdio.h>
#include <conio.h>

void vocal(char letra)
{
    if (letra== 'a' || letra== 'e' || letra== 'i' || letra== 'o' || letra== 'u'||
        letra== 'A' || letra== 'E' || letra== 'I' || letra== 'O' || letra== 'U' )

    {
        printf("%c, es vocal\n", letra);
    }
    else
    {
        printf("%c, No es vocal\n", letra);
    }


}

int main()
{
   char c;

   for(c='A';c<='z';c++)
   {
        vocal(c);
   }
   getch();
    return 0;
}
