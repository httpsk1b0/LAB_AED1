#include<stdio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float total, quantidade;
	int codigo;
	
	printf("Qual o código do produto que você deseja?");
	scanf("%i", &codigo);
	
	printf("Quantos produtos:");
	scanf("%f", &quantidade);
	
	if (codigo>0)
 	 {
    	system("color 2");
 	 }
	
	switch (codigo)
        {
        	case 1:
                	total = quantidade * 3;
        	break;
        	case 2:
                	total = quantidade * 4;
        	break;
        	case 3:
                	total = quantidade * 4.80;
        	break;
        	case 4:
                	total = quantidade * 1.95;
        	break;
        	case 5:
                	total = quantidade * 5;
        	break;
        	default:
                	printf ("\nPRODUTO NÃO ENCONTRADO!\n");
        }
        
        printf("O total é de: %.2f ", total);
	
	return 0;
}