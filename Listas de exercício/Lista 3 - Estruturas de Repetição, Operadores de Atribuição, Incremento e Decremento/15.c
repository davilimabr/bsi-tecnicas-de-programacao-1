//Leia vários números inteiros positivos até o usuário digitar zero e imprima quantos são pares.

#include<stdio.h>

int main(void){
    int num, pares = 0;

    while(num != 0){
        scanf("%d", &num);

        if(num != 0 && num % 2 == 0)
            pares++;
    }

    printf("pares: %d", pares);
}   