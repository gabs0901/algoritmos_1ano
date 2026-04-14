//Solução do problema 1012 (Beecrowd)
#include <stdio.h>

int main (){
    //declaração de variáveis
    double a, b, c; //valores de entrada: A,B,C)
    double tri, cir, tra, qua, ret; //valores de saida em respectiva ordem: TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO
    
    //leitura de variaveis
    scanf("%lf %lf %lf", &a, &b, &c);

    //calculos:
    tri = (a * c)/2;
    cir = 3.14159 * (c * c);
    tra = (a + b)* c / 2;
    qua = b * b;
    ret = a * b;

    //impressao
    printf("TRIANGULO: %.3lf\n""CIRCULO: %.3lf\n""TRAPEZIO: %.3lf\n""QUADRADO: %.3lf\n""RETANGULO: %.3lf\n", tri, cir, tra, qua, ret);

return 0;
}

