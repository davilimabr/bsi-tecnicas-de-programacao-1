/*Leia 3 notas de um aluno e seus respectivos pesos. Depois, calcule e imprima a média ponderada
do aluno.*/

/*Da maneira implementada, é possível calcular a média com várias notas, e não somente 3*/

#include<stdio.h>
#include<stdbool.h>

void main()
{
    float somaNotas = 0, media;
    int qtdNota, somaPesos = 0;

    printf("Quantas notas serao inseridas?\n");
    scanf("%d", &qtdNota);

    float nota;
    int peso, i;

    for(i=0; i<qtdNota; i++)
    {
        printf("Digite a nota e seu respectivo peso: \n");
        scanf("%f", &nota);

        printf("Peso: \n");
        scanf("%d", &peso);

        system("cls");

        somaNotas += nota * peso;
        somaPesos += peso;
    }

    media = somaNotas / somaPesos;

    printf("A media ponderada e: %.2f", media);
        
}
