/*Implemente a função

int posicao(float v[], int tam, float n)

que recebe um vetor v, seu tamanho tam e um número n e retorna a posição de n em v. Se n /e v a
função deve retornar -1. Dica: para ler o vetor use a função le_vetor_real implementada
anteriormente.*/
#include<stdio.h>
#include "funcoes.lib.cpp"

int posicao(float v[], int tam, float n){
    for(int i = 0; i < tam; i++)
        if(v[i] == n)
            return i;
    
    return -1;
}

int main(void){
    int tam;
    float num;

    puts("digite o tamanho do vetor");
    scanf("%d", &tam);
    

    float v[tam];

    le_vetor_real(v, tam);

    puts("digite um numero do vetor");
    scanf("%f", &num);

    printf("o numero %f esta na posicao %d do vetor", num, posicao(v, tam, num));
}
