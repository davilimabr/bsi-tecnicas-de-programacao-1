#include <stdio.h>

struct Fracao {
    int numerador;
    int denominador;
};

int calcula_mdc(int x, int y) {
    if (y == 0)
        return x;
    else if (x < y)
        return calcula_mdc(y, x);
    else
        return calcula_mdc(y, x % y);
}

int mdc(int x, int y) {
    return calcula_mdc(x >= 0 ? x : -x, y >= 0 ? y : -y);
}

int mmc(int x, int y) {
    return ((x >= 0 ? x : -x) * (y >= 0 ? y : -y)) / mdc(x, y);
}

Fracao cria_fracao(int numerador, int denominador) {
    Fracao f;

    f.numerador = 0;
    f.denominador = 0;

    if (denominador != 0) {
        f.numerador = numerador;
        f.denominador = denominador;

        if (f.denominador < 0) {
            f.numerador = -f.numerador;
            f.denominador = -f.denominador;
        }

        int div = mdc(f.numerador, f.denominador);

        f.numerador = f.numerador / div;
        f.denominador = f.denominador / div;
    }

    return f;
}

Fracao soma(Fracao f1, Fracao f2) {
    int div, n, d;

    if (f1.denominador == f2.denominador) {
        d = f1.denominador;
        n = f1.numerador + f2.numerador;
    }
    else {
        d = mmc(f1.denominador,  f2.denominador);
        n = d / f1.denominador * f1.numerador + d / f2.denominador * f2.numerador;
    }

    div = mdc(n, d);

    return cria_fracao(n/div, d/div);
}

Fracao subtracao(Fracao f1, Fracao f2) {
    int div, n, d;

    if (f1.denominador == f2.denominador) {
        d = f1.denominador;
        n = f1.numerador - f2.numerador;
    }
    else {
        d = mmc(f1.denominador,  f2.denominador);
        n = d / f1.denominador * f1.numerador - d / f2.denominador * f2.numerador;
    }

    div = mdc(n, d);

    return cria_fracao(n/div, d/div);
}

Fracao multiplicacao(Fracao f1, Fracao f2) {
    int n = f1.numerador * f2.numerador;
    int d = f1.denominador * f2.denominador;

    int div = mdc(n, d);

    return cria_fracao(n/div, d/div);
}

Fracao divisao(Fracao f1, Fracao f2) {
    int n = f1.numerador * f2.denominador;
    int d = f1.denominador * f2.numerador;

    int	div = mdc(n, d);

    return cria_fracao(n/div, d/div);
}

int main()
{
    Fracao f1   = cria_fracao(1, 2);
    Fracao f2   = cria_fracao(2, 3);
    Fracao s    = soma(f1, f2);
    Fracao sub  = subtracao(f1, f2);
    Fracao mult = multiplicacao(f1, f2);
    Fracao div  = divisao(f1, f2);

    printf("%d/%d + %d/%d = %d/%d\n", f1.numerador, f1.denominador, f2.numerador, f2.denominador, s.numerador,    s.denominador);
    printf("%d/%d - %d/%d = %d/%d\n", f1.numerador, f1.denominador, f2.numerador, f2.denominador, sub.numerador,  sub.denominador);
    printf("%d/%d * %d/%d = %d/%d\n", f1.numerador, f1.denominador, f2.numerador, f2.denominador, mult.numerador, mult.denominador);
    printf("%d/%d / %d/%d = %d/%d\n", f1.numerador, f1.denominador, f2.numerador, f2.denominador, div.numerador,  div.denominador);
}
