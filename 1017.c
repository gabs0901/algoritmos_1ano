#include <stdio.h>

int main() {
    //declaracao de variaveis
    int tg, vm; //tempo gasto em hrs e velocidade média em km/hA
    float d, l;
    
    //leitura de variaveis
    scanf("%d %d", &tg, &vm);

    //calculos
    d = tg * vm; // distancia percorrida 
    l = d / 12; // litros gastos

    printf("%.3f\n", l);

}