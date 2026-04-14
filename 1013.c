//Solução do problema 1013 (Beecrowd)
#include <stdio.h>
#include <stdlib.h>

int main (){
    //declaração de variaveis
    int a, b, c; //variaveis de entrada
    int m1, m2;    

    //leitura de variaveis
    scanf("%d %d %d",&a, &b, &c);

    //calculo
    m1 = (a + b + abs(a-b))/2; //calculo do maior
    m2 = (m1 + c + abs(m1-c))/2; //calculo do maior definitivo

    //impressao
    printf("%d eh o maior\n", m2);

    return 0;
}
