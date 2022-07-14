/*Implemente a função

int conta_ocorrencias(int v[], int tam, int n)

que retorna o número de ocorrências de n em v. Dica: para ler o vetor use a função le_vetor
implementada em sala de aula.*/
#include<stdio.h>
#include "funcoes.lib.cpp"

int conta_ocorrencias(float v[], int tam, float n){
    int count = 0; 

    for(int i = 0; i < tam; i++)
        if(v[i] == n)
            count++;

    return count;
}

int main(void){
    int tam;
    float num;

    puts("digite o tamanho do vetor");
    scanf("%d", &tam);
    
    float v[tam];
    le_vetor_real(v, tam);
    
    puts("digite um numero");
    scanf("%f", &num);

    printf("Quantidade de ocorrencias de %f no vetor: %d", num, conta_ocorrencias(v, tam, num));
}