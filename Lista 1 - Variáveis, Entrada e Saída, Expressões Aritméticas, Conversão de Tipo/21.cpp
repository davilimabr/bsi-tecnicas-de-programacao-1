/*Em uma disputa, um carro parte do repouso e percorre uma pista de 1 km em um tempo t. Leia o
valor de t e calcule a aceleração do carro em metros/s2*/

#include<stdio.h>

int main(void)
{
    float tempo, aceleracao;

    printf("Insira o tempo, em segundos, que um carro percorreu 1km\n");
    scanf("%f", &tempo);

    aceleracao = 2 * 1000 / (tempo * tempo);
     // S = S0 + V0t + (at2) / 2
    // S = (at2) / 2
    // a = 2S / t2
   
    printf("A aceleração do carro era de %.2f m/s", aceleracao);
}