#include <stdio.h>
#include<stdlib.h>

int main () {
int i=2, n=0, cont =0;
    printf ("NÚMEROS PRIMO DE 1 ATÉ 100\n\n");
    printf("2");
    for ( i = 2; i <= 100; i++)
    {
       if (i % 2 != 0) 
       {
            do
            { 
            n++;
                if (i % n == 0)
                {
                cont++;
                }
            }while (i != n);

        if (cont == 2)
        {
        printf ("\n%d ", i); 
        }        
          n=0;
    cont=0;
    
        }
    } 
  
}