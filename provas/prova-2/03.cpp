/*
Criar programa em c para ler compras, com nome, quantidade da compra e o local (supermercado ou feira):
Max de 200 items;
Quando digitar um nome vazio para de ler;
Final imprimir a lista de compras separadas por local de compra;
Ordenando cada uma das listas por nome; 
Usar no mínimo duas funções;
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

const int QTD_MAX_COMPRAS = 200;
const int QTD_NOME = 30;


struct Compra{
    char Nome[QTD_NOME];
    int Quantidade;
    char Local;
};

bool NomeValido(char nome[]){
    for(int i = 0; i < strlen(nome); i++)
        if(!isalpha(nome[i]))
            return false;

    return true;
}

int LerCompras(Compra compras[]){
    int count = 0;

    while(count <= QTD_MAX_COMPRAS){
        printf("Compra numero %d\n", count+1);
        printf("Nome> ");
        gets(compras[count].Nome);

        if(!NomeValido(compras[count].Nome))
            return count;
        
        printf("Quantidade> ");
        scanf("%d", &compras[count].Quantidade);

        getchar();

        printf("Local (S- Supermercado | F- Feira)> ");
        compras[count].Local = toupper(getchar());

        count++;

        getchar();
        system("cls");
    }
    return QTD_MAX_COMPRAS;
}

void ordenaComprasPorNome(Compra compras[], int qtd_compras){
    for(int i = 0; i < qtd_compras-1;)
        if(strcmp(compras[i].Nome, compras[i+1].Nome) > 0){
            Compra temp = compras[i];
            compras[i] = compras[i+1];
            compras[i+1] = temp;

            if(i>0)
                i--;    
        }
        else i++;
}

void ImprimirComprasPorLocal(Compra compras[], int qtd_compras, char local){
    for(int i = 0; i < qtd_compras; i++)
        if(compras[i].Local == local)
            printf("%-30s - %d\n", compras[i].Nome, compras[i].Quantidade);
}

int main(void){
    Compra compras[QTD_MAX_COMPRAS];

    int qtd_compras = LerCompras(compras);

    ordenaComprasPorNome(compras, qtd_compras);

    puts("Mercado");
    ImprimirComprasPorLocal(compras, qtd_compras, 'S');
    puts("Feira");
    ImprimirComprasPorLocal(compras, qtd_compras, 'F');
}
