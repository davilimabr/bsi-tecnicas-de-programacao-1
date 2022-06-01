/*
2. Leia um número inteiro n e informe se ele é divisível por 3 e por 7.
3. Leia um número inteiro n e informe se ele é divisível por 3 ou por 7.
*/

#include<stdio.h>

int main(void){
    int numero;
    const int DIVISOR1 = 3;
    const int DIVISOR2 = 7;

    scanf("%d", &numero);

    if(numero % DIVISOR1 == 0 && numero % DIVISOR2 == 0)
        printf("O numero e divisivel por %d e %d", DIVISOR1, DIVISOR2);
    else if (numero % DIVISOR1 == 0 || numero % DIVISOR2 == 0)
        printf("O numero e divisivel por %d ou %d", DIVISOR1, DIVISOR2);
    else
        printf("O numero NAO e divisivel por %d, nem por %d", DIVISOR1, DIVISOR2);
}