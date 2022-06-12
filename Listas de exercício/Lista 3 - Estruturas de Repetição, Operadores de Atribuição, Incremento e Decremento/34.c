/*Leia um número inteiro n e imprima todos os números perfeitos no intervalo de 1 a n. Número
perfeito é o número cujo somatório de todos os seus divisores (menos ele mesmo) é igual a ele. Por
exemplo: 6 = 1 + 2 + 3, logo 6 é um número perfeito.*/

#include<stdio.h>

int main(void){
    int num;

    puts("digite um numero inteiro:");
    scanf("%d", &num);

    int i, j, soma_div = 0;
    for(i = 1; i < num; i++){
        if(num % i == 0)
            soma_div += i;
    }

    if(soma_div == num)
        printf("%d e um numero perfeito", num);
    else 
        printf("%d nao e um numero perfeito", num);
}