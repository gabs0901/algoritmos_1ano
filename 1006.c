//Solução do problema 1006 (Beecrowd)
#include <stdio.h>

int main (){
    //declaracao de variaveis
    double a, b, c, m; //a, b e c sao variaveis de entrada, s de saida

    //leitura de variaveis
    scanf("%lf %lf %lf", &a, &b, &c);
    
    //calculo da media do aluno
    m = (a*2.0 + b*3.0 + c*5.0)/10.0; //media ponderada pelos pesos dividido pela soma dos pesos
    
    //apresentacao das medias
    printf("MEDIA = %.1lf\n", m);

    return 0;

}
