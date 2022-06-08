/*Leia um vetor v de 10 inteiros e um número inteiro k. Ao final, imprima os números de v que são
múltiplos de k.*/

#include<stdio.h>

int main(void){
    int num[10], k;

    puts("digite um numero k");
    scanf("%d", &k);

    int i;
    for(i = 0; i < 10 ; i++){
        printf("digite o numero %d\n", i + 1);
        scanf("%d", &num[i]);
    }

    for(i = 0; i < 10; i++){
        if(num[i] % k == 0)
            printf("multiplo de k: %d\n", num[i]);
    }
}