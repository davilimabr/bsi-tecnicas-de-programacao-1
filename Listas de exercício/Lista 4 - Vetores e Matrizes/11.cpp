/*Leia dois vetores v e w com 5 números inteiros cada. Em seguida, gere o vetor k com 10 posições
que é o resultado da intercalação de v e w. Imprima o vetor k.*/

#include<stdio.h>
#include<stdlib.h>

int main(void){
    int vetor1[5], vetor2[5], intercalacao[10];
    int i;

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

    int count1, count2;
    count1 = count2 = 0;

    for(i = 0; i < 10; i++){
        if(i % 2 == 0){
             intercalacao[i] = vetor1[count1];
             count1++;
        }
        else{
            intercalacao[i] = vetor2[count2];
            count2++;
        }
    }

    for(i = 0; i < 10; i++)
       printf("%d\n", intercalacao[i]);
}