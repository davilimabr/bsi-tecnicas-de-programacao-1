/*Implemente a função

int reverso(int n)

que recebe um valor inteiro n e retorna o mesmo número com seus dígitos invertidos. Por exemplo,
se n = 7631, a função deve retornar 1367.*/
#include<stdio.h>
#include<math.h>

int digitos(int num){
    int sobra = num, count = 0;

    do{
        sobra = sobra / 10;
        count++;
    }    
    while(sobra > 0);

    return count;
}

int reverso(int n){
    int aux = n, novo_num = 0, pot = pow(10, digitos(n)-1);

    for(int i = pot; aux > 0 ; i /= 10){
        novo_num += (aux % 10) * i;

        aux /= 10;
    }

    return novo_num;
}

int main(void){
    int num;

    puts("digite um numero");
    scanf("%d", &num);

    printf("numero %d invertido: %d", num, reverso(num));
}

 