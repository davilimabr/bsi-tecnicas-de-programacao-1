/*Implemente a função

bool ordenado(int v[], int tam)

que retorna true se o vetor está ordenado ou falso, caso contrário. Dica: para ler o vetor use a
função le_vetor implementada em sala de aula.*/
#include<stdio.h>
#include "funcoes.lib.cpp"

bool ordenado(float v[], int tam){
    bool ordenado = true;
    for(int i = 0; i < tam-1; i++)
        if(v[0] > v[1] ?   v[i] < v[i+1] :   v[i] > v[i+1]){
            ordenado = false;
            break;
        }

    return ordenado;
}

int main(void){
    int tam;

    puts("digite o tamanho do vetor");
    scanf("%d", &tam);

    float v[tam];

    le_vetor_real(v, tam);

    if(ordenado(v, tam))
        puts("vetor ordenado");
    else
        puts("vetor NAO ordenado");
}