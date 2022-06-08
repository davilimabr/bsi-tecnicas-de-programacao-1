/*Leia dois vetores v e w com 5 números inteiros cada. Em seguida, gere o vetor k que é o resultado
da soma dos elementos de v e w. Ao final, imprima o vetor k.*/

#include<stdio.h>
#include<stdlib.h>

int main(void){
    int vetor1[5], vetor2[5], somav1v2[5];
    int i;

    puts("vetor 1");

    for(i = 0; i < 5; i++){
        printf("digite o numero %d\n", i + 1);
        scanf("%d", &vetor1[i]);
    }

    system("cls");

    puts("vetor 2");

    for(i = 0; i < 5; i++){
        printf("digite o numero %d\n", i + 1);
        scanf("%d", &vetor2[i]);
    }

    system("cls");

    for(i = 0; i < 5; i++)
        somav1v2[i] = vetor1[i] + vetor2[i];
    
    for(i = 0; i < 5; i++)
        printf("%d + %d = %d\n", vetor1[i], vetor2[i], somav1v2[i]);
}