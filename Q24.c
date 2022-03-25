#include <stdio.h>
#include <stdlib.h>

  int somaa(int n, int soma, int c, int n1){
    soma=0;
  for(c=1; c <= n; c++)
  {
    printf("Digite um número:");
    scanf("%i", &n1);
    soma += n1;
  }
printf("A soma dos numeros é igual a: %i ", soma);
} 

int main (){
  int n1, soma, n, c;
  
  printf("Digite quantos números deseja somar:");
  scanf("%d", &n);

somaa (n, soma, c, n1);

}