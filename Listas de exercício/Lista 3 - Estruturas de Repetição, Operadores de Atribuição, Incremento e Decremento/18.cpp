/*
Entre com a idade de várias pessoas até o usuário digitar zero e imprima:
• Total de pessoas com menos de 21 anos.
• Total de pessoas com mais de 50 anos.
Obviamente, idades negativas não devem ser computadas.
*/
#include<stdio.h>

int main(int){
    int idade, jovens, idosos;

    jovens = idosos = 0;
    while(idade != 0){
        puts("idade: ");
        scanf("%d", &idade);

        if(idade > 0 && idade < 21)
            jovens++;
        else if(idade > 50)
            idosos++;
    }

    printf("possoas com menos de 21: %d \npessoas com mais de 50: %d", jovens, idosos);
}