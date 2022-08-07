/*(olhar slide)*/
#include<stdio.h>
#include<math.h>
#include "funcoes.lib.cpp"

bool cpf_valido(long long cpf){
    if(digitoslong(cpf) < 11)
        return false;
    
    int digitos[12];
    for(int i = 1; i < 12; i++){
        long long divisor_resto = ceil(pow(10, i));
        long long divisor_achar_dgt = ceil(pow(10, i - 1));
        digitos[i] = (cpf % divisor_resto) / divisor_achar_dgt;
    }

    long long mult = 0; 
    for(int i = 2; i < 11; i++)
        mult += digitos[i+1] * i;
    
    long long resto_div = mult % 11;
    if((resto_div == 0 || resto_div == 1) && digitos[2] != 0)
        return false;
    
    if(digitos[2] != (11 - resto_div))
        return false;
   

    mult = 0; 
    for(int i = 2; i < 12; i++)
        mult += digitos[i] * i;
    
    resto_div = mult % 11;
    if((resto_div == 0 || resto_div == 1) && digitos[1] != 0)
        return false;
    
    if(digitos[1] != (11 - resto_div))
        return false;

    return true;
}

int main(void){
    long long cpf;

    puts("digite um cpf");
    scanf("%lld", &cpf);

    if(cpf_valido(cpf))
        puts("valido!");
    else
        puts("invalido!");
}

