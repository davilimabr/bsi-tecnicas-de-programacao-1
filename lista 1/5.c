/*Leia a quantidade de bytes de um arquivo e a velocidade de transmissão em bytes por segundo e
imprimir quantos segundos serão necessários para fazer o download do arquivo*/

#include <stdio.h>
#include <math.h>

void main()
{
    int qtdBytes;
    float vTransmissao, tempoTransmissao;
    
    printf("Insira a quantidade de bytes do arquivo: \n");
    scanf("%i", &qtdBytes);
    
    printf("Insira a velocidade de transmissao em bytes por segundo: \n");
    scanf("%f", &vTransmissao);
    
    tempoTransmissao = qtdBytes / vTransmissao;
    
    printf("O tempo estimado, em segundos, para a conclusão da transferencia do arquivo é de: %.2f", tempoTransmissao);
}
