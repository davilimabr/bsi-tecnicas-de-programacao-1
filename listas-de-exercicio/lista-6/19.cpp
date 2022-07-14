/*Implemente a função

int remove_repeticao(int v[], int tam)

que recebe um vetor de inteiros v com tam elementos e remove todos os valores repetidos de v. A
função deve retornar a nova quantidade de inteiros em v. Dica: para ler o vetor use a função
le_vetor implementada em sala de aula.*/

#include<stdio.h>
#include "funcoes.lib.cpp"

int remove_repeticao(float v[], int tam){
    int repeticoes = 0;
    for(int i = 0; i < tam; i++)
        for(int j = i + 1; j < tam; j++)
            if(v[i] == v[j]){
                for(int k = j; k < tam-1; k++)
                    v[k] = v[k+1];
                
                tam--;
            }

    return tam;
}

int main(void){
    int tam;

    puts("digite o tamanho do vetor");
    scanf("%d", &tam);

    float v[tam];
    le_vetor_real(v, tam);

    int novo_tam = remove_repeticao(v, tam);
    ImprimeVetor(v, novo_tam);
}

