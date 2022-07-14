/*Implemente a função

bool sem_repeticao(int v[], int tam)

que recebe um vetor de inteiros v com tam elementos e retorna true se não há repetições em v, ou
false, caso contrário. Dica: para ler o vetor use a função le_vetor implementada em sala de aula.*/
#include<stdio.h>
#include "funcoes.lib.cpp"

bool sem_repeticao(float v[], int tam){
    for(int i = 0; i < tam; i++){
        int aparicoes = 0;
        
        for(int j = 0; j < tam; j++)
            if(v[i] == v[j])
                aparicoes++;

        if(aparicoes > 1)
            return false;
    }    
    return true;
}

int main(void){
    int tam;

    puts("digite o tamanho do vetor");
    scanf("%d", &tam);

    float v[tam];
    le_vetor_real(v, tam);

    if(sem_repeticao(v, tam))
        puts("vetor sem repeticao");
    else
        puts("vetor COM repeticao");
}