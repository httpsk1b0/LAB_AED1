#include <stdio.h>
#include <math.h>

float hipotenusa(float x, float y){	
    float hipotenusa= sqrt(pow(x,2)+pow(y,2));
    printf("%f", hipotenusa);
}

int main() {
    float cateto1 =0, cateto2=0;	
	printf("Escreva o valor dos lados: ");
	scanf("%f %f", &cateto1, &cateto2);
	hipotenusa(cateto1,cateto2);
    return 0;
}