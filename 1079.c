//beecrowd 1079
#include <stdio.h>

int main (){
    //declraração de variáveis
    int n; //nº casos de teste
    float a, b, c; //valores a serem utilizados para o calculo da media
    float m;    //media ponderada dos valores

    //leitura do numero de casos de teste
        scanf("%d", &n);

    //repete o calculo da media para os N testes
    while(n--){
        //leitura dos 3 valores
        scanf("%f %f %f", &a, &b, &c);    

        //calculo da media ponderada
        m = (a*2 + b*3 + c*5)/10;
        
        //imprime o valor da media 
        printf("%.1f\n", m);
    }
    return 0;
}
