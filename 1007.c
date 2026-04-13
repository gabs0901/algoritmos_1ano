//Solução do problema 1007 (Beecrowd)
#include <stdio.h>

int main (){
    //declaracao de variaveis
    int a, b, c, d, dif; //a, b, c, d sao variaveis de entrada e S de saida
       
    //leitura de variaveis
    scanf("%d %d %d %d", &a, &b, &c, &d);

    //calculo
    dif = (a*b-c*d);

   //impressao das variaveis
    printf("DIFERENCA = %d\n", dif);

    return 0;
}
