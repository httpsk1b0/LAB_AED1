#include <stdio.h>
#include <stdlib.h>

int main () {
int i, n, soma;
    printf ("MULTIPLOS DE 7 DE 1 ATÉ 100:");

for (i = 0; i <= 100; i+=7)
{ 
    printf("%4d", i);
}
printf ("\n\nSOMA DOS MULTIPLOS DE 7 DE 1 ATÉ 100:  ");

for (n = 0; n <= 100; n++)
{
    if ( n % 7 == 0 )
    {
        soma = soma + n;
    }
    
}
printf ("%d\n",soma);

return 0;
}