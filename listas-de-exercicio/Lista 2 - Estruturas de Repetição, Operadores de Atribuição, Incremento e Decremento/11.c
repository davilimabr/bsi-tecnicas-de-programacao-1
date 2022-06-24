/*O número 3025 possui a seguinte característica: 30 + 25 = 55 => 55*55 = 3025. Fazer um
programa para ler um número n inteiro de 4 dígitos e imprimir se o número tem ou não essa
característica. Se n não tiver 4 dígitos, imprima uma mensagem de erro.*/

#include <stdio.h>

int main() {
    int num, alg1, alg2;
    
    puts("digite um numero de 4 digitos");
    scanf("%d", &num);
 
    if(num / 10000 > 0){
        puts("O numero possue mais de 4 digitos");
        return 0;
    }
    
    alg1 = num / 100;
    alg2 = num % 100;
    
    if(pow(alg1 + alg2, 2) == num)
        puts("o numero possue essa caracteristica");
    else
        puts("o numero NAO possue essa caracteristica");
        
    return 0;
}