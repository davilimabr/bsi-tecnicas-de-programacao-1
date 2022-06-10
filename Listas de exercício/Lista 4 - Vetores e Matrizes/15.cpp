/*Leia um vetor de inteiros v (máximo de 20 números), um número n e uma posição p. Em seguida,
insira o número n na posição p do vetor (deslocando os demais números para a direita) e imprima
v. Caso a posição p seja inválida, apresente uma mensagem de erro.*/

#include<stdio.h>
#include<stdlib.h>

int main(void){
    int tamanho, num, posicao;
    int i, j;

    do{
        puts("insira a quantidade de numeros para a leitura");
        scanf("%d", &tamanho);
    }while(tamanho >= 20 || tamanho <= 0);

    int vetor[tamanho + 1];
    for(i = 0; i < tamanho; i++){
        printf("digite o numero %d", i + 1);
        scanf("%d", &vetor[i]);
    }

    puts("digite um numero e a posicao que ele der ser alocado, respectivamente");
    scanf("%d", &num);

    while(true){
        scanf("%d", &posicao);

        if(posicao > tamanho)
            puts("a posicao do numero deve ser menor ou igual a quantidade de numeros digitados");
        else break;
    }

    posicao--;
    int aux;
    for(i = 0; i < tamanho; i++)
        if(i == posicao){
            for(j = tamanho; j >= i; j--)
                vetor[j+1] = vetor[j];

            vetor[i] = num;  
        }

    for(i = 0; i < tamanho + 1; i++){
        printf("(%d)   %d\n", i, vetor[i]);
    }
}