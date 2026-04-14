//Solução do problema 1011 (Beecrowd)
#include <stdio.h>

int main (){
    //declaração de variaveis    
    double r, pi, vol; //valor de entrada - raio da esfera
    
    //leitura de variaveis
    scanf("%lf", &r);

    //calculo
    pi = 3.14159;
    vol = 4.0/3 * pi * (r*r*r);

    //impressao dos resultados
    printf("VOLUME = %.3lf\n", vol);

    return 0;
}
