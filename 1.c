#include <stdio.h>
#include <stdlib.h>

int main (){
   
int n, num, soma=0;
float med;


printf("Quantos números serão inseridos? ");
scanf ("%d", &n);

int a;
for (num = 0; num < n; num++)
{
    printf("insira um número: ");
    scanf("%d", &a);
    soma= soma + a;

}
    
med = soma/n;
printf("\nMÉDIA DOS %d NÚMEROS: %.2f\n", n, med);

}