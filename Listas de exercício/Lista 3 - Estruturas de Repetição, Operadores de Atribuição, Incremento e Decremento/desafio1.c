/*A série de Fibonacci é uma sequência de números que começam com 0 e 1 e, a partir daí, o
próximo número é gerado pela soma dos dois imediatamente anteriores: 0 1 1 2 3 5 8 13... Leia
um valor n (n > 2) e calcule o n-ésimo número da série de Fibonacci.*/

#include<stdio.h>

int main(void){
    int n;

    puts("digite a n-esima posicao da sequencia de fibonacci");
    scanf("%d", &n);

    int i, n_esimo, aux1 = 0, aux2 = 1;
    printf("(1) - %d\n(2) - %d\n", aux1, aux2);

    for(i = 3; i <= n; i ++){
        n_esimo = aux1 + aux2;
        aux1 = aux2;
        aux2 = n_esimo;
        printf("(%d) - %d\n", i, n_esimo);
    }
}