/*Leia dois vetores de inteiros v e w (máximo de 10 números). Os vetores v e w podem ter
quantidades diferentes de números. Ao final, gere o vetor k com os números em comum de v e w.
Imprima o vetor k.*/

#include<stdio.h>
#include<stdlib.h>

int main(void){
    int tamanho1, tamanho2;
    int i, j, h;

    do{
        printf("digite a quantidade de numeros para leitura 1");
        scanf("%d", &tamanho1);
    }while(tamanho1 >= 10 || tamanho1 <= 0);

    int vetor1[tamanho1];
    for(i = 0; i < tamanho1; i++){
        printf("digite o numero %d\n", i + 1);
        scanf("%d", &vetor1[i]);
    }

    do{
        printf("digite a quantidade de numeros para a leitura 2");
        scanf("%d", &tamanho2);
    }while(tamanho2 >= 10 || tamanho1 <= 0);

    int vetor2[tamanho2];
    for(i =0; i < tamanho2; i++){
        printf("digite o numero %d", i + 1);
        scanf("%d", &vetor2[i]);
    }

    int maior;
    if(tamanho1 > tamanho2)
        maior = tamanho1;
    else
        maior = tamanho2;

    int tem_em_1e2[maior];
    h = 0;

    for(i = 0; i < tamanho1; i++)
        for(j = 0; j < tamanho2; j++)
            if(vetor1[i] == vetor2[j]){
                tem_em_1e2[h] = vetor1[i];
                h++;
            }

    for(i = 0; i < h; i++)
        printf("%d\n", tem_em_1e2[i]);
    
}