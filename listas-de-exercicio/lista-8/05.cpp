/*
Crie um programa que faz o gerenciamento das contas de um banco. Inicialmente devem ser criadas
n contas com: número da conta, nome do correntista e saldo inicial. Em seguida, apresente um
menu com as opções 1-Sacar, 2-Depositar, 3-Consultar saldo e 4-Sair. Para cada operação solicite o
número da conta, e para as operações 2 e 3 solicite o valor a sacar ou depositar e imprima o valor
do saldo resultante. As operações só podem ser realizadas se a conta existir e o saque só pode ser
efetivado caso haja saldo suficiente. Crie funções para a entrada de dados e para cada uma das
operações. O programa só termina quando o usuário selecionar a opção 4.
*/
#include<stdio.h>
#include<stdlib.h>

struct Conta{
    long long NumeroConta;
    char NomeCorrentista[30];
    float Saldo;
};

bool NumeroValido(long long num){
    return num > 0;
}

int GetQuantidadedeContas(Conta conta[]){
    int i = 0;
    
    while(NumeroValido(conta[i++].NumeroConta)){}

    return i;
}

int BuscaConta(Conta contas[], long long numconta){
    for(int i = 0; i < GetQuantidadedeContas(contas); i++)
        if(contas[i].NumeroConta == numconta)
            return i;

    return -1;
}

float Sacar(Conta contas[], long long numconta, float valor){
    int posicao = BuscaConta(contas, numconta);
    if(posicao == -1)
        return -1;

    return contas[posicao].Saldo -= valor;
}

void ApresentarInterfaceSacar(Conta contas[]){
    long long numconta;
    puts("Digite o número da conta");
    scanf("%lld", &numconta);

    float valor;
    puts("digite o valor a sacar");
    scanf("%f", &valor);

    float resultado = Sacar(contas, numconta, valor);

    if(resultado == -1)
        puts("Erro: Conta não encontrada");
    else 
        printf("Conta: %lld\nSaldo: %f", numconta, resultado);
}


float Depositar(Conta contas[], long long numconta, float valor){
    int posicao = BuscaConta(contas, numconta);
    if(posicao == -1)
        return -1;

    return contas[posicao].Saldo += valor;
}

void ApresentarInterfaceDepositar(Conta contas[]){
    long long numconta;
    puts("Digite o número da conta");
    scanf("%lld", &numconta);

    float valor;
    puts("digite o valor a sacar");
    scanf("%f", &valor);

    float resultado = Depositar(contas, numconta, valor);

    if(resultado == -1)
        puts("Erro: Conta não encontrada");
    else 
        printf("Conta: %lld\nSaldo: %f", numconta, resultado); 
}


float Consultar(Conta contas[], long long numconta){
    int posicao = BuscaConta(contas, numconta);
    if(posicao == -1)
        return -1;

    return contas[posicao].Saldo;
}

void ApresentarInterfaceConsultar(Conta contas[]){
    long long numconta;
    puts("Digite o número da conta");
    scanf("%lld", &numconta);

    float resultado; 
    resultado = Consultar(contas, numconta);

    if(resultado == -1)
        puts("Erro: Conta não encontrada");
    else
        printf("Conta: %lld\nSaldo: %f", numconta, resultado);
}

void ApresentarMenu(Conta contas[]){
    while(true){
        int opc;
        puts("MENU GERENCIAMENTO CONTA");
        puts("1- Consultar");
        puts("2- Sacar");
        puts("3- Depositar");
        puts("4- Sair");
        scanf("%d", &opc);

        switch(opc){
            case 1:
                ApresentarInterfaceConsultar(contas);
                break;
            case 2:
                ApresentarInterfaceSacar(contas);
                break;
            case 3:
                ApresentarInterfaceDepositar(contas);
                break;
            case 4: 
                return;
        }   
        system("cls");
    }
}

int main(void){
    int qtd_contas;
    puts("digite a quantidade de contas que serão lidas");
    scanf("%d", &qtd_contas);

    Conta contas[qtd_contas];

    for(int i = 0; i < qtd_contas; i++){
        printf("Conta %d\n", i+1);
        puts("digite o numero da conta");
        scanf("%lld", &contas[i].NumeroConta);

        getchar();

        puts("digite o nome do dono da conta");
        gets(contas[i].NomeCorrentista);

        puts("digite o saldo inicial");
        scanf("%f", &contas[i].Saldo);
        
        puts("\n\n");
    }

    ApresentarMenu(contas);
}