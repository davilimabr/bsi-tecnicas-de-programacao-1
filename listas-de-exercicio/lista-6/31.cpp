/*
Implemente a função

void decrementa_hora(int &hora, int &min, int &seg, int segundos)

que decrementa a hora, min e seg (no formato brasileiro) de acordo com os segundos fornecidos.
Note que a hora 00:02:15 decrementada em 200 segundos vira 23:58:55.
*/

#include<stdio.h>
#include "funcoes.lib.cpp"

void decrementa_hora(int &hora, int &min, int &seg, int segundos){
    int horario_seg = hora * 3600 + min * 60 + seg;
    int incrementado = horario_seg - segundos + 1;

    hora = incrementado / 3600;
    do{
        hora %= -24;
    }while(hora > 24);
    hora += hora <= 0 ? 23 : 0;

    incrementado %= 3600;
    
    min = incrementado / 60;
    min += min <= 0 ? 59 : 0;  
    
    incrementado %= 60;
    
    seg = incrementado;
    seg += seg <= 0 ? 59 : 0;  
}

int main(void){
    int h, m, s, segsub;

    do{
        puts("digite um horario (h:m:s)");
        scanf("%d %d %d", &h, &m ,&s);
    }while(!hora_valida(h, m, s));

    puts("Escolha a quantidade de segundos para subtrair");
    scanf("%d", &segsub);

    decrementa_hora(h, m, s, segsub);
    printf("hora decrementada: %d:%d:%d", h,m,s);
}
