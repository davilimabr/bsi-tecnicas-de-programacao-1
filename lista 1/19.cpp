/*Leia um número inteiro n de 100 a 999 e imprima a soma dos dígitos que compõem o número*/


#include<stdio.h>
#include<math.h>

int main(void)
{
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    int i, divisor = 1;
    for(i = 0; i< floor(log10(num)); i++)
        divisor *= 10;

    int soma = 0, sobra = num;
    for(;; divisor/=10)
    {
        soma += sobra / divisor;

        if(sobra % divisor != 0)
            sobra = sobra % divisor;
        else break;
    }
    printf("A soma dos algarismos e %d", soma);
}