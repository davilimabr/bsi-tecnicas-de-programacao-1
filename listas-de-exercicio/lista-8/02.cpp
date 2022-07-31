/*Crie uma struct Ponto para representar um ponto no plano cartesiano. Em seguida, crie a struct
Retangulo para representar um retângulo (formado por um ponto superior esquerdo e outro ponto
inferior direito). Por fim, os dados de um retângulo e sua área e perímetro. Essas informações
deverão ser calculadas pelas funções area e perimetro, respectivamente.*/

#include<stdio.h>

struct Ponto{
    float X;
    float Y;
};

struct Retangulo{
    Ponto CantoSuperiorEsquedo;
    Ponto CantoInferorDireito;
    float Base; 
    float Altura;
};

float CalculaArea(Retangulo retangulo){
    return retangulo.Base * retangulo.Altura; 
}

float CalculaPerimetro(Retangulo retangulo){
    return (retangulo.Base * 2) + (retangulo.Altura * 2);
}

bool RetanguloValido(Retangulo retangulo){
    return retangulo.CantoInferorDireito.X > retangulo.CantoSuperiorEsquedo.X && 
           retangulo.CantoSuperiorEsquedo.Y > retangulo.CantoInferorDireito.Y;
}

int main(void){
    Retangulo retangulo;

    puts("Digite as coordenadas x e y do ponto superior esquerdo do retângulo");
    scanf("%f %f", &retangulo.CantoSuperiorEsquedo.X, &retangulo.CantoSuperiorEsquedo.Y);

    puts("Digite as coordenadas x e y do ponto inferior direito do retângulo");
    scanf("%f %f", &retangulo.CantoInferorDireito.X, &retangulo.CantoInferorDireito.Y);

    retangulo.Base = retangulo.CantoInferorDireito.X - retangulo.CantoSuperiorEsquedo.X;
    retangulo.Altura = retangulo.CantoSuperiorEsquedo.Y - retangulo.CantoInferorDireito.Y;

    if(RetanguloValido(retangulo)){
        printf("Área: %f\n", CalculaArea(retangulo));
        printf("Perímetro: %f", CalculaPerimetro(retangulo));
    }
    else
        puts("Retângulo inválido");
}