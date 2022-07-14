/*Implemente a função

int segundos(int hora, int min, int seg)

que retorna a hora representada por hora, min e seg convertida em segundos.*/

#include<stdio.h>
#include <stdlib.h>
#include "funcoes.lib.cpp"

int segundos(int hora, int min, int seg){
    return hora * 3600 + min * 60 + seg;
}

int main(void){
    int h, m, s;

    do{
        puts("digite um horario (h:m:s)");
        scanf("%d %d %d", &h, &m ,&s);
    }while(!hora_valida(h, m, s));

    printf("horarios convetido em seguntos: %d", segundos(h,m, s));
}