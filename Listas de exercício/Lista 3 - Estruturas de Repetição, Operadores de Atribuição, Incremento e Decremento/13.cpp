//Leia várias idades até o usuário digitar zero e imprima quantas pessoas são eleitoras obrigatórias.

#include<stdio.h>

int main(int){
    int idade, eleitor = 0;

    while(idade > 0){

        scanf("%d", &idade);

        if(idade >= 18)
            eleitor++;
    }

    printf("quantidade de eleitores obrigatorios: %d", eleitor);
}