/*Leia dois vetores v e w com 5 números inteiros cada. Em seguida, gere o vetor k com 10 posições
que é o resultado da concatenação de v e w. Imprima o vetor k.*/

#include<stdio.h>
#include<stdlib.h>

int main(void){
    int vetor1[5], vetor2[5], concat[10];
    int i, j; // contadores

    puts("vetor 1:");
    for(i = 0; i < 5; i++){
        printf("digite o numero %d\n", i + 1);
        scanf("%d", &vetor1[i]);
    }

    puts("vetor 2:");
    for(i = 0; i < 5; i++){
        printf("digite o numero %d\n", i + 1);
        scanf("%d", &vetor2[i]);
    }

    j = 0;
    for(i = 0; i < 10; i++){
        if(i < 5)
            concat[i] = vetor1[i];
        else{
            concat[i] = vetor2[j];
            j++;
        }
            
    }

    for(i = 0; i < 10; i++)
       printf("%d\n", concat[i]);
}