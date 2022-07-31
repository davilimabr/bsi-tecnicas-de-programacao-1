/*Crie a struct Ponto para representar um ponto no plano cartesiano. Em seguida, crie a struct
Circulo para representar um círculo (formado por um ponto central e um raio). Por fim, leia dois
círculos e informe se esses círculos colidem. A colisão deverá ser verificada por uma função
booleana colide.*/

#include<stdio.h>
#include<math.h>

struct Ponto{
    float X;
    float Y;
};

struct Circulo{
    Ponto Centro;
    float Raio;
};

bool colide_circulo(Circulo c1, Circulo c2){
    return sqrt( pow( c1.Centro.X - c2.Centro.X, 2 ) + pow(c1.Centro.Y - c2.Centro.Y, 2) ) <= c1.Raio + c2.Raio;
}

int main(void){
    Circulo c1, c2;

    puts("Circulo 1");
    puts("Digite as coordenadas x e y do centro do circulo:");
    scanf("%f %f", &c1.Centro.X, &c1.Centro.Y);
    puts("Digite o raio do circulo:");
    scanf("%f", &c1.Raio);

    puts("Circulo 2");
    puts("Digite as coordenadas x e y do centro do circulo:");
    scanf("%f %f", &c2.Centro.X, &c2.Centro.Y);
    puts("Digite o raio do circulo:");
    scanf("%f", &c2.Raio);

    if(colide_circulo(c1, c2))
        puts("Os circulos colidem");
    else
        puts("Os circulos NAO colidem");
}