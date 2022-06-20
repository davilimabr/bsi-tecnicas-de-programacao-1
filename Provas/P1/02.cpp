/*
Mostrar todos os números "espertos" que existem.
Requisitos de um número esperto:
- Ter 3 ou 4 dígitos;
- Não ser par;
- Ser divisível por 7 ou por 3;
- O último dígito à direita deve ser diferente de 5 e 6.
*/

#include<stdio.h>

int main(void){
    int ult_d;
    for(int i = 100; i < 10000; i++){
        ult_d = i % 10;
        if(i % 2 != 0 && ult_d != 5 && ult_d != 6 && (i % 7 == 0 || i % 3 == 0))
                printf("%d\n", i);
    }
}