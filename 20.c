#include<stdio.h>
#include<stdlib.h>

int main() {
	int i, resto, soma;	
	printf("Escreva o número\n");
	scanf("%i", &i);
	while (i > 0){
        resto = i % 10;
        i = (i - resto)/10;
        soma = soma + resto;
	}
    printf("Soma=%i",soma);
    return 0;
}
