#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void RaizReal(float num){
    float Delta,a,b,c,x1,x2;
    if (Delta != 0){
        Delta = (b*b) - 4*a*c;
        if (Delta == 0){
            x1= (- b + sqrt(Delta))/(2+a);
                printf("\nDelta igual a 0");
                printf("\nx1 e x2= %.2f",x1);
            } 
                else{
                    if (Delta>0){
                         x1= (- b + sqrt(Delta))/(2+a);
                         x2= (- b - sqrt(Delta))/(2+a);
                         printf("\ndelta maior que 0\n");
                         printf("\nx1=%.2f",x1);
                         printf("\nx2=%.2f",x2);
                         }
                            else{
                                printf("Delta menor que 0");
                                printf("nao existe raiz real");
                            }
                        }   
                    }
                }
int main(){
    float a,b,c,raiz,i;
        printf("insira o valor de a");
        scanf("%f",&a);
        printf("insira o valor de b");
        scanf("%f",&b);
        printf("insira o valor de c");
        scanf("%f",&c);

        raiz = RaizReal(num);
}