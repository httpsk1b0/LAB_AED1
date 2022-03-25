#include <stdio.h>
#include <stdlib.h>

int IsPerfect(int n){
    int div, soma = 0;

        for(div = 1; div <= n/2; div++){
            if(n % div == 0)
                soma += div;
            }
                if(soma == n)
                return 1;// é perfeito
                else
                return 0;// não é perfeito
                
}

void imprimeDivisores(int n){
    int i;

    printf("%d = ", n);
    for(i = 1; i < n; i++){
        if(n % i == 0)
            printf("%d, ", i);
    }
    printf("\n");
}

int main() {
    int  quantidade = 0, perfect, i = 1;

    while(i < 1000){
        perfect = IsPerfect(i);
        if(perfect){
            quantidade++;
            printf("%d: ", quantidade);
            imprimeDivisores(i);
        }
        i++;
    }
    system("pause");
    return 0;   
}