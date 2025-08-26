#include <stdio.h>
#include <conio.h>

int main()
{
  int x=0, limite;
  printf("ingrese el valor limite de conteo: ");
  scanf("%i", &limite);
  while(x<=limite)
  {
      printf("%i ", x);
      x= x+1;
  }
  getch();
  return 0;
}
