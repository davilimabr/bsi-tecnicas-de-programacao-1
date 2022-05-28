/*. Leia três valores inteiros n, m e k e informe quantos números inteiros no intervalo n..m (inclusive)
são múltiplos de k.*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n, m, k;

    puts("Insira 3 números inteiros");
    scanf("%d %d %d", &n, &m, &k);

    system("cls");

    int i;
    for(i = n; i <= m; i++){
        if(i % k == 0)
            printf("%d\n", i);
    } 
}
