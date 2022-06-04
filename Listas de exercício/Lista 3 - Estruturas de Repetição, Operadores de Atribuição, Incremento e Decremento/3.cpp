//Imprima os 50 primeiros números pares, não considerando o zero

#include<stdio.h>

int main(int){
    int i = 0, qtd_pares = 0;
    while(qtd_pares <= 50){
        i++;
        if(i % 2 == 0){
            printf("%d - %d\n", qtd_pares, i);
            qtd_pares++;
        }
    }
}
