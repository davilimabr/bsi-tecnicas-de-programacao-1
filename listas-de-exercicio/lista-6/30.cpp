/*
Implemente a função

void incrementa_hora(int &hora, int &min, int &seg, int segundos)

que incrementa a hora, min e seg (no formato brasileiro) de acordo com os segundos fornecidos.
Note que a hora 23:58:50 incrementada em 175 segundos vira 00:01:45.
*/

#include<stdio.h>
#include "funcoes.lib.cpp"

void incrementa_hora(int &hora, int &min, int &seg, int segundos){
    int horario_seg = hora * 3600 + min * 60 + seg;
    int incrementado = horario_seg + segundos;

    hora = incrementado / 3600;
    incrementado %= 3600;
    min = incrementado / 60;
    incrementado %= 60;
    seg = incrementado;
}

int main(void){
    int h, m, s, segsoma;

    do{
        puts("digite um horario (h:m:s)");
        scanf("%d %d %d", &h, &m ,&s);
    }while(!hora_valida(h, m, s));

    puts("Escolha a quantidade de segundos para adicionar");
    scanf("%d", &segsoma);

    incrementa_hora(h, m, s, segsoma);
    printf("hora incrementada: %d:%d:%d", h,m,s);
}