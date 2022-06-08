/*Leia um vetor v com 10 números reais. Em seguida, percorra o vetor v e imprima o valor e a
metade do valor (se ele for menor que 10) ou o dobro do valor (se ele for maior ou igual a 10).*/

#include<stdio.h>

int main(void){
    float num[10];

    int i;
    for(i = 0; i < 10; i++){
        printf("digite o numero %d\n", i + 1);
        scanf("%f", &num[i]);
    }

    for(i = 0; i < 10; i++){
        if(num[i] < 10)
            printf("%.2f  - metade %.2f\n", num[i], (float) num[i] / 2);
        else
            printf("%.2f  - dobro %.2f\n", num[i], (float) num[i] * 2);
    }
}