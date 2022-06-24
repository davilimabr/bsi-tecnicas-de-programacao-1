//Imprima os 30 primeiros ímpares, não considerando o zero

#include<stdio.h>

int main(void){
    int i, qtd_pares = 0;
    for(i = 0; qtd_pares <= 30; i++){
        if(i % 2 != 0){
            printf("(%d) - %d\n", qtd_pares, i);
            qtd_pares++;
        }
    }
}