/*
Leia o número da conta e o saldo de vários clientes, até o usuário digitar zero. A cada entrada
deverá ser apresentada a mensagem “positivo” ou “negativo”, caso o saldo seja positivo ou
negativo. Ao final, deverá ser impresso o percentual de contas com saldo negativo.
*/
#include<stdio.h>

int main(int){
    int num_conta, saldo, positivos, negativos;

    positivos = negativos = 0;
    while(true){
        puts("digite o número da conta e o saldo correspondente, respectivamente");
        scanf("%d", &num_conta);

        if(num_conta == 0)
            break;

        scanf("%d", &saldo);

        if(saldo < 0){
            puts("negativo");
            negativos++;
        }
        else{
            puts("positivo");
            positivos++;
        }
    }

    float negativos_porcento = negativos * 100 / (negativos + positivos);

    printf("percentual de saldos negativos: %.2f", negativos_porcento);
}