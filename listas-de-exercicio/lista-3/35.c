/*O número 3025 possui a seguinte característica: 30 + 25 = 55 => 55*55 = 3025. Imprima todos os
números inteiros de 4 dígitos que tem essa característica.*/

#include<stdio.h>

int main(void){
    int p1, p2, aux;
    int i;
    for(i = 1000; i < 10000; i++){
        p1 = i /100;
        p2 = i % 100;
        aux = (p1+p2)*(p1+p2);
        
        if(aux == i)
            printf("%d\n",i);
    }
}