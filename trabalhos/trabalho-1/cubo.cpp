#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void){
    long long potencia;
    int base;

    do{
        puts("digite uma numero para ser a base da potecia de 3");
        scanf("%d", &base);
    }while(base < 1);       

    system("cls");

    if(base == 1){
        printf("%d ao cubo = %d", base, base);
        return 0;
    }
    
    potencia = ceil(pow(base, 3));

    printf("%d ao cubo = ", base);

    long long soma;
    for(long long i = 1; i < potencia; i++){
        soma = 0;

        int qtd_impares = 0;
        for(long long j = i; qtd_impares < base; j++)
            if(j % 2 != 0){
                soma += j;
                qtd_impares++;
            }
        
        if(soma == potencia){
            qtd_impares = 0;
            for(long long j = i; qtd_impares < base; j++){
                if(j % 2 != 0){
                    printf("%lld", j);
                    qtd_impares++;
                    
                    if(qtd_impares < base)
                        printf(" + ");
                }
            }
            break;
        }
    }
}