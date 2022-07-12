/*Implemente a função

int uniao(v1[], int tam1, int v2[], int tam2, int v[])
que recebe um vetor v1 de tamanho tam1 e um vetor v2 de tamanho tam2 e armazena no vetor v os
elementos de v1 (uniao) v2. A função deve retornar a quantidade de números em v. Importante: o vetor
v não pode ter valores repetidos, mesmo que v1 ou v2 tenham. Dica 1: use a função pertence
implementada anteriormente. Dica 2: para ler o vetor use a função le_vetor implementada em
sala de aula.*/
#include<stdio.h>
#include "funcoes.lib.cpp"

int uniao(float v1[], int tam1, float v2[], int tam2, float v[]){
    int j = 0;
    int tamv = tam1 < tam2 ? tam1 : tam2;

    for(int i = 0; i < tam1; i++)
        if(pertence(v2, tam2, v1[i]) && !pertence(v, tamv, v1[i]))
            v[j++] = v1[i];

    return j;
}

int main(void){
    int tam1, tam2;

    puts("digite o tamanho do vetor");
    scanf("%d", &tam1);
    
    float v1[tam1];
    le_vetor_real(v1, tam1);

    puts("digite o tamanho do segundo vetor");
    scanf("%d", &tam2);

    float v2[tam2];
    le_vetor_real(v2, tam2);

    int tam_menor = tam1 < tam2 ? tam1 : tam2;
    float v_uniao[tam_menor];

    int qtd_uniao = uniao(v1, tam1, v2, tam2, v_uniao);

    printf("%d elementos da união de v1 e v2:\n", qtd_uniao);
    ImprimeVetor(v_uniao, qtd_uniao);
}
