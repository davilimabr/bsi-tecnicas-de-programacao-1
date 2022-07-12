/*Implemente a função

bool pertence(int v[], int tam, float n)

que recebe um vetor v, seu tamanho tam e um número n e retorna true se n (pertence) v, ou false, caso
contrário. Dica: para ler o vetor use a função le_vetor implementada em sala de aula.*/
#include<stdio.h>
#include "funcoes.lib.cpp"

bool pertence(float v[], int tam, float n){
    for(int i = 0; i < tam; i++)
        if(v[i] == n)
            return true;

    return false;
}

int main(void){
    int tam;
    float num;

    puts("digite o tamanho do vetor");
    scanf("%d", &tam);
    
    float v[tam];

    le_vetor_real(v, tam);

    puts("digite um numero que sera procurado no vetor");
    scanf("%f", &num);

    if(pertence(v, tam, num))
        puts("numero esta presente no vetor");
    else
        puts("numero NAO esta presente no vetor");
}