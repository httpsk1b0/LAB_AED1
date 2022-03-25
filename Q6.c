#include<stdio.h>
#include <locale.h>


int main(){
	
	int fat, n,nc, N;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite um número pra saber o seu fatorial:\n");
	scanf("%d", &n);
	
	 if (N>0)
 	 {
    	system("color 2");
 	 }
	nc=n;
	
	for(fat = 1; n > 1; n = n - 1)
	{
      fat = fat * n;
	}
	printf("Número | Fatorial do número\n");
	printf("  %d    |    %d \n", nc, fat);
  
  return 0;
}