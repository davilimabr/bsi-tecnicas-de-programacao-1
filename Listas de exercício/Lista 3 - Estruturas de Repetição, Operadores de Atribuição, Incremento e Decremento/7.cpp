//Leia 10 valores, um de cada vez, e conte quantos deles são divisíveis por 3 ou 5, mas não são pares.
//Ao final, imprima essa quantidade.

#include<stdio.h>

int main(int){
    int qtd = 0, num;

    int i;
    for(i = 0; i < 10; i++){
        printf("digite o %d numero:\n", i + 1);
        scanf("%d", &num);

        if((num % 3 == 0 || num % 5 == 0) && num % 2 != 0)
            qtd++;
    }

    printf("dos 10 numeros, %d sao diviveis por 3 e por 5, mas n sao pares", qtd);
}