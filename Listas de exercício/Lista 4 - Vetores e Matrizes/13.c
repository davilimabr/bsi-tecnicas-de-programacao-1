/*Leia dois vetores de inteiros a e b com n números cada (máximo de 10 números) e calcule o
produto escalar p de a e b, isto é, p = a[0] * b[0] + a[1] * b[1] + a[2] * b[2] + ... + a[n-1] * b[n-1].*/

#include<stdio.h>
#include<stdlib.h>

int main(void){
    int tamanho;
    int i;

    puts("digite o tamanho dos vetores");
    scanf("%d", &tamanho);

    int vetor1[tamanho], vetor2[tamanho];

    puts("vetor 1:");
    for(i = 0; i < tamanho; i++){
        printf("digite o numero %d\n", i + 1);
        scanf("%d", &vetor1[i]);
    }

    puts("vetor 2:");
    for(i = 0; i < tamanho; i++){
        printf("digite o numero %d\n", i + 1);
        scanf("%d", &vetor2[i]);
    }

    int produto_escalar = 0;
    for(i = 0; i < tamanho; i++)
        produto_escalar += vetor1[i] * vetor2[i];

    printf("vetor escalar : %d", produto_escalar);
}