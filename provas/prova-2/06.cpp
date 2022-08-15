/*
Criar função para busca binária de um ponto, em um vetor de pontos. Os pontos estão ordenados por (x, y), ou seja, 
primeiro ordenados por x e caso o x seja igual, é ordenado por y, de forma crescente. 
*/

#include<stdio.h>

struct Ponto{
    float X;
    float Y;
};

int buscaBinariaPonto(Ponto pontos[], int qtd_pontos, Ponto busca){
    int comeco = 0;
    int fim = qtd_pontos-1;

    while(comeco <= fim){
        int i = (comeco + fim) / 2;

        if(pontos[i].X == busca.X && pontos[i].Y == busca.Y)
            return i;

        if(pontos[i].X < busca.X || pontos[i].X == busca.X && pontos[i].Y < busca.Y)
            comeco = i + 1;
        else 
            fim = i;
    }
    return -1;
}

int main(void){
    int qtd_pontos = 10;
    Ponto teste[qtd_pontos] =
    {
        {1,0},
        {1,1},
        {1,2},
        {2,1},
        {3,2},
        {4,3},
        {4,4},
        {4,5},
        {4,6},
        {5,4},
    };
    Ponto busca = {4,5};

    int p_busca = buscaBinariaPonto(teste, qtd_pontos, busca);

    printf("posição: %d\nx: %f\ny: %f", p_busca, teste[p_busca].X, teste[p_busca].Y);
}