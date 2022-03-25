#include<stdio.h>
#include <locale.h>


int main(int argc, char** argv)

{
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, n3, n4, n5, i;
	
	printf("\nDigite 5 números:\n");
	scanf("%i", &n1);
	scanf("%i", &n2);
	scanf("%i", &n3);
	scanf("%i", &n4);
	scanf("%i", &n5);	
	
	for(i=0; i < n1; i++)
	{
      printf("*");
	}
	printf("\n");
	for(i=0; i < n2; i++)
	{
      printf("*");
	}
	printf("\n");
	for(i=0; i < n3; i++)
	{
      printf("*");
	}
	printf("\n");
	for(i=0; i < n4; i++)
	{
      printf("*");
	}
	printf("\n");
	for(i=0; i < n5; i++)
	{
      printf("*");
	}
	return 0;
}