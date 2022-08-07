/*
Quando jogamos um único dado, qualquer um dos 6 valores tem a mesma probabilidade de sair.
Essa mesma lógica vale para quando jogamos dois dados, ou seja, os valores de 2 a 12 tem a
mesma probabilidade de sair? Para responder a essa pergunta, simule o arremesso de dois dados 1
milhão de vezes e apresente uma estatística do percentual de vezes que cada valor saiu.
*/

#include<stdio.h>
#include "funcoes.lib.cpp"

int main(void){
    const long long QTD_TESTES = 1000000000; 
    long long estatistica[13];
    
    for(int i = 0; i < 13; i++)
        estatistica[i] = 0;

    for(int i = 0; i < QTD_TESTES; i++){
        int dado = jogar_dados();

        estatistica[dado]++;
    }

    puts("Estatisticas");
    for(int i = 2; i < 13; i++)
        printf("%d: %lld%%  - %lld\n", i, (estatistica[i] * 100) / QTD_TESTES), estatistica[i];
}