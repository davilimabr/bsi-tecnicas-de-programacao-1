/*Leia um número n com 8 dígitos, separe o dia, mês e ano do número lido, mostrando-os na tela.
Exemplo: 25031949 imprime 25/03/1959*/

#include<stdio.h>
#include<math.h>

void main()
{
    int numData;
    
    printf("digite uma data sem formatação:");
    scanf("%d", &numData);

    int i, divisor = 1;
    for(i=0;i<floor(log10(numData)); i++)
        divisor *= 10;

    int num, sobra = numData;
    for(i = 1;; i++)
    { 
        if(i == 3 || i == 6)
        {
            printf("/");
            i++;
        }
        
        num = sobra / divisor;
        printf("%d", num);

        if(sobra % divisor != 0)
            sobra = sobra % divisor;
        else
            break;

        divisor /= 10;
    }
}