/*
Faça um programa que implemente um jogo de Craps. O jogador lança um par de dados, obtendo
um valor de 2 a 12. Se na primeira jogada ele tira 7 ou 11 o jogo termina e ele ganha. Porém, se na
primeira jogada ele tira 2, 3 ou 12, o jogo termina e ele perde. Para qualquer outro valor (4, 5, 6, 8
9 ou 10) esta é a pontuação do jogador. O objetivo agora é continuar jogando até que o jogador tire
novamente a mesma pontuação. Entretanto, o jogador perde se tirar um 7 antes de tirar a mesma
pontuação. Implemente, pelo menos, duas funções:
int lancar_dado(): que simula o lançamento de um único dado.
int jogar_dados(): que simula o lançamento de dois dados simultaneamente.
*/

#include<stdio.h>
#include<stdlib.h>

int jogar_dado(){
    return 1 + (rand() % 6);
}

int jogar_dados(){
    return jogar_dado() + jogar_dado();
}

int main(void){
    puts("começar jogo");
    getchar();
    puts("pressione qualquer tecla para lançar o dado");
    getchar();

    int pts_iniciais = jogar_dados();
    printf("Pontos iniciais: %d\n", pts_iniciais);

    if(pts_iniciais == 7 || pts_iniciais == 11)
        puts("você venceu!");
    else if(pts_iniciais == 2 || pts_iniciais == 3 || pts_iniciais == 12)
        puts("você perdeu :(");
    else{
        int rodada = 1, pts_rodada = 0;
        while(pts_rodada != 7){
            puts("pressione qualquer tecla para lançar o dado");
            getchar();
            pts_rodada = jogar_dados();
            printf("pontos rodada %d: %d\n", rodada, pts_rodada);

            if(pts_rodada == pts_iniciais){
                puts("você venceu !!");
                getchar();
                break;
            }
            rodada++;
        }
    }
}