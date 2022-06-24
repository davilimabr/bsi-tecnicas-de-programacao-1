//Imprima os 20 primeiros múltiplos de 5, desconsiderando o zero

#include<stdio.h>

int main(void){
    int i, qtd_mult = 0;
    for(i = 0; qtd_mult <= 20; i++){
        if(i % 5 == 0){
            printf("(%d) - %d\n", qtd_mult, i);
            qtd_mult++;
        }
    }
}