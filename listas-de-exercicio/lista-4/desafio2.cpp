/*
Leia um vetor v com n números reais (n >= 3) e informe se essa sequência de números formam um
pico, um vale ou nenhum dos dois. Caso seja um pico ou um vale, informe a posição do mesmo.
Seguem as definições:
• Pico: os valores são estritamente crescentes do início do vetor até uma posição p do vetor (pico)
e depois seguem estritamente decrescentes até o final do vetor (p != 0 e p != n-1).
Exemplo: -5 -1 4 6 12 17 15 11 7 3
• Vale: os valores são estritamente decrescentes do início do vetor até uma posição p do vetor
(vale) e depois seguem estritamente crescentes até o final do vetor (p != 0 e p != n-1).
Exemplo: 23 19 15 11 7 2 4 9 10 18
*/

#include<stdio.h>

int main(void){
    int tam;

    do{
        puts("digite o tamanho da sequencia de numeros");
        scanf("%d", &tam);
    }while(tam < 3);

    int vet[tam];
    int pico, pi, vale, vi;
    for(int i = 0; i < tam; i++){
        printf("numero [%d] > ", i);
        scanf("%d", &vet[i]);

        if(i == 0)
            pico = vale = vet[i];

        if(vet[i] > pico){
            pico = vet[i];
            pi = i;
        }
        else if(vet[i] < vale){
            vale = vet[i];
            vi = i;
        }
    }

    if(pico != vet[0] && pico != vet[tam-1])
        printf("forma um pico\nindice pico > %d\nnumero > %d", pi, pico);
    else if(vale != vet[0] && vale != vet[tam-1])
        printf("forma um vale\nindice vale > %d\nnumero > %d", vi, vale);
    else
        puts("o vetor não possui vale nem pico");
}