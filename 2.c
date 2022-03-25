#include <stdio.h>
#include <stdlib.h>

int main (){
  
printf ("Tabela de conversão de C em F\n\n");
float f;
int c=30;
   printf("celsius    ||    fahrenheit \n\n");
for (c= 30; c <= 50; c ++)
{
    f=c*(1.8)+32;
  printf("    %d     ||     %f\n", c, f);
}
}