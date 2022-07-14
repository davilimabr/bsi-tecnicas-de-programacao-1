/*. Implemente a função

void decrementa_hora(int &hora, int &min, int &seg)

que decrementa a hora, min e seg (no formato brasileiro) de um segundo. Note que a hora 00:00:00
decrementada de um segundo vira 23:59:59.*/

#include<stdio.h>
#include "funcoes.lib.cpp"

void decrementa_hora(int &hora, int &min, int &seg){
    if(hora == 0 && min == 0 && seg == 0){
        hora = 23;
        min = seg = 59;
    }
    else if(min == 0 && seg == 0){
        hora--;
        min = seg = 59;
    }
    else if(seg == 0){
        min--;
        seg = 59;
    }
    else 
        seg--;
}

int main(void){
    int h, m, s;

    do{
        puts("digite um horario (h:m:s)");
        scanf("%d %d %d", &h, &m ,&s);
    }while(!hora_valida(h, m, s));

    decrementa_hora(h, m, s);
    printf("hora incrementada: %d:%d:%d", h,m,s);
}