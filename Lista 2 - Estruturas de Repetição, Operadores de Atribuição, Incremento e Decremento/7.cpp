/*Um técnico está selecionando atletas que tenham altura maior ou igual a 1,80m e idade menor que
18 anos. Faça um programa para ler a idade e a altura de um atleta e exibir uma das mensagens:
“selecionado” ou “não selecionado”.*/

#include<stdio.h>

int main(void){
    const float ALTURA_MIN = 1.8;
    const int IDADE_MAX = 18;
    
    float altura;
    int idade;

    puts("Altura (m):");
    scanf("%f", &altura);

    puts("Idade (anos):");
    scanf("%d", &idade);

    if(altura >= ALTURA_MIN && idade < IDADE_MAX)
        puts("selecionado");
    else
        puts("nao selecionado");
}