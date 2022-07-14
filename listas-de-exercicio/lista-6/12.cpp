/*Implemente as funções

float maior(float v[], int tam)
float menor(float v[], int tam)

que retorna o maior e o menor número em um vetor de números reais. Dica: para ler o vetor use a
função le_vetor_real implementada anteriormente.*/
#include<stdio.h>
#include "funcoes.lib.cpp"

float maior(float v[], int tam){
    float maior = v[0];
    for(int i = 0; i < tam; i++)
        if(v[i] > maior)
            maior = v[i];
    
    return maior;
}

float menor(float v[], int tam){
    float menor = v[0];
    for(int i = 0; i < tam; i++)
        if(v[i] < menor)
            menor = v[i];
    
    return menor;
}

int main(void){
    int tam;

    puts("digite o tamanho do vetor");
    scanf("%d", &tam);

    float v[tam];
    le_vetor_real(v, tam);

    printf("maior: %f\nmenor: %f", maior(v, tam), menor(v, tam));
}