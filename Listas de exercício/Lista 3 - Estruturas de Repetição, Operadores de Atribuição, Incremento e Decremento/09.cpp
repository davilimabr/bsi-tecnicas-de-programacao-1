//Imprima uma tabela de conversão de polegadas para centímetros. Deseja-se que a tabela conste
//valores desde 1 polegada até 20 polegadas inteiras.

#include<stdio.h>

int main(int){
    int cm;
    float polegada;

    for(cm = 1; cm <= 20; cm++){
        polegada = cm * 0.393701;
        printf("%d cm -> %f polegada\n", cm, polegada);
    }
}