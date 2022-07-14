/*Implemente a função

void incrementa_hora(int &hora, int &min, int &seg)

que incrementa a hora, min e seg (no formato brasileiro) em um segundo. Note que a hora
23:59:59 incrementada em um segundo vira 00:00:00.*/

#include<stdio.h>
#include "funcoes.lib.cpp"

void incrementa_hora(int &hora, int &min, int &seg){
    if(hora == 23 && min == 59 && seg == 59)
        hora = min = seg = 0;
    else if(min == 59 && seg == 59){
        hora++;
        min = seg = 0;
    }
    else if(seg == 59){
        min++;
        seg = 0;
    }
    else 
        seg++;
}

int main(void){
    int h, m, s;

    do{
        puts("digite um horario (h:m:s)");
        scanf("%d %d %d", &h, &m ,&s);
    }while(!hora_valida(h, m, s));

    incrementa_hora(h, m, s);
    printf("hora incrementada: %d:%d:%d", h,m,s);
}