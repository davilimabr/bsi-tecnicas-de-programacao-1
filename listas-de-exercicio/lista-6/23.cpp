/*Implemente a função

int substring(char str[], int ini, int fim, char resultado[])

para extrair a substring da posição ini até fim da string str e retornar na string resultado. A função
deverá retornar o tamanho da string resultado ou -1 caso não seja possível extrair a substring.*/

#include<stdio.h>
#include<string.h>

int substring(char str[], int ini, int fim, char resultado[]){
    int j = 0;
    for(int i = ini; i <= fim; i++)
        resultado[j++] = str[i];

    resultado[j] = '\0';
    
    if(ini > fim || (ini > strlen(str) && ini < 0) || (fim > strlen(str) && fim < 0))
        return -1;
    else 
        return j; 
}

int main(void){
    char string[100];

    puts("digite um texto");
    gets(string);

    puts("digite duas posições para ser retirado um trecho do texto");
    
    int ini, fim;
    scanf("%d %d", &ini, &fim);

    char substr[100];
    int result = substring(string, ini, fim, substr);

    if(result == -1)
        puts("Digite posicoes validas");
    else 
        puts(substr);
}