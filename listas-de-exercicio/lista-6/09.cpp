/*Implemente a função

double cosseno(double x, int n)
que calcula o cos(x) com n parcelas usando a série a seguir (x está em radianos):

(olhar pdf)
*/
#include<stdio.h>
#include<math.h>

long long fatorial(int num){
    long long fat = 1;
    for(int i = 1; i <= num; i++)
        fat *= i;
    
    return fat;
}

double cosseno(double x, int n){
    int divisor = 2;
    double cos = 1;

    for(int i = 2; i < n + 1; i++){
        if(i % 2 == 0)
            cos -= pow(x, divisor) / fatorial(divisor);
        else
            cos += pow(x, divisor) / fatorial(divisor);
         
        printf("cos : %f   div:  %d  i : %d\n", cos, divisor, i);
        divisor += 2;
    }

    return cos;
}

int main(void){
    double num;
    int parcelas;

    puts("digite um numero e a quantidade de parcelas para o calculo do coss");
    scanf("%lf", &num);
    scanf("%d", &parcelas);

    printf("cos(%f) = %f", num, cosseno(num, parcelas));
}

