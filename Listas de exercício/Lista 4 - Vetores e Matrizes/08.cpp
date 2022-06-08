/*Leia um vetor v de 10 inteiros e dois valores inteiros n1 e n2. Em seguida, imprima os valores de v
que estão no intervalo de n1 a n2 (inclusive). Caso n1 seja maior que n2 imprima uma mensagem
de erro.*/

#include<stdio.h>

int main(void){
    int num[10], num1, num2;

    int i;
    for(i = 0; i < 10; i++){
        printf("digite o numero %d\n", i + 1);
        scanf("%d", &num[i]);
    }

    while(true){
        puts("digite dois numeros n1 e n2, respectivamente");
        scanf("%d %d", &num1, &num2);

        if(num1 > num2)
            puts("O n1 deve ser menor que o n2");
        else break;
    }

    for(i = 0; i < 10; i++){
        if((num[i] > num1 && num[i] < num2) || (num[i] == num1 || num[i] == num2))
            printf("%d\n", num[i]);
    }
}