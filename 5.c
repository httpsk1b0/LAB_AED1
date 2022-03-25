#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, n, qd, cb;
    printf ("Insira um número N: ");
    scanf ("%d", &n);
    printf ("Números de 1 ate N elevados ao:\n");
    printf ("   quadrado     ||    cubo   \n");
    for (i = 1; i <= n; i++)
    {
        qd = i*i;
        cb = i*i*i;
        printf ("       %d        ||      %d   \n", qd, cb);
    }
    
}