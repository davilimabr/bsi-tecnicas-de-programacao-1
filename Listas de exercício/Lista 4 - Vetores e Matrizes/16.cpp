/*Leia um vetor de inteiros v (máximo de 20 números), um número n e uma posição p. Em seguida,
remova n números do vetor v a partir da posição p e imprima v. Caso a posição p seja inválida,
apresente uma mensagem de erro.*/

#include<stdio.h>
#include<stdlib.h>

int main(void){
     int tamanho, qtd, posicao;
    int i, j;

    do{
        puts("insira a quantidade de numeros para a leitura");
        scanf("%d", &tamanho);
    }while(tamanho >= 20 || tamanho <= 0);

    int vetor[tamanho];
    for(i = 0; i < tamanho; i++){
        printf("digite o numero %d", i + 1);
        scanf("%d", &vetor[i]);
    }

    puts("digite a quantidade de numeros que serao retirados a partir de uma posicao, respectivamente");
    puts("quantidade");
    scanf("%d", &qtd);

    puts("posicao");
    while(true){
        scanf("%d", &posicao);

        if(posicao > tamanho)
            puts("a posicao do numero deve ser menor ou igual a quantidade de numeros digitados");
        else if(qtd + posicao > tamanho)
            puts("nao e possivel retirar essa quantidade de numeros a partir dessa posicao");
        else break;
    }

    posicao--;

    for(i = 0; i < tamanho; i++){
        if(i == posicao){
            for(j = i + qtd; j < tamanho ; j++){
                vetor[j - qtd] = vetor[j];
                vetor[j] = 0;
            }
        }
    }

    for(i = 0; i < tamanho - qtd; i++){
        printf("(%d)   %d\n", i, vetor[i]);
    }
}