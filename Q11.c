#include <stdio.h>

int main() {
    int cateto1, cateto2;
	int hipotenusa;
	int valor;
	printf("Escreva o valor limite: ");
	scanf("%i", &valor);
    for(hipotenusa = 0; hipotenusa <= valor; hipotenusa++) {
        for(cateto1 = 0; cateto1 <= valor; cateto1++) {
            for(cateto2 = 0; cateto2 <= valor; cateto2++) {
                int esq = pow(cateto1,2)+pow(cateto2,2),dir = pow(hipotenusa,2);
                if(esq == dir) {
                    printf("%d , %d , %d\n", hipotenusa, cateto1, cateto2);
                } else if(esq > dir) {
                    break;
                }
            }
        }
    }

    return 0;
}