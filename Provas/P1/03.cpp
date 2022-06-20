/*
ler um tamanho tam, um vetor de números inteiros de tamanho tam e imprimir se ele é 
espelhado ou não.
ex:
vet1 = {1, 2, 3, 4, 5, 4, 3, 2, 1} ESPELHADO
vet2 = {1, 2, 9, 4, 4, 4, 3, 7, 1} NÃO ESPELHADO
*/

#include<stdio.h>

int main(void){
    int tam;

    do{
        puts("digite o tamanho da sequência de números");
        scanf("%d", &tam);
    }while(tam <= 0);

    int vet[tam];
    for(int i = 0; i < tam; i++){
        printf("digite o número %d da sequência", i+1);
        scanf("%d", &vet[i]);
    }

    bool espelhado = true;
    for(int i = 0, j = tam-1; i < tam/2; i++, j--)
        if(vet[i] != vet[j]){
            espelhado = false;
            break;
        }

    if(espelhado)
        puts("espelhado");
    else
        puts("não espelhado");
}