/*Implemente as funções

float maior(float v[], int tam)
float menor(float v[], int tam)

que retorna o maior e o menor número em um vetor de números reais. Dica: para ler o vetor use a
função le_vetor_real implementada anteriormente.*/
#include<stdio.h>
#include "funcoes.lib.cpp"

float maior(float v[], int tam){
    for(int i = 0; i < tam; i++){
        bool maior = true;
        for(int j = 0; j < tam; j++)
            if(v[i] < v[j]){
                maior = false;
                break;
            }
        
        if(maior)
            return v[i];
    }
}

float menor(float v[], int tam){
    for(int i = 0; i < tam; i++){
        bool menor = true;
        for(int j = 0; j < tam; j++)
            if(v[i] > v[j]){
                menor = false;
                break;
            }
        
        if(menor)
            return v[i];
    }
}

int main(void){
    int tam;

    puts("digite o tamanho do vetor");
    scanf("%d", &tam);

    float v[tam];

    le_vetor_real(v, tam);

    printf("maior: %f\nmenor: %f", maior(v, tam), menor(v, tam));
}