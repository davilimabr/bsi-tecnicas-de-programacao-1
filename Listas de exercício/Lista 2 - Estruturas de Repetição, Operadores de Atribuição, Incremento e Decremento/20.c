/*
Leia as notas de duas provas e de um trabalho (todos os valores entre 0 e 10) e a quantidade de
faltas, definindo e imprimindo se ele foi aprovado, reprovado, reprovado por falta ou se fará prova
final. O aluno será reprovado se faltou a mais de 15 aulas. Aluno será aprovado se não for
reprovado por falta e sua média for maior ou igual a 7,0. Caso tenha média menor que 4,0, então
estará reprovado. Se não for nenhuma dessas situações, então deverá fazer prova final. O cálculo da
média deve ser feito com peso 3 para a 1a prova, peso 5 para a 2a prova e peso 2 para o trabalho.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float prova1, prova2, trab;
    int faltas;

    puts("Insira as notas das duas provas e do trabalho");
    puts("prova 1:");
    scanf("%f", &prova1);
    
    puts("prova 2:");
    scanf("%f", &prova2);
    
    puts("trab:");
    scanf("%f", &trab);

    system("cls");
    puts("Inisra sua quantidade de faltas:");
    scanf("%d", &faltas);
    system("cls");

    float media = (prova1 * 3 + prova2 * 5 + trab * 2) / 10;

    if(faltas > 15)
        printf("Reprovado por falta. \n média: %2.f", media);
    else if(media >= 7)
        printf("Aprovado. \n media: %.2f", media);
    else if(media < 4)
        printf("Reprovado por média. \n media: %.2f", media);
    else 
        printf("Tera de fazer a Prova Final. \n media: %.2f", media);
}