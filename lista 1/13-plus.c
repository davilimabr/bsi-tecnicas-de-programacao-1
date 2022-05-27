/*Calcule e imprima o n-ésimo termo an de uma PA de razão r. Para isso, seu programa deverá ler o
1º termo a1, a quantidade n de termos e a razão r. Considere: an = a1 + (n-1).r, onde n é natural.*/

/*Além de mostrar o n-ésimo termo da PA, mostra também todos os termos antecessores.*/

#include<stdio.h>
#include<math.h>

void main()
{
    float termoInicial, razao;
    int qtdTermos;

    printf("Insira a quantidade de termos: ");
    scanf("%d", &qtdTermos);

    printf("Insira o termo inicial: ");
    scanf("%f", &termoInicial);

    printf("Insira a razao da PA: ");
    scanf("%f", &razao); 

    float termoN;
    int i;
    for(i=1;i<=qtdTermos;i++)
    {       
        termoN = termoInicial + (i - 1) * razao;
        printf("%.2f (%d) \n", termoN, i);
    }
}
