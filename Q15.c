#include <stdio.h>
#include <stdlib.h>

int funcaoret(int i, int n, int lado1, int lado2)
{
  for (i = 0; i <= lado1; i++)
  {
      for (n = 0; n <= lado2; n++)
      {
        printf ("* ");
      }
      printf("\n");
    }
  }

int main (){
int lado1, lado2, i, n;
printf("digite linha: ");
scanf ("%d", &lado1);
  lado1=lado1-1;
printf ("digite coluna: ");
scanf ("%d", &lado2);
  lado2=lado2-1;
  printf("\n");

    funcaoret(i, n, lado1, lado2);

  return 0;
  }