/*Implemente a função
bool hora_valida(int hora, int min, int seg)
que verifica se os valores de hora, min e seg formam ou não uma hora válida no formato brasileiro
(hora: 0 a 23, min: 0 a 59 e seg: 0 a 59).*/

#include<stdio.h>

bool hora_valida(int hora, int min, int seg){
    return hora >= 0 && hora < 24   &&   min >= 0 && min < 60   &&   seg >= 0 && seg < 60;
}

int main(void){
    int h, m, s;

    do{
        puts("digite um horario (h:m:s)");
        scanf("%d %d %d", &h, &m ,&s);
    }while(!hora_valida(h, m, s));

    puts("hora válida");
}

