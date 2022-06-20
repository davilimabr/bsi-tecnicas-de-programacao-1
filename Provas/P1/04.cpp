/*
ler tam, min, max (sendo min <= max) e ler um vetor de tamanho tam, que os números estejam entre 
min e max (inclusos). No final, imprimir a soma dos números pares em indices ímpares e a soma dos números
ímpares em indices pares.
*/

#include<stdio.h>

int main(void){
    int tam, min, max, pares, impares;

    do{
        puts("digite o tamanho da sequência de números");
        scanf("%d", &tam);
    }while(tam <=0);

    do{
        puts("digite o valor mínimo e máximo da sequência, respectivamente");
        scanf("%d %d", &min, &max);
    }while(min > max);

    int vet[tam]; 
    pares = impares = 0;

    for(int i = 0; i < tam; ){
        printf("digite o número %d da sequência", i+1);
        scanf("%d", &vet[i]);

        if(vet[i] >= min && vet[i] <= max){
            if(i % 2 != 0 && vet[i] % 2 == 0)
                pares += vet[i];
            else if(i % 2 == 0 && vet[i] % 2 != 0)
                impares += vet[i];

            i++;
        }
    }

    printf("soma dos pares em indices impares: %d\n soma dos impares em indices pares: %d", pares, impares);
}