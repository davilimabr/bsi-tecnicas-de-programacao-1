/*Realize a conversão de km para milhas, imprimindo o resultado da conversão.*/

#include <stdio.h>
#include <math.h>

void main()
{
    float km, milhas;
    
    printf("Insira uma distância em km: \n");
    scanf("%f", &km);
    
    milhas = km * 0.621371;
    
    printf("Essa distância em milhas é: %f", milhas);

}
