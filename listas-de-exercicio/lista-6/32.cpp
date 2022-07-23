/*
Implemente a função

void duracao(int hora_ini, int min_ini, int seg_ini,
int hora_fim, int min_fim, int seg_fim,
int &horas, int &minutos, int &segundos)

que retorna a duração da hora inicial até a hora final em horas, minutos e segundos. Se a hora final
for menor que a hora inicial é porque a hora inicial se refere a um dia e a hora final ao dia seguinte.
*/

#include<stdio.h>
#include "funcoes.lib.cpp"

void duracao(int hora_ini, int min_ini, int seg_ini,
int hora_fim, int min_fim, int seg_fim,
int &horas, int &minutos, int &segundos){
    int inicio_seg = hora_ini * 3600 + min_ini * 60 + seg_ini;
    int fim_seg = hora_fim * 3600 + min_fim * 60 + seg_fim;

    if(inicio_seg > fim_seg)
        fim_seg += 86400;
    
    int diferenca = fim_seg - inicio_seg;

    horas = diferenca / 3600;
    diferenca %= 3600;
    minutos = diferenca / 60;
    diferenca %= 60;
    segundos = diferenca;
}

int main(void){
    int hi, mi, si;
    int hf, mf, sf;

    do{
        puts("digite o horario (h:m:s) de inicio");
        scanf("%d %d %d", &hi, &mi ,&si);
    }while(!hora_valida(hi, mi, si));
    
    do{
        puts("digite o horario (h:m:s) do fim");
        scanf("%d %d %d", &hf, &mf ,&sf);
    }while(!hora_valida(hf, mf, sf));

    int hr, mr, sr;
    duracao(hi, mi, si, hf, mf, sf, hr, mr, sr);
    printf("diferença entre os horários: %d:%d:%d", hr,mr,sr);
}
