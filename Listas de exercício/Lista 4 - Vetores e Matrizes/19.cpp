/*Leia um vetor v com 10 inteiros e imprima qual a sequência de 3 números de v apresenta a maior
soma. Exemplo:
v = { 1, 5, 2, 1, 7, 1, 5, 2, 4, 1 }
Sequência: 7 1 5 (soma = 13)*/

#include<stdio.h>
#include<stdlib.h>

int main(void){
    int vetor[10];
    int i, j;

    for(i = 0; i < 10; i++){
        printf("digite o numero %d\n", i + 1);
        scanf("%d", &vetor[i]);
    }

    int soma, maior_soma = 0;

    for(i = 0; i < 10; i++){
        soma = 0;
        if(i + 3 < 10)
            for(j = i; j < i + 3; j++){
                soma += vetor[j];
            }

        if(soma > maior_soma)
            maior_soma = soma;
    }
    //printf("%d", maior_soma);
    for(i = 0; i < 10; i++){
        soma = 0;
        if(i + 3 < 10)
            for(j = i; j < i + 3; j++){
                soma += vetor[j];
            }

        if(soma == maior_soma){
            for(j = i; j < i + 3; j++)
                printf("%d ", vetor[j]);
    
            printf("(soma = %d)", soma);
        }
    }
}