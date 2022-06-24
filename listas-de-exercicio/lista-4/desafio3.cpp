/*
Para descobrir os números primos de 2 a n podemos adotar o Crivo de Eratóstenes. Essa estratégia
consiste em criar uma lista com todos os números inteiros no intervalo de 2 a n, onde todos estão
"desmarcados". Em seguida, pegue o primeiro inteiro i da lista que está "desmarcado" e marque
todos os seus múltiplos, ou seja, 2i, 3i, 4i, etc. Depois, pegue o segundo inteiro i que está
"desmarcado" e marque os seus múltiplos. Repita esse processo enquanto i ≤ √n (onde √n deve ser
arredondado para baixo). Os números primos são os números de 2 a n que permanecem
"desmarcados". Dica: a implementação mais simples consiste em adotar um vetor de booleanos
onde os valores 2 a n são os índices desse vetor.
*/

#include<stdio.h>
#include<math.h>

int main(void){
    int num;

    do{
        puts("digite o limite do intervalo que serao retirados os primos");
        scanf("%d", &num);
    }while(num < 2);

    bool primos[num];
    for(int i = 0; i < num; i++)
        primos[i] = true;

    for(int i = 2; i <= floor(sqrt(num)); i++)
        if(primos[i])
            for(int j = i+1; j < num; j++) 
                if(j % i == 0)
                    primos[j] = false;        

    puts("primos");

    for(int i = 2; i < num; i++)
        if(primos[i])
            printf("%d\n", i);

}
