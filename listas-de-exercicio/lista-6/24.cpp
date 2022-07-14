/*Implemente a função

void plural(char palavra[])

que pluraliza a palavra de acordo com as seguintes regras:
• Se a palavra terminar em ‘l’ (ele) deve ser retirado o ‘l’ e acrescentado os caracteres ‘i’ e
‘s’ no final. Exemplo: "animal" → "animais".
• Se a palavra terminar em ‘r’ ou ‘s’ ou ‘z’ deve ser acrescentado os caracteres ‘e’ e ‘s’.
Exemplos: "tambor" → "tambores", "feliz" → "felizes" e "viés" → "vieses".
• Se a palavra terminar em ‘m’ deve ser retirado o ‘m’ e acrescentado os caracteres ‘n’ e
‘s’. Exemplo: "homem" → "homens".
• Os demais casos deverão apenas receber o caractere ‘s’ no final. Exemplo: "casa" → "casas".*/

#include<stdio.h>
#include<ctype.h>
#include<string.h>

void plural(char palavra[]){
    int ult_p = strlen(palavra) - 1;
    int ult_c = tolower(palavra[ult_p]);
    
    if(ult_c == 'l'){
        palavra[ult_p] = 'i';
        palavra[++ult_p] = 's';
    }
    else if(ult_c == 'm'){
        palavra[ult_p] = 'n';
        palavra[++ult_p] = 's';
    }
    else if(ult_c == 'r' || ult_c == 's' || ult_c == 'z'){
        palavra[++ult_p] = 'e';
        palavra[++ult_p] = 's';
    }
    else
        palavra[++ult_p] = 's';

    palavra[ult_p + 1] = '\0';
}

int main(void){
    char palavra[50];

    puts("digite uma palavra");
    gets(palavra);

    plural(palavra);
    puts(palavra);
}
