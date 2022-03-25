#include<stdio.h>
#include<stdlib.h>

int main() {
    float charlinha =0, charcoluna=0;
    char charzinho;
	int i, j;	
	printf("Escreva o comprimento da linha e da coluna e o caractere que deseja imprimir:\n");
	scanf("%f %f %c", &charlinha, &charcoluna, &charzinho);
	for(j = 1; j<=charlinha; j++){
		
	for(i = 1; i<=charcoluna; i++){
	printf("%c ", charzinho);	   	
	}
	printf("\n");
	}
    return 0;
}