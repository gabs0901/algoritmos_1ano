//Solução do problema 1005 (Beecrowd)
#include <stdio.h>

int main () {
    //declaracao das variaveis
    double a, b, m; //sao as notas do aluno e m eh a media
    
    //leitura das variaveis de entrada
    scanf("%lf %lf", &a, &b);

    //calculo da mediado aluno
    m = (a*3.5 + b*7.5)/11; //media ponderada pelos pesos dividido pela soma dos pesos
    
    //apresentacao das medias
    printf("MEDIA = %.5lf\n", m);
    
    return 0;

}


